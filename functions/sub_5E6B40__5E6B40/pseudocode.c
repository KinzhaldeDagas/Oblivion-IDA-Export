// 3DTheft 2026-05-17: returns true when the actor's current package type is 0x12 (Dialogue). AddScriptPackage uses this as a pre-handoff gate.
bool __thiscall Actor_IsInDialogueProcedure(_DWORD **this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x5e6b5d*/
  if ( *(this + 0x16) ) /*0x5e6b40*/
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x184))(*(this + 0x16)); /*0x5e6b51*/
    if ( v1 ) /*0x5e6b55*/
    {
      if ( *(_BYTE *)(v1 + 0x20) == 0x12 ) /*0x5e6b5b*/
        return 1; /*0x5e6b44*/
    }
  }
  return result; /*0x5e6b5f*/
}
