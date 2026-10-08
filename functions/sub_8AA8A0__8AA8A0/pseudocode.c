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

  result = NiTimeController_IsEqual(this, a2); /*0x8aa8a9*/
  if ( result ) /*0x8aa8b0*/
  {
    result = *((_DWORD *)this + 0x14) == *(_DWORD *)(a2 + 0x50); /*0x8aa8b9*/
    v4 = 0; /*0x8aa8bc*/
    if ( *((_DWORD *)this + 0x14) == *(_DWORD *)(a2 + 0x50) ) /*0x8aa8c0*/
    {
      v5 = 0; /*0x8aa8c3*/
      do /*0x8aa90f*/
      {
        if ( v4 >= *((_DWORD *)this + 0x14) ) /*0x8aa8c8*/
          break; /*0x8aa8c8*/
        v6 = *((_DWORD *)this + 0x11); /*0x8aa8ca*/
        v7 = *(_DWORD *)(a2 + 0x44); /*0x8aa8cd*/
        v8 = *(float *)(v6 + v5); /*0x8aa8d0*/
        v9 = *(float *)(v7 + v5); /*0x8aa8d3*/
        v10 = v5 + v6; /*0x8aa8d6*/
        v11 = v5 + v7; /*0x8aa8d8*/
        result = v9 == v8 && *(float *)(v11 + 4) == *(float *)(v10 + 4) && *(float *)(v11 + 8) == *(float *)(v10 + 8); /*0x8aa901*/
        ++v4; /*0x8aa907*/
        v5 += 0xC; /*0x8aa90a*/
      }
      while ( result ); /*0x8aa90f*/
    }
  }
  return result; /*0x8aa914*/
}
