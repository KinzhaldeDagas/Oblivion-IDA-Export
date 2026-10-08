int __userpurge sub_4FDAF0@<eax>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a3@<st0>,
        int a4,
        int *a5,
        const char *a6,
        int a7)
{
  const char *v7; // ebx
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // edx
  char v11; // al
  int v12; // esi
  __int16 v13; // dx
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  unsigned __int8 (__cdecl *v18)(int, int, int *, int); // ebp
  int v19; // ebx
  const char *v20; // eax
  char *v21; // edx
  char v22; // cl
  unsigned int v23; // ebp
  int v24; // esi
  __int16 v25; // ax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  int v29; // [esp+0h] [ebp-65Ch]
  int v30; // [esp+4h] [ebp-658h]
  int v31; // [esp+8h] [ebp-654h]
  int v32; // [esp+Ch] [ebp-650h]
  unsigned int v33; // [esp+10h] [ebp-64Ch] BYREF
  int v34; // [esp+14h] [ebp-648h]
  const char *v35; // [esp+18h] [ebp-644h]
  int *v36; // [esp+1Ch] [ebp-640h]
  unsigned int v37; // [esp+20h] [ebp-63Ch]
  int v38; // [esp+24h] [ebp-638h]
  char ArgList[512]; // [esp+28h] [ebp-634h] BYREF
  int v40; // [esp+228h] [ebp-434h]
  char v41; // [esp+22Ch] [ebp-430h]
  int v42; // [esp+230h] [ebp-42Ch]
  int v43; // [esp+234h] [ebp-428h]
  int v44; // [esp+238h] [ebp-424h]
  int v45; // [esp+23Ch] [ebp-420h] BYREF
  char v46[516]; // [esp+240h] [ebp-41Ch] BYREF
  int v47; // [esp+444h] [ebp-218h]
  char Src[512]; // [esp+448h] [ebp-214h] BYREF
  int Size; // [esp+648h] [ebp-14h]

  v7 = a6; /*0x4fdb13*/
  v34 = a4; /*0x4fdb1c*/
  v36 = a5; /*0x4fdb2a*/
  v35 = a6; /*0x4fdb2e*/
  v37 = strlen(a6); /*0x4fdb32*/
  v8 = 0; /*0x4fdb45*/
  v9 = 0; /*0x4fdb4b*/
  v33 = 0; /*0x4fdb4d*/
  if ( !v37 ) /*0x4fdb51*/
  {
LABEL_35:
    *(_BYTE *)(a7 + v9 + 1) = 0; /*0x4fddb6*/
    return v9; /*0x4fddd5*/
  }
  while ( 1 ) /*0x4fdb60*/
  {
    if ( !isalpha(v7[v8]) && v7[v33] != 0x22 ) /*0x4fdb79*/
      goto LABEL_32; /*0x4fdb79*/
    v40 = 0; /*0x4fdb8a*/
    v43 = 0; /*0x4fdb91*/
    v41 = 0; /*0x4fdb98*/
    v42 = 0; /*0x4fdba0*/
    v44 = 0; /*0x4fdba7*/
    _memset((int)ArgList, 0, sizeof(ArgList)); /*0x4fdbae*/
    if ( !sub_4FD7C0(st5_0, st6_0, a3, (char *)v34, ArgList, (int)v7, (int *)&v33, 1, 1) ) /*0x4fdbd1*/
      return 0; /*0x4fdbd1*/
    v10 = v40; /*0x4fdbd7*/
    v11 = v41; /*0x4fdbe0*/
    if ( v40 ) /*0x4fdbe7*/
    {
      if ( v41 == 0x47 ) /*0x4fdbeb*/
        *(_BYTE *)(a7 + v9) = 0x47; /*0x4fdbed*/
      else
        *(_BYTE *)(a7 + v9) = 0x72; /*0x4fdbf2*/
      v12 = v9 + 1; /*0x4fdbfe*/
      *(_WORD *)(a7 + v12) = v40; /*0x4fdc01*/
      v9 = v12 + 2; /*0x4fdc05*/
    }
    if ( v43 ) /*0x4fdc0f*/
    {
      v13 = v43; /*0x4fdc11*/
      *(_BYTE *)(a7 + v9) = v11; /*0x4fdc19*/
      v14 = v9 + 1; /*0x4fdc1c*/
      *(_WORD *)(a7 + v14) = v13; /*0x4fdc1f*/
LABEL_31:
      v9 = v14 + 2; /*0x4fdd8f*/
      goto LABEL_32; /*0x4fdd8f*/
    }
    if ( v11 != 0x58 ) /*0x4fdc2a*/
      break; /*0x4fdc2a*/
    v15 = v42; /*0x4fdc30*/
    *(_BYTE *)(a7 + v9) = 0x58; /*0x4fdc37*/
    v16 = v9 + 1; /*0x4fdc42*/
    *(_WORD *)(a7 + v16) = v42; /*0x4fdc45*/
    v14 = v16 + 2; /*0x4fdc4f*/
    if ( (unsigned int)(v15 - 0x100) > 0x82 ) /*0x4fdc57*/
    {
      if ( (unsigned int)(v15 - 0x1000) > 0x170 ) /*0x4fdc70*/
        goto LABEL_36; /*0x4fdc70*/
      v17 = 0x28 * (v15 - 0x1000) + 0xB0C8C0; /*0x4fdc79*/
    }
    else
    {
      v17 = 0x28 * (v15 - 0x100) + 0xB0B420; /*0x4fdc5c*/
    }
    if ( !v17 ) /*0x4fdc82*/
    {
LABEL_36:
      sub_4FCE30( /*0x4fddd8*/
        v34,
        "Syntax Error.  Undefined function '%s'.",
        (int)ArgList,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        (int)v35,
        (int)v36);
      return 0; /*0x4fddf1*/
    }
    if ( *(_BYTE *)(v17 + 0x10) && *(_BYTE *)(v34 + 0x38) && !v10 ) /*0x4fdc9a*/
    {
      sub_4FCE30( /*0x4fddfe*/
        v34,
        "Reference function '%s' requires explicit reference in quest script.",
        (int)ArgList,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        (int)v35,
        (int)v36);
      return 0; /*0x4fde08*/
    }
    v38 = *(_DWORD *)(v17 + 0x14); /*0x4fdca5*/
    if ( !v38 ) /*0x4fdca9*/
    {
      *(_WORD *)(a7 + v14) = 0; /*0x4fdd52*/
      goto LABEL_31; /*0x4fdd56*/
    }
    v18 = *(unsigned __int8 (__cdecl **)(int, int, int *, int))(v17 + 0x1C); /*0x4fdcaf*/
    v19 = *(unsigned __int16 *)(v17 + 0x12); /*0x4fdcb2*/
    sub_4FCC40(&v45); /*0x4fdcbd*/
    v20 = &v35[v33]; /*0x4fdcca*/
    v21 = (char *)(v46 - &v35[v33]); /*0x4fdcd4*/
    do /*0x4fdce0*/
    {
      v22 = *v20; /*0x4fdcd6*/
      v20[(_DWORD)v21] = *v20; /*0x4fdcd8*/
      ++v20; /*0x4fdcdb*/
    }
    while ( v22 ); /*0x4fdce0*/
    v45 = *v36; /*0x4fdcf4*/
    Size = 0; /*0x4fdd02*/
    if ( !v18(v19, v38, &v45, v34) ) /*0x4fdd14*/
      return 0; /*0x4fdd14*/
    v23 = Size; /*0x4fdd1a*/
    *(_WORD *)(a7 + v14) = Size; /*0x4fdd21*/
    v24 = v14 + 2; /*0x4fdd2d*/
    memcpy((void *)(a7 + v24), Src, v23); /*0x4fdd35*/
    v33 += v47; /*0x4fdd41*/
    v7 = v35; /*0x4fdd45*/
    v9 = v23 + v24; /*0x4fdd4c*/
LABEL_32:
    v26 = v37; /*0x4fdd92*/
    v27 = v33; /*0x4fdd96*/
    if ( v33 < v37 ) /*0x4fdd9c*/
      *(_BYTE *)(a7 + v9++) = v7[v33]; /*0x4fdda1*/
    v8 = v27 + 1; /*0x4fdda7*/
    v33 = v8; /*0x4fddac*/
    if ( v8 >= v26 ) /*0x4fddb0*/
      goto LABEL_35; /*0x4fddb0*/
  }
  if ( v11 == 0x47 ) /*0x4fdd5a*/
    goto LABEL_32; /*0x4fdd5a*/
  if ( !v10 && sub_4FD0A0((char *)v34, st5_0, st6_0, a3, ArgList, 0, 0) ) /*0x4fdd6f*/
  {
    v25 = v40; /*0x4fdd7c*/
    *(_BYTE *)(a7 + v9) = 0x5A; /*0x4fdd84*/
    v14 = v9 + 1; /*0x4fdd88*/
    *(_WORD *)(a7 + v14) = v25; /*0x4fdd8b*/
    goto LABEL_31; /*0x4fdd8b*/
  }
  sub_4FCE30( /*0x4fde19*/
    v34,
    "Syntax Error.  Unknown command '%s'.",
    (int)ArgList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    (int)v35,
    (int)v36);
  return 0; /*0x4fddbd*/
}
