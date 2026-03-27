int __thiscall sub_722FC0(NiNode *this, int a2)
{
  int result; // eax

  sub_707A40(this, a2);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xB4))(a2, *(_DWORD *)&this->members.children.capacity);
  result = *(_DWORD *)&this->members.children.numObjs;
  if ( result )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xC8))(a2, *(_DWORD *)&this->members.children.numObjs);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xC4))(
             a2,
             *(_DWORD *)(*(_DWORD *)&this->members.children.numObjs + 0xC));
  }
  return result;
}
