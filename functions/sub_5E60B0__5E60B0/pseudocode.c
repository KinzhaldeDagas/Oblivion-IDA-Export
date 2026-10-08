double __thiscall sub_5E60B0(Actor *this)
{
  NiObjectNET *v1; // eax
  NiExtraData *ExtraData; // esi
  int v3; // eax
  char v4; // al
  NiExtraData *v5; // eax

  v1 = (NiObjectNET *)this->vtbl->super.super.GetNiNode(this); /*0x5e60b9*/
  ExtraData = NiObjectNET_GetExtraData(v1, off_A3FA90); /*0x5e60c7*/
  if ( !ExtraData ) /*0x5e60cb*/
    return 1.0; /*0x5e60cb*/
  v3 = (int)ExtraData->__vftable->super.GetType((NiObject *)ExtraData); /*0x5e60d4*/
  if ( v3 ) /*0x5e60d8*/
  {
    while ( (char *)v3 != &MEMORY[0xB33E90][0x1404] ) /*0x5e60e5*/
    {
      v3 = *(_DWORD *)(v3 + 4); /*0x5e60e7*/
      if ( !v3 ) /*0x5e60ec*/
        goto LABEL_5; /*0x5e60ec*/
    }
    v4 = 1; /*0x5e60fd*/
  }
  else
  {
LABEL_5:
    v4 = 0; /*0x5e60ee*/
  }
  v5 = v4 != 0 ? ExtraData : 0;
  if ( v5 ) /*0x5e60f6*/
    return *(float *)&v5[1].__vftable; /*0x5e60f8*/
  else
    return 1.0; /*0x5e6101*/
}
