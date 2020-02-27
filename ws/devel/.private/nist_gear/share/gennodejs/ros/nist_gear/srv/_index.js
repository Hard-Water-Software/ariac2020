
"use strict";

let PopulationControl = require('./PopulationControl.js')
let SubmitShipment = require('./SubmitShipment.js')
let SubmitTray = require('./SubmitTray.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let AGVControl = require('./AGVControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')
let DetectShipment = require('./DetectShipment.js')
let ConveyorBeltControl = require('./ConveyorBeltControl.js')
let DroneControl = require('./DroneControl.js')

module.exports = {
  PopulationControl: PopulationControl,
  SubmitShipment: SubmitShipment,
  SubmitTray: SubmitTray,
  VacuumGripperControl: VacuumGripperControl,
  AGVControl: AGVControl,
  GetMaterialLocations: GetMaterialLocations,
  DetectShipment: DetectShipment,
  ConveyorBeltControl: ConveyorBeltControl,
  DroneControl: DroneControl,
};
