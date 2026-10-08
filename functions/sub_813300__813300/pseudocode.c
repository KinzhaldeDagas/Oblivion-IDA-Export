// Mode-0 cube-map helper: swaps temporary accumulator/culling state and renders the current ShadowSceneLight's +0xE8 category/object list through ShadowSceneLight_RenderCategoryObjectList.
void __thiscall sub_813300(NiNode *this, int ***a2)
{
  NiDX9Renderer *v3; // ebp
  bool v4; // zf
  BSShaderAccumulator *inited; // eax
  BSShaderAccumulator *v6; // esi
  NiAccumulator *accumulator; // ebx
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  float v9[3]; // [esp+38h] [ebp-C8h] BYREF
  float v10[3]; // [esp+44h] [ebp-BCh] BYREF
  float v11[5]; // [esp+50h] [ebp-B0h] BYREF
  _BYTE v12[156]; // [esp+64h] [ebp-9Ch] BYREF

  if ( a2 ) /*0x813337*/
  {
    v3 = unk_B43104; /*0x813340*/
    v9[0] = this->members.super.m_worldTransform.rot.data[0][2]; /*0x813346*/
    v4 = v3->member.super.SceneState1 == 1; /*0x81334f*/
    v9[1] = this->members.super.m_worldTransform.rot.data[1][2]; /*0x813358*/
    v9[2] = this->members.super.m_worldTransform.rot.data[2][2]; /*0x813362*/
    v10[0] = this->members.super.m_worldTransform.rot.data[0][1]; /*0x813369*/
    v10[1] = this->members.super.m_worldTransform.rot.data[1][1]; /*0x813370*/
    v10[2] = this->members.super.m_worldTransform.rot.data[2][1]; /*0x81337a*/
    v11[0] = this->members.super.m_worldTransform.rot.data[0][0]; /*0x813381*/
    v11[1] = this->members.super.m_worldTransform.rot.data[1][0]; /*0x813388*/
    v11[2] = this->members.super.m_worldTransform.rot.data[2][0]; /*0x81338f*/
    if ( (v4 || v3->member.super.SceneState2 == 1) && v3->member.super.IsReady == 1 ) /*0x8133a3*/
      v3->__vftable->super.SetupCamera( /*0x8133d4*/
        (NiRenderer *)v3,
        &this->members.super.m_worldTransform.pos,
        (NiPoint3 *)v11,
        (NiPoint3 *)v10,
        (NiPoint3 *)v9,
        (NiFrustum *)((char *)this + 0xEC),
        (float *)this + 0x44);
    inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x8133d6*/
    v6 = inited; /*0x8133db*/
    LODWORD(v11[4]) = inited; /*0x8133df*/
    if ( inited ) /*0x8133e3*/
      InterlockedIncrement((volatile LONG *)inited + 1); /*0x8133e9*/
    accumulator = v3->member.super.accumulator; /*0x8133ef*/
    *(_DWORD *)&v12[0x98] = 0; /*0x8133f4*/
    LODWORD(v11[3]) = accumulator; /*0x8133ff*/
    if ( accumulator ) /*0x813403*/
      InterlockedIncrement((volatile LONG *)accumulator + 1); /*0x813409*/
    v12[0x98] = 1; /*0x813412*/
    NiDX9Renderer::SetShaderAccumulator(v3, v6); /*0x81341a*/
    (*(void (__thiscall **)(BSShaderAccumulator *, NiNode *))(*(_DWORD *)v6 + 0x4C))(v6, this); /*0x813427*/
    *((_BYTE *)v6 + 0x21E0) = 1; /*0x81342f*/
    NiCullingProcess_NiCullingProcess((NiCullingProcess *)v12, 0); /*0x813436*/
    v12[0x98] = 2; /*0x813445*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)this, 0.0, 1); /*0x81344d*/
    *(_DWORD *)&v12[0xC] = this; /*0x813452*/
    NiCullingProcess::SetFrustum((NiCullingProcess *)v12, (NiFrustum *)((char *)this + 0xEC)); /*0x813461*/
    ShadowSceneLight_RenderCategoryObjectList(a2, (NiCullingProcess *)v12); /*0x813472*/
    *((_BYTE *)v6 + 0x21E1) = 1; /*0x813477*/
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v6 + 0x50))(v6); /*0x813485*/
    NiDX9Renderer::SetShaderAccumulator(v3, accumulator); /*0x81348a*/
    if ( *((_DWORD *)v6 + 1) < 2u ) /*0x813496*/
      InterlockedIncrement((volatile LONG *)v6 + 1); /*0x813499*/
    v12[0x98] = 1; /*0x8134a3*/
    BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v12); /*0x8134ab*/
    v8 = InterlockedDecrement; /*0x8134b2*/
    v12[0x98] = 0; /*0x8134b8*/
    if ( accumulator ) /*0x8134c0*/
    {
      if ( !v8((volatile LONG *)accumulator + 1) ) /*0x8134c6*/
        (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1); /*0x8134d4*/
    }
    *(_DWORD *)&v12[0x98] = 0xFFFFFFFF; /*0x8134d7*/
    if ( !v8((volatile LONG *)v6 + 1) ) /*0x8134e2*/
      (**(void (__thiscall ***)(BSShaderAccumulator *, int))v6)(v6, 1); /*0x8134f0*/
  }
}
