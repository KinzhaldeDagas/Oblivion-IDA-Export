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

  v2 = a2;
  v4 = a2;
  if ( *((_DWORD *)a2 + 0x36) >= 0xA010071u )
  {
    v9 = (Ni2DBuffer *)sub_712A90(a2);
    NiSmartPointer_Set__(this, v9);
    v10 = *(void (__cdecl **)(int, char **, int, int *, int))(*((_DWORD *)v2 + 0x87) + 4);
    v19 = *((_DWORD *)v2 + 0x87);
    v20 = 4;
    v10(v19, &a2, 4, &v20, 1);
    *((_WORD *)this + 2) = (_WORD)a2;
    v18 = *((_DWORD *)v2 + 0x87);
    v11 = *(void (__cdecl **)(int, char **, int, int *, int))(v18 + 4);
    v20 = 4;
    v11(v18, &a2, 4, &v20, 1);
    *((_WORD *)this + 3) = (_WORD)a2;
    v12 = *(void (__cdecl **)(int, char **, int, int *, int))(*((_DWORD *)v2 + 0x87) + 4);
    v17 = *((_DWORD *)v2 + 0x87);
    v20 = 4;
    v12(v17, &a2, 4, &v20, 1);
    *((_WORD *)this + 4) = (_WORD)a2;
    v16 = *((_DWORD *)v2 + 0x87);
    v13 = *(void (__cdecl **)(int, char **, int, int *, int))(v16 + 4);
    v20 = 4;
    v13(v16, &a2, 4, &v20, 1);
    *((_WORD *)this + 5) = (_WORD)a2;
    v14 = *((_DWORD *)v2 + 0x87);
    v15 = *(void (__cdecl **)(int, char **, int, int *, int))(v14 + 4);
    v20 = 4;
    v15(v14, &a2, 4, &v20, 1);
    *((_WORD *)this + 6) = (_WORD)a2;
  }
  else
  {
    a2 = 0;
    sub_713620(v4, (int *)&a2);
    v5 = a2;
    if ( a2 )
    {
      *((_WORD *)this + 2) = (unsigned __int16)sub_6C6270((const char **)*this, a2);
      v5 = a2;
    }
    else
    {
      *((_WORD *)this + 2) = 0xFFFF;
    }
    FormHeapFree((unsigned int)v5);
    a2 = 0;
    sub_713620(v2, (int *)&a2);
    v6 = a2;
    if ( a2 )
    {
      *((_WORD *)this + 3) = (unsigned __int16)sub_6C6270((const char **)*this, a2);
      v6 = a2;
    }
    else
    {
      *((_WORD *)this + 3) = 0xFFFF;
    }
    FormHeapFree((unsigned int)v6);
    a2 = 0;
    sub_713620(v2, (int *)&a2);
    v7 = a2;
    if ( a2 )
    {
      *((_WORD *)this + 4) = (unsigned __int16)sub_6C6270((const char **)*this, a2);
      v7 = a2;
    }
    else
    {
      *((_WORD *)this + 4) = 0xFFFF;
    }
    FormHeapFree((unsigned int)v7);
    a2 = 0;
    sub_713620(v2, (int *)&a2);
    v8 = a2;
    if ( a2 )
    {
      *((_WORD *)this + 5) = (unsigned __int16)sub_6C6270((const char **)*this, a2);
      v8 = a2;
    }
    else
    {
      *((_WORD *)this + 5) = 0xFFFF;
    }
    FormHeapFree((unsigned int)v8);
    a2 = 0;
    sub_713620(v2, (int *)&a2);
    if ( a2 )
    {
      *((_WORD *)this + 6) = (unsigned __int16)sub_6C6270((const char **)*this, a2);
      FormHeapFree((unsigned int)a2);
    }
    else
    {
      *((_WORD *)this + 6) = 0xFFFF;
      FormHeapFree(0);
    }
  }
}
