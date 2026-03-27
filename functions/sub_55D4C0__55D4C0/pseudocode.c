int __userpurge sub_55D4C0@<eax>(int a1@<ecx>, int a2@<ebx>, double st7_0@<st0>, double a4@<st1>, float a5, int a6)
{
  int result; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  double v15; // st7
  char v16; // al
  int v17; // eax
  char v18; // bl
  int v19; // eax
  int v20; // ecx
  double v21; // st7
  int v22; // eax
  UInt32 *v23; // esi
  int (__thiscall *v24)(int); // edx
  int v25; // eax
  int v26; // edi
  float *v27; // eax
  double v28; // st7
  int *v29; // eax
  char v30; // al
  int v31; // eax
  char v32; // al
  int v33; // [esp+10h] [ebp-A8h]
  int v34; // [esp+10h] [ebp-A8h]
  char v35; // [esp+20h] [ebp-98h]
  float v36; // [esp+24h] [ebp-94h]
  float v37; // [esp+28h] [ebp-90h]
  float v38; // [esp+28h] [ebp-90h]
  float v39[9]; // [esp+2Ch] [ebp-8Ch] BYREF
  float v40[9]; // [esp+50h] [ebp-68h] BYREF
  int v41[9]; // [esp+74h] [ebp-44h] BYREF
  float v42[8]; // [esp+98h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(a1 + 0x18) & 1) != 0 )
    return sub_70A0D0((float *)a1, a5, a6);
  v9 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4);
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 0x98))(v9);
  if ( useFaceGenLODF )
  {
    if ( !*(_BYTE *)(a1 + 0x111) )
    {
      st7_0 = 0.0;
      if ( a5 > 0.0 )
        sub_55CC60(a1, 0xFFFFFFFF);
    }
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) )
    return sub_70A0D0((float *)a1, a5, a6);
  if ( !(_BYTE)a6 )
  {
    v10 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x90))(v10) )
      return sub_70A0D0((float *)a1, a5, a6);
  }
  if ( a5 == *(float *)(a1 + 0x10C) )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) )
      return sub_70A0D0((float *)a1, a5, a6);
    v11 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x90))(v11) )
      return sub_70A0D0((float *)a1, a5, a6);
  }
  v12 = *(_BYTE *)(a1 + 0x106) == 0;
  *(float *)(a1 + 0x10C) = a5;
  if ( v12 || !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) + 0x1D5) )
  {
    v17 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(
            a1,
            a2,
            st7_0,
            a4);
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x8C))(v17);
  }
  else
  {
    v13 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(
            a1,
            a2,
            st7_0,
            a4);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 0x94))(v13, 0);
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1);
    v15 = (double)(dword_B39DB0 - dword_B39DB4);
    if ( dword_B39DB0 - dword_B39DB4 < 0 )
      v15 = v15 + flt_A2FC78;
    v36 = v15 * dbl_A30E40;
    st7_0 = v36;
    v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0xDC))(v14, LODWORD(v36));
  }
  v18 = v16;
  if ( *(_BYTE *)(a1 + 0x106) )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) + 0x1D5) )
    {
      if ( *(_BYTE *)(a1 + 0x108) )
      {
        if ( !byte_B148F4 )
        {
          v19 = *(_DWORD *)(a1 + 0x1C);
          qmemcpy(v39, &stru_B26AF0[0xA].unk2C, sizeof(v39));
          qmemcpy(v40, &stru_B26AF0[0xA].unk2C, sizeof(v40));
          v20 = dword_B39DB0 - dword_B39DB4;
          v33 = v19;
          v21 = (double)v20;
          if ( v20 < 0 )
            v21 = v21 + flt_A2FC78;
          v37 = v21 * dbl_A30E40;
          v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1);
          v23 = sub_54B5A0(v22, (UInt32 *)v41, v37, v33);
          v24 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C);
          qmemcpy(v40, v23, sizeof(v40));
          v25 = v24(a1);
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)v25 + 0x60))(v25, v39);
          v26 = *(_DWORD *)(a1 + 0x1C);
          v27 = NiMAtrix33_Multiply((float *)(v26 + 0x64), v42, v40);
          qmemcpy((void *)(v26 + 0x64), NiMAtrix33_Multiply(v27, (float *)v41, v39), 0x24u);
          sub_47CA90(*(_WORD **)(a1 + 0x1C), 0.0, 0, (NiAVObject *)a1);
          v28 = (double)(dword_B39DB0 - dword_B39DB4);
          v34 = *(_DWORD *)(a1 + 0x1C);
          if ( dword_B39DB0 - dword_B39DB4 < 0 )
            v28 = v28 + flt_A2FC78;
          v38 = v28 * dbl_A30E40;
          st7_0 = v38;
          v29 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1);
          v30 = sub_54C6B0(v29, v38, v34);
          if ( v18 || v30 )
            v18 = 1;
        }
      }
    }
  }
  qmemcpy(
    (void *)(a1 + 0x30),
    (const void *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 0xA4))(a1, v42),
    0x24u);
  if ( v18 )
  {
    v31 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 0x98))(v31)
      || (sub_674860(*(_DWORD *)(a1 + 0x114), 0xA), v32)
      || *(PlayerCharacter **)(a1 + 0x114) == TESDataHandler_g_PlayerRef
      || InterfaceManager_IsMenuMode() )
    {
      sub_55D1B0((_DWORD *)a1, v35);
    }
  }
  sub_70A0D0((float *)a1, a5, a6);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1);
  *(_BYTE *)(result + 0x1D5) = 1;
  return result;
}
