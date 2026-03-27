int __thiscall sub_43C710(volatile LONG *this)
{
  _DWORD *v2; // ecx
  _BYTE *v3; // eax
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  const char *v7; // eax
  const char *v8; // edx
  unsigned int v9; // eax
  char *v10; // edi
  void (__thiscall *v12)(volatile LONG *); // eax
  int v13; // eax
  int v14; // ecx
  char v16; // [esp+3h] [ebp-20Dh] BYREF
  char Str1[260]; // [esp+4h] [ebp-20Ch] BYREF
  char v18[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = (_DWORD *)(*((_DWORD *)this + 0xF) + 0x3C);
  v3 = (_BYTE *)v2[1];
  if ( v3 )
  {
    if ( *v3 )
    {
      v4 = (char *)(*(int (__thiscall **)(_DWORD *))(*v2 + 0x14))(v2);
      v5 = Str1;
      do
      {
        v6 = *v4;
        *v5++ = *v4++;
      }
      while ( v6 );
      v7 = *(const char **)(*((_DWORD *)this + 0xF) + 0x40);
      if ( !v7 )
        v7 = EmptyString;
      v8 = v7;
      v9 = strlen(v7) + 1;
      v10 = &v16;
      while ( *++v10 )
        ;
      qmemcpy(v10, v8, v9);
      sub_47D8F0(Str1, (int)v18);
      sub_43B0D0(v18, BYTE2(*((_DWORD *)this + 4)), this);
      v12 = *(void (__thiscall **)(volatile LONG *))(*this + 0x28);
      *((_BYTE *)this + 0x34) |= 8u;
      v12(this);
    }
  }
  v13 = *((_DWORD *)this + 0xB);
  v14 = 0;
  if ( v13 )
    v14 = v13 + 0x10;
  return (*(int (__thiscall **)(volatile LONG *, int))(*this + 0x30))(this, v14);
}
