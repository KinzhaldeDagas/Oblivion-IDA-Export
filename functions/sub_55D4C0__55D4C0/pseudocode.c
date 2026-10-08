int __userpurge sub_55D4C0@<eax>(int a1@<ecx>, int a2@<ebx>, double st7_0@<st0>, double a4@<st1>, float a5, int a6)
{
  int result; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  double v14; // st7
  char v15; // al
  int v16; // eax
  char v17; // bl
  int v18; // eax
  int v19; // ecx
  double v20; // st7
  int v21; // eax
  UInt32 *v22; // esi
  int (__thiscall *v23)(int); // edx
  int v24; // eax
  int v25; // edi
  float *v26; // eax
  double v27; // st7
  int *v28; // eax
  char v29; // al
  int v30; // eax
  int v31; // [esp+10h] [ebp-A8h]
  int v32; // [esp+10h] [ebp-A8h]
  char v33; // [esp+20h] [ebp-98h]
  float v34; // [esp+24h] [ebp-94h]
  float v35; // [esp+28h] [ebp-90h]
  float v36; // [esp+28h] [ebp-90h]
  float v37[9]; // [esp+2Ch] [ebp-8Ch] BYREF
  float v38[9]; // [esp+50h] [ebp-68h] BYREF
  int v39[9]; // [esp+74h] [ebp-44h] BYREF
  float v40[8]; // [esp+98h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(a1 + 0x18) & 1) != 0 ) /*0x55d4cd*/
    return NiNode_UpdateDownwardPass((float *)a1, a5, a6); /*0x55d4e2*/
  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4); /*0x55d4fa*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x98))(v8); /*0x55d506*/
  if ( useFaceGenLODF ) /*0x55d508*/
  {
    if ( !*(_BYTE *)(a1 + 0x111) ) /*0x55d511*/
    {
      st7_0 = 0.0; /*0x55d51a*/
      if ( a5 > 0.0 ) /*0x55d528*/
        sub_55CC60(a1, 0xFFFFFFFF); /*0x55d52e*/
    }
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) ) /*0x55d53f*/
    return NiNode_UpdateDownwardPass((float *)a1, a5, a6); /*0x55d53f*/
  if ( !(_BYTE)a6 ) /*0x55d552*/
  {
    v9 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4); /*0x55d55f*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 0x90))(v9) ) /*0x55d56b*/
      return NiNode_UpdateDownwardPass((float *)a1, a5, a6); /*0x55d56b*/
  }
  if ( a5 == *(float *)(a1 + 0x10C) ) /*0x55d589*/
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) ) /*0x55d596*/
      return NiNode_UpdateDownwardPass((float *)a1, a5, a6); /*0x55d596*/
    v10 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4); /*0x55d5ab*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x90))(v10) ) /*0x55d5b7*/
      return NiNode_UpdateDownwardPass((float *)a1, a5, a6); /*0x55d8ab*/
  }
  v11 = *(_BYTE *)(a1 + 0x106) == 0; /*0x55d5c1*/
  *(float *)(a1 + 0x10C) = a5; /*0x55d5cf*/
  if ( v11 || !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) + 0x1D5) ) /*0x55d5e4*/
  {
    v16 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))( /*0x55d65e*/
            a1,
            a2,
            st7_0,
            a4);
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x8C))(v16); /*0x55d66a*/
  }
  else
  {
    v12 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))( /*0x55d5f8*/
            a1,
            a2,
            st7_0,
            a4);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 0x94))(v12, 0); /*0x55d606*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1); /*0x55d613*/
    v14 = (double)(unk_B39DB0 - unk_B39DB4); /*0x55d629*/
    if ( unk_B39DB0 - unk_B39DB4 < 0 ) /*0x55d62d*/
      v14 = v14 + flt_A2FC78; /*0x55d62f*/
    v34 = v14 * dbl_A30E40; /*0x55d644*/
    st7_0 = v34; /*0x55d648*/
    v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 0xDC))(v13, LODWORD(v34)); /*0x55d64f*/
  }
  v17 = v15; /*0x55d673*/
  if ( *(_BYTE *)(a1 + 0x106) ) /*0x55d66c*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1) + 0x1D5) ) /*0x55d68e*/
    {
      if ( *(_BYTE *)(a1 + 0x108) ) /*0x55d69b*/
      {
        if ( !byte_B148F4 ) /*0x55d6a8*/
        {
          v18 = *(_DWORD *)(a1 + 0x1C); /*0x55d6b5*/
          qmemcpy(v37, &stru_B26AF0[0xA].unk2C, sizeof(v37)); /*0x55d6c6*/
          qmemcpy(v38, &stru_B26AF0[0xA].unk2C, sizeof(v38)); /*0x55d6d6*/
          v19 = unk_B39DB0 - unk_B39DB4; /*0x55d6de*/
          v31 = v18; /*0x55d6e4*/
          v20 = (double)v19; /*0x55d6eb*/
          if ( v19 < 0 ) /*0x55d6ef*/
            v20 = v20 + flt_A2FC78; /*0x55d6f1*/
          v35 = v20 * dbl_A30E40; /*0x55d705*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1); /*0x55d719*/
          v22 = sub_54B5A0(v21, (UInt32 *)v39, v35, v31); /*0x55d722*/
          v23 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C); /*0x55d727*/
          qmemcpy(v38, v22, sizeof(v38)); /*0x55d736*/
          v24 = v23(a1); /*0x55d73a*/
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)v24 + 0x60))(v24, v37); /*0x55d748*/
          v25 = *(_DWORD *)(a1 + 0x1C); /*0x55d74a*/
          v26 = NiMAtrix33_Multiply((float *)(v25 + 0x64), v40, v38); /*0x55d767*/
          qmemcpy((void *)(v25 + 0x64), NiMAtrix33_Multiply(v26, (float *)v39, v37), 0x24u); /*0x55d77f*/
          sub_47CA90(*(_WORD **)(a1 + 0x1C), 0.0, 0, (NiAVObject *)a1); /*0x55d78b*/
          v27 = (double)(unk_B39DB0 - unk_B39DB4); /*0x55d7a5*/
          v32 = *(_DWORD *)(a1 + 0x1C); /*0x55d7a9*/
          if ( unk_B39DB0 - unk_B39DB4 < 0 ) /*0x55d7aa*/
            v27 = v27 + flt_A2FC78; /*0x55d7ac*/
          v36 = v27 * dbl_A30E40; /*0x55d7c2*/
          st7_0 = v36; /*0x55d7c8*/
          v28 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1); /*0x55d7cf*/
          v29 = sub_54C6B0(v28, v36, v32); /*0x55d7d3*/
          if ( v17 || v29 ) /*0x55d7de*/
            v17 = 1; /*0x55d7e0*/
        }
      }
    }
  }
  qmemcpy( /*0x55d807*/
    (void *)(a1 + 0x30),
    (const void *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 0xA4))(a1, v40),
    0x24u);
  if ( v17 ) /*0x55d80b*/
  {
    v30 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, st7_0, a4); /*0x55d818*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 0x98))(v30) /*0x55d84f*/
      || sub_674860((PlayerCharacter **)&qword_B3BB2C[0x75], *(PlayerCharacter **)(a1 + 0x114), 0xA)
      || *(PlayerCharacter **)(a1 + 0x114) == reference
      || InterfaceManager_IsMenuMode() )
    {
      sub_55D1B0((_DWORD *)a1, v33); /*0x55d85f*/
    }
  }
  NiNode_UpdateDownwardPass((float *)a1, a5, a6); /*0x55d879*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1); /*0x55d889*/
  *(_BYTE *)(result + 0x1D5) = 1; /*0x55d88c*/
  return result; /*0x55d4e7*/
}
