void __usercall EffectSetting_LoadForm_::LoadEditorID(Data *a1@<edi>, int a2@<ebx>)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  _alloca_(a1->currentChunk.length); /*0x416260*/
  TESFile_GetChunkData(a1, (char *)&retaddr, 0x200u); /*0x41626f*/
  (*(void (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a2 + 0xD8))(a2, &retaddr); /*0x41627f*/
  JUMPOUT(0x41633A); /*0x41633a*/
}
