struct TESObjectDOORMembr
{
TESBoundObjectMembr super;
TESFullName fullName;
TESModel model;
TESScriptableForm scriptable;
UInt32 basePad;
TESSound *animSounds[3];
TESObjectDOORFlags doorFlags; ///< Verified byte doorFlags; bit 0x08 is the MinUse flag tested by TESObjectDOOR_HasMinUseFlag.
UInt8 pad[3];
TESObjectDOOR_RandomTeleportSpaceNode randomTeleport; ///< Verified TNAM record path: TESObjectDOOR_LoadForm appends raw 32-bit FormIDs; TESObjectDOOR_DoPostFixup rebases/resolves them to TESForm* and removes missing targets; TESObjectDOOR_SaveForm writes each referenced TESForm.refID; TESObjectDOOR_CopyFormData clones the list nodes; the destructor frees them. Probable semantic role: random-teleport destination spaces.
};
