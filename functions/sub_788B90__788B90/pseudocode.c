// Oblivion SEmbeddedTexCoords destructor: frees the three texcoord arrays at +0x04/+0x0C/+0x14 and destroys the 28-byte SSO filename at +0x18; the caller retains/frees the 0x54-byte owner object.
void __thiscall OB_CSpeedTreeRT_SEmbeddedTexCoords_Dtor_010201A0(OB_CSpeedTreeRT_SEmbeddedTexCoords *this)
{
  float *frondMapTexcoords8; // [esp-Ch] [ebp-14h]
  float *leafMapTexcoords8; // [esp-8h] [ebp-10h]

  FormHeapFree((unsigned int)this->branchMapTexcoords8); /*0x788b98*/
  leafMapTexcoords8 = this->billboardMapTexcoords8; /*0x788ba2*/
  this->branchMapTexcoords8 = 0; /*0x788ba3*/
  FormHeapFree((unsigned int)leafMapTexcoords8); /*0x788ba6*/
  frondMapTexcoords8 = this->frondMapTexcoords8; /*0x788bae*/
  this->billboardMapTexcoords8 = 0; /*0x788baf*/
  FormHeapFree((unsigned int)frondMapTexcoords8); /*0x788bb2*/
  this->frondMapTexcoords8 = 0; /*0x788bba*/
  if ( *(_DWORD *)&this->compositeTextureFilenameString[0x18] >= 0x10u ) /*0x788bc1*/
    FormHeapFree(*(_DWORD *)&this->compositeTextureFilenameString[4]); /*0x788bc7*/
  *(_DWORD *)&this->compositeTextureFilenameString[0x14] = 0; /*0x788bcf*/
  *(_DWORD *)&this->compositeTextureFilenameString[0x18] = 0xF; /*0x788bd2*/
  this->compositeTextureFilenameString[4] = 0; /*0x788bd9*/
}
