void __usercall MagicItemObject_LoadForm_::LoadEditorName(
        Data *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_(a1->currentChunk.length); /*0x41b677*/
  *(_DWORD *)(a2 - 0xC) = &retaddr; /*0x41b686*/
  TESFile_GetChunkData(a1, (char *)&retaddr, 0x200u); /*0x41b689*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0xD8))(a3, *(_DWORD *)(a2 - 0xC)); /*0x41b69c*/
  MagicItemObject_LoadForm_::LoadBaseData_((int *)a1, a2, a3, a4, a5); /*0x41b69d*/
}
