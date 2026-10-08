int __thiscall TESFile_GetMasterNameByIndex(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // eax
  int v4; // ecx

  v2 = this + 0xF8; /*0x44fd97*/
  if ( !*(this + 0xF8) ) /*0x44fd90*/
    return 0; /*0x44fda1*/
  v4 = 1; /*0x44fda8*/
  if ( a2 > 1 ) /*0x44fdaf*/
  {
    while ( 1 ) /*0x44fdb1*/
    {
      v2 = (_DWORD *)v2[1]; /*0x44fdb1*/
      if ( !v2 ) /*0x44fdb6*/
        break; /*0x44fdb6*/
      if ( ++v4 >= a2 ) /*0x44fdbd*/
        return *v2; /*0x44fdbd*/
    }
    return 0; /*0x44fdb6*/
  }
  return *v2; /*0x44fda1*/
}
