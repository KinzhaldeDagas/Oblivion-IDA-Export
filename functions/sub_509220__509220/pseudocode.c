char __cdecl sub_509220(int a1, int a2, int *a3)
{
  int v3; // ebp
  void (__thiscall *v4)(int *, _DWORD, _DWORD, _DWORD); // edx
  float *v5; // eax
  float *v6; // eax
  int (__thiscall *v7)(int *, _BYTE *); // edx
  int v8; // eax
  float *v9; // eax
  int (__thiscall *v10)(int *, _BYTE *); // edx
  int v11; // eax
  float *v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  _BYTE v16[12]; // [esp+34h] [ebp-78h] BYREF
  float v17[9]; // [esp+40h] [ebp-6Ch] BYREF
  float v18[9]; // [esp+64h] [ebp-48h] BYREF
  float v19[9]; // [esp+88h] [ebp-24h] BYREF

  if ( a3 )
  {
    v3 = (*(int (__thiscall **)(int *))(*a3 + 0x154))(a3);
    if ( v3 )
    {
      v4 = *(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a3 + 0xF8);
      qmemcpy(v17, &stru_B26AF0[0xA].unk2C, sizeof(v17));
      v4(a3, LODWORD(Vector3_InitValue_), *((_DWORD *)&Vector3_InitValue_ + 1), LODWORD(dword_B3F9B0));
      v5 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*a3 + 0xF0))(a3, v16);
      NiMatrix33_InitRotationTransposedTransform___(v18, *v5);
      v6 = NiMAtrix33_Multiply(v18, v19, v17);
      v7 = *(int (__thiscall **)(int *, _BYTE *))(*a3 + 0xF0);
      qmemcpy(v17, v6, sizeof(v17));
      v8 = v7(a3, v16);
      sub_70FD80(v18, *(float *)(v8 + 4));
      v9 = NiMAtrix33_Multiply(v18, v19, v17);
      v10 = *(int (__thiscall **)(int *, _BYTE *))(*a3 + 0xF0);
      qmemcpy(v17, v9, sizeof(v17));
      v11 = v10(a3, v16);
      NiMatrix33_InitRotationTransform(v18, *(float *)(v11 + 8));
      v12 = NiMAtrix33_Multiply(v18, v19, v17);
      v13 = *a3;
      qmemcpy(v17, v12, sizeof(v17));
      v14 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v13 + 0xF4))(a3, v16);
      *(_DWORD *)(v3 + 0x54) = *v14;
      *(_DWORD *)(v3 + 0x58) = v14[1];
      *(_DWORD *)(v3 + 0x5C) = v14[2];
      qmemcpy((void *)(v3 + 0x30), v17, 0x24u);
      if ( !(*(int (__thiscall **)(int *))(*a3 + 0x164))(a3) )
        NiAVObject_UpdateNiAVObject((NiAVObject *)v3, 0.0, 0);
    }
  }
  return 1;
}
