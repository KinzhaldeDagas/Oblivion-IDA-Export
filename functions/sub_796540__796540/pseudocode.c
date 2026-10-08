// Oblivion legacy CIndexedGeometry::AddVertexWind. Stores 1-weight and maps the input index into the CWindEngine local matrix window. Only one weight/index stream exists here; 4.1 later split this into Wind1/Wind2.
void __thiscall OB_CIndexedGeometry_AddVertexWind_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        float windWeight,
        unsigned __int8 windMatrixIndex)
{
  int v3; // ebx
  OB_CWindEngine_010201A0 *windEngine; // ecx
  unsigned int v6; // edx

  windEngine = this->windEngine; /*0x796550*/
  v6 = windMatrixIndex % windEngine->matrixSpan; /*0x796555*/
  windWeight = 1.0 - windWeight; /*0x796558*/
  windMatrixIndex = LOBYTE(windEngine->startingMatrix) + v6; /*0x79656a*/
  OB_stVector_float_PushBack_010201A0(&this->primaryWindWeights.allocatorState, (int *)&windWeight); /*0x79656e*/
  OB_stVectorByte_PushBack_010201A0(&this->primaryWindMatrixIndices.allocatorState, v3, &windMatrixIndex); /*0x79657e*/
}
