char __thiscall sub_634CB0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  *(this + 0x7B) = 0;
  v3 = (_DWORD *)a2[0xF];
  if ( v3 )
  {
    v3 = (_DWORD *)sub_4D96F0(a2, v3, "Bip01");
    if ( v3 )
    {
      v4 = (_DWORD *)v3[3];
      if ( v4 )
      {
        while ( 1 )
        {
          LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *))(*v4 + 4))(v4) == (_DWORD)dword_B3F52C;
          if ( (_BYTE)v3 )
            break;
          v4 = (_DWORD *)v4[0xD];
          if ( !v4 )
            return (char)v3;
        }
        *(this + 0x7B) = v4;
      }
    }
  }
  return (char)v3;
}
