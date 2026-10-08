LONG __thiscall sub_7023E0(char *this, unsigned int *a2)
{
  bool v3; // cf
  unsigned int v4; // eax
  void (__cdecl *v5)(unsigned int, char *, int, int *, int); // eax
  char *v6; // ebp
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

  sub_700FC0((NiRenderer *)this, a2); /*0x702402*/
  InterlockedIncrement((volatile LONG *)this + 1); /*0x70240b*/
  v3 = a2[0x36] < 0xA000104; /*0x702411*/
  v4 = a2[0x87]; /*0x70241b*/
  v34 = 0; /*0x702421*/
  if ( !v3 ) /*0x70242a*/
  {
    v30 = v4; /*0x7024db*/
    v9 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v4 + 4); /*0x7024dc*/
    v35 = 1; /*0x7024df*/
    v9(v30, &v34, 1, &v35, 1); /*0x7024e7*/
    v6 = this + 0x34; /*0x7024ec*/
    sub_713620(a2, (int)(this + 0x34)); /*0x7024f2*/
    sub_712BC0(a2, 1); /*0x7024fb*/
LABEL_12:
    sub_712A20(a2); /*0x702500*/
    goto LABEL_13; /*0x702502*/
  }
  v28 = v4; /*0x70243d*/
  v5 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v4 + 4); /*0x70243e*/
  v35 = 1; /*0x702441*/
  v5(v28, &v38, 1, &v35, 1); /*0x702445*/
  v6 = this + 0x34; /*0x70244f*/
  if ( !v38 ) /*0x702452*/
  {
    *(_DWORD *)v6 = 0; /*0x70249c*/
    v29 = a2[0x87]; /*0x7024af*/
    v8 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v29 + 4); /*0x7024b0*/
    v35 = 1; /*0x7024b3*/
    v8(v29, &v33, 1, &v35, 1); /*0x7024b7*/
    if ( !v33 ) /*0x7024c3*/
    {
      sub_712BC0(a2, 0); /*0x7024ca*/
      goto LABEL_13; /*0x7024cf*/
    }
    sub_712BC0(a2, 1); /*0x7024c6*/
    goto LABEL_12; /*0x7024c6*/
  }
  sub_713620(a2, (int)(this + 0x34)); /*0x702457*/
  v7 = *((_DWORD *)this + 0xF); /*0x70245c*/
  if ( v7 ) /*0x702461*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x702467*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x70247d*/
    *((_DWORD *)this + 0xF) = 0; /*0x70247f*/
  }
  v34 = 1; /*0x70248a*/
  sub_712BC0(a2, 0); /*0x70248f*/
