// Recovered Oblivion SIdvWindInfo parser: stores only leaf oscillation, leaf factors, and strength; consumes deprecated wind fields.
void __thiscall OB_SIdvWindInfo_Parse_010201A0(OB_SIdvWindInfo_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int v2; // ebx
  int Dword_010201A0; // eax
  float *Vec3_010201A0; // eax
  float *v6; // eax
  unsigned int v7; // ecx
  int byteBufferBegin; // edx
  rsize_t v9; // [esp-4h] [ebp-9Ch]
  float outVec3[3]; // [esp+Ch] [ebp-8Ch] BYREF
  float v11[3]; // [esp+18h] [ebp-80h] BYREF
  float v12[3]; // [esp+24h] [ebp-74h] BYREF
  float v13[3]; // [esp+30h] [ebp-68h] BYREF
  float v14[3]; // [esp+3Ch] [ebp-5Ch] BYREF
  int v15; // [esp+48h] [ebp-50h] BYREF
  char v16; // [esp+4Ch] [ebp-4Ch]
  int v17; // [esp+5Ch] [ebp-3Ch]
  int v18; // [esp+60h] [ebp-38h]
  _BYTE v19[40]; // [esp+64h] [ebp-34h] BYREF
  int v20; // [esp+94h] [ebp-4h]

  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a84d6*/
  do /*0x7a8593*/
  {
    switch ( Dword_010201A0 ) /*0x7a84ee*/
    {
      case 0x1388: /*0x7a84ee*/
        OB_CTreeFileAccess_ReadVec3_010201A0(file, outVec3); /*0x7a84fc*/
        break; /*0x7a8501*/
      case 0x1389: /*0x7a84ee*/
        OB_CTreeFileAccess_ReadVec3_010201A0(file, v11); /*0x7a850d*/
        break; /*0x7a8512*/
      case 0x138A: /*0x7a84ee*/
        Vec3_010201A0 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v12); /*0x7a851b*/
        this->leafOscillation.x = *Vec3_010201A0; /*0x7a8522*/
        this->leafOscillation.y = Vec3_010201A0[1]; /*0x7a8528*/
        this->leafOscillation.z = Vec3_010201A0[2]; /*0x7a852e*/
        break; /*0x7a8531*/
      case 0x138B: /*0x7a84ee*/
        OB_CTreeFileAccess_ReadVec3_010201A0(file, v13); /*0x7a853a*/
        break; /*0x7a853f*/
      case 0x138C: /*0x7a84ee*/
        v6 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v14); /*0x7a8548*/
        this->leafFactors.x = *v6; /*0x7a854f*/
        this->leafFactors.y = v6[1]; /*0x7a8554*/
        this->leafFactors.z = v6[2]; /*0x7a855a*/
        break; /*0x7a855d*/
      case 0x138D: /*0x7a84ee*/
        this->strength = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a8566*/
        break; /*0x7a8569*/
      case 0x138E: /*0x7a84ee*/
        v7 = file->cursorOffset++; /*0x7a856b*/
        byteBufferBegin = file->byteBufferBegin; /*0x7a8572*/
        if ( !byteBufferBegin || v7 >= file->byteBufferEnd - byteBufferBegin ) /*0x7a8580*/
          _invalid_parameter_noinfo(v2, (int)this, (int)file); /*0x7a8582*/
        break; /*0x7a8582*/
      default:
        LODWORD(v9) = 0x22; /*0x7a85b3*/
        v18 = 0xF; /*0x7a85be*/
        v17 = 0; /*0x7a85c6*/
        v16 = 0; /*0x7a85ce*/
        OB_stString28_AssignBytes_010201A0(&v15, (int)this, "malformed general wind information", v9); /*0x7a85d3*/
        v20 = 0; /*0x7a85e3*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v19, &v15, 0); /*0x7a85ee*/
        ThrowException__((DWORD)v19, &_TI3_AVIdvFileError__); /*0x7a85fd*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a8589*/
  }
  while ( Dword_010201A0 != 0x3F4 ); /*0x7a8593*/
}
