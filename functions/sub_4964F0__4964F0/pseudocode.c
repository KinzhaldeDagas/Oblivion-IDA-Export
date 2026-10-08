unsigned int __thiscall sub_4964F0(HWND *this, LPARAM a2, int a3)
{
  float *v3; // ebp
  const char *v4; // esi
  int (__thiscall *v5)(int); // edx
  const char **v6; // eax
  unsigned int v7; // eax
  char *v8; // edi
  char *v10; // eax
  int *v12; // ecx
  float v13; // eax
  int v14; // eax
  NiRTTI *v15; // eax
  NiRTTI *v16; // eax
  HWND *v17; // edi
  HWND v18; // ecx
  LRESULT (__stdcall *v19)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v20; // esi
  void (__thiscall *v21)(float *, int); // edx
  unsigned int i; // ebp
  char *v23; // ecx
  int j; // eax
  int v25; // edx
  _DWORD *v26; // ebp
  const char **v27; // eax
  unsigned int k; // edi
  char *v29; // edx
  int m; // eax
  int v31; // ecx
  NiRTTI *v32; // eax
  char v33; // al
  int v34; // eax
  PlayerCharacter *v35; // eax
  PlayerCharacter *v36; // edi
  int v37; // eax
  int v38; // eax
  LPARAM v39; // ecx
  NiRTTI *v40; // eax
  char v41; // al
  int v42; // eax
  LRESULT v43; // eax
  _DWORD *v44; // ebp
  int v45; // edi
  const char **v46; // eax
  unsigned int ii; // edi
  char *v48; // edx
  int jj; // eax
  int v50; // edx
  unsigned int result; // eax
  unsigned int kk; // esi
  HWND v53; // [esp+8h] [ebp-304h]
  HWND v54; // [esp+8h] [ebp-304h]
  HWND v55; // [esp+8h] [ebp-304h]
  HWND v56; // [esp+8h] [ebp-304h]
  HWND v57; // [esp+8h] [ebp-304h]
  HWND v58; // [esp+8h] [ebp-304h]
  size_t v59; // [esp+14h] [ebp-2F8h]
  NiObject **v61; // [esp+30h] [ebp-2DCh]
  int v62; // [esp+38h] [ebp-2D4h]
  LPARAM n; // [esp+38h] [ebp-2D4h]
  LPARAM lParam[6]; // [esp+3Ch] [ebp-2D0h] BYREF
  char *v65; // [esp+54h] [ebp-2B8h]
  int v66; // [esp+5Ch] [ebp-2B0h]
  int v67; // [esp+60h] [ebp-2ACh]
  int v68; // [esp+68h] [ebp-2A4h]
  LRESULT v69; // [esp+70h] [ebp-29Ch]
  char Dest[64]; // [esp+74h] [ebp-298h] BYREF
  char v71[63]; // [esp+B4h] [ebp-258h] BYREF
  char v72; // [esp+F3h] [ebp-219h] BYREF
  char v73[260]; // [esp+F4h] [ebp-218h] BYREF
  char v74[260]; // [esp+1F8h] [ebp-114h] BYREF
  unsigned int v75; // [esp+308h] [ebp-4h]

  v3 = (float *)a3; /*0x49652b*/
  v4 = *(const char **)(a3 + 8); /*0x496539*/
  lParam[0] = a2; /*0x49653c*/
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 4); /*0x496543*/
  lParam[1] = 0xFFFF0002; /*0x496550*/
  lParam[2] = 0x27; /*0x496558*/
  v68 = a3; /*0x496560*/
  v6 = (const char **)v5(a3); /*0x496564*/
  _sprintf(v73, "%s \"%s\" (%.0f,%.0f,%.0f)", *v6, v4, v3[0x15], v3[0x16], v3[0x17]); /*0x49658e*/
  if ( 1.0 != *(float *)(a3 + 0x60) ) /*0x4965a8*/
  {
    _sprintf(v74, " Scale %.1f", *(float *)(a3 + 0x60)); /*0x4965c8*/
    v7 = strlen(v74) + 1; /*0x4965e7*/
    v8 = &v72; /*0x4965f2*/
    while ( *++v8 ) /*0x4965fd*/
      ; /*0x4965f5*/
    qmemcpy(v8, v74, v7); /*0x496606*/
  }
  if ( (*(_BYTE *)(a3 + 0x18) & 1) != 0 ) /*0x496613*/
  {
    v10 = &v72; /*0x49661c*/
    while ( *++v10 ) /*0x496628*/
      ; /*0x496620*/
    v12 = off_A3DC90; /*0x496630*/
    *(_DWORD *)v10 = dword_A3DC8C; /*0x496636*/
    *((_DWORD *)v10 + 1) = v12; /*0x496638*/
  }
  v13 = *(float *)a3; /*0x49663b*/
  v65 = v73; /*0x496645*/
  if ( (*(int (__thiscall **)(int))(LODWORD(v13) + 8))(a3) ) /*0x49664e*/
  {
    v14 = 3; /*0x496654*/
  }
  else
  {
    v15 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x496663*/
    if ( v15 ) /*0x496667*/
    {
      while ( v15 != &stru_B3FACC ) /*0x496675*/
      {
        v15 = v15->parent; /*0x49667b*/
        if ( !v15 ) /*0x496680*/
          goto LABEL_14; /*0x496680*/
      }
      v14 = 1; /*0x496768*/
    }
    else
    {
LABEL_14:
      v16 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x496682*/
      if ( v16 ) /*0x49668e*/
      {
        while ( v16 != &stru_B3FD14 ) /*0x496695*/
        {
          v16 = v16->parent; /*0x49669b*/
          if ( !v16 ) /*0x4966a0*/
            goto LABEL_17; /*0x4966a0*/
        }
        v14 = 2; /*0x496772*/
      }
      else
      {
LABEL_17:
        v14 = 4; /*0x4966a2*/
      }
    }
  }
  v17 = this; /*0x4966a7*/
  v18 = *(this + 3); /*0x4966ab*/
  v19 = SendMessageA; /*0x4966ae*/
  v66 = v14; /*0x4966b4*/
  v67 = v14; /*0x4966b8*/
  lParam[0] = v19(v18, 0x1100u, 0, (LPARAM)lParam); /*0x4966d2*/
  v61 = (NiObject **)lParam[0]; /*0x4966d6*/
  v53 = *(this + 3); /*0x4966e7*/
  v68 = 0; /*0x4966e8*/
  v65 = "Attributes"; /*0x4966f0*/
  v66 = 5; /*0x4966f8*/
  v67 = 5; /*0x4966fc*/
  lParam[0] = v19(v53, 0x1100u, 0, (LPARAM)lParam); /*0x496704*/
  v20 = FormHeapAlloc(0x10u); /*0x49670d*/
  v75 = 0; /*0x496718*/
  if ( v20 ) /*0x496723*/
  {
    *(_WORD *)(v20 + 0xA) = 0; /*0x496735*/
    *(_WORD *)(v20 + 0xC) = 0; /*0x496739*/
    *(_DWORD *)v20 = &NiTArray<char *>::`vftable'; /*0x496740*/
    *(_WORD *)(v20 + 8) = 0x80; /*0x496746*/
    *(_WORD *)(v20 + 0xE) = 0x80; /*0x49674a*/
    v3 = (float *)a3; /*0x496758*/
    v17 = this; /*0x49675c*/
    *(_DWORD *)(v20 + 4) = FormHeapAlloc(0x200u); /*0x496763*/
  }
  else
  {
    v20 = 0; /*0x49677c*/
  }
  v21 = *(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 0x30); /*0x496781*/
  v75 = 0xFFFFFFFF; /*0x496787*/
  v21(v3, v20); /*0x496792*/
  for ( i = 0; i < *(unsigned __int16 *)(v20 + 0xA); ++i ) /*0x496796*/
  {
    v23 = *(char **)(*(_DWORD *)(v20 + 4) + 4 * i); /*0x4967a3*/
    v66 = 6; /*0x4967b2*/
    v67 = 6; /*0x4967b6*/
    v54 = v17[3]; /*0x4967c2*/
    v65 = v23; /*0x4967c3*/
    v19(v54, 0x1100u, 0, (LPARAM)lParam); /*0x4967c7*/
  }
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(v20 + 0xA); *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v25) = 0 ) /*0x4967d6*/
    v25 = (unsigned __int16)j++; /*0x4967e3*/
  *(_WORD *)(v20 + 0xA) = 0; /*0x4967fc*/
  *(_WORD *)(v20 + 0xC) = 0; /*0x496800*/
  v26 = *(_DWORD **)(a3 + 0xC); /*0x496804*/
  if ( v26 )
  {
    v66 = 5; /*0x49681d*/
    v67 = 5; /*0x496821*/
    lParam[0] = (LPARAM)v61; /*0x49682b*/
    v55 = *(this + 3); /*0x496837*/
    v65 = "Controllers"; /*0x496838*/
    v69 = v19(v55, 0x1100u, 0, (LPARAM)lParam); /*0x496842*/
    do
    {
      v27 = (const char **)(*(int (__thiscall **)(_DWORD *))(*v26 + 4))(v26); /*0x49684e*/
      LODWORD(v59) = 0x3F; /*0x496852*/
      strncpy(Dest, *v27, v59); /*0x49685a*/
      v65 = Dest; /*0x49686a*/
      v66 = 6; /*0x496878*/
      v67 = 6; /*0x49687c*/
      lParam[0] = v69; /*0x496886*/
      v56 = *(this + 3); /*0x496892*/
      Dest[0x3F] = 0; /*0x496893*/
      lParam[0] = v19(v56, 0x1100u, 0, (LPARAM)lParam); /*0x49689d*/
      (*(void (__thiscall **)(_DWORD *, int))(*v26 + 0x30))(v26, v20); /*0x4968aa*/
      for ( k = 0; k < *(unsigned __int16 *)(v20 + 0xA); ++k ) /*0x4968ae*/
      {
        v29 = *(char **)(*(_DWORD *)(v20 + 4) + 4 * k); /*0x4968b7*/
        v66 = 6; /*0x4968c3*/
        v67 = 6; /*0x4968c7*/
        v65 = v29; /*0x4968d2*/
        v19(*(this + 3), 0x1100u, 0, (LPARAM)lParam); /*0x4968df*/
      }
      for ( m = 0; (unsigned __int16)m < *(_WORD *)(v20 + 0xA); *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v31) = 0 ) /*0x4968f0*/
        v31 = (unsigned __int16)m++; /*0x4968f9*/
      *(_WORD *)(v20 + 0xA) = 0; /*0x496908*/
      *(_WORD *)(v20 + 0xC) = 0; /*0x49690c*/
      v32 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*v26 + 4))(v26); /*0x496918*/
      if ( v32 ) /*0x49691c*/
      {
        while ( v32 != &stru_B3CAC0 ) /*0x496925*/
        {
          v32 = v32->parent; /*0x496927*/
          if ( !v32 ) /*0x49692c*/
            goto LABEL_36; /*0x49692c*/
        }
        v33 = 1; /*0x4969a0*/
      }
      else
      {
LABEL_36:
        v33 = 0; /*0x49692e*/
      }
      v62 = v33 != 0 ? (unsigned int)v26 : 0;
      if ( v62 )
      {
        v34 = unk_B3CC30; /*0x496940*/
        if ( !unk_B3CC30 ) /*0x496940*/
        {
          v35 = sub_4DC270(a3); /*0x49694e*/
          v36 = v35; /*0x496953*/
          if ( v35 /*0x496996*/
            && v35->vtbl->super.super.super.IsActor((TESObjectREFR *)v35)
            && v36->vtbl->super.GetMountedHorse((Actor *)v36)
            && (v37 = (int)v36->vtbl->super.GetMountedHorse((Actor *)v36),
                (v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x164))(v37)) != 0) )
          {
            v34 = *(_DWORD *)(v38 + 0x98); /*0x496998*/
          }
          else
          {
            v34 = unk_B3CC30; /*0x4969a4*/
          }
        }
        v39 = lParam[0]; /*0x4969a9*/
        unk_B3CC34 = v34; /*0x4969ad*/
        unk_B3CC30 = v62; /*0x4969bc*/
        sub_495AF0(this, v39, v62); /*0x4969c1*/
      }
      else
      {
        v40 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*v26 + 4))(v26); /*0x4969d0*/
        if ( v40 ) /*0x4969d4*/
        {
          while ( v40 != &stru_B3CD7C ) /*0x4969e5*/
          {
            v40 = v40->parent; /*0x4969eb*/
            if ( !v40 ) /*0x4969f0*/
              goto LABEL_50; /*0x4969f0*/
          }
          v41 = 1; /*0x496bf9*/
        }
        else
        {
LABEL_50:
          v41 = 0; /*0x4969f2*/
        }
        v42 = v41 != 0 ? (unsigned int)v26 : 0;
        if ( v42 ) /*0x4969fa*/
          sub_495C10(this, lParam[0], v42); /*0x496a06*/
      }
      v26 = (_DWORD *)v26[0xD]; /*0x496a0b*/
    }
    while ( v26 );
  }
  sub_495840(this, (LPARAM)v61, a3); /*0x496a24*/
  if ( *(_DWORD *)(a3 + 0xA4) ) /*0x496a29*/
  {
    v66 = 5; /*0x496a44*/
    v67 = 5; /*0x496a48*/
    lParam[0] = (LPARAM)v61; /*0x496a52*/
    v57 = *(this + 3); /*0x496a5e*/
    v65 = "Properties"; /*0x496a5f*/
    v43 = v19(v57, 0x1100u, 0, (LPARAM)lParam); /*0x496a67*/
    v44 = *(_DWORD **)(a3 + 0x9C); /*0x496a6b*/
    for ( n = v43; v44; *(_WORD *)(v20 + 0xC) = 0 ) /*0x496a77*/
    {
      v45 = v44[2]; /*0x496a80*/
      v44 = (_DWORD *)*v44; /*0x496a8b*/
      v46 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v45 + 4))(v45); /*0x496a90*/
      LODWORD(v59) = 0x3F; /*0x496a94*/
      strncpy(v71, *v46, v59); /*0x496a9f*/
      v65 = v71; /*0x496ab2*/
      v66 = 6; /*0x496ac0*/
      v67 = 6; /*0x496ac4*/
      lParam[0] = n; /*0x496ace*/
      v58 = *(this + 3); /*0x496ada*/
      v72 = 0; /*0x496adb*/
      lParam[0] = v19(v58, 0x1100u, 0, (LPARAM)lParam); /*0x496ae5*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v45 + 0x30))(v45, v20); /*0x496af1*/
      for ( ii = 0; ii < *(unsigned __int16 *)(v20 + 0xA); ++ii ) /*0x496af5*/
      {
        v48 = *(char **)(*(_DWORD *)(v20 + 4) + 4 * ii); /*0x496b03*/
        v66 = 6; /*0x496b0f*/
        v67 = 6; /*0x496b13*/
        v65 = v48; /*0x496b1e*/
        v19(*(this + 3), 0x1100u, 0, (LPARAM)lParam); /*0x496b2b*/
      }
      for ( jj = 0; (unsigned __int16)jj < *(_WORD *)(v20 + 0xA); *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v50) = 0 ) /*0x496b3c*/
        v50 = (unsigned __int16)jj++; /*0x496b45*/
      *(_WORD *)(v20 + 0xA) = 0; /*0x496b56*/
    }
  }
  if ( *(_DWORD *)(a3 + 0xA8) ) /*0x496b68*/
    sub_4962A0(this, v61, *(int **)(a3 + 0xA8)); /*0x496b7e*/
  (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x496b8b*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3); /*0x496b94*/
  if ( result ) /*0x496b98*/
  {
    result = *(unsigned __int16 *)(a3 + 0xB6); /*0x496b9a*/
    for ( kk = 0; result > kk; ++kk ) /*0x496b9a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(a3 + 0xB0) + 4 * kk) ) /*0x496bb1*/
        sub_4964F0(this, (LPARAM)v61, *(_DWORD *)(*(_DWORD *)(a3 + 0xB0) + 4 * kk)); /*0x496bbc*/
      result = *(unsigned __int16 *)(a3 + 0xB6); /*0x496bc1*/
    }
  }
  return result; /*0x496bcf*/
}
