double __thiscall sub_6634D0(TESObjectREFR *this)
{
  NiObjectNET *NiNode; // eax
  NiExtraData *ExtraData; // esi
  int v3; // eax
  char v4; // al
  NiExtraData *v5; // eax

  NiNode = (NiObjectNET *)TESObjectREFR::GetNiNode(this); /*0x6634d1*/
  ExtraData = NiObjectNET_GetExtraData(NiNode, off_A3FA90); /*0x6634e2*/
  if ( !ExtraData ) /*0x6634e6*/
    return 1.0; /*0x6634e6*/
  v3 = (int)ExtraData->__vftable->super.GetType((NiObject *)ExtraData); /*0x6634ef*/
  if ( v3 ) /*0x6634f3*/
  {
    while ( (char *)v3 != &MEMORY[0xB33E90][0x1404] ) /*0x6634fa*/
    {
      v3 = *(_DWORD *)(v3 + 4); /*0x6634fc*/
      if ( !v3 ) /*0x663501*/
        goto LABEL_5; /*0x663501*/
    }
    v4 = 1; /*0x663512*/
  }
  else
  {
LABEL_5:
    v4 = 0; /*0x663503*/
  }
  v5 = v4 != 0 ? ExtraData : 0;
  if ( v5 ) /*0x66350b*/
    return *(float *)&v5[1].__vftable; /*0x66350d*/
  else
    return 1.0; /*0x663516*/
}
