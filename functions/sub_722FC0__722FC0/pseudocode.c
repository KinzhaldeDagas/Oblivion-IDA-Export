int __thiscall sub_722FC0(NiNode *this, int a2)
{
  int result; // eax

  sub_707A40(this, a2); /*0x722fc9*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xB4))(a2, *(_DWORD *)&this->members.children.capacity); /*0x722fdf*/
  result = *(_DWORD *)&this->members.children.numObjs; /*0x722fe1*/
  if ( result ) /*0x722fe9*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xC8))(a2, *(_DWORD *)&this->members.children.numObjs); /*0x722ff6*/
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xC4))( /*0x72300c*/
             a2,
             *(_DWORD *)(*(_DWORD *)&this->members.children.numObjs + 0xC));
  }
  return result; /*0x72300e*/
}
