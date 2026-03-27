volatile LONG *__usercall MobileObject_GenerateNiNode@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>)
{
  NiObjectNET *NiNode; // eax
  volatile LONG *v6; // edi
  NiExtraData *ExtraData; // eax
  _DWORD *ShadowSceneNode; // eax

  NiNode = (NiObjectNET *)TESObjectREFR_GenerateNiNode(a1, a2, a3, a4);
  v6 = (volatile LONG *)NiNode;
  if ( NiNode )
  {
    if ( a1[1].vtbl )
    {
      ExtraData = NiObjectNET_GetExtraData(NiNode, (const char *)&off_A7D2CC);
      if ( ExtraData )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, NiExtraData *))a1[1].vtbl->super.super.InitializeComponent + 0x11C))(
          a1[1].vtbl,
          ExtraData);
    }
  }
  if ( a1->vtbl->IsActor(a1) )
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    ShadowSceneNodeAddShadowCaster(ShadowSceneNode, v6);
  }
  return v6;
}
