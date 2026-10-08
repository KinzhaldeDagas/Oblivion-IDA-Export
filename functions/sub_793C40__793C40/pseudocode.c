// Stores only this tree's [startingMatrix, matrixSpan] window into the shared global wind-matrix array.
void __thiscall OB_CWindEngine_SetLocalMatrices_010201A0(
        OB_CWindEngine_010201A0 *this,
        unsigned int startingMatrix,
        unsigned int matrixSpan)
{
  this->startingMatrix = startingMatrix; /*0x793c48*/
  this->matrixSpan = matrixSpan; /*0x793c4b*/
}
