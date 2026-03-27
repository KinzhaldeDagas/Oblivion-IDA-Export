bool __thiscall sub_6F66E0(
        unsigned int *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        char a9)
{
  int v10; // eax
  const char *v11; // ecx
  ArchiveFile *NiFile; // eax
  bool v13; // cf
  int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // ebx
  void (__thiscall ***v20)(_DWORD, int); // ecx
  unsigned int v21; // eax
  int v22; // edx
  _BYTE *v23; // edi
  char *v24; // edi
  _BYTE *v25; // eax
  char v26; // cl
  bool v27; // bl
  int v28; // [esp-1Ch] [ebp-64h] BYREF
  void *v29; // [esp-18h] [ebp-60h]
  int v30; // [esp-14h] [ebp-5Ch]
  int v31; // [esp-10h] [ebp-58h]
  int v32; // [esp-Ch] [ebp-54h]
  size_t v33; // [esp-8h] [ebp-50h]
  int v34; // [esp+0h] [ebp-48h]
  int *v35; // [esp+14h] [ebp-34h]
  _BYTE v36[5]; // [esp+1Bh] [ebp-2Dh] BYREF
  unsigned int v37; // [esp+20h] [ebp-28h]
  int v38; // [esp+24h] [ebp-24h]
  int v39; // [esp+28h] [ebp-20h]
  int v40; // [esp+2Ch] [ebp-1Ch] BYREF
  int Size; // [esp+30h] [ebp-18h]
  int v42; // [esp+34h] [ebp-14h]
  int v43; // [esp+44h] [ebp-4h]

  v43 = 0;
  v10 = 1;
  if ( a9 )
    v10 = 0x100;
  v11 = (const char *)a3;
  if ( a8 < 0x10 )
    v11 = (const char *)&a3;
  NiFile = FileFinder_LoadNiFile__(v11, 0, 0x2800, v10);
  *(this + 0x10) = (unsigned int)NiFile;
  if ( !NiFile )
  {
    v35 = &v28;
    v33 = 0xF00000000LL;
    LOBYTE(v29) = 0;
    sub_414420((int)&v28, &a2, 0, 0xFFFFFFFF);
    sub_6F6BF0(4, v28, v29, v30, v31, v32, v33, v34);
    v13 = a8 < 0x10;
LABEL_7:
    if ( !v13 )
      FormHeapFree(a3);
    return 0;
  }
  v15 = *(this + 0xD);
  v36[0] = 0;
  sub_6F2CD0(&v36[1], (char *)(v15 + 1), v36);
  v16 = v37;
  v17 = *(this + 0xD);
  LOBYTE(v43) = 1;
  if ( !v37 || v38 == v37 )
  {
    _invalid_parameter_noinfo();
    v16 = v37;
  }
  if ( sub_6F5E50(this, v16, v17, 1) )
  {
    sub_6F61A0(&v40, 0x10, (int)&v36[1]);
    v13 = *(this + 0xD) < 5;
    LOBYTE(v43) = 2;
    if ( v13 )
      _invalid_parameter_noinfo();
    if ( *(this + 0xE) < 0x10 )
      v35 = (int *)(this + 9);
    else
      v35 = (int *)*(this + 9);
    v18 = Size;
    v19 = v42;
    if ( !Size || (unsigned int)(v42 - Size) <= 5 )
      _invalid_parameter_noinfo();
    *(_BYTE *)(v18 + 5) = *((_BYTE *)v35 + 5);
    if ( v19 == v18 )
      _invalid_parameter_noinfo();
    if ( sub_6F5DE0(this + 8, 0, *(this + 0xD), (_DWORD *)v18, strlen((const char *)v18)) )
    {
      v35 = &v28;
      v33 = 0xF00000000LL;
      LOBYTE(v29) = 0;
      sub_414420((int)&v28, &a2, 0, 0xFFFFFFFF);
      sub_6F6BF0(2, v28, v29, v30, v31, v32, v33, v34);
      v20 = (void (__thiscall ***)(_DWORD, int))*(this + 0x10);
      if ( v20 )
        (**v20)(v20, 1);
      HIDWORD(v33) = v18;
      *(this + 0x10) = 0;
      FormHeapFree(HIDWORD(v33));
      if ( v37 )
        FormHeapFree(v37);
      v13 = a8 < 0x10;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      goto LABEL_7;
    }
    v21 = v37;
    if ( !v37 || (v22 = v38, v38 - v37 <= 5) )
    {
      _invalid_parameter_noinfo();
      v22 = v38;
      v21 = v37;
    }
    if ( *(char *)(v21 + 5) > 0x30 )
    {
      v23 = (_BYTE *)sub_6EDA70(this + 8, 5u);
      if ( *v23 != *(_BYTE *)sub_6F1210(&v36[1], 5u) )
      {
        v35 = &v28;
        sub_414680((int)&v28, &a2);
        sub_6F6BF0(4, v28, v29, v30, v31, v32, v33, v34);
        sub_6ED6F0(this);
        sub_794EB0(&v40);
        sub_794EB0(&v36[1]);
        sub_79AB00(&a2);
        return 0;
      }
      v22 = v38;
      v21 = v37;
    }
    if ( !v21 || v22 - v21 <= 5 )
    {
      _invalid_parameter_noinfo();
      v21 = v37;
    }
    v24 = (char *)(v21 + 5);
    v25 = (_BYTE *)sub_6EDA70(this + 8, 5u);
    v26 = *v24;
    v33 = 0xFFFFFFFF00000000uLL;
    *v25 = v26;
    sub_414420((int)(this + 1), &a2, v33, HIDWORD(v33));
    v27 = *(this + 0x10) != 0;
    sub_794EB0(&v40);
    sub_794EB0(&v36[1]);
    sub_79AB00(&a2);
    return v27;
  }
  else
  {
    if ( v37 )
      FormHeapFree(v37);
    v37 = 0;
    v38 = 0;
    v39 = 0;
    if ( a8 < 0x10 )
      return 0;
    FormHeapFree(a3);
    return 0;
  }
}
