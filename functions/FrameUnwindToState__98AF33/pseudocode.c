int __cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi
  int v5; // eax
  int v6; // eax
  signed int *v7; // ecx
  int v8; // eax
  int v10; // [esp-4h] [ebp-34h]

  if ( *(int *)(a3 + 4) > 0x80 )
    v4 = *(_DWORD *)(a1 + 8);
  else
    v4 = *(char *)(a1 + 8);
  v5 = ((int (*)(void))_getptd)();
  ++*(_DWORD *)(v5 + 0x90);
  while ( v4 != a4 )
  {
    if ( v4 <= (int)0xFFFFFFFF || v4 >= *(_DWORD *)(a3 + 4) )
      _inconsistency();
    v6 = 8 * v4;
    v7 = (signed int *)(8 * v4 + *(_DWORD *)(a3 + 8));
    v4 = *v7;
    if ( v7[1] )
    {
      *(_DWORD *)(a1 + 8) = v4;
      unknown_libname_88(*(_DWORD *)(*(_DWORD *)(a3 + 8) + v6 + 4), a1, 0x103);
    }
  }
  if ( *(int *)(_getptd(0x98AFE0) + 0x90) > 0 )
  {
    v8 = _getptd(v10);
    --*(_DWORD *)(v8 + 0x90);
  }
  return __FrameUnwindToState_::_LN19_1();
}
