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

  if ( a2 )
  {
    v3 = dword_B43104;
    v9[0] = this->members.super.m_worldTransform.rot.data[0][2];
    v4 = v3->member.super.SceneState1 == 1;
    v9[1] = this->members.super.m_worldTransform.rot.data[1][2];
    v9[2] = this->members.super.m_worldTransform.rot.data[2][2];
    v10[0] = this->members.super.m_worldTransform.rot.data[0][1];
    v10[1] = this->members.super.m_worldTransform.rot.data[1][1];
    v10[2] = this->members.super.m_worldTransform.rot.data[2][1];
    v11[0] = this->members.super.m_worldTransform.rot.data[0][0];
    v11[1] = this->members.super.m_worldTransform.rot.data[1][0];
    v11[2] = this->members.super.m_worldTransform.rot.data[2][0];
    if ( (v4 || v3->member.super.SceneState2 == 1) && v3->member.super.IsReady == 1 )
      v3->__vftable->super.SetupCamera(
        (NiRenderer *)v3,
        &this->members.super.m_worldTransform.pos,
        (NiPoint3 *)v11,
        (NiPoint3 *)v10,
        (NiPoint3 *)v9,
        (NiFrustum *)((char *)this + 0xEC),
        (float *)this + 0x44);
    inited = InitBSShaderAccumulator();
    v6 = inited;
    LODWORD(v11[4]) = inited;
    if ( inited )
      InterlockedIncrement((volatile LONG *)inited + 1);
    accumulator = v3->member.super.accumulator;
    *(_DWORD *)&v12[0x98] = 0;
    LODWORD(v11[3]) = accumulator;
    if ( accumulator )
      InterlockedIncrement((volatile LONG *)accumulator + 1);
    v12[0x98] = 1;
    NiDX9Renderer::SetShaderAccumulator(v3, v6);
    (*(void (__thiscall **)(BSShaderAccumulator *, NiNode *))(*(_DWORD *)v6 + 0x4C))(v6, this);
    *((_BYTE *)v6 + 0x21E0) = 1;
    NiCullingProcess_NiCullingProcess((NiCullingProcess *)v12, 0);
    v12[0x98] = 2;
    NiAVObject_UpdateNiAVObject((NiAVObject *)this, 0.0, 1);
    *(_DWORD *)&v12[0xC] = this;
    NiCullingProcess::SetFrustum((NiCullingProcess *)v12, (NiFrustum *)((char *)this + 0xEC));
    sub_7D2070(a2, (NiCullingProcess *)v12);
    *((_BYTE *)v6 + 0x21E1) = 1;
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v6 + 0x50))(v6);
    NiDX9Renderer::SetShaderAccumulator(v3, accumulator);
    if ( *((_DWORD *)v6 + 1) < 2u )
      InterlockedIncrement((volatile LONG *)v6 + 1);
    v12[0x98] = 1;
    BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v12);
    v8 = InterlockedDecrement;
    v12[0x98] = 0;
    if ( accumulator )
    {
      if ( !v8((volatile LONG *)accumulator + 1) )
        (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1);
    }
    *(_DWORD *)&v12[0x98] = 0xFFFFFFFF;
    if ( !v8((volatile LONG *)v6 + 1) )
      (**(void (__thiscall ***)(BSShaderAccumulator *, int))v6)(v6, 1);
  }
}
