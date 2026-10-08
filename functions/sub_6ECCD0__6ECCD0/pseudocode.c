NiExtraData *__thiscall sub_6ECCD0(int this)
{
  NiExtraData *result; // eax
  NiExtraData *v3; // esi
  NiExtraData *v4; // ebx

  result = NiObjectNET_GetExtraData(*(NiObjectNET **)(this + 0x30), *(const char **)(this + 0x40)); /*0x6eccdc*/
  v3 = *(NiExtraData **)(this + 0x44); /*0x6ecce1*/
  v4 = result; /*0x6ecce4*/
  if ( v3 != result ) /*0x6ecce8*/
  {
    if ( v3 ) /*0x6eccec*/
    {
      result = (NiExtraData *)InterlockedDecrement((volatile LONG *)&v3->member); /*0x6eccf2*/
      if ( !result ) /*0x6eccfa*/
        result = (NiExtraData *)((int (__thiscall *)(NiExtraData *, int))v3->__vftable->super.super.Destructor)(v3, 1); /*0x6ecd08*/
    }
    *(_DWORD *)(this + 0x44) = v4; /*0x6ecd0c*/
    if ( v4 ) /*0x6ecd0f*/
      return (NiExtraData *)InterlockedIncrement((volatile LONG *)&v4->member); /*0x6ecd15*/
  }
  return result; /*0x6ecd1b*/
}
