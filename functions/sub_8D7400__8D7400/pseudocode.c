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

  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "LtBroadPhase";
    v7[3] = "InitMem";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4;
  }
  v9 = ThreadLocalStoragePointer[v3];
  v10 = *(_DWORD **)(v9 + 0x19C);
  v11 = *(_DWORD *)(a3 + 0x2A8);
  v68 = 0;
  v69 = 0;
  v70 = 0x80000000;
  v65 = v9;
  if ( !v10 )
    v10 = (_DWORD *)dword_BA7D9C;
  v12 = (_DWORD *)v10[8];
  v13 = (char *)v12 + ((8 * v11 + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v13 > v10[0xB] )
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, (8 * v11 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v10[8] = v13;
    v14 = v12;
  }
  v15 = *(_DWORD **)(v9 + 0x19C);
  v68 = v14;
  v71 = v14;
  v70 = v11 | 0x80000000;
  v16 = *(_DWORD *)(a3 + 0x2A8);
  v72 = 0;
  v73 = 0;
  v74 = 0x80000000;
  if ( !v15 )
    v15 = (_DWORD *)dword_BA7D9C;
  v17 = (_DWORD *)v15[8];
  v18 = (char *)v17 + ((8 * v16 + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v18 > v15[0xB] )
  {
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v15 + 0xC))(v15, (8 * v16 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v15[8] = v18;
    v19 = v17;
  }
  v20 = *(_DWORD **)(v9 + 0x19C);
  v72 = v19;
  v74 = v16 | 0x80000000;
  v75 = v19;
  if ( !v20 )
    v20 = (_DWORD *)dword_BA7D9C;
  v21 = v20[8];
  v22 = v21 + ((0x20 * a2 + 0x10) & 0xFFFFFFF0);
  if ( v22 > v20[0xB] )
  {
    v23 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v20 + 0xC))(v20, (0x20 * a2 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v20[8] = v22;
    v23 = v21;
  }
  v24 = *(_DWORD **)(v9 + 0x19C);
  v66 = v23;
  if ( !v24 )
    v24 = (_DWORD *)dword_BA7D9C;
  v25 = v24[8];
  v26 = v25 + ((4 * a2 + 0x10) & 0xFFFFFFF0);
  if ( v26 > v24[0xB] )
  {
    v64 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v24 + 0xC))(v24, (4 * a2 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v24[8] = v26;
    v64 = v25;
  }
  v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v67 = *(float *)(*(_DWORD *)(a3 + 0x74) + 8) * flt_A3D65C;
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
    v28 = *(_DWORD **)(v9 + 0x1A4);
    *v28 = "StCalcAabbs";
    v29 = __rdtsc();
    v28[1] = v29;
    *(_DWORD *)(v9 + 0x1A4) = v28 + 3;
  }
  v30 = a1;
  if ( a2 - 1 >= 0 )
  {
    v31 = a2;
    do
    {
      v32 = (_DWORD *)(*v30 + 0x14);
      *(_DWORD *)((char *)v30 + v64 - (_DWORD)a1) = *v30 + 0x28;
      (*(void (__thiscall **)(_DWORD, _DWORD, float, int))(*(_DWORD *)*v32 + 0xC))(
        *v32,
        v32[2],
        COERCE_FLOAT(LODWORD(v67)),
        v23);
      v23 += 0x20;
      ++v30;
      --v31;
    }
    while ( v31 );
  }
  v33 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) )
  {
    v34 = *(_DWORD **)(v65 + 0x1A4);
    *v34 = "St3AxisSweep";
    v35 = __rdtsc();
    v34[1] = v35;
    *(_DWORD *)(v65 + 0x1A4) = v34 + 3;
  }
  (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD **, _DWORD **))(**(_DWORD **)(a3 + 0x64) + 0x18))(
    *(_DWORD *)(a3 + 0x64),
    v64,
    v66,
    a2,
    &v68,
    &v72);
  v36 = *(_DWORD **)(v65 + 0x19C);
  if ( !v36 )
    v36 = (_DWORD *)dword_BA7D9C;
  v37 = v64 == v36[0xA];
  v36[8] = v64;
  if ( v37 )
    (*(void (__thiscall **)(_DWORD *, int))(*v36 + 0x10))(v36, v64);
  v38 = *(_DWORD **)(v65 + 0x19C);
  if ( !v38 )
    v38 = (_DWORD *)dword_BA7D9C;
  v37 = v66 == v38[0xA];
  v38[8] = v66;
  if ( v37 )
    (*(void (__thiscall **)(_DWORD *, int))(*v38 + 0x10))(v38, v66);
  if ( v69 + v73 <= 0 )
  {
LABEL_55:
    v54 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v54[TlsIndex] + 0x1A4) >= *(_DWORD *)(v54[TlsIndex] + 0x1A8) )
      goto LABEL_57;
    goto LABEL_56;
  }
  v39 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v39 + 0x1A4) < *(_DWORD *)(v39 + 0x1A8) )
  {
    v40 = *(_DWORD **)(v65 + 0x1A4);
    *v40 = "StRemoveDup";
    v41 = __rdtsc();
    v40[1] = v41;
    *(_DWORD *)(v65 + 0x1A4) = v40 + 3;
  }
  sub_8D84F0((int)&v68, (int *)&v72);
  v42 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( *(_DWORD *)(v42[TlsIndex] + 0x1A4) < *(_DWORD *)(v42[TlsIndex] + 0x1A8) )
  {
    v43 = *(_DWORD **)(v65 + 0x1A4);
    *v43 = "StRemoveAgt";
    v44 = __rdtsc();
    v43[1] = v44;
    *(_DWORD *)(v65 + 0x1A4) = v43 + 3;
  }
  sub_8D83E0(*(_DWORD ***)(a3 + 0x68), v72, v73);
  v45 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
  v46 = *(_DWORD *)(dword_BA7D98 + 8);
  if ( v46 > v45 )
    v47 = v46 - v45;
  else
    v47 = 0;
  v48 = v69;
  v49 = v42[TlsIndex];
  if ( 0x280 * v69 <= v47 )
  {
    if ( *(_DWORD *)(v49 + 0x1A4) < *(_DWORD *)(v49 + 0x1A8) )
    {
      v50 = *(_DWORD **)(v65 + 0x1A4);
      *v50 = "StAddAgt";
      v51 = __rdtsc();
      v50[1] = v51;
      v48 = v69;
      *(_DWORD *)(v65 + 0x1A4) = v50 + 3;
    }
    v52 = *(_DWORD *)(a3 + 0x78);
    if ( v52 )
      v53 = (int (__thiscall ***)(_DWORD, int *, int, int))(v52 + 8);
    else
      v53 = 0;
    sub_8D8370(*(_DWORD ***)(a3 + 0x68), v68, v48, v53);
    goto LABEL_55;
  }
  *(_DWORD *)(dword_BA7D98 + 4) = 1;
  if ( *(_DWORD *)(v49 + 0x1A4) >= *(_DWORD *)(v49 + 0x1A8) )
    goto LABEL_57;
