int __userpurge sub_730CA0@<eax>(NiRenderer *this@<ecx>, unsigned int a2@<esi>, size_t Size)
{
  int v3; // edi
  int (__cdecl *v4)(int, size_t *, int, int *, int); // eax
  int result; // eax
  unsigned int i; // esi
  int (__cdecl *v7)(int, _BYTE *, int, int *, int); // eax
  int v8; // [esp-18h] [ebp-24h]
  int v9; // [esp-18h] [ebp-24h]
  int v10; // [esp+4h] [ebp-8h] BYREF
  _BYTE v11[4]; // [esp+8h] [ebp-4h] BYREF

  v3 = Size;
  if ( *(_DWORD *)(Size + 0xD8) < 0x5000010u )
  {
    sub_721610(this, __PAIR64__(a2, Size));
    v8 = *(_DWORD *)(v3 + 0x21C);
    v4 = *(int (__cdecl **)(int, size_t *, int, int *, int))(v8 + 4);
    v10 = 4;
    result = v4(v8, &Size, 4, &v10, 1);
    for ( i = 0; i < (unsigned int)Size; ++i )
    {
      v9 = *(_DWORD *)(v3 + 0x21C);
      v7 = *(int (__cdecl **)(int, _BYTE *, int, int *, int))(v9 + 4);
      v10 = 4;
      result = v7(v9, v11, 4, &v10, 1);
    }
  }
  return result;
}
