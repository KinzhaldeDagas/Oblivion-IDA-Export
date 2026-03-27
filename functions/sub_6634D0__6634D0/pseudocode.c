double __thiscall sub_6634D0(TESObjectREFR *this)
{
  NiObjectNET *NiNode; // eax
  NiExtraData *ExtraData; // esi
  int v3; // eax
  char v4; // al
  NiExtraData *v5; // eax

  NiNode = (NiObjectNET *)TESObjectREFR::GetNiNode(this);
  ExtraData = NiObjectNET_GetExtraData(NiNode, off_A3FA90);
  if ( !ExtraData )
    return 1.0;
  v3 = (int)ExtraData->__vftable->super.GetType((NiObject *)ExtraData);
  if ( v3 )
  {
    while ( (char *)v3 != dword_B35294 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      if ( !v3 )
        goto LABEL_5;
    }
    v4 = 1;
  }
  else
  {
LABEL_5:
    v4 = 0;
  }
  v5 = v4 != 0 ? ExtraData : 0;
  if ( v5 )
    return *(float *)&v5[1].__vftable;
  else
    return 1.0;
}
