// Oblivion SFrondTexture copy constructor: deep-copies the 28-byte filename string and copies aspectRatio, sizeScale, minAngleOffset, and maxAngleOffset. The 0x2C layout is established by executable accesses; RT 4.1 FrondEngine.h corroborates the member names.
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_CopyCtor_010201A0(
        OB_SFrondTexture_010201A0 *this,
        const OB_SFrondTexture_010201A0 *source)
{
  OB_SFrondTexture_010201A0 *result; // eax

  result = 0; /*0x79ac6f*/
  if ( this ) /*0x79ac77*/
  {
    this->filename.capacity = 0xF; /*0x79ac80*/
    this->filename.size = 0; /*0x79ac87*/
    this->filename.storage.inlineData[0] = 0; /*0x79ac8d*/
    result = (OB_SFrondTexture_010201A0 *)OB_stString28_AssignSubstring_010201A0((int)this, source, 0, 0xFFFFFFFF); /*0x79ac90*/
    this->aspectRatio = source->aspectRatio; /*0x79ac98*/
    this->sizeScale = source->sizeScale; /*0x79ac9e*/
    this->minAngleOffset = source->minAngleOffset; /*0x79aca4*/
    this->maxAngleOffset = source->maxAngleOffset; /*0x79acaa*/
  }
  return result; /*0x79acad*/
}
