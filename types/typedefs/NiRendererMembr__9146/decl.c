struct __declspec(align(4)) NiRendererMembr
{
NiRefObjectMembr super;
NiAccumulator *accumulator;
NiPropertyState *propertyState;
NiDynamicEffectState *dynamicEffectState;
UInt32 pad014[27];
CriticalSectionRender RendererLockCriticalSection;
CriticalSectionRender PrecacheCriticalSection;
CriticalSectionRender SourceDataCriticalSection;
UInt32 SceneState1;
UInt32 SceneState2;
UInt32 unk208;
UInt8 IsReady;
UInt8 unk20D;
UInt8 pad20E[2];
};
