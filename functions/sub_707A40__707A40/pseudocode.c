NiProperty *__thiscall sub_707A40(NiNode *this, int a2)
{
  NiProperty *result; // eax

  result = NiNode_GetNiPropertyByID(this, 2); /*0x707a42*/
  if ( result ) /*0x707a49*/
    return (*(NiProperty *(__thiscall **)(int, NiProperty *))(*(_DWORD *)a2 + 0xB8))(a2, result); /*0x707a5b*/
  return result; /*0x707a5d*/
}
