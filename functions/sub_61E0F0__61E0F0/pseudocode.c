int __userpurge sub_61E0F0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        float a5,
        float a6,
        int a7,
        int a8,
        char a9)
{
  int v11; // esi
  int *v13; // eax
  double v14; // st7
  int v15; // ecx
  double v16; // st6
  float *v17; // edx
  double v18; // st4
  double v19; // rt0
  double v20; // st4
  double v21; // st6
  double v22; // rt1
  double v23; // rt2
  int v24; // ecx
  int *v25; // eax
  int *v26; // eax
  int v27; // esi
  unsigned __int8 v28; // al
  bool v29; // bl
  int v30; // edi
  int *v31; // eax
  int v32; // esi
  bool v33; // bl
  int *v34; // eax
  int v35; // esi
  bool v36; // bl
  int *v37; // eax
  int v38; // esi
  bool v39; // bl
  int *v40; // eax
  int v41; // esi
  bool v42; // bl
  int *v43; // eax
  float v44; // eax
  float v45; // ecx
  int v46; // esi
  int v47; // eax
  const char *v48; // eax
  char *Name; // eax
  float v50; // [esp+8h] [ebp-4Ch]
  const char *v51; // [esp+10h] [ebp-44h]
  char v52; // [esp+26h] [ebp-2Eh]
  char v53; // [esp+27h] [ebp-2Dh]
  int v54; // [esp+28h] [ebp-2Ch]
  int v55; // [esp+2Ch] [ebp-28h]
  float v56; // [esp+30h] [ebp-24h]
  float v57; // [esp+30h] [ebp-24h]
  float v58; // [esp+30h] [ebp-24h]
  float v59[3]; // [esp+34h] [ebp-20h] BYREF
  int v60[5]; // [esp+40h] [ebp-14h] BYREF
  int v61; // [esp+68h] [ebp+14h]

  v53 = 0;
  v52 = 0;
  v55 = 0xFF;
  v54 = 0xFF;
  v11 = 0;
  if ( (*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(
         *(_DWORD *)(a1 + 0x3C),
         a4,
         a3,
         a2) )
  {
    return 0xFF;
  }
  if ( !*(_BYTE *)(a1 + 0xC4) || sub_613440((void **)a1, a5, a6, 0) )
    goto LABEL_24;
  v13 = sub_5E0F50(*(void **)(a1 + 0x3C));
  v56 = ((double (__thiscall *)(int *))*(_DWORD *)(*v13 + 0x164))(v13);
  v14 = v56;
  v15 = 0;
  v16 = 0.0;
  v17 = (float *)(a1 + 0xB0);
  v18 = a6;
  do
  {
    v19 = v18;
    v20 = v16;
    v21 = v19;
    if ( v20 < *v17 )
    {
      v57 = *v17;
      v23 = v20;
      v18 = v21;
      v16 = v23;
    }
    else
    {
      v22 = v20;
      v18 = v21;
      v16 = v22;
      v57 = v18;
    }
    v58 = v57 * v14;
    if ( v58 >= (double)a5 )
      v60[v11++] = v15 + 0x16;
    ++v15;
    ++v17;
  }
  while ( v15 < 5 );
  if ( !v11 && a9 )
    return 0xFF;
  if ( v11 < 5 )
    memset32(&v60[v11], 0xFF, 5 - v11);
  if ( v11 == 1 )
  {
    v24 = v60[0];
  }
  else
  {
    if ( v11 <= 1 )
      goto LABEL_24;
    v25 = sub_5E0F50(*(void **)(a1 + 0x3C));
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v25 + 0x16C))(v25, 2) )
    {
      v52 = 1;
      goto LABEL_24;
    }
    v24 = v60[GetRandomLargeInteger_(0) % v11];
  }
  v54 = v24;
  if ( v24 == 0xFF )
  {
LABEL_24:
    v26 = sub_5E0F50(*(void **)(a1 + 0x3C));
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v26 + 0x16C))(v26, 2) )
    {
      if ( fCombatMinEngageDistance <= (double)a5 )
      {
        if ( a6 * dbl_A3FA98 >= a5 )
        {
          v28 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58));
          if ( (v28 & 4) != 0 )
            v27 = 3;
          else
            v27 = (v28 >> 1) & 4;
        }
        else
        {
          v27 = 1;
        }
      }
      else
      {
        v27 = 2;
      }
      if ( sub_613440((void **)a1, a5, a6, 0) )
        v54 = *(_DWORD *)(4 * v27 + 0xB14B78);
      goto LABEL_72;
    }
    v29 = 0;
    v61 = 0;
    v30 = GetRandomLargeInteger_(0) % 0x64;
    if ( v52 )
      v29 = v60[0] == 0x16;
    v31 = sub_5E0F50(*(void **)(a1 + 0x3C));
    v32 = (*(char (__thiscall **)(int *))(*v31 + 0x128))(v31);
    if ( v30 > v32 )
    {
      if ( v29 )
        v61 = 1;
    }
    else if ( !v52 || v29 )
    {
      v54 = 0x16;
      goto LABEL_72;
    }
    v33 = 0;
    if ( v52 )
      v33 = v60[v61] == 0x17;
    v34 = sub_5E0F50(*(void **)(a1 + 0x3C));
    v35 = (*(char (__thiscall **)(int *))(*v34 + 0x12C))(v34) + v32;
    if ( v30 > v35 )
    {
      if ( v33 )
        ++v61;
    }
    else if ( !v52 || v33 )
    {
      v54 = 0x17;
      goto LABEL_72;
    }
    v36 = 0;
    if ( v52 )
      v36 = v60[v61] == 0x18;
    v37 = sub_5E0F50(*(void **)(a1 + 0x3C));
    v38 = (*(char (__thiscall **)(int *))(*v37 + 0x130))(v37) + v35;
    if ( v30 > v38 )
    {
      if ( v36 )
        ++v61;
    }
    else if ( !v52 || v36 )
    {
      v54 = 0x18;
      goto LABEL_72;
    }
    v39 = 0;
    if ( v52 )
      v39 = v60[v61] == 0x19;
    v40 = sub_5E0F50(*(void **)(a1 + 0x3C));
    v41 = (*(char (__thiscall **)(int *))(*v40 + 0x134))(v40) + v38;
    if ( v30 > v41 )
    {
      if ( v39 )
        ++v61;
    }
    else if ( !v52 || v39 )
    {
      v54 = 0x19;
      goto LABEL_72;
    }
    v42 = 0;
    if ( v52 )
      v42 = v60[v61] == 0x1A;
    v43 = sub_5E0F50(*(void **)(a1 + 0x3C));
    if ( v30 <= v41 + (*(char (__thiscall **)(int *))(*v43 + 0x138))(v43) && (!v52 || v42) )
      v54 = 0x1A;
  }
LABEL_72:
  v44 = *(&Vector3_InitValue_ + 1);
  v45 = dword_B3F9B0;
  v59[0] = Vector3_InitValue_;
  v59[1] = v44;
  v50 = *(float *)(a1 + 0x3C);
  v59[2] = v45;
  if ( sub_615F70(v50, v54, v59) )
  {
    v46 = *(_DWORD *)(a1 + 0x3C);
    v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 0x154))(v46);
    sub_710250((float *)v60, v59, (float *)(v47 + 0x30));
    (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 0x174))(v46);
    v55 = v54;
    v53 = 1;
  }
  if ( !byte_B3B908 || !v53 )
    return v55;
  switch ( v55 )
  {
    case 0x16:
      v48 = "NORMAL";
      break;
    case 0x17:
      v48 = "FORWARD";
      break;
    case 0x18:
      v48 = "BACKWARD";
      break;
    case 0x19:
      v48 = "LEFT";
      break;
    default:
      v48 = "RIGHT";
      if ( v55 != 0x1A )
        v48 = "NO";
      break;
  }
  v51 = v48;
  Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
  Interface_ConsolePrint("%.20s selects %s power attack!", Name, v51);
  return v55;
}
