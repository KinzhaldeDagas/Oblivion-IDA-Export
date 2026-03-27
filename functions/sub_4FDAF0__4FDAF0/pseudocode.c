int __userpurge sub_4FDAF0@<eax>(double st5_0@<st2>, double st6_0@<st1>, int a3, int *a4, const char *a5, int a6)
{
  const char *v7; // ebx
  unsigned int v8; // ecx
  int v9; // esi
  double v10; // st7
  int v11; // edx
  char v12; // al
  int v13; // esi
  __int16 v14; // dx
  int v15; // esi
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  unsigned __int8 (__cdecl *v19)(int, int, int *, int); // ebp
  int v20; // ebx
  const char *v21; // eax
  char *v22; // edx
  char v23; // cl
  int v24; // ebp
  int v25; // esi
  __int16 v26; // ax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  size_t v30; // [esp-4h] [ebp-660h]
  int v31; // [esp+4h] [ebp-658h]
  int v32; // [esp+8h] [ebp-654h]
  int v33; // [esp+Ch] [ebp-650h]
  unsigned int v34; // [esp+10h] [ebp-64Ch] BYREF
  int v35; // [esp+14h] [ebp-648h]
  const char *v36; // [esp+18h] [ebp-644h]
  int *v37; // [esp+1Ch] [ebp-640h]
  unsigned int v38; // [esp+20h] [ebp-63Ch]
  int v39; // [esp+24h] [ebp-638h]
  char ArgList[512]; // [esp+28h] [ebp-634h] BYREF
  int v41; // [esp+228h] [ebp-434h]
  char v42; // [esp+22Ch] [ebp-430h]
  int v43; // [esp+230h] [ebp-42Ch]
  int v44; // [esp+234h] [ebp-428h]
  int v45; // [esp+238h] [ebp-424h]
  int v46; // [esp+23Ch] [ebp-420h] BYREF
  char v47[516]; // [esp+240h] [ebp-41Ch] BYREF
  int v48; // [esp+444h] [ebp-218h]
  char Src[512]; // [esp+448h] [ebp-214h] BYREF
  int Size; // [esp+648h] [ebp-14h]

  v7 = a5;
  v35 = a3;
  v37 = a4;
  v36 = a5;
  v38 = strlen(a5);
  v8 = 0;
  v9 = 0;
  v34 = 0;
  if ( !v38 )
  {
LABEL_35:
    *(_BYTE *)(a6 + v9 + 1) = 0;
    return v9;
  }
  while ( 1 )
  {
    if ( !isalpha(v7[v8]) && v7[v34] != 0x22 )
      goto LABEL_32;
    v41 = 0;
    v44 = 0;
    v42 = 0;
    v43 = 0;
    v45 = 0;
    v10 = _memset(ArgList, 0, sizeof(ArgList));
    if ( !sub_4FD7C0(st5_0, st6_0, v10, (char *)v35, ArgList, (int)v7, (int *)&v34, 1, 1) )
      return 0;
    v11 = v41;
    v12 = v42;
    if ( v41 )
    {
      if ( v42 == 0x47 )
        *(_BYTE *)(a6 + v9) = 0x47;
      else
        *(_BYTE *)(a6 + v9) = 0x72;
      v13 = v9 + 1;
      *(_WORD *)(a6 + v13) = v41;
      v9 = v13 + 2;
    }
    if ( v44 )
    {
      v14 = v44;
      *(_BYTE *)(a6 + v9) = v12;
      v15 = v9 + 1;
      *(_WORD *)(a6 + v15) = v14;
LABEL_31:
      v9 = v15 + 2;
      goto LABEL_32;
    }
    if ( v12 != 0x58 )
      break;
    v16 = v43;
    *(_BYTE *)(a6 + v9) = 0x58;
    v17 = v9 + 1;
    *(_WORD *)(a6 + v17) = v43;
    v15 = v17 + 2;
    if ( (unsigned int)(v16 - 0x100) > 0x82 )
    {
      if ( (unsigned int)(v16 - 0x1000) > 0x170 )
        goto LABEL_36;
      v18 = 0x28 * (v16 - 0x1000) + 0xB0C8C0;
    }
    else
    {
      v18 = 0x28 * (v16 - 0x100) + 0xB0B420;
    }
    if ( !v18 )
    {
LABEL_36:
      sub_4FCE30(
        v35,
        "Syntax Error.  Undefined function '%s'.",
        (int)ArgList,
        SHIDWORD(v30),
        v31,
        v32,
        v33,
        v34,
        v35,
        (int)v36,
        (int)v37);
      return 0;
    }
    if ( *(_BYTE *)(v18 + 0x10) && *(_BYTE *)(v35 + 0x38) && !v11 )
    {
      sub_4FCE30(
        v35,
        "Reference function '%s' requires explicit reference in quest script.",
        (int)ArgList,
        SHIDWORD(v30),
        v31,
        v32,
        v33,
        v34,
        v35,
        (int)v36,
        (int)v37);
      return 0;
    }
    v39 = *(_DWORD *)(v18 + 0x14);
    if ( !v39 )
    {
      *(_WORD *)(a6 + v15) = 0;
      goto LABEL_31;
    }
    v19 = *(unsigned __int8 (__cdecl **)(int, int, int *, int))(v18 + 0x1C);
    v20 = *(unsigned __int16 *)(v18 + 0x12);
    sub_4FCC40(&v46);
    v21 = &v36[v34];
    v22 = (char *)(v47 - &v36[v34]);
    do
    {
      v23 = *v21;
      v21[(_DWORD)v22] = *v21;
      ++v21;
    }
    while ( v23 );
    v46 = *v37;
    Size = 0;
    if ( !v19(v20, v39, &v46, v35) )
      return 0;
    v24 = Size;
    *(_WORD *)(a6 + v15) = Size;
    LODWORD(v30) = v24;
    v25 = v15 + 2;
    memcpy((void *)(a6 + v25), Src, v30);
    v34 += v48;
    v7 = v36;
    v9 = v24 + v25;
LABEL_32:
    v27 = v38;
    v28 = v34;
    if ( v34 < v38 )
      *(_BYTE *)(a6 + v9++) = v7[v34];
    v8 = v28 + 1;
    v34 = v8;
    if ( v8 >= v27 )
      goto LABEL_35;
  }
  if ( v12 == 0x47 )
    goto LABEL_32;
  if ( !v11 && sub_4FD0A0((char *)v35, st5_0, st6_0, v10, ArgList, 0, 0) )
  {
    v26 = v41;
    *(_BYTE *)(a6 + v9) = 0x5A;
    v15 = v9 + 1;
    *(_WORD *)(a6 + v15) = v26;
    goto LABEL_31;
  }
  sub_4FCE30(
    v35,
    "Syntax Error.  Unknown command '%s'.",
    (int)ArgList,
    SHIDWORD(v30),
    v31,
    v32,
    v33,
    v34,
    v35,
    (int)v36,
    (int)v37);
  return 0;
}
