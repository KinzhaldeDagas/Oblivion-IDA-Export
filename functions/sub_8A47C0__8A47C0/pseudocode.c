void __thiscall sub_8A47C0(NodeVoid *this, int a2)
{
  NodeVoid *i; // edi
  bool v3; // bl
  void (__thiscall ***v4)(void *, int); // esi
  void **DataAddRef; // eax
  void *v6; // ecx
  void (__thiscall *v7)(void *, int); // edx
  void (__thiscall ***v8)(void *, int); // esi
  int v9; // [esp+10h] [ebp-18h]
  void *outData; // [esp+14h] [ebp-14h] BYREF
  void *v11; // [esp+18h] [ebp-10h] BYREF
  unsigned int v12; // [esp+24h] [ebp-4h]

  v9 = 0; /*0x8a47e6*/
  for ( i = this + 2; ; i = i->next ) /*0x8a47ee*/
  {
    v3 = 0; /*0x8a480b*/
    if ( i ) /*0x8a47f3*/
    {
      v9 |= 1u; /*0x8a4801*/
      if ( *NodeVoid_GetDataAddRef(i, &outData) ) /*0x8a4806*/
        v3 = 1; /*0x8a47f3*/
    }
    if ( (v9 & 1) != 0 ) /*0x8a4816*/
    {
      v4 = (void (__thiscall ***)(void *, int))outData; /*0x8a4818*/
      v9 &= ~1u; /*0x8a481c*/
      if ( outData ) /*0x8a4823*/
      {
        if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a4829*/
        {
          if ( v4 ) /*0x8a4835*/
            (**v4)(v4, 1); /*0x8a483f*/
        }
      }
    }
    if ( !v3 ) /*0x8a4843*/
      break; /*0x8a4843*/
    DataAddRef = NodeVoid_GetDataAddRef(i, &v11); /*0x8a484c*/
    v6 = *DataAddRef; /*0x8a4851*/
    v7 = *(void (__thiscall **)(void *, int))(*(_DWORD *)*DataAddRef + 0x5C); /*0x8a4859*/
    v12 = 0; /*0x8a485d*/
    v7(v6, a2); /*0x8a4865*/
    v12 = 0xFFFFFFFF; /*0x8a486d*/
    if ( v11 ) /*0x8a4875*/
    {
      v8 = (void (__thiscall ***)(void *, int))v11; /*0x8a4877*/
      if ( !InterlockedDecrement((volatile LONG *)v11 + 1) ) /*0x8a487d*/
        (**v8)(v8, 1); /*0x8a4893*/
    }
  }
}
