LONG __thiscall sub_4A1220(int ***this, int a2)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // edi
  int (__thiscall ***v5)(_DWORD, int); // esi
  LONG (__thiscall ***v6)(_DWORD, int); // esi
  LONG v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  if ( a2 ) /*0x4a124f*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x4a1255*/
  v8 = 0; /*0x4a126b*/
  sub_4A0E50(this + 0x26, &v7, &a2); /*0x4a1273*/
  result = v7; /*0x4a1278*/
  v4 = InterlockedDecrement; /*0x4a127e*/
  if ( v7 ) /*0x4a1284*/
  {
    v5 = (int (__thiscall ***)(_DWORD, int))v7; /*0x4a1286*/
    result = v4((volatile LONG *)(v7 + 4)); /*0x4a128c*/
    if ( !result ) /*0x4a1290*/
      result = (**v5)(v5, 1); /*0x4a129e*/
  }
  v6 = (LONG (__thiscall ***)(_DWORD, int))a2; /*0x4a12a0*/
  v8 = 0xFFFFFFFF; /*0x4a12a6*/
  if ( a2 ) /*0x4a12ae*/
  {
    result = v4((volatile LONG *)(a2 + 4)); /*0x4a12b4*/
    if ( !result ) /*0x4a12b8*/
      return (**v6)(v6, 1); /*0x4a12c2*/
  }
  return result; /*0x4a12c4*/
}
