// Oblivion NiDX9 vertex-declaration semantic helper. Maps semanticId 0..14 to D3D usages POSITION, BLENDWEIGHT, BLENDINDICES, NORMAL, COLOR, TEXCOORD0..7, TANGENT, and BINORMAL, then forwards to NiDX9ShaderDeclaration_SetRawElement.
int __thiscall NiDX9ShaderDeclaration_SetSemanticElement(
        NiDX9ShaderDeclaration *this,
        unsigned int elementIndex,
        unsigned int sourceIndex,
        unsigned int semanticId,
        unsigned int declarationType,
        unsigned int streamIndex)
{
  int v6; // edx
  int v7; // eax

  v6 = 0; /*0x76fb35*/
  switch ( semanticId ) /*0x76fb40*/
  {
    case 0u: /*0x76fb40*/
      v7 = 0; /*0x76fb47*/
      break; /*0x76fb49*/
    case 1u: /*0x76fb40*/
      v7 = 1; /*0x76fb4e*/
      break; /*0x76fb53*/
    case 2u: /*0x76fb40*/
      v7 = 2; /*0x76fb55*/
      break; /*0x76fb5a*/
    case 3u: /*0x76fb40*/
      v7 = 3; /*0x76fb5c*/
      break; /*0x76fb61*/
    case 4u: /*0x76fb40*/
      v7 = 0xA; /*0x76fb63*/
      break; /*0x76fb68*/
    case 5u: /*0x76fb40*/
      v7 = 5; /*0x76fb6a*/
      break; /*0x76fb6f*/
    case 6u: /*0x76fb40*/
      v7 = 5; /*0x76fb71*/
      v6 = 1; /*0x76fb76*/
      break; /*0x76fb7b*/
    case 7u: /*0x76fb40*/
      v7 = 5; /*0x76fb7d*/
      v6 = 2; /*0x76fb82*/
      break; /*0x76fb87*/
    case 8u: /*0x76fb40*/
      v7 = 5; /*0x76fb89*/
      v6 = 3; /*0x76fb8e*/
      break; /*0x76fb93*/
    case 9u: /*0x76fb40*/
      v7 = 5; /*0x76fb95*/
      v6 = 4; /*0x76fb9a*/
      break; /*0x76fb9f*/
    case 0xAu: /*0x76fb40*/
      v7 = 5; /*0x76fba1*/
      v6 = 5; /*0x76fba6*/
      break; /*0x76fba8*/
    case 0xBu: /*0x76fb40*/
      v7 = 5; /*0x76fbaa*/
      v6 = 6; /*0x76fbaf*/
      break; /*0x76fbb4*/
    case 0xCu: /*0x76fb40*/
      v7 = 5; /*0x76fbb6*/
      v6 = 7; /*0x76fbbb*/
      break; /*0x76fbc0*/
    case 0xDu: /*0x76fb40*/
      v7 = 6; /*0x76fbc2*/
      break; /*0x76fbc7*/
    case 0xEu: /*0x76fb40*/
      v7 = 7; /*0x76fbc9*/
      break; /*0x76fbc9*/
    default:
      JUMPOUT(0x76FBF4); /*0x76fbf4*/
  }
  return (*((int (__thiscall **)(NiDX9ShaderDeclaration *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, _DWORD))this->__vftable /*0x76fbf0*/
          + 0x13))(
           this,
           streamIndex,
           elementIndex,
           sourceIndex,
           semanticId,
           declarationType,
           v7,
           v6,
           0);
}
