char __thiscall sub_76D480(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *(this + 3);
  if ( !v3 )
    return 0;
  if ( v3 != dword_B42610 )
  {
    if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)a2 + 0x9C))(a2, v3) < 0 )
      return 0;
    dword_B42610 = *(this + 3);
  }
  return 1;
}
