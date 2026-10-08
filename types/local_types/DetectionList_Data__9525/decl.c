struct DetectionList::Data
{
Actor *actor;
UInt8 detectionState;
UInt8 pad04[3];
UInt8 hasLOS;
UInt8 pad08[3];
SInt32 detectionLevel;
};
