char __thiscall sub_6D4AD0(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 9);
  if ( v5 )
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 0xA) + 0xB3D2C8))(v5);
  if ( a2 && (LOBYTE(v5) = a3, a3) )
  {
    *(this + 8) = a3;
    *(this + 9) = a2;
    *(this + 0xA) = a4;
    LOBYTE(v5) = byte_B3D3E8[a4];
    *((_BYTE *)this + 0x4A) = v5;
  }
  else
  {
    *(this + 8) = 0;
    *(this + 9) = 0;
    *(this + 0xA) = 0;
    *((_BYTE *)this + 0x4A) = 0;
  }
  return v5;
}
