
"use strict";

let Product = require('./Product.js');
let VacuumGripperState = require('./VacuumGripperState.js');
let ConveyorBeltState = require('./ConveyorBeltState.js');
let PopulationState = require('./PopulationState.js');
let Order = require('./Order.js');
let DetectedShipment = require('./DetectedShipment.js');
let Proximity = require('./Proximity.js');
let LogicalCameraImage = require('./LogicalCameraImage.js');
let TrayContents = require('./TrayContents.js');
let Shipment = require('./Shipment.js');
let DetectedProduct = require('./DetectedProduct.js');
let ShippingBox = require('./ShippingBox.js');
let Model = require('./Model.js');
let StorageUnit = require('./StorageUnit.js');

module.exports = {
  Product: Product,
  VacuumGripperState: VacuumGripperState,
  ConveyorBeltState: ConveyorBeltState,
  PopulationState: PopulationState,
  Order: Order,
  DetectedShipment: DetectedShipment,
  Proximity: Proximity,
  LogicalCameraImage: LogicalCameraImage,
  TrayContents: TrayContents,
  Shipment: Shipment,
  DetectedProduct: DetectedProduct,
  ShippingBox: ShippingBox,
  Model: Model,
  StorageUnit: StorageUnit,
};
