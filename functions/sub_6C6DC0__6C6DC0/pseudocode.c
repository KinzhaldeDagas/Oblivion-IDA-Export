// Propagates a sequence update across its 0x10-byte controlled-block records. For each bound interpolator/controller it writes sample time, effective sequence weight, and transition weight into the selected blend item, invalidates cached times, and marks the blend data dirty. This consumes already-selected sequence timing; it does not select animation paths or map entries.
void __thiscall NiControllerSequence_UpdateControlledBlocks(_DWORD *this, float a2, float a3, float a4)
{
  int v4; // ebp
  double v5; // st7
  double v6; // st5
  int v7; // edx
  int v8; // eax
  int v9; // edx
  unsigned __int8 v10; // bl
  double v11; // st4
  int v12; // eax
  unsigned __int8 v13; // bl
  double v14; // st4
  unsigned __int8 v15; // al
  int v16; // edx
  double v17; // rt2
  double v18; // st5
  double v19; // st7
  double v20; // rtt
  double v21; // rt0
  unsigned int v22; // [esp+8h] [ebp-4h]

  v4 = 0; /*0x6c6dc3*/
  v22 = 0; /*0x6c6dca*/
  if ( *(this + 3) ) /*0x6c6dc7*/
  {
    v5 = a4; /*0x6c6dd4*/
    v6 = a2; /*0x6c6de2*/
    do /*0x6c6eb5*/
    {
      v7 = *(this + 5); /*0x6c6de7*/
      v8 = *(_DWORD *)(v7 + v4 + 8); /*0x6c6dea*/
      v9 = v4 + v7; /*0x6c6dee*/
      if ( v8 ) /*0x6c6df2*/
      {
        v10 = *(_BYTE *)(v9 + 0xC); /*0x6c6dfb*/
        if ( *(_BYTE *)(v8 + 0xE) != 1 || v10 != *(_BYTE *)(v8 + 0xF) ) /*0x6c6e03*/
        {
          *(float *)(*(_DWORD *)(v8 + 0x14) + 0x18 * v10 + 4) = v6; /*0x6c6e0e*/
          *(float *)(v8 + 0x24) = -flt_A7DEB4; /*0x6c6e1a*/
          *(float *)(v8 + 0x28) = -flt_A7DEB4; /*0x6c6e25*/
          v11 = flt_A7DEB4; /*0x6c6e28*/
          *(_BYTE *)(v8 + 0xC) |= 4u; /*0x6c6e2e*/
          *(float *)(v8 + 0x2C) = -v11; /*0x6c6e34*/
        }
        v12 = *(_DWORD *)(v9 + 8); /*0x6c6e37*/
        v13 = *(_BYTE *)(v9 + 0xC); /*0x6c6e3d*/
        if ( *(_BYTE *)(v12 + 0xE) != 1 || v13 != *(_BYTE *)(v12 + 0xF) ) /*0x6c6e45*/
        {
          *(float *)(*(_DWORD *)(v12 + 0x14) + 0x18 * v13 + 0x10) = a3; /*0x6c6e52*/
          *(float *)(v12 + 0x24) = -flt_A7DEB4; /*0x6c6e5e*/
          *(float *)(v12 + 0x28) = -flt_A7DEB4; /*0x6c6e69*/
          v14 = flt_A7DEB4; /*0x6c6e6c*/
          *(_BYTE *)(v12 + 0xC) |= 4u; /*0x6c6e72*/
          *(float *)(v12 + 0x2C) = -v14; /*0x6c6e78*/
        }
        v15 = *(_BYTE *)(v9 + 0xC); /*0x6c6e7d*/
        v16 = *(_DWORD *)(v9 + 8); /*0x6c6e80*/
        if ( *(_BYTE *)(v16 + 0xE) == 1 && v15 == *(_BYTE *)(v16 + 0xF) ) /*0x6c6e8b*/
        {
          v17 = v6; /*0x6c6e8d*/
          v18 = v5; /*0x6c6e8d*/
          v19 = v17; /*0x6c6e8d*/
          *(float *)(v16 + 0x20) = v18; /*0x6c6e8f*/
        }
        else
        {
          v20 = v6; /*0x6c6e97*/
          v18 = v5; /*0x6c6e97*/
          v19 = v20; /*0x6c6e97*/
          *(float *)(*(_DWORD *)(v16 + 0x14) + 0x18 * v15 + 0x14) = v18; /*0x6c6e9f*/
        }
        v21 = v18; /*0x6c6ea3*/
        v6 = v19; /*0x6c6ea3*/
        v5 = v21; /*0x6c6ea3*/
      }
      v4 += 0x10; /*0x6c6eab*/
      ++v22; /*0x6c6eb1*/
    }
    while ( v22 < *(this + 3) ); /*0x6c6eb5*/
  }
}
