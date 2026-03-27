char __stdcall sub_782040(int a1)
{
  int v1; // eax
  int v3; // eax

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1);
  if ( !v1 )
    return 0;
  v3 = sub_783C30(v1);
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x3C))(a1, v3);
  return 1;
}
