char __thiscall sub_5E3FC0(_BYTE *this)
{
  BSExtraDataVtbl *Light; // eax
  int v3; // ecx
  float *v4; // edi
  void (__thiscall *Destructor)(BSExtraData *); // ecx

  Light = ExtraDataList_GetLight((ExtraDataList *)(this + 0x44)); /*0x5e3fc7*/
  v3 = *((_DWORD *)this + 0x16); /*0x5e3fcc*/
  v4 = (float *)Light; /*0x5e3fcf*/
  if ( Light ) /*0x5e3fd3*/
  {
    if ( Light->Destructor ) /*0x5e3fd5*/
    {
      if ( v3 ) /*0x5e3fdc*/
      {
        Light = (BSExtraDataVtbl *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xF0))(v3, 1); /*0x5e3fe8*/
        if ( Light ) /*0x5e3fec*/
        {
          Destructor = Light[1].Destructor; /*0x5e3fee*/
          if ( Destructor ) /*0x5e3ff3*/
          {
            if ( *((_BYTE *)Destructor + 4) == 0x1A ) /*0x5e3ff9*/
              LOBYTE(Light) = TESObjectLIGH_UpdateAttachedLightPayload((float *)Destructor, v4, 0);// Attached-light payload update with optionalContext=null; this path updates source-light state, not caster admission. /*0x5e3ffe*/
          }
        }
      }
    }
  }
  return (char)Light; /*0x5e4003*/
}
