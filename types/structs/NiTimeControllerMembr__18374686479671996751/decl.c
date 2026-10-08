struct NiTimeControllerMembr
{
NiRefObjectMembr super;
UInt16 flags; ///< NiTimeController flag word at object +0x08. Native bits: 0 APP_INIT timing; 1-2 cycle mode; 3 Active; 4 playback backwards; 5 interpolator/manager-controlled. This is distinct from NiGeomMorpherController.morphFlags at object +0x3C.
UInt8 pad00A[2];
float m_fFrequency;
float m_fPhase;
float m_fLoKeyTime;
float m_fHiKeyTime;
float m_fStartTime;
float m_fLastTime;
float scaledTimeAccumulator; ///< Runtime accumulator updated by ComputeScaledTime: delta application time * frequency, then phase is added separately. Not serialized.
float cachedScaledTime; ///< Cached controller/scaled time consumed by interpolators. NiTimeController_IsUpdateUnchanged normally refreshes it before controller sampling. Not serialized.
UInt8 computeScaledTimeOnUpdate; ///< When nonzero, IsUpdateUnchanged computes and caches scaled time after an application-time change; constructor default is 1. When zero it forces an update without recomputing this cache.
UInt8 pad02D[3];
NiNode *m_pTarget;
NiObject *next;
UInt8 forceUpdate; ///< Forces IsUpdateUnchanged to report changed once; cleared when observed. Constructor default is 0.
UInt8 unk039[3];
};
