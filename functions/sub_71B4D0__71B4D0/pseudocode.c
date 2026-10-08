unsigned int *__thiscall sub_71B4D0(unsigned int *this, char *a2)
{
  unsigned int v3; // eax
  char *v4; // ecx
  char v5; // al
  unsigned int v6; // eax
  char *v7; // ecx
  char v8; // al
  unsigned int v9; // eax
  char *v10; // ecx
  char v11; // al
  int v12; // eax
  char *i; // ecx

  *this = sub_700B60(a2, 0); /*0x71b4e6*/
  *((_BYTE *)this + 0x10) = sub_700C00(a2, 0); /*0x71b4f0*/
  v3 = 0; /*0x71b4f3*/
  v4 = a2 + 0x14; /*0x71b4f5*/
  while ( *(_DWORD *)v4 ) /*0x71b4fa*/
  {
    ++v3; /*0x71b500*/
    v4 += 0xC; /*0x71b503*/
    if ( v3 >= 4 ) /*0x71b509*/
    {
      v5 = 0; /*0x71b50b*/
      goto LABEL_5; /*0x71b50b*/
    }
  }
  v5 = a2[0xC * v3 + 0x1C]; /*0x71b5c9*/
LABEL_5:
  *((_BYTE *)this + 0x14) = 8 - v5; /*0x71b50d*/
  *(this + 1) = sub_700B60(a2, 1); /*0x71b521*/
  *((_BYTE *)this + 0x11) = sub_700C00(a2, 1); /*0x71b529*/
  v6 = 0; /*0x71b52c*/
  v7 = a2 + 0x14; /*0x71b52e*/
  while ( *(_DWORD *)v7 != 1 ) /*0x71b533*/
  {
    ++v6; /*0x71b539*/
    v7 += 0xC; /*0x71b53c*/
    if ( v6 >= 4 ) /*0x71b542*/
    {
      v8 = 0; /*0x71b544*/
      goto LABEL_9; /*0x71b544*/
    }
  }
  v8 = a2[0xC * v6 + 0x1C]; /*0x71b5d5*/
LABEL_9:
  *((_BYTE *)this + 0x15) = 8 - v8; /*0x71b546*/
  *(this + 2) = sub_700B60(a2, 2); /*0x71b55a*/
  *((_BYTE *)this + 0x12) = sub_700C00(a2, 2); /*0x71b562*/
  v9 = 0; /*0x71b565*/
  v10 = a2 + 0x14; /*0x71b567*/
  while ( *(_DWORD *)v10 != 2 ) /*0x71b573*/
  {
    ++v9; /*0x71b575*/
    v10 += 0xC; /*0x71b578*/
    if ( v9 >= 4 ) /*0x71b57e*/
    {
      v11 = 0; /*0x71b580*/
      goto LABEL_13; /*0x71b580*/
    }
  }
  v11 = a2[0xC * v9 + 0x1C]; /*0x71b5e1*/
LABEL_13:
  *((_BYTE *)this + 0x16) = 8 - v11; /*0x71b582*/
  *(this + 3) = sub_700B60(a2, 3); /*0x71b596*/
  *((_BYTE *)this + 0x13) = sub_700C00(a2, 3); /*0x71b59e*/
  v12 = 0; /*0x71b5a1*/
  for ( i = a2 + 0x14; *(_DWORD *)i != 3; i += 0xC ) /*0x71b5a3*/
  {
    if ( (unsigned int)++v12 >= 4 ) /*0x71b5b3*/
    {
      *((_BYTE *)this + 0x17) = 8; /*0x71b5bc*/
      return this; /*0x71b5c3*/
    }
  }
  *((_BYTE *)this + 0x17) = 8 - a2[0xC * v12 + 0x1C]; /*0x71b5f3*/
  return this; /*0x71b5bb*/
}
