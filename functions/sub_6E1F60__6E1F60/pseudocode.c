char __thiscall sub_6E1F60(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 0xA);
  if ( v5 )
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 6) + 0xB3D2C8))(v5);
  if ( a2 && (LOBYTE(v5) = a3, a3) )
  {
    *((_WORD *)this + 6) = a3;
    *(this + 0xA) = a2;
    *(this + 6) = a4;
    LOBYTE(v5) = byte_B3D3E8[a4];
    *((_BYTE *)this + 0x1E) = v5;
  }
  else
  {
    *((_WORD *)this + 6) = 0;
    *(this + 0xA) = 0;
    *((_BYTE *)this + 0x1E) = 0;
    *(this + 6) = 0;
  }
  return v5;
}
