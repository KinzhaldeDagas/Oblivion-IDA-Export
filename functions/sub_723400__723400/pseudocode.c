char __thiscall sub_723400(NiNode *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_707AF0(this, a2);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&this->members.children.capacity + 0x24))(
      *(_DWORD *)&this->members.children.capacity,
      a2);
    v4 = *(_DWORD *)&this->members.children.numObjs;
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    return 1;
  }
  return result;
}
