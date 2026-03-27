int __thiscall sub_8C65D0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int i; // esi
  int v6; // eax
  int *v7; // eax

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0x30);
  else
    v4 = 0;
  for ( i = 0; i < v4; ++i )
  {
    if ( this && (v6 = *(this + 2)) != 0 )
      v7 = (int *)(*(_DWORD *)(v6 + 0x28) + 8 * i);
    else
      v7 = &dword_BA8138;
    if ( *v7 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)*v7 + 0x24))(*v7, a2);
  }
  return sub_6EC2C0(a2);
}
