#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/vian/Tugas-akhir/catkin_ws/src/rtabmap_ros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/vian/Tugas-akhir/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/vian/Tugas-akhir/catkin_ws/install/lib/python3/dist-packages:/home/vian/Tugas-akhir/catkin_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/vian/Tugas-akhir/catkin_ws/build" \
    "/usr/bin/python3" \
    "/home/vian/Tugas-akhir/catkin_ws/src/rtabmap_ros/setup.py" \
    egg_info --egg-base /home/vian/Tugas-akhir/catkin_ws/build/rtabmap_ros \
    build --build-base "/home/vian/Tugas-akhir/catkin_ws/build/rtabmap_ros" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/vian/Tugas-akhir/catkin_ws/install" --install-scripts="/home/vian/Tugas-akhir/catkin_ws/install/bin"
