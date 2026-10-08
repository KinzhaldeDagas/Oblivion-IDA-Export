// Static CSpeedTreeRT::SetNumWindMatrices. Forwards the requested count as an unsigned 16-bit value to the global wind-matrix container; SDK exception scaffolding surrounds the call.
void __cdecl CSpeedTreeRT__SetNumWindMatrices(int matrixCount)
{
  _DWORD v1[23]; // [esp+0h] [ebp-5Ch] BYREF

  v1[0x13] = v1; /*0x78bda8*/
  v1[0x16] = 0; /*0x78bdb4*/
  OB_CWindMatrices_Resize_010201A0(&CWindEngine__s_windMatrixContainer, matrixCount); /*0x78bdbb*/
}
