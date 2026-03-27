char __cdecl sub_481890(int a1, float *a2, float *a3, float a4, int a5, char a6)
{
  int v6; // esi

  if ( !a1 )
    return 0;
  if ( !a5 || 0.0 == a4 )
    return 0;
  if ( a6 )
  {
    v6 = *(_DWORD *)(a1 + 0x14);
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *(_DWORD *)(a1 + 0x14) = 0;
    }
    sub_959D60((_WORD *)a1, &Vector3_InitValue_, &Vector3_InitValue_, 0);
  }
  return sub_47FBD0(a1, a2, a3, a4, a5);
}
