LONG __thiscall sub_435060(_DWORD *this, int a2, int a3)
{
  Ni2DBuffer *v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st7
  float *v12; // eax
  double v13; // st7
  float v15; // [esp+4h] [ebp-80h]
  float v16; // [esp+4h] [ebp-80h]
  float v17; // [esp+4h] [ebp-80h]
  float v18[9]; // [esp+18h] [ebp-6Ch] BYREF
  float v19[9]; // [esp+3Ch] [ebp-48h] BYREF
  float v20[9]; // [esp+60h] [ebp-24h] BYREF
  float v21; // [esp+8Ch] [ebp+8h]

  v4 = sub_434B40((volatile LONG **)a2);
  v5 = sub_700900(v4);
  sub_483590((float *)v5);
  v6 = *(this + 0xF);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *(this + 0xF) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  v8 = *(this + 0xF);
  v21 = fabs(*(float *)(a3 + 0x18));
  *(float *)(v8 + 0x60) = v21;
  *(_DWORD *)(v8 + 0x54) = *(_DWORD *)a3;
  *(_DWORD *)(v8 + 0x58) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(v8 + 0x5C) = *(_DWORD *)(a3 + 8);
  v9 = *(float *)(a3 + 0xC);
  qmemcpy(v18, &stru_B26AF0[0xA].unk2C, sizeof(v18));
  v15 = v9;
  NiMatrix33_InitRotationTransposedTransform___(v19, v15);
  v10 = NiMAtrix33_Multiply(v18, v20, v19);
  v11 = *(float *)(a3 + 0x10);
  qmemcpy(v18, v10, sizeof(v18));
  v16 = v11;
  sub_70FD80(v19, v16);
  v12 = NiMAtrix33_Multiply(v18, v20, v19);
  v13 = *(float *)(a3 + 0x14);
  qmemcpy(v18, v12, sizeof(v18));
  v17 = v13;
  NiMatrix33_InitRotationTransform(v19, v17);
  qmemcpy(v18, NiMAtrix33_Multiply(v18, v20, v19), sizeof(v18));
  qmemcpy((void *)(*(this + 0xF) + 0x30), v18, 0x24u);
  sub_7B8940((NiAVObject *)*(this + 0xF), 1, 1, 0);
  sub_7D93E0((_DWORD *)*(this + 0xF), (unsigned __int16 *)0x2000, 1);
  return InterlockedIncrement((volatile LONG *)(a2 + 4));
}
