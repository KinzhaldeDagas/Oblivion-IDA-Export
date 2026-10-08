NiNode *__thiscall sub_75E5C0(NiTimeController *this, NiObjectNET *a2)
{
  NiNode *result; // eax
  char v4; // al
  NiObjectNET *v5; // [esp-4h] [ebp-8h]

  v5 = a2; /*0x75e5c7*/
  *((_DWORD *)this + 0x11) = 0; /*0x75e5c8*/
  NiTimeController::SetTarget(this, v5); /*0x75e5cf*/
  result = this->members.m_pTarget; /*0x75e5d4*/
  if ( result )
  {
    v4 = NiTMap_GetAt(&result->members.m_combinedBounds.Center.z, *((_DWORD *)this + 0x10), &a2); /*0x75e5ea*/
    result = v4 != 0 ? (NiNode *)a2 : 0;
    *((_DWORD *)this + 0x11) = result; /*0x75e5f7*/
  }
  return result; /*0x75e5fa*/
}
