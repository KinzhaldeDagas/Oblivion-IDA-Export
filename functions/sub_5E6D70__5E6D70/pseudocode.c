int __thiscall sub_5E6D70(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0x16);
  if ( v2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x300))(v2, a2);
  return result;
}
