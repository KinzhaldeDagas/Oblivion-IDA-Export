signed int __userpurge sub_4FF4C0@<eax>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a3@<st0>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<esi>,
        int a7)
{
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  double v11; // st7
  _DWORD *v12; // ebx
  char *v13; // ecx
  _BYTE *v14; // edx
  char v15; // al
  int v18; // [esp+0h] [ebp-434h]
  int v19; // [esp+4h] [ebp-430h] BYREF
  int ArgList[128]; // [esp+8h] [ebp-42Ch] BYREF
  int v21; // [esp+208h] [ebp-22Ch]
  char v22; // [esp+20Ch] [ebp-228h]
  int v23; // [esp+210h] [ebp-224h]
  int v24; // [esp+214h] [ebp-220h]
  int v25; // [esp+218h] [ebp-21Ch]
  char a2[532]; // [esp+21Ch] [ebp-218h] BYREF

  if ( *(_DWORD *)(a7 + 4) >= strlen(*(const char **)a7) )
    return 0xFFFF;
  v8 = (_DWORD *)FormHeapAlloc(0x41Cu);
  if ( v8 )
    v9 = sub_4FCC40(v8);
  else
    v9 = 0;
  *v9 = *(_DWORD *)(a7 + 0x1C) + 1;
  v10 = sub_4FCF10(st5_0, st6_0, a3, (_DWORD *)a7, v9);
  if ( !v10 )
  {
    *(_DWORD *)(a7 + 0x14) = v9[0x106];
    FormHeapFree((unsigned int)v9);
    return 0xFFFF;
  }
  *(_DWORD *)(a7 + 4) += v10;
  v21 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0;
  v11 = _memset(ArgList, 0, sizeof(ArgList));
  v12 = v9 + 0x82;
  if ( !sub_4FD7C0(st5_0, st6_0, v11, (char *)a7, (char *)ArgList, (int)(v9 + 1), v9 + 0x82, 1, 1) )
  {
    sub_4FCE30(
      a7,
      "Syntax Error\r\n%s\r\nCould not parse this line.",
      (int)(v9 + 1),
      a5,
      a6,
      a4,
      v18,
      v19,
      ArgList[0],
      ArgList[1],
      ArgList[2]);
    FormHeapFree((unsigned int)v9);
    return 0xFFFF;
  }
  v9[0x105] = v21;
  if ( v22 != 0x58 )
  {
    ++*(_DWORD *)(a7 + 0x1C);
    sub_4FCE30(
      a7,
      "Script command \"%s\" not found.",
      (int)ArgList,
      a5,
      a6,
      a4,
      v18,
      v19,
      ArgList[0],
      ArgList[1],
      ArgList[2]);
    *(_DWORD *)(a7 + 0x14) = 0xD;
    goto LABEL_14;
  }
  if ( (unsigned int)(v23 - 0x100) <= 0x82 && *(_DWORD *)(a7 + 8) != 1 )
  {
    sub_4FCE30(
      a7,
      "Script command \"%s\" is a console-only command.",
      (int)ArgList,
      a5,
      a6,
      a4,
      v18,
      v19,
      ArgList[0],
      ArgList[1],
      ArgList[2]);
LABEL_14:
    FormHeapFree((unsigned int)v9);
    return 0xFFFF;
  }
  v13 = (char *)v9 + *v12 + 4;
  v9[0x104] = v23;
  v14 = v9 + 1;
  do
  {
    v15 = *v13;
    *v14++ = *v13++;
  }
  while ( v15 );
  v9[0x81] -= *v12;
  *(_DWORD *)(a7 + 0x1C) = *v9;
  if ( v9[0x104] == 0x1D )
  {
    v19 = 0;
    sub_4FCC00((int)a2);
    if ( !sub_4FD7C0(st5_0, st6_0, v11, (char *)a7, a2, (int)(v9 + 1), &v19, 0, 0) )
    {
      sub_4FCE30(
        a7,
        "Syntax Error.  Missing script name.",
        a5,
        a6,
        a4,
        v18,
        v19,
        ArgList[0],
        ArgList[1],
        ArgList[2],
        ArgList[3]);
      *(_DWORD *)(a7 + 0x14) = 1;
      FormHeapFree((unsigned int)v9);
      return 0xFFFF;
    }
    BSStringT_Set((BSStringT *)(a7 + 0xC), a2, 0);
  }
  BSSimpleList_PushBack((_DWORD *)(a7 + 0x50), (int)v9);
  return v9[0x104];
}
