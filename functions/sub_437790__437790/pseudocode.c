int __thiscall sub_437790(char **this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int result; // eax

  if ( (int)*(this + 3) >= 4 ) /*0x437797*/
  {
    if ( !*(this + 7) /*0x4377b2*/
      || (v2 = (int)*(this + 7),
          v3 = *(unsigned __int16 *)(v2 + 0xC),
          v4 = *(_DWORD *)(v2 + 0x10),
          (result = v3 == v4) != 0) )
    {
      MagicItem_ResolveLoadedVFXModels(*(this + 8)); /*0x4377b7*/
      result = (int)*(this + 2); /*0x4377bc*/
      if ( !result ) /*0x4377c1*/
        return (*(int (__thiscall **)(char **, int))*this)(this, 1); /*0x4377cb*/
    }
  }
  return result; /*0x4377cd*/
}
