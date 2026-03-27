int __usercall MagicItemForm_LoadForm_::LoadEditorName@<eax>(Data *a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_();
  *(_DWORD *)(a2 - 0xC) = &retaddr;
  TESFile_GetChunkData(a1, (char *)&retaddr, 0x200u);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0xD8))(a3, *(_DWORD *)(a2 - 0xC));
  return MagicItemForm_LoadForm_::LoadBaseData_();
}
