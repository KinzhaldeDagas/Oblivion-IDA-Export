void __thiscall sub_7403B0(_WORD *this)
{
  int v2; // ebp
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7403b8*/
  v3 = 0; /*0x7403ba*/
  if ( *(this + 0x24) ) /*0x7403bc*/
  {
    v10 = 0; /*0x7403c6*/
    do /*0x74044b*/
    {
      v4 = *((_DWORD *)this + 0x17); /*0x7403d0*/
      if ( *(unsigned __int16 *)(v4 + 0xB6) > v3 ) /*0x7403dc*/
      {
        v5 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v3); /*0x7403e4*/
        if ( v5 ) /*0x7403e9*/
        {
          v6 = *((_DWORD *)this + 7); /*0x7403eb*/
          v7 = *(_DWORD *)(v6 + v2); /*0x7403ee*/
          v8 = v2 + v6; /*0x7403f1*/
          *(_DWORD *)(v5 + 0x54) = v7; /*0x7403f3*/
          *(_DWORD *)(v5 + 0x58) = *(_DWORD *)(v8 + 4); /*0x7403f9*/
          *(_DWORD *)(v5 + 0x5C) = *(_DWORD *)(v8 + 8); /*0x7403ff*/
          v9 = *((_DWORD *)this + 0x14); /*0x740402*/
          if ( v9 ) /*0x740407*/
            sub_47C600((NiTransform *)(v10 + v9), (NiTransform *)(v5 + 0x30)); /*0x740414*/
          v11 = *(float *)(*((_DWORD *)this + 0x13) + 4 * v3) * *(float *)(*((_DWORD *)this + 0x11) + 4 * v3); /*0x740425*/
          v12 = fabs(v11); /*0x74042f*/
          *(float *)(v5 + 0x60) = v12; /*0x740437*/
        }
      }
      v10 += 0x10; /*0x74043e*/
      ++v3; /*0x740443*/
      v2 += 0xC; /*0x740446*/
    }
    while ( v3 < (unsigned __int16)*(this + 0x24) ); /*0x74044b*/
  }
}
