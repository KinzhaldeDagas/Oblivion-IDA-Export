unsigned int __thiscall sub_712AE0(unsigned int *this)
{
  void (__cdecl *v2)(int, unsigned int *, int, int *, int); // eax
  int v3; // eax
  unsigned int v4; // eax
  unsigned int result; // eax
  unsigned int i; // ebx
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // [esp-14h] [ebp-2Ch]
  int v11; // [esp-14h] [ebp-2Ch]
  unsigned int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  v10 = *(this + 0x87);
  v2 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v10 + 4);
  v13 = 4;
  v2(v10, &v12, 4, &v13, 1);
  v3 = *(this + 0x8E);
  if ( *(this + 0x8F) == v3 )
  {
    if ( v3 )
      v4 = 2 * v3;
    else
      v4 = 1;
    sub_6E8CA0(this + 0x8D, v4);
  }
  *(_DWORD *)(*(this + 0x8D) + 4 * *(this + 0x8F)) = v12;
  result = v12;
  ++*(this + 0x8F);
  for ( i = 0; i < result; ++i )
  {
    v11 = *(this + 0x87);
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4);
    v13 = 4;
    v7(v11, &v14, 4, &v13, 1);
    v8 = *(this + 0x8A);
    if ( *(this + 0x8B) == v8 )
    {
      if ( v8 )
        v9 = 2 * v8;
      else
        v9 = 1;
      sub_6E8CA0(this + 0x89, v9);
    }
    *(_DWORD *)(*(this + 0x89) + 4 * *(this + 0x8B)) = v14;
    result = v12;
    ++*(this + 0x8B);
  }
  return result;
}
