int __cdecl sub_8D7400(_DWORD *a1, int a2, int a3)
{
  int v3; // ebp
  _DWORD *ThreadLocalStoragePointer; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // ebp
  _DWORD *v10; // ecx
  int v11; // esi
  _DWORD *v12; // edx
  char *v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // esi
  _DWORD *v17; // edx
  char *v18; // edi
  _DWORD *v19; // eax
  _DWORD *v20; // ecx
  int v21; // edx
  unsigned int v22; // esi
  int v23; // edi
  _DWORD *v24; // ecx
  int v25; // edx
  unsigned int v26; // esi
  int v27; // eax
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  _DWORD *v30; // esi
  int v31; // ebp
  _DWORD *v32; // eax
  int v33; // eax
  _DWORD *v34; // ecx
  unsigned __int64 v35; // rax
  _DWORD *v36; // eax
  bool v37; // zf
  _DWORD *v38; // ecx
  int v39; // eax
  _DWORD *v40; // ecx
  unsigned __int64 v41; // rax
  _DWORD *v42; // ebx
  _DWORD *v43; // ecx
  unsigned __int64 v44; // rax
  int v45; // eax
  int v46; // ecx
  int v47; // ecx
  int v48; // edi
  int v49; // eax
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  int v52; // eax
  int (__thiscall ***v53)(_DWORD, int *, int, int); // eax
  _DWORD *v54; // edx
  _DWORD *v55; // ecx
  unsigned __int64 v56; // rax
  _DWORD *v57; // ecx
  _DWORD *v58; // eax
  int v59; // ecx
  _DWORD *v60; // ecx
  _DWORD *v61; // eax
  int result; // eax
  int v63; // ecx
  int v64; // [esp+2Ch] [ebp-34h]
  int v65; // [esp+30h] [ebp-30h]
  int v66; // [esp+34h] [ebp-2Ch]
  float v67; // [esp+3Ch] [ebp-24h]
  _DWORD *v68; // [esp+40h] [ebp-20h] BYREF
  int v69; // [esp+44h] [ebp-1Ch]
  signed int v70; // [esp+48h] [ebp-18h]
  _DWORD *v71; // [esp+4Ch] [ebp-14h]
  _DWORD *v72; // [esp+50h] [ebp-10h] BYREF
  int v73; // [esp+54h] [ebp-Ch]
  signed int v74; // [esp+58h] [ebp-8h]
  _DWORD *v75; // [esp+5Ch] [ebp-4h]

  v3 = MEMORY[0xBA9DE4]; /*0x8d7405*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d740d*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d7414*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8d7423*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d7425*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8d7427*/
    *v7 = "LtBroadPhase"; /*0x8d742d*/
    v7[3] = "InitMem"; /*0x8d7433*/
    v8 = __rdtsc(); /*0x8d743a*/
    v7[1] = v8; /*0x8d7444*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4; /*0x8d744a*/
  }
  v9 = ThreadLocalStoragePointer[v3]; /*0x8d7450*/
  v10 = *(_DWORD **)(v9 + 0x19C); /*0x8d7453*/
  v11 = *(_DWORD *)(a3 + 0x2A8); /*0x8d745d*/
  v68 = 0; /*0x8d7467*/
  v69 = 0; /*0x8d746b*/
  v70 = 0x80000000; /*0x8d746f*/
  v65 = v9; /*0x8d7477*/
  if ( !v10 ) /*0x8d747b*/
    v10 = (_DWORD *)unk_BA7D9C; /*0x8d747d*/
  v12 = (_DWORD *)v10[8]; /*0x8d7483*/
  v13 = (char *)v12 + ((8 * v11 + 0x10) & 0xFFFFFFF0); /*0x8d7490*/
  if ( (unsigned int)v13 > v10[0xB] ) /*0x8d7496*/
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, (8 * v11 + 0x10) & 0xFFFFFFF0); /*0x8d74a2*/
  }
  else
  {
    v10[8] = v13; /*0x8d7498*/
    v14 = v12; /*0x8d749b*/
  }
  v15 = *(_DWORD **)(v9 + 0x19C); /*0x8d74a5*/
  v68 = v14; /*0x8d74b1*/
  v71 = v14; /*0x8d74b5*/
  v70 = v11 | 0x80000000; /*0x8d74bd*/
  v16 = *(_DWORD *)(a3 + 0x2A8); /*0x8d74c1*/
  v72 = 0; /*0x8d74c7*/
  v73 = 0; /*0x8d74cb*/
  v74 = 0x80000000; /*0x8d74cf*/
  if ( !v15 ) /*0x8d74d7*/
    v15 = (_DWORD *)unk_BA7D9C; /*0x8d74d9*/
  v17 = (_DWORD *)v15[8]; /*0x8d74df*/
  v18 = (char *)v17 + ((8 * v16 + 0x10) & 0xFFFFFFF0); /*0x8d74ef*/
  if ( (unsigned int)v18 > v15[0xB] ) /*0x8d74f4*/
  {
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v15 + 0xC))(v15, (8 * v16 + 0x10) & 0xFFFFFFF0); /*0x8d7500*/
  }
  else
  {
    v15[8] = v18; /*0x8d74f6*/
    v19 = v17; /*0x8d74f9*/
  }
  v20 = *(_DWORD **)(v9 + 0x19C); /*0x8d7503*/
  v72 = v19; /*0x8d7511*/
  v74 = v16 | 0x80000000; /*0x8d7515*/
  v75 = v19; /*0x8d7519*/
  if ( !v20 ) /*0x8d751d*/
    v20 = (_DWORD *)unk_BA7D9C; /*0x8d751f*/
  v21 = v20[8]; /*0x8d7529*/
  v22 = v21 + ((0x20 * a2 + 0x10) & 0xFFFFFFF0); /*0x8d753a*/
  if ( v22 > v20[0xB] ) /*0x8d753f*/
  {
    v23 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v20 + 0xC))(v20, (0x20 * a2 + 0x10) & 0xFFFFFFF0); /*0x8d754e*/
  }
  else
  {
    v20[8] = v22; /*0x8d7541*/
    v23 = v21; /*0x8d7544*/
  }
  v24 = *(_DWORD **)(v9 + 0x19C); /*0x8d7550*/
  v66 = v23; /*0x8d7558*/
  if ( !v24 ) /*0x8d755c*/
    v24 = (_DWORD *)unk_BA7D9C; /*0x8d755e*/
  v25 = v24[8]; /*0x8d7564*/
  v26 = v25 + ((4 * a2 + 0x10) & 0xFFFFFFF0); /*0x8d7571*/
  if ( v26 > v24[0xB] ) /*0x8d7577*/
  {
    v64 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v24 + 0xC))(v24, (4 * a2 + 0x10) & 0xFFFFFFF0); /*0x8d7588*/
  }
  else
  {
    v24[8] = v26; /*0x8d7579*/
    v64 = v25; /*0x8d757c*/
  }
  v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d75a8*/
  v67 = *(float *)(*(_DWORD *)(a3 + 0x74) + 8) * kHeadBodyNormalMatchRadius; /*0x8d75b7*/
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8d75bd*/
  {
    v28 = *(_DWORD **)(v9 + 0x1A4); /*0x8d75bf*/
    *v28 = "StCalcAabbs"; /*0x8d75c5*/
    v29 = __rdtsc(); /*0x8d75cb*/
    v28[1] = v29; /*0x8d75d5*/
    *(_DWORD *)(v9 + 0x1A4) = v28 + 3; /*0x8d75db*/
  }
  v30 = a1; /*0x8d75e1*/
  if ( a2 - 1 >= 0 ) /*0x8d75ea*/
  {
    v31 = a2; /*0x8d75f2*/
    do /*0x8d7617*/
    {
      v32 = (_DWORD *)(*v30 + 0x14); /*0x8d75f7*/
      *(_DWORD *)((char *)v30 + v64 - (_DWORD)a1) = *v30 + 0x28; /*0x8d75fd*/
      (*(void (__thiscall **)(_DWORD, _DWORD, float, int))(*(_DWORD *)*v32 + 0xC))( /*0x8d760d*/
        *v32,
        v32[2],
        COERCE_FLOAT(LODWORD(v67)),
        v23);
      v23 += 0x20; /*0x8d7610*/
      ++v30; /*0x8d7613*/
      --v31; /*0x8d7616*/
    }
    while ( v31 ); /*0x8d7617*/
  }
  v33 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d7626*/
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) ) /*0x8d7639*/
  {
    v34 = *(_DWORD **)(v65 + 0x1A4); /*0x8d763b*/
    *v34 = "St3AxisSweep"; /*0x8d7641*/
    v35 = __rdtsc(); /*0x8d7647*/
    v34[1] = v35; /*0x8d7651*/
    *(_DWORD *)(v65 + 0x1A4) = v34 + 3; /*0x8d7657*/
  }
  (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD **, _DWORD **))(**(_DWORD **)(a3 + 0x64) + 0x18))( /*0x8d767f*/
    *(_DWORD *)(a3 + 0x64),
    v64,
    v66,
    a2,
    &v68,
    &v72);
  v36 = *(_DWORD **)(v65 + 0x19C); /*0x8d7682*/
  if ( !v36 ) /*0x8d768a*/
    v36 = (_DWORD *)unk_BA7D9C; /*0x8d768c*/
  v37 = v64 == v36[0xA]; /*0x8d7691*/
  v36[8] = v64; /*0x8d7694*/
  if ( v37 ) /*0x8d7697*/
    (*(void (__thiscall **)(_DWORD *, int))(*v36 + 0x10))(v36, v64); /*0x8d769e*/
  v38 = *(_DWORD **)(v65 + 0x19C); /*0x8d76a1*/
  if ( !v38 ) /*0x8d76a9*/
    v38 = (_DWORD *)unk_BA7D9C; /*0x8d76ab*/
  v37 = v66 == v38[0xA]; /*0x8d76b1*/
  v38[8] = v66; /*0x8d76b4*/
  if ( v37 ) /*0x8d76b7*/
    (*(void (__thiscall **)(_DWORD *, int))(*v38 + 0x10))(v38, v66); /*0x8d76bc*/
  if ( v69 + v73 <= 0 ) /*0x8d76cb*/
  {
LABEL_55:
    v54 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d782f*/
    if ( *(_DWORD *)(v54[MEMORY[0xBA9DE4]] + 0x1A4) >= *(_DWORD *)(v54[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d784a*/
      goto LABEL_57; /*0x8d784a*/
    goto LABEL_56; /*0x8d784a*/
  }
  v39 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d76dd*/
  if ( *(_DWORD *)(v39 + 0x1A4) < *(_DWORD *)(v39 + 0x1A8) ) /*0x8d76ec*/
  {
    v40 = *(_DWORD **)(v65 + 0x1A4); /*0x8d76ee*/
    *v40 = "StRemoveDup"; /*0x8d76f4*/
    v41 = __rdtsc(); /*0x8d76fa*/
    v40[1] = v41; /*0x8d7704*/
    *(_DWORD *)(v65 + 0x1A4) = v40 + 3; /*0x8d770a*/
  }
  sub_8D84F0((const void **)&v68, (int *)&v72); /*0x8d771a*/
  v42 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d771f*/
  if ( *(_DWORD *)(v42[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v42[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d773f*/
  {
    v43 = *(_DWORD **)(v65 + 0x1A4); /*0x8d7741*/
    *v43 = "StRemoveAgt"; /*0x8d7747*/
    v44 = __rdtsc(); /*0x8d774d*/
    v43[1] = v44; /*0x8d7757*/
    *(_DWORD *)(v65 + 0x1A4) = v43 + 3; /*0x8d775d*/
  }
  sub_8D83E0(*(_DWORD ***)(a3 + 0x68), v72, v73); /*0x8d7770*/
  v45 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d7781*/
  v46 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d7783*/
  if ( v46 > v45 ) /*0x8d7788*/
    v47 = v46 - v45; /*0x8d778e*/
  else
    v47 = 0; /*0x8d778a*/
  v48 = v69; /*0x8d7790*/
  v49 = v42[MEMORY[0xBA9DE4]]; /*0x8d77a2*/
  if ( 0x280 * v69 <= v47 ) /*0x8d77a5*/
  {
    if ( *(_DWORD *)(v49 + 0x1A4) < *(_DWORD *)(v49 + 0x1A8) ) /*0x8d77ea*/
    {
      v50 = *(_DWORD **)(v65 + 0x1A4); /*0x8d77ec*/
      *v50 = "StAddAgt"; /*0x8d77f2*/
      v51 = __rdtsc(); /*0x8d77f8*/
      v50[1] = v51; /*0x8d7802*/
      v48 = v69; /*0x8d7805*/
      *(_DWORD *)(v65 + 0x1A4) = v50 + 3; /*0x8d780c*/
    }
    v52 = *(_DWORD *)(a3 + 0x78); /*0x8d7812*/
    if ( v52 ) /*0x8d7817*/
      v53 = (int (__thiscall ***)(_DWORD, int *, int, int))(v52 + 8); /*0x8d7819*/
    else
      v53 = 0; /*0x8d781e*/
    sub_8D8370(*(_DWORD ***)(a3 + 0x68), v68, v48, v53); /*0x8d782a*/
    goto LABEL_55; /*0x8d782a*/
  }
  *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8d77a7*/
  if ( *(_DWORD *)(v49 + 0x1A4) >= *(_DWORD *)(v49 + 0x1A8) ) /*0x8d77ba*/
    goto LABEL_57; /*0x8d77ba*/
LABEL_56:
  v55 = *(_DWORD **)(v65 + 0x1A4); /*0x8d784c*/
  *v55 = "lt"; /*0x8d7852*/
  v56 = __rdtsc(); /*0x8d7858*/
  v55[1] = v56; /*0x8d7862*/
  *(_DWORD *)(v65 + 0x1A4) = v55 + 3; /*0x8d7868*/
LABEL_57:
  v57 = *(_DWORD **)(v65 + 0x19C); /*0x8d786e*/
  v58 = v75; /*0x8d7876*/
  if ( !v57 ) /*0x8d787a*/
    v57 = (_DWORD *)unk_BA7D9C; /*0x8d787c*/
  v37 = v75 == (_DWORD *)v57[0xA]; /*0x8d7882*/
  v57[8] = v75; /*0x8d7885*/
  if ( v37 ) /*0x8d7888*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v57 + 0x10))(v57, v58); /*0x8d788d*/
  if ( v74 >= 0 ) /*0x8d7896*/
  {
    v59 = *(_DWORD *)(v65 + 0x19C); /*0x8d7898*/
    if ( !v59 ) /*0x8d78a0*/
      v59 = unk_BA7D9C; /*0x8d78a2*/
    sub_8A75D0(v59, v72, 8 * v74, 0x14); /*0x8d78b8*/
  }
  v60 = *(_DWORD **)(v65 + 0x19C); /*0x8d78bd*/
  v61 = v71; /*0x8d78c5*/
  if ( !v60 ) /*0x8d78c9*/
    v60 = (_DWORD *)unk_BA7D9C; /*0x8d78cb*/
  v37 = v71 == (_DWORD *)v60[0xA]; /*0x8d78d1*/
  v60[8] = v71; /*0x8d78d4*/
  if ( v37 ) /*0x8d78d7*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v60 + 0x10))(v60, v61); /*0x8d78dc*/
  result = v70; /*0x8d78df*/
  if ( v70 >= 0 ) /*0x8d78e5*/
  {
    v63 = *(_DWORD *)(v65 + 0x19C); /*0x8d78ef*/
    if ( !v63 ) /*0x8d78f1*/
      v63 = unk_BA7D9C; /*0x8d78f3*/
    return sub_8A75D0(v63, v68, 8 * v70, 0x14); /*0x8d7909*/
  }
  return result; /*0x8d790e*/
}
