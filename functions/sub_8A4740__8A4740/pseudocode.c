int __thiscall sub_8A4740(NodeVoid *this)
{
  int v1; // ebx
  int v2; // ebp
  NodeVoid *v3; // edi
  void (__thiscall ***v4)(void *, int); // esi
  char v6; // [esp+13h] [ebp-5h]
  void *outData; // [esp+14h] [ebp-4h] BYREF

  v1 = 0; /*0x8a4746*/
  outData = 0; /*0x8a4749*/
  v2 = 0; /*0x8a474d*/
  v3 = this + 2; /*0x8a474f*/
  while ( 1 ) /*0x8a4752*/
  {
    if ( !v3 || (v1 |= 1u, v6 = 1, !*NodeVoid_GetDataAddRef(v3, &outData)) ) /*0x8a4765*/
      v6 = 0; /*0x8a476f*/
    if ( (v1 & 1) != 0 ) /*0x8a4777*/
    {
      v4 = (void (__thiscall ***)(void *, int))outData; /*0x8a4779*/
      v1 &= ~1u; /*0x8a477d*/
      if ( outData ) /*0x8a4782*/
      {
        if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a4788*/
        {
          if ( v4 ) /*0x8a4794*/
            (**v4)(v4, 1); /*0x8a479e*/
        }
      }
    }
    if ( !v6 ) /*0x8a47a5*/
      break; /*0x8a47a5*/
    v3 = v3->next; /*0x8a47a7*/
    ++v2; /*0x8a47aa*/
  }
  return v2; /*0x8a47af*/
}
