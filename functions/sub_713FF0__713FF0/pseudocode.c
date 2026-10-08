char __thiscall sub_713FF0(int **this)
{
  void (__cdecl *v2)(int, unsigned __int16 *, int, int *, int); // eax
  int v3; // eax
  unsigned int v4; // ebp
  _DWORD *v5; // edi
  void (__cdecl *v6)(int, int *, int, LONG *, int); // eax
  void (__cdecl *v7)(int, char *, int, LONG *, int); // edx
  _DWORD *v8; // ecx
  bool v9; // zf
  void (__cdecl *v10)(int, unsigned __int16 *, int, LONG *, int); // edx
  int v11; // edi
  unsigned int v12; // ebp
  bool v13; // cf
  char *v15; // esi
  int v16; // [esp-28h] [ebp-160h]
  int v17; // [esp-14h] [ebp-14Ch]
  int v18; // [esp-14h] [ebp-14Ch]
  int v19; // [esp-14h] [ebp-14Ch]
  rsize_t v20; // [esp-14h] [ebp-14Ch]
  const char *v21; // [esp-Ch] [ebp-144h]
  unsigned __int16 v22; // [esp+14h] [ebp-124h] BYREF
  LONG v23; // [esp+18h] [ebp-120h] BYREF
  int v24; // [esp+1Ch] [ebp-11Ch] BYREF
  unsigned int v25; // [esp+20h] [ebp-118h]
  unsigned __int16 v26; // [esp+24h] [ebp-114h] BYREF
  char Src[256]; // [esp+28h] [ebp-110h] BYREF
  unsigned int v28; // [esp+134h] [ebp-4h]

  v17 = (int)*(this + 0x87); /*0x714041*/
  v2 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v17 + 4); /*0x714042*/
  v24 = 2; /*0x714045*/
  v2(v17, &v22, 2, &v24, 1); /*0x71404d*/
  v3 = FormHeapAlloc((unsigned __int64)v22 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v22);
  v4 = 0; /*0x71406c*/
  v25 = v3; /*0x714076*/
  if ( v22 )
  {
    v5 = (_DWORD *)v3; /*0x71407c*/
    while ( 1 ) /*0x714093*/
    {
      v18 = (int)*(this + 0x87); /*0x714093*/
      v6 = *(void (__cdecl **)(int, int *, int, LONG *, int))(v18 + 4); /*0x714094*/
      v23 = 4; /*0x714097*/
      v6(v18, &v24, 4, &v23, 1); /*0x71409b*/
      v7 = (void (__cdecl *)(int, char *, int, LONG *, int))(*(this + 0x87))[1]; /*0x7140af*/
      v16 = (int)*(this + 0x87); /*0x7140b7*/
      v23 = 1; /*0x7140b8*/
      v7(v16, Src, v24, &v23, 1); /*0x7140c0*/
      v8 = (_DWORD *)unk_B3FB80; /*0x7140cf*/
      Src[v24] = 0; /*0x7140d5*/
      if ( !NiTMap_GetAt(v8, (int)Src, v5) ) /*0x7140da*/
        break; /*0x7140da*/
      ++v4; /*0x7140ec*/
      ++v5; /*0x7140ef*/
      if ( v4 >= v22 ) /*0x7140f3*/
        goto LABEL_5; /*0x7140f3*/
    }
    *(this + 0xE0) = (int *)5; /*0x7141fe*/
    v15 = (char *)(this + 0xE1); /*0x714208*/
    strcpy_s(v15, 0x104u, Src); /*0x714214*/
    HIDWORD(v20) = ": cannot find create function.";
    LODWORD(v20) = 0x104; /*0x71421e*/
    strcat_s(v15, v20, v21); /*0x714224*/
    FormHeapFree(v25); /*0x71422e*/
    return 0; /*0x714236*/
  }
  else
  {
LABEL_5:
    v9 = *(this + 0x7D) == 0; /*0x7140f5*/
    v24 = 0; /*0x7140fc*/
    if ( !v9 ) /*0x714104*/
    {
      do /*0x7141bc*/
      {
        v10 = (void (__cdecl *)(int, unsigned __int16 *, int, LONG *, int))(*(this + 0x87))[1]; /*0x71411d*/
        v19 = (int)*(this + 0x87); /*0x714127*/
        v23 = 2; /*0x714128*/
        v10(v19, &v26, 2, &v23, 1); /*0x714130*/
        v11 = (*(int (**)(void))(v25 + 4 * v26))(); /*0x714143*/
        v23 = v11; /*0x714147*/
        if ( v11 ) /*0x71414b*/
          InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x714151*/
        v12 = (unsigned int)*(this + 0x7E); /*0x714157*/
        v13 = v12 < (unsigned int)*(this + 0x7D); /*0x71415a*/
        v28 = 0; /*0x71415d*/
        if ( !v13 ) /*0x714168*/
          sub_8BCA30(this + 0x7B, (int *)((char *)*(this + 0x80) + v12)); /*0x714172*/
        sub_8BCD40(this + 0x7B, v12, &v23); /*0x71417f*/
        v28 = 0xFFFFFFFF; /*0x714186*/
        if ( v11 ) /*0x714191*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x714197*/
            (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7141a9*/
        }
        v13 = ++v24 < (unsigned int)*(this + 0x7D); /*0x7141b2*/
      }
      while ( v13 ); /*0x7141bc*/
    }
    FormHeapFree(v25); /*0x7141c7*/
    return 1; /*0x7141cf*/
  }
}
