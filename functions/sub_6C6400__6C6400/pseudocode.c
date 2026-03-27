NiObject *sub_6C6400()
{
  NiObject *result; // eax
  NiObject *v1; // eax
  NiObject *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // edi
  size_t v4; // [esp-4h] [ebp-20h]

  result = (NiObject *)dword_B3CB30;
  if ( !dword_B3CB30 )
  {
    v1 = (NiObject *)FormHeapAlloc(0x14u);
    if ( v1 )
    {
      LODWORD(v4) = 0x100;
      v2 = sub_6C5D80(v1, v4);
    }
    else
    {
      v2 = 0;
    }
    result = (NiObject *)dword_B3CB30;
    if ( (NiObject *)dword_B3CB30 != v2 )
    {
      if ( result )
      {
        v3 = (void (__thiscall ***)(_DWORD, int))dword_B3CB30;
        if ( !InterlockedDecrement((volatile LONG *)&result->members) )
          (**v3)(v3, 1);
      }
      result = v2;
      dword_B3CB30 = (int)v2;
      if ( v2 )
      {
        InterlockedIncrement((volatile LONG *)&v2->members);
        return (NiObject *)dword_B3CB30;
      }
    }
  }
  return result;
}
