signed int __thiscall TESDataHandler_Clear(_BYTE *this)
{
  unsigned int i; // eax
  TES *v3; // ecx
  int v4; // edi
  _DWORD *v5; // ebp
  int j; // edi
  _DWORD *v7; // eax
  int k; // edi
  _DWORD *v9; // eax
  int m; // edi
  _DWORD *v11; // eax
  int n; // edi
  _DWORD *v13; // eax
  int ii; // edi
  _DWORD *v15; // eax
  int jj; // edi
  _DWORD *v17; // eax
  int kk; // edi
  _DWORD *v19; // eax
  int mm; // edi
  _DWORD *v21; // eax
  int nn; // edi
  _DWORD *v23; // eax
  int i1; // edi
  _DWORD *v25; // eax
  int i2; // edi
  _DWORD *v27; // eax
  int v28; // ebp
  int i3; // edi
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  bool v33; // zf
  _DWORD *v34; // eax
  int i4; // edi
  _DWORD *v36; // eax
  int i5; // edi
  _DWORD *v38; // eax
  int i6; // edi
  _DWORD *v40; // eax
  int i7; // edi
  _DWORD *v42; // eax
  int i8; // edi
  _DWORD *v44; // eax
  int i9; // edi
  _DWORD *v46; // eax
  int i10; // edi
  _DWORD *v48; // eax
  int i11; // edi
  _DWORD *v50; // eax
  int i12; // edi
  _DWORD *v52; // eax
  int i13; // edi
  _DWORD *v54; // eax
  int i14; // edi
  _DWORD *v56; // eax
  int i15; // edi
  _DWORD *v58; // eax
  OSGlobals *v59; // eax
  unsigned int v60; // ecx
  int v61; // eax
  int v62; // edx
  _DWORD *v63; // eax
  _DWORD *v64; // ebx
  int v65; // eax
  int v66; // edi
  unsigned int v67; // eax
  char *name; // ebp
  const char *v69; // ebx
  const char *v70; // eax
  int v71; // ebx
  unsigned int v72; // eax
  _DWORD *v73; // ecx
  _DWORD *v74; // ecx
  unsigned int v75; // edi
  unsigned int v77; // [esp+62h] [ebp-24h]
  char v78; // [esp+78h] [ebp-Eh]
  char v79; // [esp+79h] [ebp-Dh]
  _DWORD *v80; // [esp+7Ah] [ebp-Ch]
  int v81; // [esp+7Eh] [ebp-8h]
  int a2; // [esp+82h] [ebp-4h]

  *(this + 0xCD4) = 1;
  sub_447D00(this);
  for ( i = 0; i < dword_B06158; ++i )
    *(_DWORD *)(dword_B06150 + 4 * i) = 0;
  v3 = TES;
  dword_B06158 = 0;
  dword_B0615C = 0;
  sub_442630(v3, 0, 0);
  TES->currentWorldSpace = 0;
  v4 = 0;
  v5 = this + 0x104;
  do
  {
    TESSkill_ClearTESSkill((int)(v5 + 0xFFFFFFF5));
    *v5 = v4 + 0xC;
    ++v4;
    v5 += 0x18;
  }
  while ( v4 < 0x15 );
  for ( j = *((_DWORD *)this + 0x19); j; j = *((_DWORD *)this + 0x19) )
  {
    v7 = *((_DWORD **)this + 0x1A);
    if ( v7 )
    {
      *((_DWORD *)this + 0x1A) = v7[1];
      *((_DWORD *)this + 0x19) = *v7;
      FormHeapFree((unsigned int)v7);
    }
    else
    {
      *((_DWORD *)this + 0x19) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)j + 0x10))(j, 1);
  }
  for ( k = *((_DWORD *)this + 0xD); k; k = *((_DWORD *)this + 0xD) )
  {
    v9 = *((_DWORD **)this + 0xE);
    if ( v9 )
    {
      *((_DWORD *)this + 0xE) = v9[1];
      *((_DWORD *)this + 0xD) = *v9;
      FormHeapFree((unsigned int)v9);
    }
    else
    {
      *((_DWORD *)this + 0xD) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)k + 0x10))(k, 1);
  }
  for ( m = *((_DWORD *)this + 0xF); m; m = *((_DWORD *)this + 0xF) )
  {
    v11 = *((_DWORD **)this + 0x10);
    if ( v11 )
    {
      *((_DWORD *)this + 0x10) = v11[1];
      *((_DWORD *)this + 0xF) = *v11;
      FormHeapFree((unsigned int)v11);
    }
    else
    {
      *((_DWORD *)this + 0xF) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)m + 0x10))(m, 1);
  }
  for ( n = *((_DWORD *)this + 0x23); n; n = *((_DWORD *)this + 0x23) )
  {
    v13 = *((_DWORD **)this + 0x24);
    if ( v13 )
    {
      *((_DWORD *)this + 0x24) = v13[1];
      *((_DWORD *)this + 0x23) = *v13;
      FormHeapFree((unsigned int)v13);
    }
    else
    {
      *((_DWORD *)this + 0x23) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)n + 0x10))(n, 1);
  }
  for ( ii = *((_DWORD *)this + 5); ii; ii = *((_DWORD *)this + 5) )
  {
    v15 = *((_DWORD **)this + 6);
    if ( v15 )
    {
      *((_DWORD *)this + 6) = v15[1];
      *((_DWORD *)this + 5) = *v15;
      FormHeapFree((unsigned int)v15);
    }
    else
    {
      *((_DWORD *)this + 5) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)ii + 0x10))(ii, 1);
  }
  for ( jj = *((_DWORD *)this + 7); jj; jj = *((_DWORD *)this + 7) )
  {
    v17 = *((_DWORD **)this + 8);
    if ( v17 )
    {
      *((_DWORD *)this + 8) = v17[1];
      *((_DWORD *)this + 7) = *v17;
      FormHeapFree((unsigned int)v17);
    }
    else
    {
      *((_DWORD *)this + 7) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)jj + 0x10))(jj, 1);
  }
  for ( kk = *((_DWORD *)this + 0x15); kk; kk = *((_DWORD *)this + 0x15) )
  {
    v19 = *((_DWORD **)this + 0x16);
    if ( v19 )
    {
      *((_DWORD *)this + 0x16) = v19[1];
      *((_DWORD *)this + 0x15) = *v19;
      FormHeapFree((unsigned int)v19);
    }
    else
    {
      *((_DWORD *)this + 0x15) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)kk + 0x10))(kk, 1);
  }
  for ( mm = *((_DWORD *)this + 0x17); mm; mm = *((_DWORD *)this + 0x17) )
  {
    v21 = *((_DWORD **)this + 0x18);
    if ( v21 )
    {
      *((_DWORD *)this + 0x18) = v21[1];
      *((_DWORD *)this + 0x17) = *v21;
      FormHeapFree((unsigned int)v21);
    }
    else
    {
      *((_DWORD *)this + 0x17) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)mm + 0x10))(mm, 1);
  }
  for ( nn = *((_DWORD *)this + 0x1D); nn; nn = *((_DWORD *)this + 0x1D) )
  {
    v23 = *((_DWORD **)this + 0x1E);
    if ( v23 )
    {
      *((_DWORD *)this + 0x1E) = v23[1];
      *((_DWORD *)this + 0x1D) = *v23;
      FormHeapFree((unsigned int)v23);
    }
    else
    {
      *((_DWORD *)this + 0x1D) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)nn + 0x10))(nn, 1);
  }
  for ( i1 = *((_DWORD *)this + 0x21); i1; i1 = *((_DWORD *)this + 0x21) )
  {
    v25 = *((_DWORD **)this + 0x22);
    if ( v25 )
    {
      *((_DWORD *)this + 0x22) = v25[1];
      *((_DWORD *)this + 0x21) = *v25;
      FormHeapFree((unsigned int)v25);
    }
    else
    {
      *((_DWORD *)this + 0x21) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i1 + 0x10))(i1, 1);
  }
  for ( i2 = *((_DWORD *)this + 0x1F); i2; i2 = *((_DWORD *)this + 0x1F) )
  {
    v27 = *((_DWORD **)this + 0x20);
    if ( v27 )
    {
      *((_DWORD *)this + 0x20) = v27[1];
      *((_DWORD *)this + 0x1F) = *v27;
      FormHeapFree((unsigned int)v27);
    }
    else
    {
      *((_DWORD *)this + 0x1F) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i2 + 0x10))(i2, 1);
  }
  sub_52ED10();
  TES->currentExteriorCell = 0;
  v28 = *((_DWORD *)this + 0x33);
  for ( i3 = 0; i3 < v28; ++i3 )
  {
    v30 = *(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i3);
    if ( v30 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 0x10))(v30, 1);
  }
  if ( *((_DWORD *)this + 0x32) )
  {
    if ( *((_DWORD *)this + 0x33) )
    {
      v31 = 0;
      do
      {
        v32 = *((_DWORD *)this + 0x31);
        v33 = *(_DWORD *)(v32 + 4 * v31) == 0;
        v34 = (_DWORD *)(v32 + 4 * v31);
        if ( !v33 )
        {
          *v34 = 0;
          --*((_DWORD *)this + 0x34);
        }
        ++v31;
      }
      while ( v31 < *((_DWORD *)this + 0x33) );
      *((_DWORD *)this + 0x33) = 0;
    }
    v77 = *((_DWORD *)this + 0x31);
    *((_DWORD *)this + 0x32) = 0;
    *((_DWORD *)this + 0x31) = 0;
    FormHeapFree(v77);
  }
  for ( i4 = *((_DWORD *)this + 3); i4; i4 = *((_DWORD *)this + 3) )
  {
    v36 = *((_DWORD **)this + 4);
    if ( v36 )
    {
      *((_DWORD *)this + 4) = v36[1];
      *((_DWORD *)this + 3) = *v36;
      FormHeapFree((unsigned int)v36);
    }
    else
    {
      *((_DWORD *)this + 3) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i4 + 0x10))(i4, 1);
  }
  for ( i5 = *((_DWORD *)this + 0x1B); i5; i5 = *((_DWORD *)this + 0x1B) )
  {
    v38 = *((_DWORD **)this + 0x1C);
    if ( v38 )
    {
      *((_DWORD *)this + 0x1C) = v38[1];
      *((_DWORD *)this + 0x1B) = *v38;
      FormHeapFree((unsigned int)v38);
    }
    else
    {
      *((_DWORD *)this + 0x1B) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i5 + 0x10))(i5, 1);
  }
  for ( i6 = *((_DWORD *)this + 0x13); i6; i6 = *((_DWORD *)this + 0x13) )
  {
    v40 = *((_DWORD **)this + 0x14);
    if ( v40 )
    {
      *((_DWORD *)this + 0x14) = v40[1];
      *((_DWORD *)this + 0x13) = *v40;
      FormHeapFree((unsigned int)v40);
    }
    else
    {
      *((_DWORD *)this + 0x13) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i6 + 0x10))(i6, 1);
  }
  if ( TESDataHandler_g_PlayerRef )
    TESDataHandler_g_PlayerRef->vtbl->super.super.super.super.Destroy((TESForm *)TESDataHandler_g_PlayerRef, 1);
  TESDataHandler_g_PlayerRef = 0;
  for ( i7 = *((_DWORD *)this + 0x11); i7; i7 = *((_DWORD *)this + 0x11) )
  {
    v42 = *((_DWORD **)this + 0x12);
    if ( v42 )
    {
      *((_DWORD *)this + 0x12) = v42[1];
      *((_DWORD *)this + 0x11) = *v42;
      FormHeapFree((unsigned int)v42);
    }
    else
    {
      *((_DWORD *)this + 0x11) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i7 + 0x10))(i7, 1);
  }
  TESDataHandler_g_VampireRace = 0;
  TESObjectListHead_Clear(*(_DWORD **)this);
  for ( i8 = *((_DWORD *)this + 0xB); i8; i8 = *((_DWORD *)this + 0xB) )
  {
    v44 = *((_DWORD **)this + 0xC);
    if ( v44 )
    {
      *((_DWORD *)this + 0xC) = v44[1];
      *((_DWORD *)this + 0xB) = *v44;
      FormHeapFree((unsigned int)v44);
    }
    else
    {
      *((_DWORD *)this + 0xB) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i8 + 0x10))(i8, 1);
  }
  for ( i9 = *((_DWORD *)this + 9); i9; i9 = *((_DWORD *)this + 9) )
  {
    v46 = *((_DWORD **)this + 0xA);
    if ( v46 )
    {
      *((_DWORD *)this + 0xA) = v46[1];
      *((_DWORD *)this + 9) = *v46;
      FormHeapFree((unsigned int)v46);
    }
    else
    {
      *((_DWORD *)this + 9) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i9 + 0x10))(i9, 1);
  }
  for ( i10 = *((_DWORD *)this + 1); i10; i10 = *((_DWORD *)this + 1) )
  {
    v48 = *((_DWORD **)this + 2);
    if ( v48 )
    {
      *((_DWORD *)this + 2) = v48[1];
      *((_DWORD *)this + 1) = *v48;
      FormHeapFree((unsigned int)v48);
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i10 + 0x10))(i10, 1);
  }
  for ( i11 = *((_DWORD *)this + 0x25); i11; i11 = *((_DWORD *)this + 0x25) )
  {
    v50 = *((_DWORD **)this + 0x26);
    if ( v50 )
    {
      *((_DWORD *)this + 0x26) = v50[1];
      *((_DWORD *)this + 0x25) = *v50;
      FormHeapFree((unsigned int)v50);
    }
    else
    {
      *((_DWORD *)this + 0x25) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i11 + 0x10))(i11, 1);
  }
  for ( i12 = *((_DWORD *)this + 0x27); i12; i12 = *((_DWORD *)this + 0x27) )
  {
    v52 = *((_DWORD **)this + 0x28);
    if ( v52 )
    {
      *((_DWORD *)this + 0x28) = v52[1];
      *((_DWORD *)this + 0x27) = *v52;
      FormHeapFree((unsigned int)v52);
    }
    else
    {
      *((_DWORD *)this + 0x27) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i12 + 0x10))(i12, 1);
  }
  for ( i13 = *((_DWORD *)this + 0x29); i13; i13 = *((_DWORD *)this + 0x29) )
  {
    v54 = *((_DWORD **)this + 0x2A);
    if ( v54 )
    {
      *((_DWORD *)this + 0x2A) = v54[1];
      *((_DWORD *)this + 0x29) = *v54;
      FormHeapFree((unsigned int)v54);
    }
    else
    {
      *((_DWORD *)this + 0x29) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i13 + 0x10))(i13, 1);
  }
  TESDataHandler_g_DefaultWater = 0;
  for ( i14 = *((_DWORD *)this + 0x2D); i14; i14 = *((_DWORD *)this + 0x2D) )
  {
    v56 = *((_DWORD **)this + 0x2E);
    if ( v56 )
    {
      *((_DWORD *)this + 0x2E) = v56[1];
      *((_DWORD *)this + 0x2D) = *v56;
      FormHeapFree((unsigned int)v56);
    }
    else
    {
      *((_DWORD *)this + 0x2D) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i14 + 0x10))(i14, 1);
  }
  for ( i15 = *((_DWORD *)this + 0x2B); i15; i15 = *((_DWORD *)this + 0x2B) )
  {
    v58 = *((_DWORD **)this + 0x2C);
    if ( v58 )
    {
      *((_DWORD *)this + 0x2C) = v58[1];
      *((_DWORD *)this + 0x2B) = *v58;
      FormHeapFree((unsigned int)v58);
    }
    else
    {
      *((_DWORD *)this + 0x2B) = 0;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i15 + 0x10))(i15, 1);
  }
  sub_4A6380(*((_DWORD **)this + 0x2F));
  if ( ContainerExtraData_TempObjectREFR_ )
    (*((void (__thiscall **)(TESChildCELL *, int))ContainerExtraData_TempObjectREFR_->vtbl + 4))(
      ContainerExtraData_TempObjectREFR_,
      1);
  v59 = OSGlobals;
  v33 = OSGlobals == 0;
  ContainerExtraData_TempObjectREFR_ = 0;
  if ( v33 || !v59->unk04 )
    sub_5217E0((_DWORD *)g_idleAnimationMap);
  else
    sub_5210A0((_DWORD *)g_idleAnimationMap);
  v60 = dword_B06140;
  v79 = bDisableWarning_MESSAGES;
  v61 = 0;
  bDisableWarning_MESSAGES = 1;
  v78 = 0;
  if ( v60 )
  {
    v62 = dword_B06144;
    while ( !*(_DWORD *)(v62 + 4 * v61) )
    {
      if ( ++v61 >= v60 )
        goto LABEL_144;
    }
    v63 = *(_DWORD **)(v62 + 4 * v61);
  }
  else
  {
LABEL_144:
    v63 = 0;
  }
  v64 = v63;
  while ( v64 )
  {
    v65 = v64[1];
    v66 = v64[2];
    v64 = (_DWORD *)*v64;
    a2 = v65;
    if ( !v64 )
    {
      v67 = (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, v65) + 1;
      if ( v67 < dword_B06140 )
      {
        while ( !*(_DWORD *)(dword_B06144 + 4 * v67) )
        {
          if ( ++v67 >= dword_B06140 )
            goto LABEL_150;
        }
        v64 = *(_DWORD **)(dword_B06144 + 4 * v67);
        v80 = v64;
        goto LABEL_152;
      }
LABEL_150:
      v64 = 0;
    }
    v80 = v64;
LABEL_152:
    if ( v66 )
    {
      if ( *(_BYTE *)(v66 + 4) == 3 )
      {
        if ( v66 != 0xFFFFFFF0 )
        {
          if ( *(_DWORD *)(v66 + 0x14) )
          {
            do
            {
              v71 = *(_DWORD *)(*(_DWORD *)(v66 + 0x14) + 4);
              FormHeapFree(*(_DWORD *)(v66 + 0x14));
              *(_DWORD *)(v66 + 0x14) = v71;
            }
            while ( v71 );
          }
          v64 = v80;
          *(_DWORD *)(v66 + 0x10) = 0;
        }
        TESForm_SetFormID((TESForm *)v66, 0, 1);
      }
      else if ( *(unsigned __int8 *)(v66 + 4) <= 0xAu || *(unsigned __int8 *)(v66 + 4) > 0xCu )
      {
        if ( TESForm_GetOverrideFile((TESForm *)v66, 0xFFFFFFFF) )
          name = TESForm_GetOverrideFile((TESForm *)v66, 0xFFFFFFFF)->name;
        else
          name = "UNKNOWN";
        v69 = *(const char **)(0xC * *(unsigned __int8 *)(v66 + 4) + 0xB05E04);
        v81 = *(_DWORD *)(v66 + 0xC);
        v70 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v66 + 0xD4))(v66);
        PrintError("Form '%s' (%08X) of type %s in file '%s' was not freed.", v70, v81, v69, name);
        NiTMap_SetAt(&TESForm_FormIDMap, a2, 0);
        v64 = v80;
        v78 = 1;
      }
    }
  }
  bDisableWarning_MESSAGES = v79;
  if ( v78 )
    PrintError("Forms were leaked during ClearData. Check Warnings file for more info.");
  v72 = 0;
  if ( *((_DWORD *)this + 0x234) )
  {
    v73 = this + 0x8D4;
    do
    {
      *v73 = 0;
      ++v72;
      ++v73;
    }
    while ( v72 < *((_DWORD *)this + 0x234) );
  }
  v33 = *(this + 0xCD1) == 0;
  *((_DWORD *)this + 0x234) = 0;
  if ( v33 )
  {
    v74 = *((_DWORD **)this + 0x231);
    if ( v74 )
    {
      if ( !*(this + 0xCD0) )
        TESFile_SetIsActive(v74, 0);
      v75 = *((_DWORD *)this + 0x231);
      if ( v75 )
      {
        TESFile_destr(*((CHAR **)this + 0x231));
        FormHeapFree(v75);
      }
      *((_DWORD *)this + 0x231) = 0;
      *((_DWORD *)this + 0x230) = 0x800;
    }
  }
  TESDataHandler_g_DoorMarker = 0;
  TESDataHandler_g_MapMarker = 0;
  TESDataHandler_g_XMarker = 0;
  TESDataHandler_g_XMarkerHeading = 0;
  TESDataHandler_g_TravelMarker = 0;
  TESDataHandler_g_NorthMarker = 0;
  TESDataHandler_g_PrisonMarker = 0;
  TESDataHandler_g_TempleMarker = 0;
  TESDataHandler_g_DivineMarker = 0;
  TESDataHandler_g_Lockpick = 0;
  TESDataHandler_g_SkeletonKey = 0;
  TESDataHandler_g_RepairHammer = 0;
  TESDataHandler_g_HorseMarker = 0;
  TESDataHandler_g_WelkyndStone = 0;
  TESDataHandler_g_BlackSoulGem = 0;
  TESDataHandler_g_AzuraStone = 0;
  TESDataHandler_g_VarlaStone = 0;
  *(this + 0xCD4) = 0;
  return 1;
}
