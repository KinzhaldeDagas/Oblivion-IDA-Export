unsigned int __thiscall sub_713030(unsigned __int16 *this)
{
  void (__cdecl *v2)(int, unsigned int *, int, int *, int); // eax
  unsigned int result; // eax
  unsigned int i; // edi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  size_t *v6; // eax
  unsigned int v7; // edx
  int v8; // [esp-14h] [ebp-40h]
  int v9; // [esp-14h] [ebp-40h]
  size_t v10; // [esp-4h] [ebp-30h]
  unsigned int v11; // [esp+10h] [ebp-1Ch] BYREF
  int v12; // [esp+14h] [ebp-18h] BYREF
  int v13; // [esp+18h] [ebp-14h] BYREF
  int Size; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v8 = *((_DWORD *)this + 0x87);
  v2 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v8 + 4);
  v12 = 4;
  v2(v8, &v11, 4, &v12, 1);
  NiTArray_SetSize(this + 0x64, ++v11);
  v12 = 0;
  result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x64), 0, &v12);
  for ( i = 1; i < v11; ++i )
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)this + 0x87) + 4);
    v9 = *((_DWORD *)this + 0x87);
    v13 = 4;
    v5(v9, &Size, 4, &v13, 1);
    v6 = (size_t *)FormHeapAlloc(0x10u);
    v13 = (int)v6;
    v15 = 0;
    if ( v6 )
    {
      LODWORD(v10) = Size;
      result = (unsigned int)sub_7329D0(v6, v10);
    }
    else
    {
      result = 0;
    }
    v7 = *(this + 0x69);
    v15 = 0xFFFFFFFF;
    if ( i < v7 )
    {
      if ( result )
      {
        if ( !*(_DWORD *)(*((_DWORD *)this + 0x33) + 4 * i) )
          ++*(this + 0x6A);
      }
      else if ( *(_DWORD *)(*((_DWORD *)this + 0x33) + 4 * i) )
      {
        --*(this + 0x6A);
      }
    }
    else
    {
      *(this + 0x69) = i + 1;
      if ( result )
        ++*(this + 0x6A);
    }
    *(_DWORD *)(*((_DWORD *)this + 0x33) + 4 * i) = result;
  }
  return result;
}
