//
//
// [2026-10-03 texture ownership/discovery] Plugin GetTextures consumption now uses finally cleanup so the two temporary filename arrays are freed on exceptional exits as well as success. Native strings remain borrowed and are copied into candidate-owned strings before this destructor.
void __thiscall CSpeedTreeRT__STextures_dtor(OB_CSpeedTreeRT_STextures *this)
{
  const char **frondTextureFilenames; // [esp-8h] [ebp-10h]

  FormHeapFree((unsigned int)this->leafTextureFilenames); /*0x786fc8*/
  frondTextureFilenames = this->frondTextureFilenames; /*0x786fd2*/
  this->leafTextureFilenames = 0; /*0x786fd3*/
  FormHeapFree((unsigned int)frondTextureFilenames); /*0x786fd6*/
  this->frondTextureFilenames = 0; /*0x786fde*/
  this->branchTextureFilename = 0; /*0x786fe1*/
  this->compositeTextureFilename = 0; /*0x786fe3*/
  this->projectedShadowTextureFilename = 0; /*0x786fe6*/
}
