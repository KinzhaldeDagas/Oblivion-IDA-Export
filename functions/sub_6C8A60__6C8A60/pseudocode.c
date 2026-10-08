void __thiscall sub_6C8A60(Ni2DBuffer **this, char *a2)
{
  char *v2; // edi
  char *v4; // ecx
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  Ni2DBuffer *v9; // eax
  void (__cdecl *v10)(int, char **, int, int *, int); // edx
  void (__cdecl *v11)(int, char **, int, int *, int); // eax
  void (__cdecl *v12)(int, char **, int, int *, int); // edx
  void (__cdecl *v13)(int, char **, int, int *, int); // eax
  int v14; // edi
  void (__cdecl *v15)(int, char **, int, int *, int); // ecx
  int v16; // [esp-50h] [ebp-60h]
  int v17; // [esp-3Ch] [ebp-4Ch]
  int v18; // [esp-28h] [ebp-38h]
  int v19; // [esp-14h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x6c8a64*/
  v4 = a2; /*0x6c8a74*/
  if ( *((_DWORD *)a2 + 0x36) >= 0xA010071u ) /*0x6c8a76*/
  {
    v9 = (Ni2DBuffer *)sub_712A90(a2); /*0x6c8bac*/
    NiSmartPointer_Set__(this, v9); /*0x6c8bb4*/
    v10 = *(void (__cdecl **)(int, char **, int, int *, int))(*((_DWORD *)v2 + 0x87) + 4); /*0x6c8bc6*/
    v19 = *((_DWORD *)v2 + 0x87); /*0x6c8bd4*/
    v20 = 4; /*0x6c8bd5*/
    v10(v19, &a2, 4, &v20, 1); /*0x6c8bd9*/
    *((_WORD *)this + 2) = (_WORD)a2; /*0x6c8be7*/
    v18 = *((_DWORD *)v2 + 0x87); /*0x6c8bf7*/
    v11 = *(void (__cdecl **)(int, char **, int, int *, int))(v18 + 4); /*0x6c8bf8*/
    v20 = 4; /*0x6c8bfb*/
    v11(v18, &a2, 4, &v20, 1); /*0x6c8bff*/
    *((_WORD *)this + 3) = (_WORD)a2; /*0x6c8c0d*/
    v12 = *(void (__cdecl **)(int, char **, int, int *, int))(*((_DWORD *)v2 + 0x87) + 4); /*0x6c8c17*/
    v17 = *((_DWORD *)v2 + 0x87); /*0x6c8c20*/
    v20 = 4; /*0x6c8c21*/
    v12(v17, &a2, 4, &v20, 1); /*0x6c8c25*/
    *((_WORD *)this + 4) = (_WORD)a2; /*0x6c8c33*/
    v16 = *((_DWORD *)v2 + 0x87); /*0x6c8c43*/
    v13 = *(void (__cdecl **)(int, char **, int, int *, int))(v16 + 4); /*0x6c8c44*/
    v20 = 4; /*0x6c8c47*/
    v13(v16, &a2, 4, &v20, 1); /*0x6c8c4b*/
    *((_WORD *)this + 5) = (_WORD)a2; /*0x6c8c5c*/
    v14 = *((_DWORD *)v2 + 0x87); /*0x6c8c60*/
    v15 = *(void (__cdecl **)(int, char **, int, int *, int))(v14 + 4); /*0x6c8c66*/
    v20 = 4; /*0x6c8c70*/
    v15(v14, &a2, 4, &v20, 1); /*0x6c8c74*/
    *((_WORD *)this + 6) = (_WORD)a2; /*0x6c8c7f*/
  }
  else
  {
    a2 = 0; /*0x6c8a84*/
    sub_713620(v4, (int)&a2); /*0x6c8a88*/
    v5 = a2; /*0x6c8a8d*/
    if ( a2 ) /*0x6c8a98*/
    {
      *((_WORD *)this + 2) = (unsigned __int16)sub_6C6270((const char **)*this, a2); /*0x6c8aa8*/
      v5 = a2; /*0x6c8aac*/
    }
    else
    {
      *((_WORD *)this + 2) = 0xFFFF; /*0x6c8a9a*/
    }
    FormHeapFree((unsigned int)v5); /*0x6c8ab1*/
    a2 = 0; /*0x6c8ac0*/
    sub_713620(v2, (int)&a2); /*0x6c8ac4*/
    v6 = a2; /*0x6c8ac9*/
    if ( a2 ) /*0x6c8acf*/
    {
      *((_WORD *)this + 3) = (unsigned __int16)sub_6C6270((const char **)*this, a2); /*0x6c8adf*/
      v6 = a2; /*0x6c8ae3*/
    }
    else
    {
      *((_WORD *)this + 3) = 0xFFFF; /*0x6c8ad1*/
    }
    FormHeapFree((unsigned int)v6); /*0x6c8ae8*/
    a2 = 0; /*0x6c8af7*/
    sub_713620(v2, (int)&a2); /*0x6c8afb*/
    v7 = a2; /*0x6c8b00*/
    if ( a2 ) /*0x6c8b06*/
    {
      *((_WORD *)this + 4) = (unsigned __int16)sub_6C6270((const char **)*this, a2); /*0x6c8b16*/
      v7 = a2; /*0x6c8b1a*/
    }
    else
    {
      *((_WORD *)this + 4) = 0xFFFF; /*0x6c8b08*/
    }
    FormHeapFree((unsigned int)v7); /*0x6c8b1f*/
    a2 = 0; /*0x6c8b2e*/
    sub_713620(v2, (int)&a2); /*0x6c8b32*/
    v8 = a2; /*0x6c8b37*/
    if ( a2 ) /*0x6c8b3d*/
    {
      *((_WORD *)this + 5) = (unsigned __int16)sub_6C6270((const char **)*this, a2); /*0x6c8b4d*/
      v8 = a2; /*0x6c8b51*/
    }
    else
    {
      *((_WORD *)this + 5) = 0xFFFF; /*0x6c8b3f*/
    }
    FormHeapFree((unsigned int)v8); /*0x6c8b56*/
    a2 = 0; /*0x6c8b65*/
    sub_713620(v2, (int)&a2); /*0x6c8b69*/
    if ( a2 ) /*0x6c8b74*/
    {
      *((_WORD *)this + 6) = (unsigned __int16)sub_6C6270((const char **)*this, a2); /*0x6c8b93*/
      FormHeapFree((unsigned int)a2); /*0x6c8b9c*/
    }
    else
    {
      *((_WORD *)this + 6) = 0xFFFF; /*0x6c8b77*/
      FormHeapFree(0); /*0x6c8b7b*/
    }
  }
}
