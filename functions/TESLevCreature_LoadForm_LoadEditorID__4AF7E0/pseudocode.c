char __userpurge TESLevCreature_LoadForm_::LoadEditorID@<al>(Data *a1@<edi>, TESForm *a2@<esi>, int a3@<ebp>, int a4)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_(a1->currentChunk.length); /*0x4af7e6*/
  TESFile_GetChunkData(a1, (char *)&retaddr, 0x200u); /*0x4af7f5*/
  a2->vtbl->SetEditorID(a2, (const char *)&retaddr); /*0x4af805*/
  return TESLevCreature_LoadForm_::NextChunk(a1, a2, a3, a4);
}
