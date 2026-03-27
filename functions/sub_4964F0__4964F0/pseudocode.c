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
  int v15; // eax
  int v16; // eax
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
  int v32; // eax
  char v33; // al
  int v34; // eax
  PlayerCharacter *v35; // eax
  PlayerCharacter *v36; // edi
  int v37; // eax
  int v38; // eax
  LPARAM v39; // ecx
  int v40; // eax
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

  v3 = (float *)a3;
  v4 = *(const char **)(a3 + 8);
  lParam[0] = a2;
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 4);
  lParam[1] = 0xFFFF0002;
  lParam[2] = 0x27;
  v68 = a3;
  v6 = (const char **)v5(a3);
  _sprintf(v73, "%s \"%s\" (%.0f,%.0f,%.0f)", *v6, v4, v3[0x15], v3[0x16], v3[0x17]);
  if ( 1.0 != *(float *)(a3 + 0x60) )
  {
    _sprintf(v74, " Scale %.1f", *(float *)(a3 + 0x60));
    v7 = strlen(v74) + 1;
    v8 = &v72;
    while ( *++v8 )
      ;
    qmemcpy(v8, v74, v7);
  }
  if ( (*(_BYTE *)(a3 + 0x18) & 1) != 0 )
  {
    v10 = &v72;
    while ( *++v10 )
      ;
    v12 = off_A3DC90;
    *(_DWORD *)v10 = dword_A3DC8C;
    *((_DWORD *)v10 + 1) = v12;
  }
  v13 = *(float *)a3;
  v65 = v73;
  if ( (*(int (__thiscall **)(int))(LODWORD(v13) + 8))(a3) )
  {
    v14 = 3;
  }
  else
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    if ( v15 )
    {
      while ( (char *)v15 != dword_B3FACC )
      {
        v15 = *(_DWORD *)(v15 + 4);
        if ( !v15 )
          goto LABEL_14;
      }
      v14 = 1;
    }
    else
    {
LABEL_14:
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
      if ( v16 )
      {
        while ( (char *)v16 != dword_B3FD14 )
        {
          v16 = *(_DWORD *)(v16 + 4);
          if ( !v16 )
            goto LABEL_17;
        }
        v14 = 2;
      }
      else
      {
LABEL_17:
        v14 = 4;
      }
    }
  }
  v17 = this;
  v18 = *(this + 3);
  v19 = SendMessageA;
  v66 = v14;
  v67 = v14;
  lParam[0] = v19(v18, 0x1100u, 0, (LPARAM)lParam);
  v61 = (NiObject **)lParam[0];
  v53 = *(this + 3);
  v68 = 0;
  v65 = "Attributes";
  v66 = 5;
  v67 = 5;
  lParam[0] = v19(v53, 0x1100u, 0, (LPARAM)lParam);
  v20 = FormHeapAlloc(0x10u);
  v75 = 0;
  if ( v20 )
  {
    *(_WORD *)(v20 + 0xA) = 0;
    *(_WORD *)(v20 + 0xC) = 0;
    *(_DWORD *)v20 = &NiTArray<char *>::`vftable';
    *(_WORD *)(v20 + 8) = 0x80;
    *(_WORD *)(v20 + 0xE) = 0x80;
    v3 = (float *)a3;
    v17 = this;
    *(_DWORD *)(v20 + 4) = FormHeapAlloc(0x200u);
  }
  else
  {
    v20 = 0;
  }
  v21 = *(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 0x30);
  v75 = 0xFFFFFFFF;
  v21(v3, v20);
  for ( i = 0; i < *(unsigned __int16 *)(v20 + 0xA); ++i )
  {
    v23 = *(char **)(*(_DWORD *)(v20 + 4) + 4 * i);
    v66 = 6;
    v67 = 6;
    v54 = v17[3];
    v65 = v23;
    v19(v54, 0x1100u, 0, (LPARAM)lParam);
  }
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(v20 + 0xA); *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v25) = 0 )
    v25 = (unsigned __int16)j++;
  *(_WORD *)(v20 + 0xA) = 0;
  *(_WORD *)(v20 + 0xC) = 0;
  v26 = *(_DWORD **)(a3 + 0xC);
  if ( v26 )
  {
    v66 = 5;
    v67 = 5;
    lParam[0] = (LPARAM)v61;
    v55 = *(this + 3);
    v65 = "Controllers";
    v69 = v19(v55, 0x1100u, 0, (LPARAM)lParam);
    do
    {
      v27 = (const char **)(*(int (__thiscall **)(_DWORD *))(*v26 + 4))(v26);
      LODWORD(v59) = 0x3F;
      strncpy(Dest, *v27, v59);
      v65 = Dest;
      v66 = 6;
      v67 = 6;
      lParam[0] = v69;
      v56 = *(this + 3);
      Dest[0x3F] = 0;
      lParam[0] = v19(v56, 0x1100u, 0, (LPARAM)lParam);
      (*(void (__thiscall **)(_DWORD *, int))(*v26 + 0x30))(v26, v20);
      for ( k = 0; k < *(unsigned __int16 *)(v20 + 0xA); ++k )
      {
        v29 = *(char **)(*(_DWORD *)(v20 + 4) + 4 * k);
        v66 = 6;
        v67 = 6;
        v65 = v29;
        v19(*(this + 3), 0x1100u, 0, (LPARAM)lParam);
      }
      for ( m = 0; (unsigned __int16)m < *(_WORD *)(v20 + 0xA); *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v31) = 0 )
        v31 = (unsigned __int16)m++;
      *(_WORD *)(v20 + 0xA) = 0;
      *(_WORD *)(v20 + 0xC) = 0;
      v32 = (*(int (__thiscall **)(_DWORD *))(*v26 + 4))(v26);
      if ( v32 )
      {
        while ( (BSStringT *)v32 != &stru_B3CAC0 )
        {
          v32 = *(_DWORD *)(v32 + 4);
          if ( !v32 )
            goto LABEL_36;
        }
        v33 = 1;
      }
      else
      {
LABEL_36:
        v33 = 0;
      }
      v62 = v33 != 0 ? (unsigned int)v26 : 0;
      if ( v62 )
      {
        v34 = dword_B3CC30;
        if ( !dword_B3CC30 )
        {
          v35 = sub_4DC270(a3);
          v36 = v35;
          if ( v35
            && v35->vtbl->super.super.super.IsActor((TESObjectREFR *)v35)
            && v36->vtbl->super.GetMountedHorse((Actor *)v36)
            && (v37 = (int)v36->vtbl->super.GetMountedHorse((Actor *)v36),
                (v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x164))(v37)) != 0) )
          {
            v34 = *(_DWORD *)(v38 + 0x98);
          }
          else
          {
            v34 = dword_B3CC30;
          }
        }
        v39 = lParam[0];
        dword_B3CC34 = v34;
        dword_B3CC30 = v62;
        sub_495AF0(this, v39, v62);
      }
      else
      {
        v40 = (*(int (__thiscall **)(_DWORD *))(*v26 + 4))(v26);
        if ( v40 )
        {
          while ( (char *)v40 != dword_B3CD7C )
          {
            v40 = *(_DWORD *)(v40 + 4);
            if ( !v40 )
              goto LABEL_50;
          }
          v41 = 1;
        }
        else
        {
LABEL_50:
          v41 = 0;
        }
        v42 = v41 != 0 ? (unsigned int)v26 : 0;
        if ( v42 )
          sub_495C10(this, lParam[0], v42);
      }
      v26 = (_DWORD *)v26[0xD];
    }
    while ( v26 );
  }
  sub_495840(this, (LPARAM)v61, a3);
  if ( *(_DWORD *)(a3 + 0xA4) )
  {
    v66 = 5;
    v67 = 5;
    lParam[0] = (LPARAM)v61;
    v57 = *(this + 3);
    v65 = "Properties";
    v43 = v19(v57, 0x1100u, 0, (LPARAM)lParam);
    v44 = *(_DWORD **)(a3 + 0x9C);
    for ( n = v43; v44; *(_WORD *)(v20 + 0xC) = 0 )
    {
      v45 = v44[2];
      v44 = (_DWORD *)*v44;
      v46 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v45 + 4))(v45);
      LODWORD(v59) = 0x3F;
      strncpy(v71, *v46, v59);
      v65 = v71;
      v66 = 6;
      v67 = 6;
      lParam[0] = n;
      v58 = *(this + 3);
      v72 = 0;
      lParam[0] = v19(v58, 0x1100u, 0, (LPARAM)lParam);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v45 + 0x30))(v45, v20);
      for ( ii = 0; ii < *(unsigned __int16 *)(v20 + 0xA); ++ii )
      {
        v48 = *(char **)(*(_DWORD *)(v20 + 4) + 4 * ii);
        v66 = 6;
        v67 = 6;
        v65 = v48;
        v19(*(this + 3), 0x1100u, 0, (LPARAM)lParam);
      }
      for ( jj = 0; (unsigned __int16)jj < *(_WORD *)(v20 + 0xA); *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v50) = 0 )
        v50 = (unsigned __int16)jj++;
      *(_WORD *)(v20 + 0xA) = 0;
    }
  }
  if ( *(_DWORD *)(a3 + 0xA8) )
    sub_4962A0(this, v61, *(int **)(a3 + 0xA8));
  (**(void (__thiscall ***)(int, int))v20)(v20, 1);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  if ( result )
  {
    result = *(unsigned __int16 *)(a3 + 0xB6);
    for ( kk = 0; result > kk; ++kk )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a3 + 0xB0) + 4 * kk) )
        sub_4964F0(this, (LPARAM)v61, *(_DWORD *)(*(_DWORD *)(a3 + 0xB0) + 4 * kk));
      result = *(unsigned __int16 *)(a3 + 0xB6);
    }
  }
  return result;
}
