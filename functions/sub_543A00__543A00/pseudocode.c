double __userpurge sub_543A00@<st0>(Sky *this@<ecx>, double result@<st0>, float a3)
{
  char v4; // bl
  UInt32 unk0DC; // ebp
  TES *v6; // eax
  Atmosphere *atmosphere; // ecx
  Clouds *clouds; // ecx
  NiNode *nodeMoonsRoot; // eax
  float v10; // ecx
  float v11; // edx
  int v12; // ecx
  int v13; // edx
  Ni2DBuffer **ShadowSceneNode; // eax
  char v15; // al
  bool v16; // zf
  NiNode *v17; // esi
  float v18; // [esp+20h] [ebp-18h] BYREF
  float v19; // [esp+24h] [ebp-14h]
  float v20; // [esp+28h] [ebp-10h]
  int v21[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v4 = 0;
  if ( flt_B36658 <= (double)this->unk0F0 || !byte_B3667D || this->unk100 )
  {
    unk0DC = this->unk0DC;
    this->unk0F0 = 0.0;
    v6 = TES;
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
    if ( v6 )
    {
      if ( v6->currentInteriorCell )
      {
        this->unk0DC = 2;
        sub_5418F0(this);
        sub_541DD0(this);
        atmosphere = this->atmosphere;
        if ( atmosphere )
        {
          result = a3;
          ((void (__stdcall *)(Sky *, _DWORD))atmosphere->__vftbl[1].GetObjectNode)(this, LODWORD(a3));
        }
        clouds = this->clouds;
        if ( clouds )
        {
          result = a3;
          ((void (__stdcall *)(Sky *, _DWORD))clouds->__vftbl[1].GetObjectNode)(this, LODWORD(a3));
        }
        nodeMoonsRoot = this->nodeMoonsRoot;
        if ( nodeMoonsRoot )
        {
          v4 = nodeMoonsRoot->members.super.m_flags & 1;
          nodeMoonsRoot->members.super.m_flags |= 1u;
        }
        v10 = *(float *)&dword_B350E0;
        v11 = *(float *)&dword_B350E4;
        v18 = *(float *)&dword_B350DC;
        v21[0] = this->unk03C[0x18];
        v19 = v10;
        v12 = this->unk03C[0x19];
        v20 = v11;
        v13 = this->unk03C[0x1A];
        v21[1] = v12;
        v21[2] = v13;
        sub_498060(v21);
      }
    }
    ShadowSceneNode = (Ni2DBuffer **)GetShadowSceneNode(0);
    v15 = sub_7C6310(ShadowSceneNode, (UInt32)this->nodeSkyRoot, (int)g_worldScenegraph->camera, this->unk100);
    v16 = this->unk100 == 0;
    byte_B3667D = v15;
    if ( !v16 )
      this->unk100 = 0;
    if ( TES )
    {
      if ( TES->currentInteriorCell )
      {
        this->unk0DC = unk0DC;
        sub_542F20(this, result, 0.0);
        v17 = this->nodeMoonsRoot;
        if ( v17 )
        {
          if ( v4 )
            v17->members.super.m_flags |= 1u;
          else
            v17->members.super.m_flags &= ~1u;
        }
        sub_498060((int *)&v18);
      }
    }
  }
  else
  {
    this->unk0F0 = a3 + this->unk0F0;
  }
  return result;
}
