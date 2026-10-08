void __thiscall EffectItem_SetSCITName(_DWORD *this, char *Str2, int a3)
{
  int v4; // eax
  const char *v5; // eax
  int v6; // eax

  v4 = *(this + 6); /*0x413984*/
  if ( v4 ) /*0x413995*/
  {
    if ( Str2 && (v5 = *(const char **)(v4 + 8)) != 0 ) /*0x4139a0*/
    {
      v6 = CRT_StricmpLocaleDispatch(v5, Str2); /*0x4139a4*/
      EffectItem_SetSCITName_::CopyName(v6, (int)this, Str2, (int)Str2, a3); /*0x4139ac*/
    }
    else
    {
      EffectItem_SetSCITName_::BadArg((int)this, Str2, (int)Str2, a3); /*0x413999*/
    }
  }
  else
  {
    EffectItem_SetSCITName_::Done((int)Str2, a3); /*0x413995*/
  }
}
