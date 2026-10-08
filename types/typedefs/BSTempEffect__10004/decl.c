struct BSTempEffect
{
BSTempEffectVtbl *vtable;
volatile LONG refCount;
float durationSeconds;
TESObjectCELL *parentCell;
float elapsedSeconds;
bool initializeCallbackDone;
UInt8 padding15[3];
};
