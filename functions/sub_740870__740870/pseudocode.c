int __thiscall sub_740870(NiNode *this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // ecx

  result = sub_722FC0(this, a2);
  v4 = *(_DWORD *)&this->members.children.capacity;
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 0x5C);
    if ( v5 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x80))(v5, a2);
  }
  return result;
}
