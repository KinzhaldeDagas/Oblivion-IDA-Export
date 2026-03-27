char __thiscall sub_6D4A10(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 3);
  if ( v5 )
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2C8))(v5);
  if ( a2 && (LOBYTE(v5) = a3, a3) )
  {
    *(this + 2) = a3;
    *(this + 3) = a2;
    *(this + 4) = a4;
    LOBYTE(v5) = byte_B3D3E8[a4];
    *((_BYTE *)this + 0x48) = v5;
  }
  else
  {
    *(this + 2) = 0;
    *(this + 3) = 0;
    *(this + 4) = 0;
    *((_BYTE *)this + 0x48) = 0;
  }
  return v5;
}
