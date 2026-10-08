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
  _DWORD *v11; // ebx
  char *v12; // ecx
  _BYTE *v13; // edx
  char v14; // al
  int v17; // [esp+0h] [ebp-434h]
  int v18; // [esp+4h] [ebp-430h] BYREF
  int ArgList[128]; // [esp+8h] [ebp-42Ch] BYREF
  int v20; // [esp+208h] [ebp-22Ch]
  char v21; // [esp+20Ch] [ebp-228h]
  int v22; // [esp+210h] [ebp-224h]
  int v23; // [esp+214h] [ebp-220h]
  int v24; // [esp+218h] [ebp-21Ch]
  char a2[532]; // [esp+21Ch] [ebp-218h] BYREF

  if ( *(_DWORD *)(a7 + 4) >= strlen(*(const char **)a7) ) /*0x4ff4ef*/
    return 0xFFFF; /*0x4ff50b*/
  v8 = (_DWORD *)FormHeapAlloc(0x41Cu); /*0x4ff515*/
  if ( v8 ) /*0x4ff521*/
    v9 = sub_4FCC40(v8); /*0x4ff52a*/
  else
    v9 = 0; /*0x4ff52e*/
  *v9 = *(_DWORD *)(a7 + 0x1C) + 1; /*0x4ff538*/
  v10 = sub_4FCF10(st5_0, st6_0, a3, (_DWORD *)a7, v9); /*0x4ff53a*/
  if ( !v10 ) /*0x4ff544*/
  {
    *(_DWORD *)(a7 + 0x14) = v9[0x106]; /*0x4ff54d*/
    FormHeapFree((unsigned int)v9); /*0x4ff550*/
    return 0xFFFF; /*0x4ff55d*/
  }
  *(_DWORD *)(a7 + 4) += v10; /*0x4ff562*/
  v20 = 0; /*0x4ff571*/
  v23 = 0; /*0x4ff578*/
  v21 = 0; /*0x4ff57f*/
  v22 = 0; /*0x4ff586*/
  v24 = 0; /*0x4ff58d*/
  _memset((int)ArgList, 0, sizeof(ArgList)); /*0x4ff594*/
  v11 = v9 + 0x82; /*0x4ff59d*/
  if ( !sub_4FD7C0(st5_0, st6_0, a3, (char *)a7, (char *)ArgList, (int)(v9 + 1), v9 + 0x82, 1, 1) ) /*0x4ff5ae*/
  {
    sub_4FCE30( /*0x4ff5c1*/
      a7,
      "Syntax Error\r\n%s\r\nCould not parse this line.",
      (int)(v9 + 1),
      a5,
      a6,
      a4,
      v17,
      v18,
      ArgList[0],
      ArgList[1],
      ArgList[2]);
    FormHeapFree((unsigned int)v9); /*0x4ff5c7*/
    return 0xFFFF; /*0x4ff641*/
  }
  v9[0x105] = v20; /*0x4ff5d8*/
  if ( v21 != 0x58 ) /*0x4ff5eb*/
  {
    ++*(_DWORD *)(a7 + 0x1C); /*0x4ff644*/
    sub_4FCE30( /*0x4ff653*/
      a7,
      "Script command \"%s\" not found.",
      (int)ArgList,
      a5,
      a6,
      a4,
      v17,
      v18,
      ArgList[0],
      ArgList[1],
      ArgList[2]);
    *(_DWORD *)(a7 + 0x14) = 0xD; /*0x4ff65b*/
    goto LABEL_14; /*0x4ff662*/
  }
  if ( (unsigned int)(v22 - 0x100) <= 0x82 && *(_DWORD *)(a7 + 8) != 1 ) /*0x4ff606*/
  {
    sub_4FCE30( /*0x4ff613*/
      a7,
      "Script command \"%s\" is a console-only command.",
      (int)ArgList,
      a5,
      a6,
      a4,
      v17,
      v18,
      ArgList[0],
      ArgList[1],
      ArgList[2]);
LABEL_14:
    FormHeapFree((unsigned int)v9); /*0x4ff61b*/
    return 0xFFFF; /*0x4ff61c*/
  }
  v12 = (char *)v9 + *v11 + 4; /*0x4ff666*/
  v9[0x104] = v22; /*0x4ff66a*/
  v13 = v9 + 1; /*0x4ff670*/
  do /*0x4ff67e*/
  {
    v14 = *v12; /*0x4ff672*/
    *v13++ = *v12++; /*0x4ff674*/
  }
  while ( v14 ); /*0x4ff67e*/
  v9[0x81] -= *v11; /*0x4ff682*/
  *(_DWORD *)(a7 + 0x1C) = *v9; /*0x4ff68a*/
  if ( v9[0x104] == 0x1D ) /*0x4ff694*/
  {
    v18 = 0; /*0x4ff69d*/
    sub_4FCC00((int)a2); /*0x4ff6a5*/
    if ( !sub_4FD7C0(st5_0, st6_0, a3, (char *)a7, a2, (int)(v9 + 1), &v18, 0, 0) ) /*0x4ff6c7*/
    {
      sub_4FCE30( /*0x4ff6f5*/
        a7,
        "Syntax Error.  Missing script name.",
        a5,
        a6,
        a4,
        v17,
        v18,
        ArgList[0],
        ArgList[1],
        ArgList[2],
        ArgList[3]);
      *(_DWORD *)(a7 + 0x14) = 1; /*0x4ff6fb*/
      FormHeapFree((unsigned int)v9); /*0x4ff702*/
      return 0xFFFF; /*0x4ff70a*/
    }
    BSStringT_Set((BSStringT *)(a7 + 0xC), a2, 0); /*0x4ff6d6*/
  }
  BSSimpleList_PushBack((_DWORD *)(a7 + 0x50), (int)v9); /*0x4ff6df*/
  return v9[0x104]; /*0x4ff4f6*/
}
