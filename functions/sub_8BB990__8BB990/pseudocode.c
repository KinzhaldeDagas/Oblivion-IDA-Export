int sub_8BB990()
{
  int v0; // esi
  int v1; // ecx
  int result; // eax
  int v3; // esi
  int *v4; // edx
  int v5; // ecx
  int v6; // ecx
  char *v7; // [esp+4h] [ebp-20Ch] BYREF
  int v8; // [esp+8h] [ebp-208h]
  unsigned int i; // [esp+Ch] [ebp-204h]
  char v10; // [esp+10h] [ebp-200h] BYREF

  v0 = dword_BA8188;
  v7 = &v10;
  v1 = 0;
  result = 0x80000080;
  v8 = 0;
  for ( i = 0x80000080; v0; v0 = *(_DWORD *)(v0 + 4) )
  {
    if ( v1 == (result & 0x3FFFFFFF) )
    {
      sub_8A6EE0((const void **)&v7, 4);
      v1 = v8;
    }
    *(_DWORD *)&v7[4 * v1] = v0;
    result = i;
    v1 = ++v8;
  }
  v3 = v1 - 1;
  if ( v1 - 1 >= 0 )
  {
    do
    {
      v4 = *(int **)(*(_DWORD *)&v7[4 * v3] + 8);
      v5 = *v4;
      if ( *(_WORD *)(*v4 + 4) )
      {
        if ( !--*(_WORD *)(v5 + 6) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      --v3;
      **(_DWORD **)(*(_DWORD *)&v7[4 * v3 + 4] + 8) = 0;
    }
    while ( v3 >= 0 );
    result = i;
  }
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    return sub_8A75D0(v6, v7, 4 * result, 0x14);
  }
  return result;
}
