
"use strict";

let GetPlan = require('./GetPlan.js')
let PublishMap = require('./PublishMap.js')
let ListLabels = require('./ListLabels.js')
let AddLink = require('./AddLink.js')
let CleanupLocalGrids = require('./CleanupLocalGrids.js')
let SetGoal = require('./SetGoal.js')
let DetectMoreLoopClosures = require('./DetectMoreLoopClosures.js')
let GlobalBundleAdjustment = require('./GlobalBundleAdjustment.js')
let GetNodesInRadius = require('./GetNodesInRadius.js')
let GetMap2 = require('./GetMap2.js')
let GetMap = require('./GetMap.js')
let LoadDatabase = require('./LoadDatabase.js')
let GetNodeData = require('./GetNodeData.js')
let ResetPose = require('./ResetPose.js')
let SetLabel = require('./SetLabel.js')
let RemoveLabel = require('./RemoveLabel.js')

module.exports = {
  GetPlan: GetPlan,
  PublishMap: PublishMap,
  ListLabels: ListLabels,
  AddLink: AddLink,
  CleanupLocalGrids: CleanupLocalGrids,
  SetGoal: SetGoal,
  DetectMoreLoopClosures: DetectMoreLoopClosures,
  GlobalBundleAdjustment: GlobalBundleAdjustment,
  GetNodesInRadius: GetNodesInRadius,
  GetMap2: GetMap2,
  GetMap: GetMap,
  LoadDatabase: LoadDatabase,
  GetNodeData: GetNodeData,
  ResetPose: ResetPose,
  SetLabel: SetLabel,
  RemoveLabel: RemoveLabel,
};
