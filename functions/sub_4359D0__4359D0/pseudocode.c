int __thiscall sub_4359D0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // ecx
  char v4; // al

  if ( !a2 )
    return 0;
  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(this + 1);
  a2 = 0;
  v4 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 4))(v3, v2, &a2);
  return v4 != 0 ? a2 : 0;
}
