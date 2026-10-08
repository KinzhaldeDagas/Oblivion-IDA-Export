struct NiGeomMorpherController
{
NiTimeController super;
unsigned __int16 morphFlags; ///< Separate serialized NiGeomMorpherController flag word. Native runtime use proven here: bit 0 optionally invokes the target geometry update after committing morph weights. This is not NiTimeController.flags (+0x08); other bits remain semantically unproven.
unsigned __int16 pad3E;
NiTArray_float morphWeights;
NiMorphData *morphData;
NiInterpolator **interpolators;
unsigned __int8 weightsDirty; ///< Dirty latch: when set, Update samples interpolators and later commits current morph weights, then CommitDirtyMorphWeights clears it.
unsigned __int8 leaveTargetBaseIntact; ///< For morph target 0, selects base weight 0 instead of 1 when no interpolator sample is used.
unsigned __int8 forceSampleUnchangedTime; ///< Forces Update to mark weights dirty even when cached controller time is otherwise unchanged.
unsigned __int8 targetSetPending; ///< SetTarget pending latch used while rebuilding target-dependent morph storage.
};
