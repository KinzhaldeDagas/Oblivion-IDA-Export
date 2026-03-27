NiNode *__thiscall sub_75E5C0(NiTimeController *this, NiObjectNET *a2)
{
  NiNode *result; // eax
  char v4; // al
  NiObjectNET *v5; // [esp-4h] [ebp-8h]

  v5 = a2;
  *((_DWORD *)this + 0x11) = 0;
  NiTimeController::SetTarget(this, v5);
  result = this->members.m_pTarget;
  if ( result )
  {
    v4 = NiTMap_GetAt(&result->members.m_combinedBounds.Center.z, *((_DWORD *)this + 0x10), &a2);
    result = v4 != 0 ? (NiNode *)a2 : 0;
    *((_DWORD *)this + 0x11) = result;
  }
  return result;
}
