char __thiscall sub_6F63B0(
        _DWORD *this,
        unsigned int a2,
        char *Filename,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  FILE *v9; // eax
  const char *p_Filename; // eax
  FILE *v11; // eax
  bool v12; // cf
  int v14; // eax
  void *v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v18; // ebx
  char *v19; // eax
  _BYTE *v20; // edx
  _BYTE *v21; // esi
  char *v22; // esi
  _BYTE *v23; // eax
  char v24; // cl
  int v25; // [esp-1Ch] [ebp-68h] BYREF
  void *v26; // [esp-18h] [ebp-64h]
  int v27; // [esp-14h] [ebp-60h]
  int v28; // [esp-10h] [ebp-5Ch]
  int v29; // [esp-Ch] [ebp-58h]
  __int128 v30; // [esp-8h] [ebp-54h]
  _BYTE v31[5]; // [esp+17h] [ebp-35h] BYREF
  void *DstBuf; // [esp+1Ch] [ebp-30h]
  _BYTE *v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int *v35; // [esp+28h] [ebp-24h]
  _DWORD *v36; // [esp+2Ch] [ebp-20h]
  int v37; // [esp+30h] [ebp-1Ch] BYREF
  int Size; // [esp+34h] [ebp-18h]
  int v39; // [esp+38h] [ebp-14h]
  int v40; // [esp+48h] [ebp-4h]

  v9 = (FILE *)*(this + 0xF);
  v40 = 0;
  if ( v9 )
    fclose(v9);
  DWORD1(v30) = 0;
  v35 = this + 1;
  sub_414500(this + 1, (int)this, EmptyString, *(rsize_t *)((char *)&v30 + 4));
  p_Filename = Filename;
  v12 = a8 < 0x10;
  *(this + 0xF) = 0;
  if ( v12 )
    p_Filename = (const char *)&Filename;
  v11 = fopen(p_Filename, "rb");
  *(this + 0xF) = v11;
  if ( !v11 )
  {
    v35 = &v25;
    *(_QWORD *)&v30 = 0xF00000000LL;
    LOBYTE(v26) = 0;
    sub_414420((int)&v25, &a2, 0, 0xFFFFFFFF);
    sub_6F6BF0(4, v25, v26, v27, v28, v29, v30, SDWORD2(v30));
    v12 = a8 < 0x10;
LABEL_7:
    if ( !v12 )
      FormHeapFree((unsigned int)Filename);
    return 0;
  }
  v14 = *(this + 0xD);
  v31[0] = 0;
  sub_6F2CD0(&v31[1], (char *)(v14 + 1), v31);
  v15 = DstBuf;
  v16 = *(this + 0xD);
  LOBYTE(v40) = 1;
  if ( !DstBuf || v33 == DstBuf )
  {
    _invalid_parameter_noinfo();
    v15 = DstBuf;
  }
  if ( sub_6F6060(this, v15, v16 | 0x100000000LL, *((size_t *)&v30 + 1)) )
  {
    sub_6F61A0(&v37, 0x10, (int)&v31[1]);
    v12 = *(this + 0xD) < 5u;
    LOBYTE(v40) = 2;
    if ( v12 )
      _invalid_parameter_noinfo();
    if ( *(this + 0xE) < 0x10u )
      v36 = this + 9;
    else
      v36 = (_DWORD *)*(this + 9);
    v17 = Size;
    v18 = v39;
    if ( !Size || (unsigned int)(v39 - Size) <= 5 )
      _invalid_parameter_noinfo();
    *(_BYTE *)(v17 + 5) = *((_BYTE *)v36 + 5);
    if ( v18 == v17 )
      _invalid_parameter_noinfo();
    if ( sub_6F5DE0(this + 8, 0, *(this + 0xD), (_DWORD *)v17, strlen((const char *)v17)) )
    {
      v35 = &v25;
      *(_QWORD *)&v30 = 0xF00000000LL;
      LOBYTE(v26) = 0;
      sub_414420((int)&v25, &a2, 0, 0xFFFFFFFF);
      sub_6F6BF0(2, v25, v26, v27, v28, v29, v30, SDWORD2(v30));
      sub_6F5FA0((FILE **)this, (int)this);
      FormHeapFree(v17);
      if ( DstBuf )
        FormHeapFree((unsigned int)DstBuf);
      v12 = a8 < 0x10;
      DstBuf = 0;
      v33 = 0;
      v34 = 0;
      goto LABEL_7;
    }
    v19 = (char *)DstBuf;
    if ( !DstBuf || (v20 = v33, (unsigned int)(v33 - (_BYTE *)DstBuf) <= 5) )
    {
      _invalid_parameter_noinfo();
      v20 = v33;
      v19 = (char *)DstBuf;
    }
    if ( v19[5] > 0x30 )
    {
      v21 = (_BYTE *)sub_6EDA70(this + 8, 5u);
      if ( *v21 != *(_BYTE *)sub_6F1210(&v31[1], 5u) )
      {
        v35 = &v25;
        sub_414680((int)&v25, &a2);
        sub_6F6BF0(4, v25, v26, v27, v28, v29, v30, SDWORD2(v30));
        sub_6F5FA0((FILE **)this, (int)this);
        sub_794EB0(&v37);
        sub_794EB0(&v31[1]);
        sub_79AB00(&a2);
        return 0;
      }
      v20 = v33;
      v19 = (char *)DstBuf;
    }
    if ( !v19 || (unsigned int)(v20 - v19) <= 5 )
    {
      _invalid_parameter_noinfo();
      v19 = (char *)DstBuf;
    }
    v22 = v19 + 5;
    v23 = (_BYTE *)sub_6EDA70(this + 8, 5u);
    v24 = *v22;
    *(_QWORD *)&v30 = 0xFFFFFFFF00000000uLL;
    *v23 = v24;
    sub_414420((int)v35, &a2, v30, DWORD1(v30));
    sub_794EB0(&v37);
    sub_794EB0(&v31[1]);
    sub_79AB00(&a2);
    return 1;
  }
  else
  {
    if ( DstBuf )
      FormHeapFree((unsigned int)DstBuf);
    DstBuf = 0;
    v33 = 0;
    v34 = 0;
    if ( a8 < 0x10 )
      return 0;
    FormHeapFree((unsigned int)Filename);
    return 0;
  }
}
