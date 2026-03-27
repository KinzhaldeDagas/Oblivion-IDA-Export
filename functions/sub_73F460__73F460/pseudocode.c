void __thiscall sub_73F460(int *this, unsigned int *a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, float *, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, float *, int, int *, int); // eax
  int j; // eax
  int v8; // ecx
  void (__cdecl *v9)(int, bool *, int, int *, int); // eax
  void (__cdecl *v10)(int, int, int, int *, int); // edx
  int i; // eax
  int v12; // ecx
  void (__cdecl *v13)(int, int *, int, int *, int); // eax
  int v14; // eax
  void (__cdecl *v15)(int, int *, int, int *, int); // edx
  void (__cdecl *v16)(int, unsigned int **, int, int *, int); // eax
  int v17; // eax
  bool v18; // zf
  void (__cdecl *v19)(int, int, int, int *, int); // eax
  int k; // eax
  int v21; // ecx
  int v22; // eax
  void (__cdecl *v23)(int, int *, int, int *, int); // edx
  void (__cdecl *v24)(int, bool *, int, int *, int); // eax
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // ebp
  unsigned int v28; // ecx
  int v29; // edx
  _DWORD *v30; // eax
  void (__cdecl *v31)(int, bool *, int, int *, int); // eax
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  void (__cdecl *v35)(int, bool *, int, int *, int); // edx
  int v36; // eax
  int v37; // ebx
  void (__cdecl *v38)(int, int, int, int *, int); // eax
  void (__cdecl *v39)(int, float *, int, int *, int); // eax
  int v40; // eax
  unsigned __int16 v41; // bx
  int v42; // [esp-14h] [ebp-30h]
  int v43; // [esp-14h] [ebp-30h]
  int v44; // [esp-14h] [ebp-30h]
  int v45; // [esp-14h] [ebp-30h]
  int v46; // [esp-14h] [ebp-30h]
  int v47; // [esp-14h] [ebp-30h]
  int v48; // [esp-14h] [ebp-30h]
  int v49; // [esp-14h] [ebp-30h]
  int v50; // [esp-14h] [ebp-30h]
  int v51; // [esp-14h] [ebp-30h]
  int v52; // [esp-14h] [ebp-30h]
  int v53; // [esp-14h] [ebp-30h]
  int v54; // [esp-10h] [ebp-2Ch]
  int v55; // [esp-10h] [ebp-2Ch]
  int v56; // [esp-10h] [ebp-2Ch]
  int v57; // [esp-Ch] [ebp-28h]
  int v58; // [esp-Ch] [ebp-28h]
  bool v59; // [esp+13h] [ebp-9h] BYREF
  float v60; // [esp+14h] [ebp-8h] BYREF
  int v61; // [esp+18h] [ebp-4h] BYREF

  v2 = (signed int)a2;
  sub_729450((NiTriBasedGeomData *)this, a2);
  if ( *(_DWORD *)(v2 + 0xD8) < 0x4010007u )
  {
    v42 = *(_DWORD *)(v2 + 0x21C);
    v4 = *(void (__cdecl **)(int, float *, int, int *, int))(v42 + 4);
    v61 = 2;
    v4(v42, &v60, 2, &v61, 1);
  }
  *(this + 0x11) = FormHeapAlloc(
                     (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                   ? 0xFFFFFFFF
                   : 4 * *((unsigned __int16 *)this + 4));
  v5 = *(_DWORD *)(v2 + 0x21C);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA00010Du )
  {
    v44 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(void (__cdecl **)(int, bool *, int, int *, int))(v5 + 4);
    v61 = 1;
    v9(v44, &v59, 1, &v61, 1);
    if ( v59 )
    {
      v57 = 4 * *((unsigned __int16 *)this + 4);
      v10 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v54 = *(this + 0x11);
      v45 = *(_DWORD *)(v2 + 0x21C);
      v61 = 4;
      v10(v45, v54, v57, &v61, 1);
    }
    else
    {
      for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 4); *(float *)(*(this + 0x11) + 4 * v12) = 1.0 )
        v12 = (unsigned __int16)i++;
    }
  }
  else
  {
    v43 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, float *, int, int *, int))(v5 + 4);
    v61 = 4;
    v6(v43, &v60, 4, &v61, 1);
    for ( j = 0; (unsigned __int16)j < *((_WORD *)this + 4); *(float *)(*(this + 0x11) + 4 * v8) = v60 )
      v8 = (unsigned __int16)j++;
  }
  v46 = *(_DWORD *)(v2 + 0x21C);
  v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v46 + 4);
  v61 = 2;
  v13(v46, this + 0x12, 2, &v61, 1);
  v14 = *(_DWORD *)(v2 + 0x21C);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x4010007u )
  {
    v47 = *(_DWORD *)(v2 + 0x21C);
    v16 = *(void (__cdecl **)(int, unsigned int **, int, int *, int))(v14 + 4);
    v61 = 1;
    v16(v47, &a2, 1, &v61, 1);
  }
  else
  {
    v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 4);
    v61 = 4;
    v15(v14, this + 0x13, 4, &v61, 1);
    LOBYTE(a2) = *(this + 0x13) != 0;
  }
  v17 = FormHeapAlloc(
          (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
        ? 0xFFFFFFFF
        : 4 * *((unsigned __int16 *)this + 4));
  v18 = (_BYTE)a2 == 0;
  *(this + 0x13) = v17;
  if ( v18 )
  {
    for ( k = 0; (unsigned __int16)k < *((_WORD *)this + 4); *(float *)(*(this + 0x13) + 4 * v21) = 1.0 )
      v21 = (unsigned __int16)k++;
  }
  else
  {
    v58 = 4 * *((unsigned __int16 *)this + 4);
    v55 = v17;
    v19 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v48 = *(_DWORD *)(v2 + 0x21C);
    v61 = 4;
    v19(v48, v55, v58, &v61, 1);
  }
  if ( *((_BYTE *)this + 0x40) )
  {
    v22 = *(_DWORD *)(v2 + 0x21C);
    if ( *(_DWORD *)(v2 + 0xD8) >= 0x4010000u )
    {
      v49 = *(_DWORD *)(v2 + 0x21C);
      v24 = *(void (__cdecl **)(int, bool *, int, int *, int))(v22 + 4);
      v61 = 1;
      v24(v49, &v59, 1, &v61, 1);
    }
    else
    {
      v23 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 4);
      v61 = 4;
      v23(v22, this + 0x14, 4, &v61, 1);
      v59 = *(this + 0x14) != 0;
    }
    v25 = FormHeapAlloc(
            (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0
          ? 0xFFFFFFFF
          : 0x10 * *((unsigned __int16 *)this + 4));
    v18 = !v59;
    *(this + 0x14) = v25;
    if ( v18 )
    {
      v28 = 0;
      if ( *((_WORD *)this + 4) )
      {
        v29 = 0;
        do
        {
          v30 = (_DWORD *)(v29 + *(this + 0x14));
          *v30 = dword_B27110;
          v30[1] = dword_B27114;
          v30[2] = dword_B27118;
          v30[3] = dword_B2711C;
          ++v28;
          v29 += 0x10;
        }
        while ( v28 < *((unsigned __int16 *)this + 4) );
      }
    }
    else
    {
      v26 = 0;
      if ( *((_WORD *)this + 4) )
      {
        v27 = 0;
        do
        {
          sub_715420((char *)(v27 + *(this + 0x14)), v2);
          ++v26;
          v27 += 0x10;
        }
        while ( v26 < *((unsigned __int16 *)this + 4) );
      }
    }
  }
  else if ( *(_DWORD *)(v2 + 0xD8) >= 0x5000008u )
  {
    v50 = *(_DWORD *)(v2 + 0x21C);
    v31 = *(void (__cdecl **)(int, bool *, int, int *, int))(v50 + 4);
    v61 = 1;
    v31(v50, &v59, 1, &v61, 1);
    if ( v59 )
    {
      v32 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0
            ? 0xFFFFFFFF
            : 0x10 * *((unsigned __int16 *)this + 4));
      v33 = 0;
      v18 = *((_WORD *)this + 4) == 0;
      *(this + 0x14) = v32;
      if ( !v18 )
      {
        do
          sub_715420((char *)(*(this + 0x14) + 0x10 * (unsigned __int16)v33++), v2);
        while ( (unsigned __int16)v33 < *((_WORD *)this + 4) );
      }
      if ( *(_DWORD *)(v2 + 0xD8) <= 0xA000100u )
      {
        v34 = (*(int (__thiscall **)(int *))(*this + 4))(this);
        if ( v34 )
        {
          while ( (char *)v34 != dword_B401DC )
          {
            v34 = *(_DWORD *)(v34 + 4);
            if ( !v34 )
              goto LABEL_39;
          }
        }
        else
        {
LABEL_39:
          FormHeapFree(*(this + 0x14));
          *(this + 0x14) = 0;
        }
      }
    }
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000110u )
    *((_WORD *)this + 0x17) = *((_WORD *)this + 0x17) & 0xFFF | 0x8000;
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA030005u )
  {
    v35 = *(void (__cdecl **)(int, bool *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v51 = *(_DWORD *)(v2 + 0x21C);
    v61 = 1;
    v35(v51, &v59, 1, &v61, 1);
    if ( v59 )
    {
      v36 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
            ? 0xFFFFFFFF
            : 4 * *((unsigned __int16 *)this + 4));
      v37 = 0;
      v18 = *((_WORD *)this + 4) == 0;
      *(this + 0x15) = v36;
      if ( !v18 )
      {
        do
        {
          v56 = *(this + 0x15) + 4 * (unsigned __int16)v37;
          v52 = *(_DWORD *)(v2 + 0x21C);
          v38 = *(void (__cdecl **)(int, int, int, int *, int))(v52 + 4);
          v61 = 4;
          v38(v52, v56, 4, &v61, 1);
          ++v37;
        }
        while ( (unsigned __int16)v37 < *((_WORD *)this + 4) );
      }
    }
    v53 = *(_DWORD *)(v2 + 0x21C);
    v39 = *(void (__cdecl **)(int, float *, int, int *, int))(v53 + 4);
    v61 = 1;
    v39(v53, &v60, 1, &v61, 1);
    if ( LOBYTE(v60) )
    {
      v40 = FormHeapAlloc(
              (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
            ? 0xFFFFFFFF
            : 0xC * *((unsigned __int16 *)this + 4));
      v41 = 0;
      v18 = *((_WORD *)this + 4) == 0;
      *(this + 0x16) = v40;
      if ( !v18 )
      {
        do
          sub_709430((char *)(*(this + 0x16) + 0xC * v41++), v2);
        while ( v41 < *((_WORD *)this + 4) );
      }
    }
  }
}
