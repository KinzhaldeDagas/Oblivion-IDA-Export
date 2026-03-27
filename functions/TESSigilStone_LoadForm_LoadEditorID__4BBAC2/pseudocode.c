int __userpurge TESSigilStone_LoadForm_::LoadEditorID@<eax>(int *a1@<ebx>, int a2@<esi>, int a3)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_();
  TESFile_GetChunkData((Data *)a1, (char *)&retaddr, 0x200u);
  (*(void (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a2 + 0xD8))(a2, &retaddr);
  return TESSigilStone_LoadForm_::ChunkLoop_Next(a1, a3);
}
