int __thiscall sub_788DA0(_DWORD *this, unsigned int *a2)
{
  unsigned int *v3; // esi
  int result; // eax
  int v5; // edx
  int v6; // eax
  bool v7; // cf
  const char *v8; // ebp
  void *v9; // edi
  size_t v10; // [esp-8h] [ebp-44h]
  _BYTE v11[4]; // [esp+14h] [ebp-28h] BYREF
  unsigned int v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+28h] [ebp-14h]
  unsigned int v14; // [esp+2Ch] [ebp-10h]
  unsigned int v15; // [esp+38h] [ebp-4h]

  v3 = a2;
  result = sub_78EB40(a2);
  do
  {
    if ( result == 0x4A3A )
    {
      v6 = sub_78EC20(v3, v5, (int)v11);
      v7 = *(_DWORD *)(v6 + 0x18) < 0x10u;
      v15 = 0;
      if ( v7 )
        v8 = (const char *)(v6 + 4);
      else
        v8 = *(const char **)(v6 + 4);
      LODWORD(v10) = strlen(v8) + 1;
      v9 = (void *)FormHeapAlloc(v10);
      memcpy(v9, v8, v10);
      v7 = v14 < 0x10;
      *(this + 0x1A) = v9;
      v15 = 0xFFFFFFFF;
      if ( !v7 )
        FormHeapFree(v12);
      v3 = a2;
      v14 = 0xF;
      v13 = 0;
      LOBYTE(v12) = 0;
    }
    result = sub_78EB40(v3);
  }
  while ( result != 0x4A39 );
  return result;
}
