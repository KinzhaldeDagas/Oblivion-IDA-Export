struct ExtraLock
{
BSExtraData super; ///< Verified BSExtraData base (12 bytes).
ExtraLockData *lockData; ///< Verified ExtraLockData* payload, allocated/replaced by ExtraDataList_SetLock and freed by ExtraLock destructor.
};
