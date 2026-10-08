// Remove one ShadowSceneLight from the full-list owner with native refcount/list cleanup.
LONG __thiscall sub_7C77C0(int **this, LONG a2)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // edi
  int (__thiscall ***v5)(_DWORD, int); // esi
  LONG (__thiscall ***v6)(_DWORD, int); // esi
  LONG v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  result = a2; /*0x7c77e5*/
  if ( a2 ) /*0x7c77eb*/
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7c77f5*/
    v8 = 0; /*0x7c780b*/
    NiTRefPointerList__RemoveFirstByValue(this + 0x39, &v7, &a2); /*0x7c7813*/
    result = v7; /*0x7c7818*/
    v4 = InterlockedDecrement; /*0x7c781e*/
    if ( v7 ) /*0x7c7824*/
    {
      v5 = (int (__thiscall ***)(_DWORD, int))v7; /*0x7c7826*/
      result = v4((volatile LONG *)(v7 + 4)); /*0x7c782c*/
      if ( !result ) /*0x7c7830*/
        result = (**v5)(v5, 1); /*0x7c783e*/
    }
    v6 = (LONG (__thiscall ***)(_DWORD, int))a2; /*0x7c7840*/
    v8 = 0xFFFFFFFF; /*0x7c7846*/
    if ( a2 ) /*0x7c784e*/
    {
      result = v4((volatile LONG *)(a2 + 4)); /*0x7c7854*/
      if ( !result ) /*0x7c7858*/
        return (**v6)(v6, 1); /*0x7c7862*/
    }
  }
  return result; /*0x7c7864*/
}
