_DWORD *__thiscall sub_72BE70(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // esi

  result = a2; /*0x72be70*/
  if ( a2[0x36] < 0xA010065u ) /*0x72be81*/
  {
    result = *(this + 2); /*0x72be83*/
    if ( result ) /*0x72be88*/
    {
      result = NiSmartPointer_Set__(this + 3, (Ni2DBuffer *)result[2]); /*0x72be92*/
      v4 = (int)*(this + 2); /*0x72be97*/
      v5 = *(_DWORD *)(v4 + 8); /*0x72be9a*/
      v6 = (_DWORD *)(v4 + 8); /*0x72be9d*/
      if ( v5 ) /*0x72bea2*/
      {
        result = (_DWORD *)InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x72bea8*/
        if ( !result ) /*0x72beb0*/
          result = (_DWORD *)(**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x72bebe*/
        *v6 = 0; /*0x72bec0*/
      }
    }
  }
  return result; /*0x72bec7*/
}
