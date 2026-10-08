// Verified: Returns/removes the head (minimum-fitness) AStarWorldNodeList item only when its fitness is below the caller's current bound; empty or fitness >= bound returns null. Fallout's homologous TeleportDoorSearch queue instead scans the first non-empty of 20 fitness buckets.
TravelPathSpaceDoorLink *__thiscall AStarWorldNodeList_PopMinUnderBound(AStarWorldNodeList *this, float fitnessBound)
{
  TravelPathSpaceDoorLink *result; // eax
  void *start; // ecx
  TravelPathSpaceDoorLink *v5; // edi
  _DWORD *v6; // eax
  bool v7; // zf

  result = 0; /*0x680b43*/
  if ( this->count ) /*0x680b45*/
  {
    start = this->start; /*0x680b4a*/
    v5 = *((TravelPathSpaceDoorLink **)start + 2); /*0x680b4e*/
    if ( v5->searchNodeIndex < LOWORD(qword_B3BB2C[0xF6]) ) /*0x680b5b*/
      result = (TravelPathSpaceDoorLink *)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * v5->searchNodeIndex); /*0x680b63*/
    if ( fitnessBound <= (double)*(float *)&result->searchNodeIndex ) /*0x680b76*/
    {
      return 0; /*0x680ba6*/
    }
    else
    {
      v6 = *(_DWORD **)start; /*0x680b78*/
      v7 = *(_DWORD *)start == 0; /*0x680b7a*/
      this->start = *(void **)start; /*0x680b7c*/
      if ( v7 ) /*0x680b7f*/
        this->end = 0; /*0x680b8a*/
      else
        v6[1] = 0; /*0x680b81*/
      (*((void (__thiscall **)(AStarWorldNodeList *, void *))this->vtable + 2))(this, start); /*0x680b99*/
      --this->count; /*0x680b9b*/
      return v5; /*0x680b9f*/
    }
  }
  return result; /*0x680ba2*/
}
