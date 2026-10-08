// Oblivion compact CTreeEngine destructor. Destroys embedded SIdvLeafInfo, releases generated billboard-leaf and branch-info vector storage, clears the branch-texture small string/random state, and then runs the shared base destructor. No later root-support storage exists in this build.
void __thiscall OB_CTreeEngine_dtor_010201A0(OB_CTreeEngine_010201A0 *this)
{
  OB_SIdvLeafInfo_dtor_010201A0(&this->leafInfo); /*0x7a3897*/
  if ( this->generatedBillboardLeaves.begin ) /*0x7a389c*/
    FormHeapFree((unsigned int)this->generatedBillboardLeaves.begin); /*0x7a38a6*/
  this->generatedBillboardLeaves.begin = 0; /*0x7a38ae*/
  this->generatedBillboardLeaves.end = 0; /*0x7a38b1*/
  this->generatedBillboardLeaves.capacityEnd = 0; /*0x7a38b4*/
  if ( this->branchInfoVector.begin ) /*0x7a38ba*/
    FormHeapFree((unsigned int)this->branchInfoVector.begin); /*0x7a38c2*/
  this->branchInfoVector.begin = 0; /*0x7a38ca*/
  this->branchInfoVector.end = 0; /*0x7a38cd*/
  this->branchInfoVector.capacityEnd = 0; /*0x7a38d0*/
  if ( *(_DWORD *)&this->branchTextureFilenameSmallString[0x18] >= 0x10u ) /*0x7a38d7*/
    FormHeapFree(*(_DWORD *)&this->branchTextureFilenameSmallString[4]); /*0x7a38dd*/
  *(_DWORD *)&this->branchTextureFilenameSmallString[0x18] = 0xF; /*0x7a38e5*/
  *(_DWORD *)&this->branchTextureFilenameSmallString[0x14] = 0; /*0x7a38ec*/
  this->branchTextureFilenameSmallString[4] = 0; /*0x7a38f2*/
  Shared_NoOpVirtual_60D0A0(&this->randomPlaceholderByte); /*0x7a38f9*/
  OB_CIdvCamera_dtor_010201A0((OB_CIdvCamera_010201A0 *)this); /*0x7a3908*/
}
