char __usercall sub_4FEF80@<al>(double a1@<st2>, double a2@<st1>, int a3, int a4, int a5, char *a6, char a7)
{
  int v8; // eax
  int v9; // ebx
  double v10; // st7
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v14; // edi
  char *v15; // eax
  double v16; // st7
  char v17; // al
  int v18; // ebp
  char *v19; // edi
  double v20; // st7
  char *v21; // edi
  const char *v22; // ebp
  unsigned int v23; // edi
  double v24; // st7
  size_t v25; // [esp-4h] [ebp-1914h]
  size_t v26; // [esp-4h] [ebp-1914h]
  int v27; // [esp+4h] [ebp-190Ch]
  int v28; // [esp+8h] [ebp-1908h]
  int v29; // [esp+Ch] [ebp-1904h]
  int ArgList; // [esp+10h] [ebp-1900h]
  int ArgLista; // [esp+10h] [ebp-1900h]
  int ArgListb; // [esp+10h] [ebp-1900h]
  char ArgListc[4]; // [esp+10h] [ebp-1900h]
  int v34; // [esp+14h] [ebp-18FCh]
  int v35; // [esp+14h] [ebp-18FCh]
  int Str[128]; // [esp+1Ch] [ebp-18F4h] BYREF
  int v37; // [esp+21Ch] [ebp-16F4h]
  char v38; // [esp+220h] [ebp-16F0h]
  int v39; // [esp+224h] [ebp-16ECh]
  int v40; // [esp+228h] [ebp-16E8h]
  int v41; // [esp+22Ch] [ebp-16E4h]
  char Src[512]; // [esp+230h] [ebp-16E0h] BYREF
  int v43; // [esp+430h] [ebp-14E0h]
  char v44; // [esp+434h] [ebp-14DCh]
  int v45; // [esp+438h] [ebp-14D8h]
  int v46; // [esp+43Ch] [ebp-14D4h]
  int v47; // [esp+440h] [ebp-14D0h]
  _BYTE v48[524]; // [esp+444h] [ebp-14CCh] BYREF
  char v49; // [esp+650h] [ebp-12C0h] BYREF

  v8 = *(_DWORD *)(a5 + 0x40C);
  v9 = 0;
  *(_DWORD *)(a5 + 0x208) = 0;
  *(_WORD *)(v8 + a5 + 0x20C) = 1;
  *(_DWORD *)(a5 + 0x40C) += 2;
  v43 = 0;
  v46 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v10 = _memset(Src, 0, sizeof(Src));
  v11 = sub_4FD7C0(a1, a2, v10, a6, Src, a5 + 4, (int *)(a5 + 0x208), 0, 0);
  v12 = v11;
  if ( !v11 )
  {
    sub_4FCE30((int)a6, "No message text.", SHIDWORD(v25), v27, v28, v29, ArgList, v34, (int)a6, Str[0], Str[1]);
    return 0;
  }
  *(_WORD *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = v11;
  *(_DWORD *)(a5 + 0x40C) += 2;
  LODWORD(v25) = v11;
  memcpy((void *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C), Src, v25);
  *(_DWORD *)(a5 + 0x40C) += v12;
  v14 = 0;
  v15 = Src;
  ArgLista = 0;
  if ( Src[0] )
  {
    do
    {
      if ( *v15 == 0x25 )
      {
        if ( v15[1] == 0x25 )
          ++v15;
        else
          ++v14;
      }
      ++v15;
    }
    while ( *v15 );
    ArgLista = v14;
    if ( v14 >= 0xA )
    {
      sub_4FCE30((int)a6, "Max variables of %d exceeded.", 0xA, SHIDWORD(v26), v27, v28, v29, v14, v34, (int)a6, Str[0]);
      return 0;
    }
  }
  *(_WORD *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = v14;
  *(_DWORD *)(a5 + 0x40C) += 2;
  v35 = 0;
  if ( v14 > 0 )
  {
    do
    {
      v37 = 0;
      v40 = 0;
      v38 = 0;
      v39 = 0;
      v41 = 0;
      v16 = _memset(Str, 0, sizeof(Str));
      if ( !sub_4FD7C0(a1, a2, v16, a6, (char *)Str, a5 + 4, (int *)(a5 + 0x208), 1, 0) )
      {
        sub_4FCE30(
          (int)a6,
          "Too few variables in MessageBox parameters; expected %d, found %d.",
          ArgLista,
          v35,
          SHIDWORD(v26),
          v27,
          v28,
          v29,
          ArgLista,
          v35,
          (int)a6);
        return 0;
      }
      v17 = v38;
      if ( !v38 )
      {
        sub_4FCE30(
          (int)a6,
          "Unknown variable '%s' in MessageBox parameters.",
          (int)Str,
          SHIDWORD(v26),
          v27,
          v28,
          v29,
          ArgLista,
          v35,
          (int)a6,
          Str[0]);
        return 0;
      }
      if ( v37 )
      {
        if ( v38 == 0x47 )
          *(_BYTE *)(a5 + *(_DWORD *)(a5 + 0x40C) + 0x20C) = 0x47;
        else
          *(_BYTE *)(a5 + *(_DWORD *)(a5 + 0x40C) + 0x20C) = 0x72;
        *(_WORD *)(++*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = v37;
        *(_DWORD *)(a5 + 0x40C) += 2;
        v17 = v38;
      }
      if ( v17 != 0x47 )
      {
        if ( !v40 )
        {
          sub_4FCE30(
            (int)a6,
            "Unknown compiler error in MessageBoxCompile.  Failed to parse variable '%s'.",
            (int)Str,
            SHIDWORD(v26),
            v27,
            v28,
            v29,
            ArgLista,
            v35,
            (int)a6,
            Str[0]);
          return 0;
        }
        *(_BYTE *)(a5 + (*(_DWORD *)(a5 + 0x40C))++ + 0x20C) = v17;
        *(_WORD *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = v40;
        *(_DWORD *)(a5 + 0x40C) += 2;
      }
      ++v35;
    }
    while ( v35 < ArgLista );
  }
  if ( a7 )
  {
    v18 = 0;
    ArgListb = 9;
    v19 = &v49;
    do
    {
      *((_DWORD *)v19 + 0xFFFFFFFD) = 0;
      *(_DWORD *)v19 = 0;
      v19[0xFFFFFFF8] = 0;
      *((_DWORD *)v19 + 0xFFFFFFFF) = 0;
      *((_DWORD *)v19 + 1) = 0;
      v20 = _memset(v19 + 0xFFFFFDF4, 0, 0x200);
      v19 += 0x214;
      --ArgListb;
    }
    while ( ArgListb >= 0 );
    v21 = v48;
    do
    {
      if ( (int)sub_4FD7C0(a1, a2, v20, a6, v21, a5 + 4, (int *)(a5 + 0x208), 0, 0) <= 0 )
        break;
      ++v18;
      v21 += 0x214;
    }
    while ( v18 < 0xA );
    *(_WORD *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = v18;
    *(_DWORD *)(a5 + 0x40C) += 2;
    *(_DWORD *)ArgListc = v18;
    if ( v18 > 0 )
    {
      v22 = v48;
      do
      {
        *(_WORD *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = 1;
        *(_DWORD *)(a5 + 0x40C) += 2;
        v23 = strlen(v22);
        *(_WORD *)(a5 + *(_DWORD *)(a5 + 0x40C) + 0x20C) = v23;
        *(_DWORD *)(a5 + 0x40C) += 2;
        LODWORD(v26) = v23;
        memcpy((void *)(a5 + *(_DWORD *)(a5 + 0x40C) + 0x20C), v22, v26);
        *(_DWORD *)(a5 + 0x40C) += v23;
        v22 += 0x214;
        --*(_DWORD *)ArgListc;
      }
      while ( *(_DWORD *)ArgListc );
    }
  }
  else
  {
    v37 = 0;
    v40 = 0;
    v38 = 0;
    v39 = 0;
    v41 = 0;
    v24 = _memset(Str, 0, sizeof(Str));
    if ( (int)sub_4FD7C0(a1, a2, v24, a6, (char *)Str, a5 + 4, (int *)(a5 + 0x208), 0, 0) > 0 )
    {
      if ( !sub_47D550((const char *)Str) )
      {
        sub_4FCE30(
          (int)a6,
          "Message time must be an integer.\r\nCompiled script not saved!",
          SHIDWORD(v26),
          v27,
          v28,
          v29,
          ArgLista,
          v35,
          (int)a6,
          Str[0],
          Str[1]);
        return 0;
      }
      v9 = atol((const char *)Str);
    }
    *(_DWORD *)(*(_DWORD *)(a5 + 0x40C) + a5 + 0x20C) = v9;
    *(_DWORD *)(a5 + 0x40C) += 4;
  }
  return 1;
}
