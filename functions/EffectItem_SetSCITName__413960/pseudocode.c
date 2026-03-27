void __thiscall EffectItem_SetSCITName(_DWORD *this, char *Str2, int a3)
{
  int v4; // eax
  char *v5; // eax
  int v6; // eax

  v4 = *(this + 6);
  if ( v4 )
  {
    if ( Str2 && (v5 = *(char **)(v4 + 8)) != 0 )
    {
      v6 = _strcmp(v5, Str2);
      EffectItem_SetSCITName_::CopyName(v6, (int)this, Str2, (int)Str2, a3);
    }
    else
    {
      EffectItem_SetSCITName_::BadArg((int)this, Str2, (int)Str2, a3);
    }
  }
  else
  {
    EffectItem_SetSCITName_::Done((int)Str2, a3);
  }
}
