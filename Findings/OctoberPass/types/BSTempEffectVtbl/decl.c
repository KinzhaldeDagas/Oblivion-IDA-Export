struct BSTempEffectVtbl
{
NiObjectVtbl super;
BSTempEffect_Initialize_t Initialize;
BSTempEffect_Update_t Update;
BSTempEffect_GetTypeID_t GetTypeID;
BSTempEffect_IsSaveable_t IsSaveable;
BSTempEffect_GetSaveSize_t GetSaveSize;
BSTempEffect_SaveGame_t SaveGame;
BSTempEffect_LoadGame_t LoadGame;
};
