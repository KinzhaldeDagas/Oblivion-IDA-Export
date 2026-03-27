void __thiscall sub_7ECEC0(_DWORD *this, float *a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // ebx
  float *v6; // eax
  float *v7; // ebx
  double v8; // st7
  void (__thiscall ***v9)(_DWORD, int); // ebp
  _DWORD *v10; // ebp
  void (__thiscall ***v11)(_DWORD, int); // ebx
  float *v12; // eax
  double v13; // st7
  void (__thiscall ***v14)(_DWORD, int); // ebp
  float v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  char v18; // [esp+11h] [ebp-41h]
  _DWORD *v19; // [esp+12h] [ebp-40h]
  _DWORD *v20; // [esp+16h] [ebp-3Ch]
  int v21; // [esp+1Ah] [ebp-38h] BYREF
  float v22; // [esp+1Eh] [ebp-34h]
  float v23; // [esp+22h] [ebp-30h]
  int v24; // [esp+26h] [ebp-2Ch] BYREF
  int v25; // [esp+2Ah] [ebp-28h] BYREF
  int v26; // [esp+2Eh] [ebp-24h] BYREF
  float v27; // [esp+32h] [ebp-20h]
  _DWORD *v28; // [esp+36h] [ebp-1Ch]
  float v29; // [esp+3Ah] [ebp-18h]
  float v30; // [esp+3Eh] [ebp-14h]
  float v31; // [esp+42h] [ebp-10h]
  float v32; // [esp+46h] [ebp-Ch]
  float v33; // [esp+4Ah] [ebp-8h]
  float v34; // [esp+4Eh] [ebp-4h]

  v2 = (_DWORD *)*(this + 0x1C);
  v19 = this;
  v18 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (_DWORD *)v2[2];
      v4 = (_DWORD *)*(this + 0x1C);
      v20 = (_DWORD *)*v2;
      v23 = *(float *)(*sub_405AD0(v3, &v21) + 0xF8);
      if ( v21 )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v21;
        if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
          (**v5)(v5, 1);
      }
      v6 = (float *)*sub_405AD0(v3, &v24);
      v7 = a2;
      v8 = v6[0x22] - *a2;
      v6 += 0x22;
      v29 = v8;
      v30 = v6[1] - a2[1];
      v31 = v6[2] - a2[2];
      v22 = v30 * v30 + v29 * v29 + v31 * v31;
      v22 = sqrt(v22);
      v27 = (v22 - a2[3]) / v23;
      if ( v24 )
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v24;
        if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
          (**v9)(v9, 1);
      }
      while ( v4 != v2 )
      {
        if ( !v4 )
          break;
        v10 = (_DWORD *)v4[2];
        v28 = v4;
        v4 = (_DWORD *)*v4;
        v22 = *(float *)(*sub_405AD0(v10, &v25) + 0xF8);
        if ( v25 )
        {
          v11 = (void (__thiscall ***)(_DWORD, int))v25;
          if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
            (**v11)(v11, 1);
          v7 = a2;
        }
        v12 = (float *)*sub_405AD0(v10, &v26);
        v13 = v12[0x22];
        v12 += 0x22;
        v32 = v13 - *v7;
        v33 = v12[1] - v7[1];
        v34 = v12[2] - v7[2];
        v23 = v33 * v33 + v32 * v32 + v34 * v34;
        v23 = sqrt(v23);
        v23 = (v23 - v7[3]) / v22;
        if ( v26 )
        {
          v14 = (void (__thiscall ***)(_DWORD, int))v26;
          if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
            (**v14)(v14, 1);
        }
        if ( v23 > (double)v27 )
        {
          v15 = *(float *)&v28;
          if ( v2 != v28 )
          {
            if ( (_DWORD *)v19[0x1C] == v2 )
              v19[0x1C] = *v2;
            if ( v19[0x1C] == LODWORD(v15) )
              v19[0x1C] = v2;
            if ( (_DWORD *)v19[0x1D] == v2 )
              v19[0x1D] = v2[1];
            if ( *v2 )
              *(_DWORD *)(*v2 + 4) = v2[1];
            v16 = (_DWORD *)v2[1];
            if ( v16 )
              *v16 = *v2;
            v17 = *(_DWORD **)(LODWORD(v15) + 4);
            v2[1] = v17;
            *(float *)v2 = v15;
            if ( v17 )
              *v17 = v2;
            *(_DWORD *)(LODWORD(v15) + 4) = v2;
          }
          v4 = 0;
          v18 = 1;
        }
      }
      if ( !v20 )
        break;
      v2 = v20;
      this = v19;
    }
    if ( v18 )
      v19[9] = 0;
  }
}
