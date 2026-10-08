// SpeedTree decode: stock SLodGeometry dtor. Frees all compact leaf-card arrays including map/card indices, centers, texcoord/card pointers, colors, normals/binormals/tangents, primary wind arrays, and original centers.
void __thiscall OB_CLeafGeometry_SLodGeometry_dtor_010201A0(OB_SLodGeometry_010201A0 *this)
{
  float *originalCenterCoords; // [esp-30h] [ebp-38h]

  FormHeapFree((unsigned int)this->leafMapIndices); /*0x7981e8*/
  FormHeapFree((unsigned int)this->leafCardIndices); /*0x7981f1*/
  FormHeapFree((unsigned int)this->centerCoords); /*0x7981fa*/
  FormHeapFree((unsigned int)this->packedColors); /*0x798203*/
  FormHeapFree((unsigned int)this->normals); /*0x79820c*/
  FormHeapFree((unsigned int)this->binormals); /*0x798215*/
  FormHeapFree((unsigned int)this->tangents); /*0x79821e*/
  FormHeapFree((unsigned int)this->diffuseTexcoords); /*0x798227*/
  FormHeapFree((unsigned int)this->cardCoords); /*0x798230*/
  FormHeapFree((unsigned int)this->windWeights); /*0x798239*/
  FormHeapFree((unsigned int)this->windMatrixIndices); /*0x798242*/
  originalCenterCoords = this->originalCenterCoords; /*0x79824c*/
  this->leafMapIndices = 0; /*0x79824d*/
  this->leafCardIndices = 0; /*0x798250*/
  this->centerCoords = 0; /*0x798253*/
  this->packedColors = 0; /*0x798256*/
  this->normals = 0; /*0x798259*/
  this->binormals = 0; /*0x79825c*/
  this->tangents = 0; /*0x79825f*/
  this->diffuseTexcoords = 0; /*0x798262*/
  this->cardCoords = 0; /*0x798265*/
  this->windWeights = 0; /*0x798268*/
  this->windMatrixIndices = 0; /*0x79826b*/
  FormHeapFree((unsigned int)originalCenterCoords); /*0x79826e*/
  this->originalCenterCoords = 0; /*0x798276*/
  this->leafMapIndices = 0; /*0x786f72*/
  this->leafCardIndices = 0; /*0x786f75*/
  this->centerCoords = 0; /*0x786f78*/
  this->packedColors = 0; /*0x786f7b*/
  this->normals = 0; /*0x786f7e*/
  this->binormals = 0; /*0x786f81*/
  this->tangents = 0; /*0x786f84*/
  this->diffuseTexcoords = 0; /*0x786f87*/
  this->cardCoords = 0; /*0x786f8a*/
  this->windWeights = 0; /*0x786f8d*/
  this->windMatrixIndices = 0; /*0x786f90*/
}
