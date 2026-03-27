int __thiscall sub_8C9F30(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // ecx
  int *v5; // esi
  int v6; // ecx
  int result; // eax
  int v8; // edi

  v3 = *(this + 3);
  v4 = *(_DWORD *)(v3 + 8 * a2 + 4);
  v5 = (int *)(8 * a2 + v3);
  if ( v4 )
  {
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
  v6 = *v5;
  if ( *v5 )
  {
    if ( *(_WORD *)(v6 + 4) )
    {
      if ( !--*(_WORD *)(v6 + 6) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
  }
  result = *(this + 4) - 1;
  *(this + 4) = result;
  v8 = *(this + 3);
  *(_DWORD *)(v8 + 8 * a2) = *(_DWORD *)(v8 + 8 * result);
  *(_DWORD *)(v8 + 8 * a2 + 4) = *(_DWORD *)(v8 + 8 * result + 4);
  return result;
}
