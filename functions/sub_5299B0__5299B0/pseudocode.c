bool __thiscall sub_5299B0(int *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int *v3; // esi
  int v4; // ebx

  v2 = a2;
  v3 = this + 0x12;
  if ( !a2 )
    return 1;
  if ( this != (int *)0xFFFFFFB8 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 && sub_56A950((unsigned __int8 **)(v4 + 4), (int)TESDataHandler_g_PlayerRef, 0) )
      {
        if ( !v2 || !*v2 || *v2 != v4 )
          return 0;
        v2 = (_DWORD *)v2[1];
      }
      v3 = (int *)v3[1];
    }
    while ( v3 );
  }
  return !v2 || !v2[1] && !*v2;
}
