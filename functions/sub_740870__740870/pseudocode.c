int __thiscall sub_740870(NiNode *this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // ecx

  result = sub_722FC0(this, a2); /*0x740879*/
  v4 = *(_DWORD *)&this->members.children.capacity; /*0x74087e*/
  if ( v4 ) /*0x740886*/
  {
    v5 = *(_DWORD *)(v4 + 0x5C); /*0x740888*/
    if ( v5 ) /*0x74088d*/
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x80))(v5, a2); /*0x740898*/
  }
  return result; /*0x74089a*/
}
