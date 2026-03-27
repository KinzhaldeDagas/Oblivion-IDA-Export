NiExtraData *__thiscall sub_6ECCD0(int this)
{
  NiExtraData *result; // eax
  NiExtraData *v3; // esi
  int v4; // ebx

  result = NiObjectNET_GetExtraData(*(NiObjectNET **)(this + 0x30), *(const char **)(this + 0x40));
  v3 = *(NiExtraData **)(this + 0x44);
  v4 = (int)result;
  if ( v3 != result )
  {
    if ( v3 )
    {
      result = (NiExtraData *)InterlockedDecrement((volatile LONG *)&v3->member);
      if ( !result )
        result = (NiExtraData *)((int (__thiscall *)(NiExtraData *, int))v3->__vftable->super.super.Destructor)(v3, 1);
    }
    *(_DWORD *)(this + 0x44) = v4;
    if ( v4 )
      return (NiExtraData *)InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  return result;
}
