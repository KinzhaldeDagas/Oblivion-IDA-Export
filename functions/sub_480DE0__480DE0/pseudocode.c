NiRTTI *__cdecl sub_480DE0(Atmosphere *a1, int a2)
{
  NiRTTI *result; // eax
  NiAVObject *PointerAtOffset08; // eax
  int v4; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 1) == 0 /*0x480e00*/
    || !a1
    || (result = (NiRTTI *)((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1)) == 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 ) /*0x480e18*/
    {
      PointerAtOffset08 = Shared_GetPointerAtOffset08(a1); /*0x480e1c*/
      if ( PointerAtOffset08 ) /*0x480e23*/
      {
        result = PointerAtOffset08->vtbl->super.GetType((NiObject *)PointerAtOffset08); /*0x480e2c*/
        if ( result ) /*0x480e30*/
        {
          while ( result != (NiRTTI *)&MEMORY[0xB33E90][0x13F8] ) /*0x480e37*/
          {
            result = result->parent; /*0x480e39*/
            if ( !result ) /*0x480e3e*/
              goto LABEL_11; /*0x480e3e*/
          }
          return result; /*0x480e37*/
        }
      }
LABEL_11:
      if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 ) /*0x480e44*/
      {
        if ( Shared_GetPointerAtOffset08(a1) ) /*0x480e48*/
        {
          if ( Shared_GetPointerAtOffset08(a1)->members.super.m_pcName ) /*0x480e58*/
          {
            result = (NiRTTI *)Shared_GetPointerAtOffset08(a1); /*0x480e62*/
            if ( !strcmp(result[1].name, "Arrow") ) /*0x480e7a*/
              return result; /*0x480e7a*/
          }
        }
      }
    }
    v4 = *(_DWORD *)(a2 + 0xC); /*0x480e7c*/
    if ( v4 == *(_DWORD *)(a2 + 0x14) ) /*0x480e82*/
      *(_DWORD *)(a2 + 0x10) = a1; /*0x480e84*/
    result = (NiRTTI *)(v4 + 1); /*0x480e87*/
    *(_DWORD *)(a2 + 0xC) = result; /*0x480e8a*/
    return result; /*0x480e8a*/
  }
  while ( result != &stru_B365AC ) /*0x480e07*/
  {
    result = result->parent; /*0x480e0d*/
    if ( !result ) /*0x480e12*/
      goto LABEL_6; /*0x480e12*/
  }
  return result; /*0x480e8d*/
}
