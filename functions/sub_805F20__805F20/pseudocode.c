// BloodOnDeath decode 2026-05-30: GeometryDecalShader draw/update callback. Consumes existing decal geometry and updates constants; does not emit blood/trails.
void __thiscall sub_805F20(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edi
  BOOL v10; // eax
  _DWORD *v11; // ebx
  int v12; // eax
  float v13; // eax
  double v14; // st7
  float v15; // [esp+18h] [ebp-1Ch]
  float v16; // [esp+1Ch] [ebp-18h]
  float v17; // [esp+1Ch] [ebp-18h]
  float v18; // [esp+20h] [ebp-14h]
  float v19; // [esp+20h] [ebp-14h]
  float v20; // [esp+24h] [ebp-10h]
  float v21; // [esp+24h] [ebp-10h]
  _DWORD *v22; // [esp+44h] [ebp+10h]

  v9 = *(_DWORD *)(a5 + 0x18); /*0x805f4d*/
  if ( v9 ) /*0x805f52*/
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 3; /*0x805f69*/
  else
    v10 = 0; /*0x805f54*/
  v11 = v10 ? (_DWORD *)v9 : 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 0x80))(this);// BloodOnDeath decode: refresh shader constant maps before rendering existing decal geometry. /*0x805f7d*/
  v22 = sub_7EE1D0(v11); /*0x805f98*/
  v12 = *(this + 0x25); /*0x805f9c*/
  if ( a3 != 0 ) /*0x805f85*/
  {
    *(_BYTE *)(v12 + 8) = 0; /*0x805fbe*/
    *(_BYTE *)(*(this + 0x26) + 8) = 1; /*0x805fc8*/
    *(_BYTE *)(*(this + 0x27) + 8) = 1; /*0x805fd2*/
  }
  else
  {
    *(_BYTE *)(v12 + 8) = 1; /*0x805fa4*/
    *(_BYTE *)(*(this + 0x26) + 8) = 0; /*0x805fae*/
    *(_BYTE *)(*(this + 0x27) + 8) = 0; /*0x805fb8*/
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xC) + 0x48))(*(this + 0xC)); /*0x805fde*/
  switch ( *((_BYTE *)v22 + 0x44) ) /*0x805ff1*/
  {
    case 0: /*0x805ff1*/
      v15 = 0.0; /*0x805ffa*/
      v16 = kHeadBodyNormalMatchRadius; /*0x806004*/
      v20 = v16; /*0x806008*/
      v18 = 0.0; /*0x80600c*/
      goto LABEL_9; /*0x80600c*/
    case 1: /*0x805ff1*/
      v13 = kHeadBodyNormalMatchRadius; /*0x80604e*/
      OB_ShaderConstantStorage_010201A0[0xE1] = kHeadBodyNormalMatchRadius; /*0x806054*/
      OB_ShaderConstantStorage_010201A0[0xE2] = v13; /*0x80605e*/
      OB_ShaderConstantStorage_010201A0[0xE3] = 0.0; /*0x806067*/
      OB_ShaderConstantStorage_010201A0[0xE4] = v13; /*0x806075*/
      goto LABEL_14; /*0x80607b*/
    case 2: /*0x805ff1*/
      v14 = kHeadBodyNormalMatchRadius; /*0x806083*/
      v17 = kHeadBodyNormalMatchRadius; /*0x80608d*/
      OB_ShaderConstantStorage_010201A0[0xE1] = 0.0; /*0x806091*/
      v19 = v14; /*0x80609a*/
      v21 = v14; /*0x8060a2*/
      OB_ShaderConstantStorage_010201A0[0xE2] = v17; /*0x8060aa*/
      OB_ShaderConstantStorage_010201A0[0xE3] = v19; /*0x8060b0*/
      OB_ShaderConstantStorage_010201A0[0xE4] = v21; /*0x8060b6*/
      goto LABEL_14; /*0x8060bb*/
    case 3: /*0x805ff1*/
      v15 = kHeadBodyNormalMatchRadius; /*0x8060c3*/
      v16 = v15; /*0x8060c7*/
      v18 = v15; /*0x8060cb*/
      v20 = v15; /*0x8060cf*/
LABEL_9:
      OB_ShaderConstantStorage_010201A0[0xE1] = v15; /*0x806010*/
      OB_ShaderConstantStorage_010201A0[0xE2] = v16; /*0x806026*/
      OB_ShaderConstantStorage_010201A0[0xE3] = v18; /*0x80602c*/
      OB_ShaderConstantStorage_010201A0[0xE4] = v20; /*0x806031*/
LABEL_14:
      JUMPOUT(0x8060ED); /*0x8060ed*/
    default:
      JUMPOUT(0x8060D8); /*0x8060d8*/
  }
}
