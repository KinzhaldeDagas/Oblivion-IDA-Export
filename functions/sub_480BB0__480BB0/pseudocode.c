void __cdecl sub_480BB0(Atmosphere *a1, int a2)
{
  NiRTTI *v2; // eax
  NiAVObject *PointerAtOffset08; // eax
  int v4; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 1) == 0 /*0x480bcf*/
    || !a1
    || (v2 = (NiRTTI *)((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1)) == 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 ) /*0x480be3*/
    {
      PointerAtOffset08 = Shared_GetPointerAtOffset08(a1); /*0x480be7*/
      if ( PointerAtOffset08 ) /*0x480bee*/
      {
        v4 = (int)PointerAtOffset08->vtbl->super.GetType((NiObject *)PointerAtOffset08); /*0x480bf7*/
        if ( v4 ) /*0x480bfb*/
        {
          while ( (char *)v4 != &MEMORY[0xB33E90][0x13F8] ) /*0x480c05*/
          {
            v4 = *(_DWORD *)(v4 + 4); /*0x480c07*/
            if ( !v4 ) /*0x480c0c*/
              goto LABEL_11; /*0x480c0c*/
          }
          return; /*0x480c05*/
        }
      }
LABEL_11:
      if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 /*0x480c46*/
        && Shared_GetPointerAtOffset08(a1)
        && Shared_GetPointerAtOffset08(a1)->members.super.m_pcName
        && !strcmp(Shared_GetPointerAtOffset08(a1)->members.super.m_pcName, "Arrow") )
      {
        return; /*0x480c46*/
      }
    }
    ++*(_DWORD *)(a2 + 0xC); /*0x480c48*/
    return; /*0x480c48*/
  }
  while ( v2 != &stru_B365AC ) /*0x480bd6*/
  {
    v2 = v2->parent; /*0x480bd8*/
    if ( !v2 ) /*0x480bdd*/
      goto LABEL_6; /*0x480bdd*/
  }
}
