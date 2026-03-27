int __thiscall TESFile_GetMasterNameByIndex(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // eax
  int v4; // ecx

  v2 = this + 0xF8;
  if ( !*(this + 0xF8) )
    return 0;
  v4 = 1;
  if ( a2 > 1 )
  {
    while ( 1 )
    {
      v2 = (_DWORD *)v2[1];
      if ( !v2 )
        break;
      if ( ++v4 >= a2 )
        return *v2;
    }
    return 0;
  }
  return *v2;
}
