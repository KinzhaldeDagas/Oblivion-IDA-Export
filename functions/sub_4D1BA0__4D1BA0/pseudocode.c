char __thiscall sub_4D1BA0(_DWORD *this, int a2, float *a3, float *a4, float a5, char a6)
{
  char result; // al
  bool v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float *v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // [esp+1Dh] [ebp-7h]
  bool v28; // [esp+1Eh] [ebp-6h]
  bool v29; // [esp+1Fh] [ebp-5h]
  int v31; // [esp+30h] [ebp+Ch]
  char v32; // [esp+38h] [ebp+14h]

  result = 0; /*0x4d1ba4*/
  v27 = 0; /*0x4d1bb1*/
  if ( a2 ) /*0x4d1bb5*/
  {
    if ( a6 ) /*0x4d1bc1*/
    {
      v32 = (a6 & 4) != 0; /*0x4d1bd3*/
      v10 = (a6 & 2) != 0; /*0x4d1bed*/
      v28 = (a6 & 8) != 0; /*0x4d1bf8*/
      v29 = (a6 & 0x10) != 0; /*0x4d1bfc*/
      if ( (a6 & 1) != 0 ) /*0x4d1c00*/
      {
        v11 = *(this + 0x15); /*0x4d1c02*/
        if ( v11 && *(_WORD *)(v11 + 0xB6) ) /*0x4d1c09*/
          v12 = **(_DWORD **)(v11 + 0xB0); /*0x4d1c19*/
        else
          v12 = 0; /*0x4d1c1d*/
        if ( sub_481890(a2, a3, a4, a5, v12, 0) ) /*0x4d1c31*/
          v27 = 1; /*0x4d1c3d*/
      }
      if ( v10 ) /*0x4d1c44*/
      {
        v13 = *(this + 0x15); /*0x4d1c46*/
        if ( v13 && *(_WORD *)(v13 + 0xB6) > 1u ) /*0x4d1c55*/
          v14 = *(_DWORD *)(*(_DWORD *)(v13 + 0xB0) + 4); /*0x4d1c5d*/
        else
          v14 = 0; /*0x4d1c62*/
        if ( sub_481890(a2, a3, a4, a5, v14, 0) ) /*0x4d1c76*/
          v27 = 1; /*0x4d1c82*/
      }
      if ( v32 || v28 || v29 ) /*0x4d1c9a*/
      {
        v15 = 2; /*0x4d1ca0*/
        v16 = 8; /*0x4d1ca5*/
        v31 = 5; /*0x4d1caa*/
        do /*0x4d1df2*/
        {
          if ( v32 ) /*0x4d1cb7*/
          {
            v17 = *(this + 0x15); /*0x4d1cbd*/
            if ( v17 /*0x4d1cdc*/
              && *(unsigned __int16 *)(v17 + 0xB6) > v15
              && (v18 = *(_DWORD *)(v16 + *(_DWORD *)(v17 + 0xB0))) != 0
              && *(_WORD *)(v18 + 0xB6) )
            {
              v19 = **(_DWORD **)(v18 + 0xB0); /*0x4d1cec*/
            }
            else
            {
              v19 = 0; /*0x4d1cf0*/
            }
            v20 = a3; /*0x4d1cf6*/
            if ( sub_481890(a2, a3, a4, a5, v19, 0) ) /*0x4d1d08*/
              v27 = 1; /*0x4d1d14*/
          }
          else
          {
            v20 = a3; /*0x4d1d1b*/
          }
          if ( v28 ) /*0x4d1d24*/
          {
            v21 = *(this + 0x15); /*0x4d1d2a*/
            if ( v21 /*0x4d1d51*/
              && *(unsigned __int16 *)(v21 + 0xB6) > v15
              && (v22 = *(_DWORD *)(v16 + *(_DWORD *)(v21 + 0xB0))) != 0
              && *(_WORD *)(v22 + 0xB6) > 2u )
            {
              v23 = *(_DWORD *)(*(_DWORD *)(v22 + 0xB0) + 8); /*0x4d1d59*/
            }
            else
            {
              v23 = 0; /*0x4d1d5e*/
            }
            if ( sub_481890(a2, v20, a4, a5, v23, 0) ) /*0x4d1d72*/
              v27 = 1; /*0x4d1d7e*/
          }
          if ( v29 ) /*0x4d1d88*/
          {
            v24 = *(this + 0x15); /*0x4d1d8e*/
            if ( v24 /*0x4d1db5*/
              && *(unsigned __int16 *)(v24 + 0xB6) > v15
              && (v25 = *(_DWORD *)(v16 + *(_DWORD *)(v24 + 0xB0))) != 0
              && *(_WORD *)(v25 + 0xB6) > 3u )
            {
              v26 = *(_DWORD *)(*(_DWORD *)(v25 + 0xB0) + 0xC); /*0x4d1dbd*/
            }
            else
            {
              v26 = 0; /*0x4d1dc2*/
            }
            if ( sub_481890(a2, v20, a4, a5, v26, 0) ) /*0x4d1dd6*/
              v27 = 1; /*0x4d1de2*/
          }
          v16 += 4; /*0x4d1de7*/
          ++v15; /*0x4d1dea*/
          --v31; /*0x4d1ded*/
        }
        while ( v31 ); /*0x4d1df2*/
      }
      return v27; /*0x4d1df8*/
    }
  }
  return result; /*0x4d1dff*/
}
