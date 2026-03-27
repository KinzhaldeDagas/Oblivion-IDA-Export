char __thiscall sub_6E1F00(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 9);
  if ( v5 )
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 5) + 0xB3D2E0))(v5);
  if ( a2 && (LOBYTE(v5) = a3, a3) )
  {
    *((_WORD *)this + 5) = a3;
    *(this + 9) = a2;
    *(this + 5) = a4;
    LOBYTE(v5) = byte_B3D3EE[a4];
    *((_BYTE *)this + 0x1D) = v5;
  }
  else
  {
    *((_WORD *)this + 5) = 0;
    *(this + 9) = 0;
    *(this + 5) = 0;
    *((_BYTE *)this + 0x1D) = 0;
  }
  return v5;
}
