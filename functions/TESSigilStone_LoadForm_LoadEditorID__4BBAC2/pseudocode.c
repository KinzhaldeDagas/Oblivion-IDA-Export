void __usercall TESSigilStone_LoadForm_::LoadEditorID(Data *a1@<ebx>, int a2@<esi>)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_(a1->currentChunk.length); /*0x4bbac8*/
  TESFile_GetChunkData(a1, (char *)&retaddr, 0x200u); /*0x4bbad7*/
  (*(void (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a2 + 0xD8))(a2, &retaddr); /*0x4bbae7*/
  JUMPOUT(0x4BBBA0); /*0x4bbba0*/
}
