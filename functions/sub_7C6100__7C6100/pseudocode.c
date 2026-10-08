// Test one incoming geometry against full-list lights and associate it with each eligible native receiver path.
char __cdecl sub_7C6100(NiNode *a1, int a2)
{
  int ShadowSceneNode; // edi
  NiProperty *NiPropertyByID; // esi
  NiProperty *v4; // eax
  char result; // al
  _DWORD *v6; // ebp
  char *v7; // esi
  float **LightRef; // eax
  char v9; // bl
  void (__thiscall ***v10)(_DWORD, int); // edi

  ShadowSceneNode = a2; /*0x7c6124*/
  if ( !a2 )
  {
    NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x7c6137*/
    if ( !NiPropertyByID ) /*0x7c613b*/
      return 1; /*0x7c613b*/
    v4 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF
       ? NiPropertyByID
       : 0;
    if ( v4 ) /*0x7c6153*/
      ShadowSceneNode = GetShadowSceneNode(v4[1].members.super.m_uiRefCount >> 0x1C); /*0x7c6167*/
  }
  result = sub_7C5750((unsigned __int8 *)ShadowSceneNode, a1); /*0x7c6170*/
  if ( !result ) /*0x7c6177*/
    return result; /*0x7c6177*/
  v6 = *(_DWORD **)(ShadowSceneNode + 0xE8); /*0x7c618d*/
  while ( v6 ) /*0x7c6195*/
  {
    v7 = (char *)v6[2]; /*0x7c6197*/
    v6 = (_DWORD *)*v6; /*0x7c619f*/
    if ( v7 ) /*0x7c61a2*/
    {
      LightRef = (float **)ShadowSceneLight_GetLightRef(v7, &a2); /*0x7c61ab*/
      v9 = ShadowSceneLight_TestReceiverEligibility(v7, (float *)a1, *LightRef); /*0x7c61c7*/
      if ( a2 ) /*0x7c61d7*/
      {
        v10 = (void (__thiscall ***)(_DWORD, int))a2; /*0x7c61d9*/
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x7c61df*/
          (**v10)(v10, 1); /*0x7c61f5*/
      }
      if ( v9 ) /*0x7c61f9*/
        ShadowSceneLight_AssociateReceiverGeometry(v7, (int)a1); /*0x7c6202*/
    }
  }
  return 1; /*0x7c6179*/
}
