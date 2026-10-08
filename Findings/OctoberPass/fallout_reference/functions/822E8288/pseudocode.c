void __fastcall BGSDecalManager::UpdateDecals(BGSDecalManager *this)
{
  int v2; // r5
  int v3; // r4

  BGSDecalManager::iDecalsThisFrame = 0; /*0x822e82ac*/
  BGSDecalManager::iSkinnedDecalsThisFrame = 0; /*0x822e82b0*/
  BGSDecalManager::UpdateSimpleDecals(this); /*0x822e82b4*/
  BGSDecalManager::UpdateDecalEmitters(this, v3, v2); /*0x822e82bc*/
}
