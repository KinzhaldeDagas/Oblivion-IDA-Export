char __thiscall sub_6F6230(_DWORD *this, int a2, char *Filename, int a4, int a5, int a6, int a7, unsigned int a8)
{
  FILE *v9; // eax
  const char *p_Filename; // eax
  bool v11; // cf
  FILE *v12; // eax
  _DWORD *v14; // eax
  int v15; // [esp-1Ch] [ebp-40h] BYREF
  void *v16; // [esp-18h] [ebp-3Ch]
  int v17; // [esp-14h] [ebp-38h]
  int v18; // [esp-10h] [ebp-34h]
  int v19; // [esp-Ch] [ebp-30h]
  __int128 v20; // [esp-8h] [ebp-2Ch]
  int *v21; // [esp+14h] [ebp-10h]
  int v22; // [esp+20h] [ebp-4h]

  v9 = (FILE *)*(this + 0xF);
  v22 = 0;
  if ( v9 )
    fclose(v9);
  DWORD1(v20) = 0;
  sub_414500(this + 1, (int)(this + 1), EmptyString, *(rsize_t *)((char *)&v20 + 4));
  p_Filename = Filename;
  v11 = a8 < 0x10;
  *(this + 0xF) = 0;
  if ( v11 )
    p_Filename = (const char *)&Filename;
  v12 = fopen(p_Filename, "wb");
  *(this + 0xF) = v12;
  if ( !v12 )
  {
    v21 = &v15;
    *(_QWORD *)&v20 = 0xF00000000LL;
    LOBYTE(v16) = 0;
    sub_414420((int)&v15, &a2, 0, 0xFFFFFFFF);
    sub_6F6BF0(5, v15, v16, v17, v18, v19, v20, SDWORD2(v20));
    if ( a8 >= 0x10 )
      FormHeapFree((unsigned int)Filename);
    return 0;
  }
  if ( *(this + 0xE) < 0x10u )
    v14 = this + 9;
  else
    v14 = (_DWORD *)*(this + 9);
  if ( sub_6F5FD0(this, v14, (unsigned int)*(this + 0xD) | 0x100000000LL, *((size_t *)&v20 + 1)) )
  {
    sub_414420((int)(this + 1), &a2, 0, 0xFFFFFFFF);
    if ( a8 >= 0x10 )
      FormHeapFree((unsigned int)Filename);
    return 1;
  }
  else
  {
    v21 = &v15;
    *(_QWORD *)&v20 = 0xF00000000LL;
    LOBYTE(v16) = 0;
    sub_414420((int)&v15, &a2, 0, 0xFFFFFFFF);
    sub_6F6BF0(5, v15, v16, v17, v18, v19, v20, SDWORD2(v20));
    if ( *(this + 0xF) )
      fclose((FILE *)*(this + 0xF));
    DWORD1(v20) = 0;
    sub_414500(this + 1, (int)(this + 1), EmptyString, *(rsize_t *)((char *)&v20 + 4));
    v11 = a8 < 0x10;
    *(this + 0xF) = 0;
    if ( v11 )
      return 0;
    FormHeapFree((unsigned int)Filename);
    return 0;
  }
}
