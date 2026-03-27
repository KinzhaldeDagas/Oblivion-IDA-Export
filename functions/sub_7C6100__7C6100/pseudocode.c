char __cdecl sub_7C6100(NiNode *a1, int a2)
{
  int ShadowSceneNode; // edi
  NiProperty *NiPropertyByID; // esi
  NiProperty *v4; // eax
  char result; // al
  _DWORD *v6; // ebp
  char *v7; // esi
  float **v8; // eax
  char v9; // bl
  void (__thiscall ***v10)(_DWORD, int); // edi

  ShadowSceneNode = a2;
  if ( !a2 )
  {
    NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
    if ( !NiPropertyByID )
      return 1;
    v4 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF
       ? NiPropertyByID
       : 0;
    if ( v4 )
      ShadowSceneNode = GetShadowSceneNode(v4[1].members.super.m_uiRefCount >> 0x1C);
  }
  result = sub_7C5750((unsigned __int8 *)ShadowSceneNode, a1);
  if ( !result )
    return result;
  v6 = *(_DWORD **)(ShadowSceneNode + 0xE8);
  while ( v6 )
  {
    v7 = (char *)v6[2];
    v6 = (_DWORD *)*v6;
    if ( v7 )
    {
      v8 = (float **)sub_405AD0(v7, &a2);
      v9 = sub_7D2EA0(v7, (int *)a1, *v8);
      if ( a2 )
      {
        v10 = (void (__thiscall ***)(_DWORD, int))a2;
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
          (**v10)(v10, 1);
      }
      if ( v9 )
        sub_7D5790(v7, (int)a1);
    }
  }
  return 1;
}
