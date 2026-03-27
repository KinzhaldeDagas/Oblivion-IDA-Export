char __thiscall sub_8AA8A0(NiTriBasedGeomData *this, int a2)
{
  char result; // al
  unsigned int v4; // edi
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  double v8; // st7
  double v9; // st6
  int v10; // edx
  int v11; // ecx

  result = sub_715820(this, a2);
  if ( result )
  {
    result = *((_DWORD *)this + 0x14) == *(_DWORD *)(a2 + 0x50);
    v4 = 0;
    if ( *((_DWORD *)this + 0x14) == *(_DWORD *)(a2 + 0x50) )
    {
      v5 = 0;
      do
      {
        if ( v4 >= *((_DWORD *)this + 0x14) )
          break;
        v6 = *((_DWORD *)this + 0x11);
        v7 = *(_DWORD *)(a2 + 0x44);
        v8 = *(float *)(v6 + v5);
        v9 = *(float *)(v7 + v5);
        v10 = v5 + v6;
        v11 = v5 + v7;
        result = v9 == v8 && *(float *)(v11 + 4) == *(float *)(v10 + 4) && *(float *)(v11 + 8) == *(float *)(v10 + 8);
        ++v4;
        v5 += 0xC;
      }
      while ( result );
    }
  }
  return result;
}
