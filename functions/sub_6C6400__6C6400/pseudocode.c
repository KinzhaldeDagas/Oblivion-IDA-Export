NiObject *sub_6C6400()
{
  NiObject *result; // eax
  NiObject *v1; // eax
  NiObject *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // edi
  size_t v4; // [esp-4h] [ebp-20h]

  result = (NiObject *)unk_B3CB30; /*0x6c6423*/
  if ( !unk_B3CB30 ) /*0x6c6423*/
  {
    v1 = (NiObject *)FormHeapAlloc(0x14u); /*0x6c642e*/
    if ( v1 ) /*0x6c6444*/
    {
      LODWORD(v4) = 0x100; /*0x6c6446*/
      v2 = sub_6C5D80(v1, v4); /*0x6c6452*/
    }
    else
    {
      v2 = 0; /*0x6c6456*/
    }
    result = (NiObject *)unk_B3CB30; /*0x6c6458*/
    if ( (NiObject *)unk_B3CB30 != v2 ) /*0x6c6467*/
    {
      if ( result ) /*0x6c646b*/
      {
        v3 = (void (__thiscall ***)(_DWORD, int))unk_B3CB30; /*0x6c646d*/
        if ( !InterlockedDecrement((volatile LONG *)&result->members) ) /*0x6c6473*/
          (**v3)(v3, 1); /*0x6c6489*/
      }
      result = v2; /*0x6c648d*/
      unk_B3CB30 = (int)v2; /*0x6c648f*/
      if ( v2 ) /*0x6c6494*/
      {
        InterlockedIncrement((volatile LONG *)&v2->members); /*0x6c649a*/
        return (NiObject *)unk_B3CB30; /*0x6c64a0*/
      }
    }
  }
  return result; /*0x6c64a5*/
}
