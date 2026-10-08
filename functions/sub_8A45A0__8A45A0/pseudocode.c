char __thiscall sub_8A45A0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  NodeVoid *i; // edi
  bool v5; // bl
  void (__thiscall ***v6)(void *, int); // esi
  void **DataAddRef; // eax
  void *v8; // ecx
  void (__thiscall *v9)(void *, int); // edx
  void (__thiscall ***v10)(void *, int); // esi
  char v11; // [esp+13h] [ebp-19h]
  int v12; // [esp+14h] [ebp-18h]
  void *outData; // [esp+18h] [ebp-14h] BYREF
  void *v14; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v12 = 0; /*0x8a45cd*/
  result = sub_89F390(this, a2); /*0x8a45d5*/
  v11 = result; /*0x8a45dc*/
  if ( result ) /*0x8a45e0*/
  {
    for ( i = (NodeVoid *)&this->members.RenderTargets[2]; ; i = i->next ) /*0x8a45e6*/
    {
      v5 = 0; /*0x8a460a*/
      if ( i ) /*0x8a45f2*/
      {
        v12 |= 1u; /*0x8a4600*/
        if ( *NodeVoid_GetDataAddRef(i, &outData) ) /*0x8a4605*/
          v5 = 1; /*0x8a45f2*/
      }
      if ( (v12 & 1) != 0 ) /*0x8a4615*/
      {
        v6 = (void (__thiscall ***)(void *, int))outData; /*0x8a4617*/
        v12 &= ~1u; /*0x8a461b*/
        if ( outData ) /*0x8a4622*/
        {
          if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a4628*/
          {
            if ( v6 ) /*0x8a4634*/
              (**v6)(v6, 1); /*0x8a463e*/
          }
        }
      }
      if ( !v5 ) /*0x8a4642*/
        break; /*0x8a4642*/
      DataAddRef = NodeVoid_GetDataAddRef(i, &v14); /*0x8a464b*/
      v8 = *DataAddRef; /*0x8a4650*/
      v9 = *(void (__thiscall **)(void *, int))(*(_DWORD *)*DataAddRef + 0x24); /*0x8a4658*/
      v15 = 0; /*0x8a465c*/
      v9(v8, a2); /*0x8a4664*/
      v15 = 0xFFFFFFFF; /*0x8a466c*/
      if ( v14 ) /*0x8a4674*/
      {
        v10 = (void (__thiscall ***)(void *, int))v14; /*0x8a4676*/
        if ( !InterlockedDecrement((volatile LONG *)v14 + 1) ) /*0x8a467c*/
          (**v10)(v10, 1); /*0x8a4692*/
      }
    }
    return v11; /*0x8a469c*/
  }
  return result; /*0x8a46a0*/
}
