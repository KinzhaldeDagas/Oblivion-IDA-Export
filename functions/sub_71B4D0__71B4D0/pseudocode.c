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

  *this = sub_700B60(a2, 0);
  *((_BYTE *)this + 0x10) = sub_700C00(a2, 0);
  v3 = 0;
  v4 = a2 + 0x14;
  while ( *(_DWORD *)v4 )
  {
    ++v3;
    v4 += 0xC;
    if ( v3 >= 4 )
    {
      v5 = 0;
      goto LABEL_5;
    }
  }
  v5 = a2[0xC * v3 + 0x1C];
LABEL_5:
  *((_BYTE *)this + 0x14) = 8 - v5;
  *(this + 1) = sub_700B60(a2, 1);
  *((_BYTE *)this + 0x11) = sub_700C00(a2, 1);
  v6 = 0;
  v7 = a2 + 0x14;
  while ( *(_DWORD *)v7 != 1 )
  {
    ++v6;
    v7 += 0xC;
    if ( v6 >= 4 )
    {
      v8 = 0;
      goto LABEL_9;
    }
  }
  v8 = a2[0xC * v6 + 0x1C];
LABEL_9:
  *((_BYTE *)this + 0x15) = 8 - v8;
  *(this + 2) = sub_700B60(a2, 2);
  *((_BYTE *)this + 0x12) = sub_700C00(a2, 2);
  v9 = 0;
  v10 = a2 + 0x14;
  while ( *(_DWORD *)v10 != 2 )
  {
    ++v9;
    v10 += 0xC;
    if ( v9 >= 4 )
    {
      v11 = 0;
      goto LABEL_13;
    }
  }
  v11 = a2[0xC * v9 + 0x1C];
LABEL_13:
  *((_BYTE *)this + 0x16) = 8 - v11;
  *(this + 3) = sub_700B60(a2, 3);
  *((_BYTE *)this + 0x13) = sub_700C00(a2, 3);
  v12 = 0;
  for ( i = a2 + 0x14; *(_DWORD *)i != 3; i += 0xC )
  {
    if ( (unsigned int)++v12 >= 4 )
    {
      *((_BYTE *)this + 0x17) = 8;
      return this;
    }
  }
  *((_BYTE *)this + 0x17) = 8 - a2[0xC * v12 + 0x1C];
  return this;
}
