// Throttled Oblivion sky reflection-cube refresh, called only from ShadowPass. For interiors it temporarily forces sky mode 2, refreshes colors/fog, updates atmosphere/clouds, hides moons, substitutes the sky vector, renders the sky root through ShadowSceneNode mode 3, then restores every altered state.
void __thiscall Sky__RenderReflectionCubeMapIfNeeded(Sky *this, float deltaTime)
{
  char v3; // bl
  UInt32 unk0DC; // ebp
  TES *v5; // eax
  Atmosphere *atmosphere; // ecx
  Clouds *clouds; // ecx
  NiNode *nodeMoonsRoot; // eax
  float v9; // ecx
  float v10; // edx
  int v11; // ecx
  int v12; // edx
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  bool v14; // al
  bool v15; // zf
  NiNode *v16; // esi
  float v17; // [esp+20h] [ebp-18h] BYREF
  float v18; // [esp+24h] [ebp-14h]
  float v19; // [esp+28h] [ebp-10h]
  int v20[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x543a0d*/
  if ( unk_B36658 <= (double)this->unk0F0 || !unk_B3667D || this->unk100 ) /*0x543a26*/
  {
    unk0DC = this->unk0DC; /*0x543a49*/
    this->unk0F0 = 0.0; /*0x543a4f*/
    v5 = MEMORY[0xB333A0]; /*0x543a55*/
    v17 = 0.0; /*0x543a5a*/
    v18 = 0.0; /*0x543a60*/
    v19 = 0.0; /*0x543a64*/
    if ( v5 ) /*0x543a68*/
    {
      if ( v5->currentInteriorCell ) /*0x543a6e*/
      {
        this->unk0DC = 2;                       // Exterior fog decode boundary: reflection/interior-style sky path temporarily forces mode 2 and calls 0x541DD0; not the normal exterior world update path. /*0x543a78*/
        Sky__UpdateColors(this); /*0x543a82*/
        Sky__UpdateFog(this);                   // Exterior fog decode boundary: temporary/reflection path calls 0x541DD0 after forcing mode 2; distinguish from normal 0x542F20 exterior update. /*0x543a89*/
        atmosphere = this->atmosphere; /*0x543a8e*/
        if ( atmosphere ) /*0x543a93*/
          ((void (__stdcall *)(Sky *, _DWORD))atmosphere->__vftbl[1].GetObjectNode)(this, LODWORD(deltaTime)); /*0x543aa3*/
        clouds = this->clouds; /*0x543aa5*/
        if ( clouds ) /*0x543aaa*/
          ((void (__stdcall *)(Sky *, _DWORD))clouds->__vftbl[1].GetObjectNode)(this, LODWORD(deltaTime)); /*0x543aba*/
        nodeMoonsRoot = this->nodeMoonsRoot; /*0x543abc*/
        if ( nodeMoonsRoot ) /*0x543ac1*/
        {
          v3 = nodeMoonsRoot->members.super.m_flags & 1; /*0x543ac6*/
          nodeMoonsRoot->members.super.m_flags |= 1u; /*0x543ac9*/
        }
        v9 = *(float *)&MEMORY[0xB33E90][0x1250]; /*0x543ad3*/
        v10 = *(float *)&MEMORY[0xB33E90][0x1254]; /*0x543ad9*/
        v17 = *(float *)&MEMORY[0xB33E90][0x124C]; /*0x543adf*/
        v20[0] = this->unk03C[0x18]; /*0x543ae9*/
        v18 = v9; /*0x543aed*/
        v11 = this->unk03C[0x19]; /*0x543af1*/
        v19 = v10; /*0x543af7*/
        v12 = this->unk03C[0x1A]; /*0x543afb*/
        v20[1] = v11; /*0x543b06*/
        v20[2] = v12; /*0x543b0a*/
        sub_498060(v20); /*0x543b0e*/
      }
    }
    ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x543b19*/
    v14 = ShadowSceneNode_RenderMode3CubeFaceForSource( /*0x543b3c*/
            ShadowSceneNode,
            this->nodeSkyRoot,
            *((_DWORD *)g_WorldSceneReceiverRoot + 0x37),
            this->unk100);
    v15 = this->unk100 == 0; /*0x543b41*/
    unk_B3667D = v14; /*0x543b48*/
    if ( !v15 ) /*0x543b4e*/
      this->unk100 = 0; /*0x543b50*/
    if ( MEMORY[0xB333A0] ) /*0x543b57*/
    {
      if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x543b60*/
      {
        this->unk0DC = unk0DC; /*0x543b6e*/
        Sky__Update(this, 0.0); /*0x543b74*/
        v16 = this->nodeMoonsRoot; /*0x543b79*/
        if ( v16 ) /*0x543b7e*/
        {
          if ( v3 ) /*0x543b82*/
            v16->members.super.m_flags |= 1u; /*0x543b84*/
          else
            v16->members.super.m_flags &= ~1u; /*0x543b8b*/
        }
        sub_498060((int *)&v17); /*0x543b96*/
      }
    }
  }
  else
  {
    this->unk0F0 = deltaTime + this->unk0F0; /*0x543a38*/
  }
}
