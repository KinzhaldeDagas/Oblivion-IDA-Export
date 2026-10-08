LONG __thiscall sub_75EE30(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // edi
  LONG v5; // ebx

  nullsub_returnvVoid_1arg((int)a2); /*0x75ee3a*/
  *(this + 4) = sub_7124A0(a2); /*0x75ee48*/
  *(this + 9) = sub_7124A0(a2); /*0x75ee52*/
  result = sub_7124A0(a2); /*0x75ee55*/
  v4 = *(this + 0xA); /*0x75ee5a*/
  v5 = result; /*0x75ee5d*/
  if ( v4 != result ) /*0x75ee61*/
  {
    if ( v4 ) /*0x75ee65*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x75ee6b*/
      if ( !result ) /*0x75ee73*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x75ee81*/
    }
    *(this + 0xA) = v5; /*0x75ee85*/
    if ( v5 ) /*0x75ee88*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x75ee8e*/
  }
  return result; /*0x75ee94*/
}
