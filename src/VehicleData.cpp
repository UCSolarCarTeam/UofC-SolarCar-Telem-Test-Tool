/*-------------------------------------------------------
   By Jordan Heinrichs for the Solar Car Team
   Copyright (c) 2015 by University of Calgary Solar Car Team
-------------------------------------------------------*/

#include <VehicleData.h>

VehicleData::VehicleData()
: reportedMotorCurrent(1.0f)
, driverSetCurrent(2.0f) // ---------
, driverSetCurrentPercentage(3.0f)
, driverSetSpeedRpm(3.0f) // --------
, deadmanPressed(false)
, carDirection(VehicleData::Forward)
, busCurrent(5.0f) // ------
, busVoltage(6.0f) // ------
, vehicleVelocity(7.0f) // -------
, motorVelocityRpm(8.0f)
, phaseCCurrent(9.0f)
, phaseBCurrent(10.0f)
, motorVoltageReal(11.0f)
, motorVoltageImaginary(12.0f)
, motorCurrentReal(13.0f)
, motorCurrentImaginary(14.0f)
, backEmfImaginary(15.0f)
, ipmHeatSinkTemp(16.0f)
, motorTemp(17.0f)
, dspBoardTemp(18.0f)
, dcBusAmpHours(19.0f)
, odometer(20.0f)
, motorOneReceivedErrorCount(21)
, motorOneTransmittedErrorCount(22)
, motorOneActiveMotor(23)
, motorOneErrorFlags(23)
, motorOneLimitFlags(24)
, motorTwoReceivedErrorCount(25)
, motorTwoTransmittedErrorCount(26)
, motorTwoActiveMotor(27)
, motorTwoErrorFlags(28)
, motorTwoLimitFlags(29)
, packStateOfCharge(30.0f)
, packStateOfChargePercentage(31.0f)
, balancePackStateOfCharge(32)
, balancePackStateOfChargePercentage(33)
, prechargeDriverStatusFlags(34)
, prechargeState(Idle)
, contactorSupplyVoltage(35)
, prechargeTimerElapsedFlag(36)
, prechargeTimerCounter(37)
, batteryVoltage(38)
, batteryCurrent(39)
, batteryVoltageThresholdRising(40)
, batteryVoltageThresholdFalling(41)
, bmuStatusFlagsExtended(41)
, fanSpeed0(42)
, fanSpeed1(43)
, fanCurrentConsumption(44)
, cmuCurrentConsumption(45)
, secondaryBatteryUnderVoltage(false)
{
}
