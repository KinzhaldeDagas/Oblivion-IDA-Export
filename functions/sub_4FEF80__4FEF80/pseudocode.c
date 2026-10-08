char __usercall sub_4FEF80@<al>(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        char *a7,
        char a8)
{
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edi
  int v13; // edi
  char *v14; // eax
  char v15; // al
  int v16; // ebp
  char *v17; // edi
  char *v18; // edi
  const char *v19; // ebp
  unsigned int v20; // edi
  size_t v21; // [esp-4h] [ebp-1914h]
  size_t v22; // [esp-4h] [ebp-1914h]
  int v23; // [esp+4h] [ebp-190Ch]
  int v24; // [esp+8h] [ebp-1908h]
  int v25; // [esp+Ch] [ebp-1904h]
  int ArgList; // [esp+10h] [ebp-1900h]
  int ArgLista; // [esp+10h] [ebp-1900h]
  int ArgListb; // [esp+10h] [ebp-1900h]
  char ArgListc[4]; // [esp+10h] [ebp-1900h]
  int v30; // [esp+14h] [ebp-18FCh]
  int v31; // [esp+14h] [ebp-18FCh]
  int Str[128]; // [esp+1Ch] [ebp-18F4h] BYREF
  int v33; // [esp+21Ch] [ebp-16F4h]
  char v34; // [esp+220h] [ebp-16F0h]
  int v35; // [esp+224h] [ebp-16ECh]
  int v36; // [esp+228h] [ebp-16E8h]
  int v37; // [esp+22Ch] [ebp-16E4h]
  char Src[512]; // [esp+230h] [ebp-16E0h] BYREF
  int v39; // [esp+430h] [ebp-14E0h]
  char v40; // [esp+434h] [ebp-14DCh]
  int v41; // [esp+438h] [ebp-14D8h]
  int v42; // [esp+43Ch] [ebp-14D4h]
  int v43; // [esp+440h] [ebp-14D0h]
  _BYTE v44[524]; // [esp+444h] [ebp-14CCh] BYREF
  char v45; // [esp+650h] [ebp-12C0h] BYREF

  v8 = *(_DWORD *)(a6 + 0x40C); /*0x4fefa9*/
  v9 = 0; /*0x4fefaf*/
  *(_DWORD *)(a6 + 0x208) = 0; /*0x4fefc5*/
  *(_WORD *)(v8 + a6 + 0x20C) = 1; /*0x4fefc7*/
  *(_DWORD *)(a6 + 0x40C) += 2; /*0x4fefd1*/
  v39 = 0; /*0x4fefdd*/
  v42 = 0; /*0x4fefe4*/
  v40 = 0; /*0x4fefeb*/
  v41 = 0; /*0x4feff2*/
  v43 = 0; /*0x4feff9*/
  _memset((int)Src, 0, sizeof(Src)); /*0x4ff000*/
  v10 = sub_4FD7C0(a1, a2, a3, a7, Src, a6 + 4, (int *)(a6 + 0x208), 0, 0); /*0x4ff015*/
  v11 = v10; /*0x4ff01a*/
  if ( !v10 ) /*0x4ff021*/
  {
    sub_4FCE30((int)a7, "No message text.", SHIDWORD(v21), v23, v24, v25, ArgList, v30, (int)a7, Str[0], Str[1]); /*0x4ff029*/
    return 0; /*0x4ff033*/
  }
  *(_WORD *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = v10; /*0x4ff03e*/
  *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff046*/
  LODWORD(v21) = v10; /*0x4ff053*/
  memcpy((void *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C), Src, v21); /*0x4ff064*/
  *(_DWORD *)(a6 + 0x40C) += v11; /*0x4ff069*/
  v13 = 0; /*0x4ff075*/
  v14 = Src; /*0x4ff081*/
  ArgLista = 0; /*0x4ff088*/
  if ( Src[0] ) /*0x4ff08c*/
  {
    do /*0x4ff0a4*/
    {
      if ( *v14 == 0x25 ) /*0x4ff092*/
      {
        if ( v14[1] == 0x25 ) /*0x4ff097*/
          ++v14; /*0x4ff099*/
        else
          ++v13; /*0x4ff09e*/
      }
      ++v14; /*0x4ff0a1*/
    }
    while ( *v14 ); /*0x4ff0a4*/
    ArgLista = v13; /*0x4ff0ab*/
    if ( v13 >= 0xA ) /*0x4ff0af*/
    {
      sub_4FCE30((int)a7, "Max variables of %d exceeded.", 0xA, SHIDWORD(v22), v23, v24, v25, v13, v30, (int)a7, Str[0]); /*0x4ff0b9*/
      return 0; /*0x4ff0c3*/
    }
  }
  *(_WORD *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = v13; /*0x4ff0c8*/
  *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff0d0*/
  v31 = 0; /*0x4ff0d9*/
  if ( v13 > 0 ) /*0x4ff0dd*/
  {
    do /*0x4ff0ee*/
    {
      v33 = 0; /*0x4ff0ee*/
      v36 = 0; /*0x4ff0f5*/
      v34 = 0; /*0x4ff0fc*/
      v35 = 0; /*0x4ff103*/
      v37 = 0; /*0x4ff10a*/
      _memset((int)Str, 0, sizeof(Str)); /*0x4ff111*/
      if ( !sub_4FD7C0(a1, a2, a3, a7, (char *)Str, a6 + 4, (int *)(a6 + 0x208), 1, 0) ) /*0x4ff138*/
      {
        sub_4FCE30( /*0x4ff33e*/
          (int)a7,
          "Too few variables in MessageBox parameters; expected %d, found %d.",
          ArgLista,
          v31,
          SHIDWORD(v22),
          v23,
          v24,
          v25,
          ArgLista,
          v31,
          (int)a7);
        return 0; /*0x4ff348*/
      }
      v15 = v34; /*0x4ff13e*/
      if ( !v34 ) /*0x4ff147*/
      {
        sub_4FCE30( /*0x4ff358*/
          (int)a7,
          "Unknown variable '%s' in MessageBox parameters.",
          (int)Str,
          SHIDWORD(v22),
          v23,
          v24,
          v25,
          ArgLista,
          v31,
          (int)a7,
          Str[0]);
        return 0; /*0x4ff362*/
      }
      if ( v33 ) /*0x4ff154*/
      {
        if ( v34 == 0x47 ) /*0x4ff158*/
          *(_BYTE *)(a6 + *(_DWORD *)(a6 + 0x40C) + 0x20C) = 0x47; /*0x4ff160*/
        else
          *(_BYTE *)(a6 + *(_DWORD *)(a6 + 0x40C) + 0x20C) = 0x72; /*0x4ff16f*/
        *(_WORD *)(++*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = v33; /*0x4ff18b*/
        *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff193*/
        v15 = v34; /*0x4ff19a*/
      }
      if ( v15 != 0x47 ) /*0x4ff1a3*/
      {
        if ( !v36 ) /*0x4ff1ac*/
        {
          sub_4FCE30( /*0x4ff372*/
            (int)a7,
            "Unknown compiler error in MessageBoxCompile.  Failed to parse variable '%s'.",
            (int)Str,
            SHIDWORD(v22),
            v23,
            v24,
            v25,
            ArgLista,
            v31,
            (int)a7,
            Str[0]);
          return 0; /*0x4ff37c*/
        }
        *(_BYTE *)(a6 + (*(_DWORD *)(a6 + 0x40C))++ + 0x20C) = v15; /*0x4ff1b8*/
        *(_WORD *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = v36; /*0x4ff1d3*/
        *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff1db*/
      }
      ++v31; /*0x4ff1ec*/
    }
    while ( v31 < ArgLista ); /*0x4ff0ee*/
  }
  if ( a8 ) /*0x4ff1fd*/
  {
    v16 = 0; /*0x4ff203*/
    ArgListb = 9; /*0x4ff209*/
    v17 = &v45; /*0x4ff211*/
    do /*0x4ff24e*/
    {
      *((_DWORD *)v17 + 0xFFFFFFFD) = 0; /*0x4ff22d*/
      *(_DWORD *)v17 = 0; /*0x4ff230*/
      v17[0xFFFFFFF8] = 0; /*0x4ff232*/
      *((_DWORD *)v17 + 0xFFFFFFFF) = 0; /*0x4ff235*/
      *((_DWORD *)v17 + 1) = 0; /*0x4ff238*/
      _memset((int)(v17 + 0xFFFFFDF4), 0, 0x200u); /*0x4ff23b*/
      v17 += 0x214; /*0x4ff243*/
      --ArgListb; /*0x4ff249*/
    }
    while ( ArgListb >= 0 ); /*0x4ff24e*/
    v18 = v44; /*0x4ff250*/
    do /*0x4ff282*/
    {
      if ( (int)sub_4FD7C0(a1, a2, a3, a7, v18, a6 + 4, (int *)(a6 + 0x208), 0, 0) <= 0 ) /*0x4ff274*/
        break; /*0x4ff274*/
      ++v16; /*0x4ff276*/
      v18 += 0x214; /*0x4ff279*/
    }
    while ( v16 < 0xA ); /*0x4ff282*/
    *(_WORD *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = v16; /*0x4ff28a*/
    *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff292*/
    *(_DWORD *)ArgListc = v16; /*0x4ff29b*/
    if ( v16 > 0 ) /*0x4ff29f*/
    {
      v19 = v44; /*0x4ff2a9*/
      do /*0x4ff327*/
      {
        *(_WORD *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = 1; /*0x4ff2c6*/
        *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff2d0*/
        v20 = strlen(v19); /*0x4ff2ed*/
        *(_WORD *)(a6 + *(_DWORD *)(a6 + 0x40C) + 0x20C) = v20; /*0x4ff2ef*/
        *(_DWORD *)(a6 + 0x40C) += 2; /*0x4ff2f7*/
        LODWORD(v22) = v20; /*0x4ff304*/
        memcpy((void *)(a6 + *(_DWORD *)(a6 + 0x40C) + 0x20C), v19, v22); /*0x4ff30e*/
        *(_DWORD *)(a6 + 0x40C) += v20; /*0x4ff313*/
        v19 += 0x214; /*0x4ff31c*/
        --*(_DWORD *)ArgListc; /*0x4ff322*/
      }
      while ( *(_DWORD *)ArgListc ); /*0x4ff327*/
    }
  }
  else
  {
    v33 = 0; /*0x4ff38c*/
    v36 = 0; /*0x4ff393*/
    v34 = 0; /*0x4ff39a*/
    v35 = 0; /*0x4ff3a1*/
    v37 = 0; /*0x4ff3a8*/
    _memset((int)Str, 0, sizeof(Str)); /*0x4ff3af*/
    if ( (int)sub_4FD7C0(a1, a2, a3, a7, (char *)Str, a6 + 4, (int *)(a6 + 0x208), 0, 0) > 0 ) /*0x4ff3d1*/
    {
      if ( !sub_47D550((const char *)Str) ) /*0x4ff3d8*/
      {
        sub_4FCE30( /*0x4ff3ea*/
          (int)a7,
          "Message time must be an integer.\r\nCompiled script not saved!",
          SHIDWORD(v22),
          v23,
          v24,
          v25,
          ArgLista,
          v31,
          (int)a7,
          Str[0],
          Str[1]);
        return 0; /*0x4ff3f4*/
      }
      v9 = atol((const char *)Str); /*0x4ff403*/
    }
    *(_DWORD *)(*(_DWORD *)(a6 + 0x40C) + a6 + 0x20C) = v9; /*0x4ff40b*/
    *(_DWORD *)(a6 + 0x40C) += 4; /*0x4ff412*/
  }
  return 1; /*0x4ff41b*/
}
