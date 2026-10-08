void __cdecl sub_480CB0(Atmosphere *a1, int a2)
{
  NiRTTI *v2; // eax
  NiAVObject *PointerAtOffset08; // eax
  int v4; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 1) == 0 /*0x480cd0*/
    || !a1
    || (v2 = (NiRTTI *)((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1)) == 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 ) /*0x480ce8*/
    {
      PointerAtOffset08 = Shared_GetPointerAtOffset08(a1); /*0x480cec*/
      if ( PointerAtOffset08 ) /*0x480cf3*/
      {
        v4 = (int)PointerAtOffset08->vtbl->super.GetType((NiObject *)PointerAtOffset08); /*0x480cfc*/
        if ( v4 ) /*0x480d00*/
        {
          while ( (char *)v4 != &MEMORY[0xB33E90][0x13F8] ) /*0x480d07*/
          {
            v4 = *(_DWORD *)(v4 + 4); /*0x480d09*/
            if ( !v4 ) /*0x480d0e*/
              goto LABEL_11; /*0x480d0e*/
          }
          return; /*0x480d07*/
        }
      }
LABEL_11:
      if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 /*0x480d4a*/
        && Shared_GetPointerAtOffset08(a1)
        && Shared_GetPointerAtOffset08(a1)->members.super.m_pcName
        && !strcmp(Shared_GetPointerAtOffset08(a1)->members.super.m_pcName, "Arrow") )
      {
        return; /*0x480d4a*/
      }
    }
    if ( a1 == *(Atmosphere **)(a2 + 0x10) ) /*0x480d4f*/
      *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0xC); /*0x480d54*/
    ++*(_DWORD *)(a2 + 0xC); /*0x480d57*/
    return; /*0x480d57*/
  }
  while ( v2 != &stru_B365AC ) /*0x480cd7*/
  {
    v2 = v2->parent; /*0x480cdd*/
    if ( !v2 ) /*0x480ce2*/
      goto LABEL_6; /*0x480ce2*/
  }
}
