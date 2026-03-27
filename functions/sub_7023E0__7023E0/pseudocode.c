LONG __thiscall sub_7023E0(char *this, unsigned int *a2)
{
  bool v3; // cf
  unsigned int v4; // eax
  void (__cdecl *v5)(unsigned int, char *, int, int *, int); // eax
  char **v6; // ebp
  int v7; // ebx
  void (__cdecl *v8)(unsigned int, char *, int, int *, int); // eax
  void (__cdecl *v9)(unsigned int, char *, int, int *, int); // eax
  char *v10; // ebp
  char *v11; // ebp
  int v12; // ebx
  char *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // eax
  void (__cdecl *v17)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v18)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v19)(unsigned int, int *, int, int *, int); // eax
  unsigned int v20; // eax
  bool v21; // zf
  void (__cdecl *v22)(unsigned int, char *, int, int *, int); // edx
  unsigned int v23; // esi
  void (__cdecl *v24)(unsigned int, char *, int, int *, int); // eax
  LONG result; // eax
  unsigned int v26; // [esp-3Ch] [ebp-164h]
  unsigned int v27; // [esp-28h] [ebp-150h]
  unsigned int v28; // [esp-14h] [ebp-13Ch]
  unsigned int v29; // [esp-14h] [ebp-13Ch]
  unsigned int v30; // [esp-14h] [ebp-13Ch]
  unsigned int v31; // [esp-14h] [ebp-13Ch]
  unsigned int v32; // [esp-14h] [ebp-13Ch]
  char v33; // [esp+12h] [ebp-116h] BYREF
  char v34; // [esp+13h] [ebp-115h] BYREF
  int v35; // [esp+14h] [ebp-114h] BYREF
  int v36; // [esp+18h] [ebp-110h] BYREF
  char v37; // [esp+1Eh] [ebp-10Ah] BYREF
  char v38; // [esp+1Fh] [ebp-109h] BYREF
  char Src[260]; // [esp+20h] [ebp-108h] BYREF

  sub_700FC0((int *)this, a2);
  InterlockedIncrement((volatile LONG *)this + 1);
  v3 = a2[0x36] < 0xA000104;
  v4 = a2[0x87];
  v34 = 0;
  if ( !v3 )
  {
    v30 = v4;
    v9 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v4 + 4);
    v35 = 1;
    v9(v30, &v34, 1, &v35, 1);
    v6 = (char **)(this + 0x34);
    sub_713620(a2, (int *)this + 0xD);
    sub_712BC0(a2, 1);
LABEL_12:
    sub_712A20(a2);
    goto LABEL_13;
  }
  v28 = v4;
  v5 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v4 + 4);
  v35 = 1;
  v5(v28, &v38, 1, &v35, 1);
  v6 = (char **)(this + 0x34);
  if ( !v38 )
  {
    *v6 = 0;
    v29 = a2[0x87];
    v8 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v29 + 4);
    v35 = 1;
    v8(v29, &v33, 1, &v35, 1);
    if ( !v33 )
    {
      sub_712BC0(a2, 0);
      goto LABEL_13;
    }
    sub_712BC0(a2, 1);
    goto LABEL_12;
  }
  sub_713620(a2, (int *)this + 0xD);
  v7 = *((_DWORD *)this + 0xF);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v34 = 1;
  sub_712BC0(a2, 0);
LABEL_13:
  v10 = *v6;
  if ( v10 )
    *((_DWORD *)this + 0xE) = sub_71B090(v10);
  if ( v34 )
  {
    v11 = (char *)a2[0x7A];
    sub_7478F0(v11, *((char **)this + 0xE));
    (*(void (__thiscall **)(char *))(*(_DWORD *)v11 + 4))(v11);
    while ( (*(unsigned __int8 (__thiscall **)(char *, char *, int))(*(_DWORD *)v11 + 8))(v11, Src, 0x104) )
    {
      v12 = sub_712750(a2, (int)Src, (int)this);
      if ( v12 )
      {
        FormHeapFree(*((_DWORD *)this + 0xE));
        v13 = (char *)FormHeapAlloc(0x104u);
        *((_DWORD *)this + 0xE) = v13;
        strcpy_s(v13, 0x104u, Src);
        (*(void (__thiscall **)(unsigned int *, int))(*a2 + 0x24))(a2, v12);
        goto LABEL_31;
      }
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)v11 + 4))(v11);
    if ( (*(unsigned __int8 (__thiscall **)(char *, char *, int))(*(_DWORD *)v11 + 8))(v11, Src, 0x104) )
    {
      while ( !(unsigned __int8)NiFile_CanOpenFileWithMode_Indirect(Src, 0) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(char *, char *, int))(*(_DWORD *)v11 + 8))(v11, Src, 0x104) )
          goto LABEL_31;
      }
      FormHeapFree(*((_DWORD *)this + 0xE));
      v14 = (char *)FormHeapAlloc(0x104u);
      *((_DWORD *)this + 0xE) = v14;
      strcpy_s(v14, 0x104u, Src);
      (*(void (__thiscall **)(unsigned int *, _DWORD, char *))(*a2 + 0x30))(a2, *((_DWORD *)this + 0xE), this);
    }
  }
  else
  {
    v15 = *((_DWORD *)this + 0xE);
    if ( v15 )
    {
      v16 = sub_712750(a2, v15, (int)this);
      if ( v16 )
        (*(void (__thiscall **)(unsigned int *, int))(*a2 + 0x24))(a2, v16);
      else
        (*(void (__thiscall **)(unsigned int *, _DWORD, char *))(*a2 + 0x30))(a2, *((_DWORD *)this + 0xE), this);
    }
  }
LABEL_31:
  v31 = a2[0x87];
  v17 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v31 + 4);
  v35 = 4;
  v17(v31, &v36, 4, &v35, 1);
  *((_DWORD *)this + 6) = v36;
  v18 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(a2[0x87] + 4);
  v27 = a2[0x87];
  v36 = 4;
  v18(v27, &v35, 4, &v36, 1);
  *((_DWORD *)this + 8) = v35;
  v26 = a2[0x87];
  v19 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v26 + 4);
  v36 = 4;
  v19(v26, &v35, 4, &v36, 1);
  *((_DWORD *)this + 7) = v35;
  v20 = a2[0x36];
  if ( v20 >= 0x303000C )
  {
    if ( v20 >= 0x5000001 )
      goto LABEL_37;
    v21 = *((_DWORD *)this + 6) == 5;
  }
  else
  {
    v21 = *((_DWORD *)this + 6) == 4;
  }
  if ( v21 )
    *((_DWORD *)this + 6) = 6;
LABEL_37:
  v22 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(a2[0x87] + 4);
  v32 = a2[0x87];
  v36 = 1;
  v22(v32, &v37, 1, &v36, 1);
  *(this + 0x40) = v37 != 0;
  if ( a2[0x36] >= 0xA010067 )
  {
    v23 = a2[0x87];
    v24 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v23 + 4);
    v36 = 1;
    v24(v23, &v33, 1, &v36, 1);
    *(this + 0x41) = v33 != 0;
  }
  result = InterlockedDecrement((volatile LONG *)this + 1);
  if ( !result )
    return (**(LONG (__thiscall ***)(char *, int))this)(this, 1);
  return result;
}
