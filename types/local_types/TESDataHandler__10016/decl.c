struct TESDataHandler
{
void *objectList;
OblivionTESFormListNode packageList;
OblivionTESFormListNode worldspaceList;
OblivionTESFormListNode climateList;
OblivionTESFormListNode weatherList;
OblivionTESFormListNode enchantmentList;
OblivionTESFormListNode spellList;
OblivionTESFormListNode hairList;
OblivionTESFormListNode eyeList;
OblivionTESFormListNode raceList;
OblivionTESFormListNode landTextureList;
OblivionTESFormListNode classList;
OblivionTESFormListNode factionList;
OblivionTESFormListNode scriptList;
OblivionTESFormListNode soundList;
OblivionTESGlobalListNode listGlobals;
unsigned __int8 unknown7C[8];
OblivionTESFormListNode questList;
OblivionTESFormListNode birthsignList;
OblivionTESFormListNode combatStyleList;
OblivionTESFormListNode loadScreenList;
OblivionTESFormListNode waterList;
OblivionTESFormListNode effectShaderList;
OblivionTESFormListNode animationObjectList;
TESRegionList *regionListOwner; ///< Verified: 16-byte TESRegionList allocated in TESDataHandler_constr at +0xBC; Region forms are added here by TESDataHandler_AddForm case kFormType_Region.
TESDataHandler_ActiveFileState activeFileState; ///< Partial decode of prior unknown block: embedded TESDataHandler_ActiveFileState exposes retainActiveFile at absolute +0xCD1; remaining bytes unknown.
TESRegionDataManager *regionDataManager; ///< Verified: 8-byte TESRegionDataManager allocated and constructed at +0xCD8; accessed by CELLS/WRLD region-data queries.
ContainerExtraData *containerExtraData; ///< Verified: ContainerExtraData pointer cleared and destroyed during DataHandler_Clear/destructor path; detailed member layout Unknown.
};
