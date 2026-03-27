NiProperty *__thiscall sub_707A40(NiNode *this, int a2)
{
  NiProperty *result; // eax

  result = NiNode_GetNiPropertyByID(this, 2);
  if ( result )
    return (NiProperty *)(*(int (__thiscall **)(int, NiProperty *))(*(_DWORD *)a2 + 0xB8))(a2, result);
  return result;
}
