char __cdecl sub_478220(NiObjectNET *a1, int a2, int a3, TESObjectREFR *a4)
{
  NiExtraData *ExtraData; // eax
  int v5; // eax
  int v6; // eax

  ExtraData = NiObjectNET_GetExtraData(a1, dword_A7D0EC); /*0x478229*/
  if ( ExtraData ) /*0x478230*/
  {
    ExtraData = (NiExtraData *)((unsigned int)ExtraData[1].__vftable >> 4); /*0x478235*/
    if ( ((unsigned __int8)ExtraData & 1) != 0 ) /*0x47823a*/
    {
      if ( a4 ) /*0x478248*/
      {
        if ( a3 == 0xE ) /*0x47824f*/
        {
          v5 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl->GetActiveSkinInfo)(a4); /*0x47825b*/
          if ( v5 ) /*0x47825f*/
          {
            v6 = *(_DWORD *)(v5 + 0x130); /*0x478261*/
            if ( v6 ) /*0x478269*/
              TESObjectLIGH_ConfigureReferencePointLight((void *)(v6 - 0x30), a4, a2); /*0x478270*/
          }
        }
      }
      LOBYTE(ExtraData) = sub_4E26F0((int)a4, a2); /*0x478276*/
    }
  }
  return (char)ExtraData; /*0x478280*/
}
