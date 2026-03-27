char __thiscall sub_6CED50(_BYTE *this)
{
  char result; // al
  int v3; // esi
  char *v4; // eax
  char *v5; // ebx
  int v6; // eax
  int v7; // edx
  const void *v8; // esi
  char *v9; // edi
  unsigned __int8 v10; // [esp+16h] [ebp-12h]
  char v11; // [esp+17h] [ebp-11h]

  v10 = *(this + 0xD);
  result = sub_6CCFD0(this);
  v11 = result;
  if ( result )
  {
    v3 = (unsigned __int8)*(this + 0xD);
    v4 = (char *)FormHeapAlloc((0x68 * (unsigned __int64)(unsigned __int8)*(this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v3);
    v5 = v4;
    if ( v4 )
      sub_401080(v4, 0x68, v3, (void *(__thiscall *)(void *))sub_6C3730);
    else
      v5 = 0;
    if ( v10 )
    {
      v6 = 0;
      v7 = v10;
      do
      {
        v8 = (const void *)(v6 + *((_DWORD *)this + 0x14));
        v9 = &v5[v6];
        v6 += 0x68;
        --v7;
        qmemcpy(v9, v8, 0x68u);
      }
      while ( v7 );
    }
    FormHeapFree(*((_DWORD *)this + 0x14));
    *((_DWORD *)this + 0x14) = v5;
    return v11;
  }
  return result;
}
