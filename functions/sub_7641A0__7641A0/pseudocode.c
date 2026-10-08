// Initialize NiDX9Renderer state defaults, including clear depth 1.0 and clear stencil 0.
void __thiscall NiDX9Renderer_InitializeStateDefaults(NiDX9Renderer *this)
{
  double v2; // st7
  float z; // eax
  double v4; // st6
  double v5; // st7
  NiPixelData **DefaultTextureData; // ebp
  Unk6F4 *unk6F4; // edi
  int v8; // [esp+10h] [ebp-8h]
  NiPixelData *v9; // [esp+14h] [ebp-4h]

  this->member.device = 0; /*0x7641b8*/
  _memset((int)&this->member.caps, 0, sizeof(this->member.caps)); /*0x7641be*/
  this->member.clearDepth = 1.0;                // Native default clear depth = 1.0. /*0x7641c5*/
  this->member.deviceWindow = 0; /*0x7641cb*/
  this->member.rendererInfo[0] = 0; /*0x7641d1*/
  v2 = kFaceEarNormalMatchRadius; /*0x7641d7*/
  this->member.adapterIdx = 0; /*0x7641dd*/
  this->member.focusWindow = 0; /*0x7641e3*/
  this->member.d3dDevFlags = 0; /*0x7641e9*/
  this->member.softwareVertexProcessing = 0; /*0x7641ef*/
  this->member.mixedVertexProcessing = 0; /*0x7641f5*/
  this->member.HWBones = 0; /*0x7641fb*/
  this->member.MaxStreams = 0; /*0x764201*/
  this->member.Unk6E0 = 0; /*0x764207*/
  this->member.Unk6E4 = 0; /*0x76420d*/
  this->member.pad6E8 = 0; /*0x764213*/
  this->member.unk6E9 = 0; /*0x764219*/
  this->member.unk894 = 0; /*0x76421f*/
  this->member.unk898 = 0; /*0x764225*/
  this->member.pad899[0] = 0; /*0x76422b*/
  this->member.ResetCounter = 0; /*0x764231*/
  this->member.lostDevice = 0; /*0x764237*/
  this->member.clearColor = 0xFF808080; /*0x76423d*/
  this->member.clearStencil = 0;                // Native default clear stencil = 0. /*0x764247*/
  this->member.rendFlags = 0; /*0x76424d*/
  this->member.behavior[0] = 0; /*0x764253*/
  this->member.d3dDevType = 1; /*0x76425e*/
  this->member.pad624[5] = LODWORD(stru_B258D0.x); /*0x76426a*/
  this->member.pad624[6] = LODWORD(stru_B258D0.y); /*0x764276*/
  this->member.pad624[7] = LODWORD(stru_B258D0.z); /*0x764281*/
  this->member.pad624[8] = LODWORD(stru_B258DC.x); /*0x76428d*/
  this->member.pad624[9] = LODWORD(stru_B258DC.y); /*0x764299*/
  this->member.pad624[0xA] = LODWORD(stru_B258DC.z); /*0x7642a4*/
  this->member.pad624[0xB] = LODWORD(stru_B258D0.x); /*0x7642b0*/
  this->member.pad624[0xC] = LODWORD(stru_B258D0.y); /*0x7642bc*/
  this->member.camRight.x = stru_B258D0.z; /*0x7642c7*/
  this->member.camRight.y = stru_B258DC.x; /*0x7642d3*/
  this->member.camRight.z = stru_B258DC.y; /*0x7642df*/
  z = stru_B258DC.z; /*0x7642e5*/
  this->member.NearDepth = v2; /*0x7642ea*/
  this->member.DepthRange = flt_A2FE7C; /*0x7642fe*/
  this->member.camUp.x = z; /*0x764306*/
  _memset((int)&this->member.identityMatrix, 0, sizeof(this->member.identityMatrix)); /*0x76430c*/
  this->member.identityMatrix._44 = 1.0; /*0x764313*/
  this->member.identityMatrix._33 = 1.0; /*0x76431c*/
  this->member.pad624[0] = 0; /*0x764322*/
  this->member.identityMatrix._22 = 1.0; /*0x764328*/
  this->member.pad624[1] = 0; /*0x76432e*/
  this->member.identityMatrix._11 = 1.0; /*0x764334*/
  this->member.viewport.X = 0; /*0x764338*/
  this->member.viewport.Width = 1; /*0x764340*/
  this->member.viewport.MinZ = 0.0; /*0x764346*/
  this->member.viewport.Height = 1; /*0x76434c*/
  v4 = 1.0; /*0x764352*/
  v5 = 0.0; /*0x764352*/
  this->member.viewport.Y = 0; /*0x764354*/
  this->member.viewport.MaxZ = 1.0; /*0x76435a*/
  DefaultTextureData = this->member.DefaultTextureData; /*0x764360*/
  unk6F4 = this->member.unk6F4; /*0x764366*/
  v8 = 4; /*0x76436c*/
  do /*0x7643f9*/
  {
    unk6F4->unk00 = 0; /*0x764376*/
    unk6F4->unk04 = 0; /*0x764378*/
    unk6F4->unk08 = 0; /*0x76437b*/
    unk6F4->unk0C = 0; /*0x76437e*/
    unk6F4->unk10 = 0; /*0x764381*/
    unk6F4->unk14 = 0; /*0x764384*/
    unk6F4->unk18 = 0; /*0x764387*/
    unk6F4->unk1C = 0; /*0x76438a*/
    unk6F4->unk20 = 0; /*0x76438d*/
    unk6F4->unk24 = 0; /*0x764390*/
    unk6F4->unk28 = 0; /*0x764393*/
    unk6F4->unk2C = 0; /*0x764396*/
    unk6F4->unk30 = 0; /*0x764399*/
    unk6F4->unk34 = 0; /*0x76439c*/
    unk6F4->unk38 = 0; /*0x76439f*/
    unk6F4->unk3C = 0; /*0x7643a2*/
    unk6F4->unk40 = 0; /*0x7643a5*/
    unk6F4->unk44 = 0; /*0x7643a8*/
    unk6F4->unk48 = 0; /*0x7643ab*/
    unk6F4->unk4C = 0; /*0x7643ae*/
    unk6F4->unk50 = 0; /*0x7643b1*/
    unk6F4->unk54 = 0; /*0x7643b4*/
    DefaultTextureData[0xFFFFFFFC] = 0; /*0x7643b7*/
    v9 = *DefaultTextureData; /*0x7643bf*/
    if ( *DefaultTextureData ) /*0x7643bf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)*DefaultTextureData + 1) ) /*0x7643cd*/
      {
        if ( v9 ) /*0x7643dd*/
          (**(void (__thiscall ***)(NiPixelData *, int))v9)(v9, 1); /*0x7643e5*/
      }
      v5 = 0.0; /*0x7643e7*/
      *DefaultTextureData = 0; /*0x7643e9*/
      v4 = 1.0; /*0x7643ec*/
    }
    ++DefaultTextureData; /*0x7643ee*/
    ++unk6F4; /*0x7643f1*/
    --v8; /*0x7643f4*/
  }
  while ( v8 ); /*0x7643f9*/
  this->member.worldMatrix.m[0][3] = v5; /*0x764403*/
  this->member.worldMatrix.m[1][3] = v5; /*0x76440a*/
  this->member.worldMatrix.m[2][3] = v5; /*0x764415*/
  this->member.unk874 = 0x16; /*0x76441b*/
  this->member.currentRTGroup = 0; /*0x764425*/
  this->member.worldMatrix.m[3][3] = v4; /*0x76442b*/
  this->member.currentscreenRTGroup = 0; /*0x764431*/
  this->member.vertexBufferMgr = 0; /*0x764437*/
  this->member.indexBufferMgr = 0; /*0x76443d*/
  this->member.textureMgr = 0; /*0x764443*/
  this->member.renderState = 0; /*0x764449*/
  this->member.lightMgr = 0; /*0x76444f*/
  this->member.geometryGroupMgr = 0; /*0x764455*/
  this->member.unsharedGeometryGroup = 0; /*0x76445b*/
  this->member.dynamicGeometryGroup = 0; /*0x764461*/
  this->member.ScreenTextureVerts = 0; /*0x764467*/
  this->member.ScreenTextureColors = 0; /*0x76446d*/
  this->member.ScreenTextureTexCoords = 0; /*0x764473*/
  this->member.ScreenTextureIndices = 0; /*0x764479*/
  this->member.unkA4C = 0; /*0x76447f*/
  this->member.NumScreenTextureIndices = 0; /*0x764486*/
  _memset((int)byte_B42070, 0, sizeof(byte_B42070)); /*0x76448c*/
  byte_B42070[0x14] = 0x18; /*0x76449c*/
  byte_B42070[0x15] = 0x20; /*0x7644a3*/
  byte_B42070[0x16] = 0x20; /*0x7644a8*/
  byte_B42070[0x17] = 0x10; /*0x7644ad*/
  byte_B42070[0x18] = 0x10; /*0x7644b3*/
  byte_B42070[0x19] = 0x10; /*0x7644b9*/
  byte_B42070[0x1A] = 0x10; /*0x7644bf*/
  byte_B42070[0x1B] = 8; /*0x7644c5*/
  byte_B42070[0x1C] = 8; /*0x7644cb*/
  byte_B42070[0x1D] = 0x10; /*0x7644d1*/
  byte_B42070[0x1E] = 0x10; /*0x7644d7*/
  byte_B42070[0x1F] = 0x20; /*0x7644dd*/
  byte_B42070[0x20] = 0x20; /*0x7644e2*/
  byte_B42070[0x21] = 0x20; /*0x7644e7*/
  byte_B42070[0x22] = 0x20; /*0x7644ec*/
  byte_B42070[0x23] = 0x20; /*0x7644f1*/
  byte_B42070[0x24] = 0x40; /*0x7644f6*/
  byte_B42070[0x28] = 0x10; /*0x7644fd*/
  byte_B42070[0x29] = 8; /*0x764503*/
  byte_B42070[0x32] = 8; /*0x764509*/
  byte_B42070[0x33] = 0x10; /*0x76450f*/
  byte_B42070[0x34] = 8; /*0x764515*/
  byte_B42070[0x3C] = 0x10; /*0x76451b*/
  byte_B42070[0x3D] = 0x10; /*0x764521*/
  byte_B42070[0x3E] = 0x20; /*0x764527*/
  byte_B42070[0x3F] = 0x20; /*0x76452c*/
  byte_B42070[0x40] = 0x20; /*0x764531*/
  byte_B42070[0x43] = 0x20; /*0x764536*/
  byte_B42070[0x46] = 0x10; /*0x76453b*/
  byte_B42070[0x47] = 0x20; /*0x764541*/
  byte_B42070[0x49] = 0x10; /*0x764546*/
  byte_B42070[0x4B] = 0x20; /*0x76454c*/
  byte_B42070[0x4D] = 0x20; /*0x764551*/
  byte_B42070[0x4F] = 0x20; /*0x764556*/
  byte_B42070[0x50] = 0x10; /*0x76455b*/
  byte_B42070[0x52] = 0x20; /*0x764561*/
  byte_B42070[0x53] = 0x20; /*0x764566*/
  byte_B42070[0x51] = 0x10; /*0x76456b*/
  byte_B42070[0x65] = 0x10; /*0x764571*/
  byte_B42070[0x66] = 0x20; /*0x764577*/
  byte_B42070[0x6E] = 0x40; /*0x76457c*/
  byte_B42070[0x6F] = 0x10; /*0x764583*/
  byte_B42070[0x70] = 0x20; /*0x764589*/
  byte_B42070[0x71] = 0x40; /*0x76458e*/
  byte_B42070[0x72] = 0x20; /*0x764595*/
  byte_B42070[0x73] = 0x40; /*0x76459a*/
  byte_B42070[0x74] = 0x80; /*0x7645a1*/
  byte_B42070[0x75] = 0x10; /*0x7645a8*/
}
