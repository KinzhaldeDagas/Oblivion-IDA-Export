int __thiscall sub_789430(char *this, int a2)
{
  int v3; // edi
  char *v4; // ecx
  char *v5; // edx
  char v6; // al
  unsigned int v7; // esi
  _DWORD *v8; // ebp
  char *v9; // eax
  char *v10; // eax
  signed int v11; // esi
  int v12; // ebp
  char *v13; // edi
  _DWORD *v14; // eax
  rsize_t v16; // [esp-4h] [ebp-44Ch]
  int v17; // [esp+14h] [ebp-434h]
  int v18; // [esp+1Ch] [ebp-42Ch] BYREF
  unsigned int v19; // [esp+20h] [ebp-428h]
  int v20; // [esp+30h] [ebp-418h]
  unsigned int v21; // [esp+34h] [ebp-414h]
  char Src[1024]; // [esp+38h] [ebp-410h] BYREF
  int v23; // [esp+444h] [ebp-4h]

  v3 = a2;
  if ( *((_DWORD *)this + 6) < 0x10u )
    v4 = this + 4;
  else
    v4 = *((char **)this + 1);
  v5 = Src;
  do
  {
    v6 = *v4;
    *v5++ = *v4++;
  }
  while ( v6 );
  v17 = *((_DWORD *)this + 5);
  v7 = v17 - 1;
  if ( v17 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( v7 > *((_DWORD *)this + 5) )
        _invalid_parameter_noinfo();
      v8 = this + 4;
      v9 = *((_DWORD *)this + 6) < 0x10u ? this + 4 : (char *)*v8;
      if ( v9[v7] == 0x2F )
        break;
      if ( v7 > *((_DWORD *)this + 5) )
        _invalid_parameter_noinfo();
      v10 = *((_DWORD *)this + 6) < 0x10u ? this + 4 : (char *)*v8;
      if ( v10[v7] == 0x5C )
        break;
      if ( (int)--v7 < 0 )
        goto LABEL_31;
    }
    v11 = v7 + 1;
    v12 = 0;
    if ( v11 < v17 )
    {
      v13 = &Src[-v11];
      v12 = v17 - v11;
      do
      {
        if ( (unsigned int)v11 > *((_DWORD *)this + 5) )
          _invalid_parameter_noinfo();
        if ( *((_DWORD *)this + 6) < 0x10u )
          v14 = this + 4;
        else
          v14 = *((_DWORD **)this + 1);
        v13[v11] = *((_BYTE *)v14 + v11);
        ++v11;
      }
      while ( v11 < v17 );
      v3 = a2;
    }
    Src[v12] = 0;
  }
LABEL_31:
  v21 = 0xF;
  v20 = 0;
  LOBYTE(v19) = 0;
  LODWORD(v16) = strlen(Src);
  sub_414500(&v18, v3, Src, v16);
  *(_DWORD *)(v3 + 0x18) = 0xF;
  *(_DWORD *)(v3 + 0x14) = 0;
  v23 = 0;
  *(_BYTE *)(v3 + 4) = 0;
  sub_414420(v3, &v18, 0, 0xFFFFFFFF);
  if ( v21 >= 0x10 )
    FormHeapFree(v19);
  return v3;
}
