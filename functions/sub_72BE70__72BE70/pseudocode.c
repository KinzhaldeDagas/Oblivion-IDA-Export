_DWORD *__thiscall sub_72BE70(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // esi

  result = a2;
  if ( a2[0x36] < 0xA010065u )
  {
    result = *(this + 2);
    if ( result )
    {
      result = NiSmartPointer_Set__(this + 3, (Ni2DBuffer *)result[2]);
      v4 = (int)*(this + 2);
      v5 = *(_DWORD *)(v4 + 8);
      v6 = (_DWORD *)(v4 + 8);
      if ( v5 )
      {
        result = (_DWORD *)InterlockedDecrement((volatile LONG *)(v5 + 4));
        if ( !result )
          result = (_DWORD *)(**(int (__thiscall ***)(int, int))v5)(v5, 1);
        *v6 = 0;
      }
    }
  }
  return result;
}
