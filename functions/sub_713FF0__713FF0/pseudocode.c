char __thiscall sub_713FF0(_DWORD *this)
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

  v17 = *(this + 0x87);
  v2 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v17 + 4);
  v24 = 2;
  v2(v17, &v22, 2, &v24, 1);
  v3 = FormHeapAlloc((unsigned __int64)v22 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v22);
  v4 = 0;
  v25 = v3;
  if ( v22 )
  {
    v5 = (_DWORD *)v3;
    while ( 1 )
    {
      v18 = *(this + 0x87);
      v6 = *(void (__cdecl **)(int, int *, int, LONG *, int))(v18 + 4);
      v23 = 4;
      v6(v18, &v24, 4, &v23, 1);
      v7 = *(void (__cdecl **)(int, char *, int, LONG *, int))(*(this + 0x87) + 4);
      v16 = *(this + 0x87);
      v23 = 1;
      v7(v16, Src, v24, &v23, 1);
      v8 = (_DWORD *)dword_B3FB80;
      Src[v24] = 0;
      if ( !NiTMap_GetAt(v8, (int)Src, v5) )
        break;
      ++v4;
      ++v5;
      if ( v4 >= v22 )
        goto LABEL_5;
    }
    *(this + 0xE0) = 5;
    v15 = (char *)(this + 0xE1);
    strcpy_s(v15, 0x104u, Src);
    HIDWORD(v20) = ": cannot find create function.";
    LODWORD(v20) = 0x104;
    strcat_s(v15, v20, v21);
    FormHeapFree(v25);
    return 0;
  }
  else
  {
LABEL_5:
    v9 = *(this + 0x7D) == 0;
    v24 = 0;
    if ( !v9 )
    {
      do
      {
        v10 = *(void (__cdecl **)(int, unsigned __int16 *, int, LONG *, int))(*(this + 0x87) + 4);
        v19 = *(this + 0x87);
        v23 = 2;
        v10(v19, &v26, 2, &v23, 1);
        v11 = (*(int (**)(void))(v25 + 4 * v26))();
        v23 = v11;
        if ( v11 )
          InterlockedIncrement((volatile LONG *)(v11 + 4));
        v12 = *(this + 0x7E);
        v13 = v12 < *(this + 0x7D);
        v28 = 0;
        if ( !v13 )
          sub_8BCA30(this + 0x7B, v12 + *(this + 0x80));
        sub_8BCD40(this + 0x7B, v12, &v23);
        v28 = 0xFFFFFFFF;
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
            (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        }
        v13 = (unsigned int)++v24 < *(this + 0x7D);
      }
      while ( v13 );
    }
    FormHeapFree(v25);
    return 1;
  }
}