LABEL_13:
  v10 = *(char **)v6; /*0x702507*/
  if ( v10 ) /*0x70250c*/
    *((_DWORD *)this + 0xE) = sub_71B090(v10); /*0x702517*/
  if ( v34 ) /*0x70251f*/
  {
    v11 = (char *)a2[0x7A]; /*0x702528*/
    sub_7478F0(v11, *((char **)this + 0xE)); /*0x702531*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)v11 + 4))(v11); /*0x70253e*/
    while ( (*(unsigned __int8 (__thiscall **)(char *, char *, int))(*(_DWORD *)v11 + 8))(v11, Src, 0x104) ) /*0x702558*/
    {
      v12 = sub_712750(a2, (int)Src, (int)this); /*0x702567*/
      if ( v12 ) /*0x70256b*/
      {
        FormHeapFree(*((_DWORD *)this + 0xE)); /*0x702577*/
        v13 = (char *)FormHeapAlloc(0x104u); /*0x702581*/
        *((_DWORD *)this + 0xE) = v13; /*0x702591*/
        strcpy_s(v13, 0x104u, Src); /*0x702594*/
        (*(void (__thiscall **)(unsigned int *, int))(*a2 + 0x24))(a2, v12); /*0x7025a4*/
        goto LABEL_31; /*0x7025a6*/
      }
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)v11 + 4))(v11); /*0x7025b3*/
    if ( (*(unsigned __int8 (__thiscall **)(char *, char *, int))(*(_DWORD *)v11 + 8))(v11, Src, 0x104) ) /*0x7025c7*/
    {
      while ( !NiFile_CanOpenFileWithMode_Indirect((int)Src, 0) ) /*0x7025e2*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(char *, char *, int))(*(_DWORD *)v11 + 8))(v11, Src, 0x104) ) /*0x7025f6*/
          goto LABEL_31; /*0x7025fa*/
      }
      FormHeapFree(*((_DWORD *)this + 0xE)); /*0x702602*/
      v14 = (char *)FormHeapAlloc(0x104u); /*0x70260c*/
      *((_DWORD *)this + 0xE) = v14; /*0x70261c*/
      strcpy_s(v14, 0x104u, Src); /*0x70261f*/
      (*(void (__thiscall **)(unsigned int *, _DWORD, char *))(*a2 + 0x30))(a2, *((_DWORD *)this + 0xE), this); /*0x702633*/
    }
  }
  else
  {
    v15 = *((_DWORD *)this + 0xE); /*0x702637*/
    if ( v15 ) /*0x70263c*/
    {
      v16 = sub_712750(a2, v15, (int)this); /*0x702642*/
      if ( v16 ) /*0x702649*/
        (*(void (__thiscall **)(unsigned int *, int))(*a2 + 0x24))(a2, v16); /*0x702663*/
      else
        (*(void (__thiscall **)(unsigned int *, _DWORD, char *))(*a2 + 0x30))(a2, *((_DWORD *)this + 0xE), this); /*0x702657*/
    }
  }
LABEL_31:
  v31 = a2[0x87]; /*0x702665*/
  v17 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v31 + 4); /*0x702682*/
  v35 = 4; /*0x702685*/
  v17(v31, &v36, 4, &v35, 1); /*0x702689*/
  *((_DWORD *)this + 6) = v36; /*0x702695*/
  v18 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(a2[0x87] + 4); /*0x70269e*/
  v27 = a2[0x87]; /*0x7026a7*/
  v36 = 4; /*0x7026a8*/
  v18(v27, &v35, 4, &v36, 1); /*0x7026ac*/
  *((_DWORD *)this + 8) = v35; /*0x7026b8*/
  v26 = a2[0x87]; /*0x7026c7*/
  v19 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v26 + 4); /*0x7026c8*/
  v36 = 4; /*0x7026cb*/
  v19(v26, &v35, 4, &v36, 1); /*0x7026cf*/
  *((_DWORD *)this + 7) = v35; /*0x7026d5*/
  v20 = a2[0x36]; /*0x7026d8*/
  if ( v20 >= 0x303000C ) /*0x7026e6*/
  {
    if ( v20 >= 0x5000001 ) /*0x7026f2*/
      goto LABEL_37; /*0x7026f2*/
    v21 = *((_DWORD *)this + 6) == 5; /*0x7026f4*/
  }
  else
  {
    v21 = *((_DWORD *)this + 6) == 4; /*0x7026e8*/
  }
  if ( v21 ) /*0x7026f8*/
    *((_DWORD *)this + 6) = 6; /*0x7026fa*/
LABEL_37:
  v22 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(a2[0x87] + 4); /*0x702701*/
  v32 = a2[0x87]; /*0x702716*/
  v36 = 1; /*0x702717*/
  v22(v32, &v37, 1, &v36, 1); /*0x70271b*/
  *(this + 0x40) = v37 != 0; /*0x702728*/
  if ( a2[0x36] >= 0xA010067 ) /*0x702735*/
  {
    v23 = a2[0x87]; /*0x702737*/
    v24 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v23 + 4); /*0x70273d*/
    v36 = 1; /*0x70274d*/
    v24(v23, &v33, 1, &v36, 1); /*0x702751*/
    *(this + 0x41) = v33 != 0; /*0x70275e*/
  }
  result = InterlockedDecrement((volatile LONG *)this + 1); /*0x702765*/
  if ( !result ) /*0x70276d*/
    return (**(LONG (__thiscall ***)(char *, int))this)(this, 1); /*0x702776*/
  return result; /*0x702778*/
}
