char __thiscall sub_723400(NiNode *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_707AF0(this, a2); /*0x723409*/
  if ( result ) /*0x723410*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&this->members.children.capacity + 0x24))( /*0x723423*/
      *(_DWORD *)&this->members.children.capacity,
      a2);
    v4 = *(_DWORD *)&this->members.children.numObjs; /*0x723425*/
    if ( v4 ) /*0x72342d*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x723435*/
    return 1; /*0x723438*/
  }
  return result; /*0x723412*/
}
