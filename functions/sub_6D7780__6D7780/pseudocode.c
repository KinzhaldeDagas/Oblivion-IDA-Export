int __userpurge sub_6D7780@<eax>(int *this@<ecx>, size_t Size)
{
  signed int v3; // ebp
  void (__cdecl *v4)(int, size_t *, int, int *, int); // eax
  int result; // eax
  int v6; // esi
  int v7; // ecx
  int *v8; // eax
  _DWORD *v9; // edi
  unsigned int v10; // esi
  int *v11; // edi
  int v12; // [esp-14h] [ebp-3Ch]
  size_t v13; // [esp-4h] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  v3 = Size;
  LODWORD(v13) = Size;
  sub_721610(this, v13);
  v12 = *(_DWORD *)(v3 + 0x21C);
  v4 = *(void (__cdecl **)(int, size_t *, int, int *, int))(v12 + 4);
  v15 = 4;
  v4(v12, &Size, 4, &v15, 1);
  result = Size;
  if ( (_DWORD)Size )
  {
    v6 = Size;
    v7 = (unsigned __int64)(unsigned int)Size >> 0x1D != 0 ? 0xFFFFFFFF : 8 * Size;
    v8 = (int *)FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
    v16 = 0;
    if ( v8 )
    {
      v9 = v8 + 1;
      *v8 = v6;
      ArrayConstructor(v8 + 1, 8u, v6, (int)sub_6D73E0, sub_6EC6B0);
      v14 = (int)v9;
    }
    else
    {
      v14 = 0;
    }
    result = Size;
    v10 = 0;
    v16 = 0xFFFFFFFF;
    if ( (_DWORD)Size )
    {
      v11 = (int *)v14;
      do
      {
        sub_6EC720(v11, v3);
        result = Size;
        ++v10;
        v11 += 2;
      }
      while ( v10 < (unsigned int)Size );
    }
    *(this + 3) = result;
    *(this + 4) = v14;
  }
  return result;
}
