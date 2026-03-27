char __thiscall sub_76FD60(_DWORD *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // eax

  if ( a2 >= *(this + 8) )
    return 0;
  v4 = *(this + 9) + 0x10 * a2;
  v5 = 0;
  v6 = v4;
  if ( *(this + 7) )
  {
    v7 = 0;
    do
    {
      v8 = v7 + *(_DWORD *)(v6 + 8);
      ++v5;
      *(_DWORD *)(v8 + 8) = 0xFFFFFFFF;
      *(_DWORD *)(v8 + 0xC) = 0x11;
      v7 += 0x1C;
    }
    while ( v5 < *(this + 7) );
  }
  v9 = *(this + 0xC);
  *((_BYTE *)this + 0x28) = 1;
  if ( v9 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9);
    *(this + 0xC) = 0;
  }
  return 1;
}
