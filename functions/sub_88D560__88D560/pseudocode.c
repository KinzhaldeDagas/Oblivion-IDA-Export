char __thiscall sub_88D560(int this, char a2)
{
  char result; // al
  _BYTE *v3; // esi
  int v4; // eax

  result = a2; /*0x88d560*/
  if ( a2 != *(_BYTE *)(this + 0x68) ) /*0x88d567*/
  {
    v3 = *(_BYTE **)(this + 8); /*0x88d56a*/
    *(_BYTE *)(this + 0x68) = a2; /*0x88d56f*/
    if ( v3 ) /*0x88d572*/
    {
      if ( !v3[0xFD] ) /*0x88d574*/
      {
        v4 = *(_DWORD *)v3; /*0x88d57f*/
        if ( a2 ) /*0x88d583*/
        {
          return (*(int (__thiscall **)(_BYTE *))(v4 + 0x3C))(v3); /*0x88d588*/
        }
        else
        {
          (*(void (__thiscall **)(_BYTE *))(v4 + 0x30))(v3); /*0x88d591*/
          return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 0x38))(v3); /*0x88d59a*/
        }
      }
    }
  }
  return result; /*0x88d58b*/
}
