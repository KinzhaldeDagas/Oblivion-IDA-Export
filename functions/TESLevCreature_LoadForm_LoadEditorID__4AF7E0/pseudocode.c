int __userpurge TESLevCreature_LoadForm_::LoadEditorID@<eax>(Data *a1@<edi>, int a2@<esi>, int a3)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_();
  TESFile_GetChunkData(a1, (char *)&retaddr, 0x200u);
  (*(void (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a2 + 0xD8))(a2, &retaddr);
  return TESLevCreature_LoadForm_::NextChunk(a3);
}
