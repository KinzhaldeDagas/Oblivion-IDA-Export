int __userpurge EffectSetting_LoadForm_::LoadEditorID@<eax>(int *a1@<edi>, int a2@<ebx>, int a3)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_();
  TESFile_GetChunkData((Data *)a1, (char *)&retaddr, 0x200u);
  (*(void (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a2 + 0xD8))(a2, &retaddr);
  return EffectSetting_LoadForm_::ChunkLoopContinue(a1, a3);
}
