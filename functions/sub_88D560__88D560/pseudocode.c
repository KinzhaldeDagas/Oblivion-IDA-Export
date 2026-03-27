char __thiscall sub_88D560(int this, char a2)
{
  char result; // al
  _BYTE *v3; // esi
  int v4; // eax

  result = a2;
  if ( a2 != *(_BYTE *)(this + 0x68) )
  {
    v3 = *(_BYTE **)(this + 8);
    *(_BYTE *)(this + 0x68) = a2;
    if ( v3 )
    {
      if ( !v3[0xFD] )
      {
        v4 = *(_DWORD *)v3;
        if ( a2 )
        {
          return (*(int (__thiscall **)(_BYTE *))(v4 + 0x3C))(v3);
        }
        else
        {
          (*(void (__thiscall **)(_BYTE *))(v4 + 0x30))(v3);
          return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 0x38))(v3);
        }
      }
    }
  }
  return result;
}