LABEL_56:
  v55 = *(_DWORD **)(v65 + 0x1A4);
  *v55 = "lt";
  v56 = __rdtsc();
  v55[1] = v56;
  *(_DWORD *)(v65 + 0x1A4) = v55 + 3;
LABEL_57:
  v57 = *(_DWORD **)(v65 + 0x19C);
  v58 = v75;
  if ( !v57 )
    v57 = (_DWORD *)dword_BA7D9C;
  v37 = v75 == (_DWORD *)v57[0xA];
  v57[8] = v75;
  if ( v37 )
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v57 + 0x10))(v57, v58);
  if ( v74 >= 0 )
  {
    v59 = *(_DWORD *)(v65 + 0x19C);
    if ( !v59 )
      v59 = dword_BA7D9C;
    sub_8A75D0(v59, v72, 8 * v74, 0x14);
  }
  v60 = *(_DWORD **)(v65 + 0x19C);
  v61 = v71;
  if ( !v60 )
    v60 = (_DWORD *)dword_BA7D9C;
  v37 = v71 == (_DWORD *)v60[0xA];
  v60[8] = v71;
  if ( v37 )
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v60 + 0x10))(v60, v61);
  result = v70;
  if ( v70 >= 0 )
  {
    v63 = *(_DWORD *)(v65 + 0x19C);
    if ( !v63 )
      v63 = dword_BA7D9C;
    return sub_8A75D0(v63, v68, 8 * v70, 0x14);
  }
  return result;
}
