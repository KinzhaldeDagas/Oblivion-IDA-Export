// CSpeedTreeRT::ParseSupplementalTexCoordInfo (top-level token 20000). Only parses when embedded texcoords already exist; accepts composite filename, horizontal/360 flags, and eight billboard floats through terminator 20001. If the base object is absent, Oblivion returns without consuming payload.
void __thiscall CSpeedTreeRT__ParseSupplementalTexCoordInfo(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_CTreeFileAccess_010201A0 *file)
{
  int Dword_010201A0; // eax
  int v4; // edx
  OB_stString28_010201A0 *v5; // eax
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // ecx
  unsigned int v7; // edi
  int byteBufferBegin; // ecx
  unsigned int v9; // edi
  int v10; // ecx
  int i; // edi
  OB_stString28_010201A0 v12; // [esp-1Ch] [ebp-104h] BYREF
  OB_stString28_010201A0 *v13; // [esp+14h] [ebp-D4h]
  OB_stString28_010201A0 result; // [esp+18h] [ebp-D0h] BYREF
  OB_stString28_010201A0 details; // [esp+50h] [ebp-98h] BYREF
  OB_IdvFileError_010201A0 v16; // [esp+94h] [ebp-54h] BYREF
  OB_stString28_010201A0 filename; // [esp+BCh] [ebp-2Ch] BYREF
  int v18; // [esp+E4h] [ebp-4h]

  if ( this->embeddedTexcoords ) /*0x78aba6*/
  {
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x78abb1*/
    do /*0x78acfc*/
    {
      switch ( Dword_010201A0 ) /*0x78abce*/
      {
        case 0x4E22: /*0x78abce*/
          v13 = &v12; /*0x78abda*/
          OB_CTreeFileAccess_ReadString_010201A0(file, v4, &v12); /*0x78abe1*/
          OB_stString28_CopyCtorConsumeTemporary_010201A0(&filename, v12); /*0x78abed*/
          v18 = 0; /*0x78abfe*/
          v5 = OB_IdvNoPath_010201A0(&filename, &result); /*0x78ac05*/
          embeddedTexcoords = this->embeddedTexcoords; /*0x78ac0a*/
          LOBYTE(v18) = 1; /*0x78ac14*/
          OB_stString28_AssignSubstring_010201A0( /*0x78ac1c*/
            (OB_stString28_010201A0 *)embeddedTexcoords->compositeTextureFilenameString,
            v5,
            0,
            0xFFFFFFFF);
          if ( result.capacity >= 0x10 ) /*0x78ac2a*/
            FormHeapFree((unsigned int)result.storage.heapData); /*0x78ac31*/
          result.capacity = 0xF; /*0x78ac40*/
          result.size = 0; /*0x78ac48*/
          result.storage.inlineData[0] = 0; /*0x78ac4c*/
          v18 = 0xFFFFFFFF; /*0x78ac50*/
          if ( filename.capacity >= 0x10 ) /*0x78ac5b*/
            FormHeapFree((unsigned int)filename.storage.heapData); /*0x78ac69*/
          break; /*0x78ac71*/
        case 0x4E23: /*0x78abce*/
          v7 = file->cursorOffset++; /*0x78ac73*/
          byteBufferBegin = file->byteBufferBegin; /*0x78ac7a*/
          if ( !byteBufferBegin || v7 >= file->byteBufferEnd - byteBufferBegin ) /*0x78ac88*/
            _invalid_parameter_noinfo(); /*0x78ac8a*/
          this->flagHorizontalBillboard = *(_BYTE *)(v7 + file->byteBufferBegin) != 0; /*0x78ac98*/
          break; /*0x78ac9b*/
        case 0x4E24: /*0x78abce*/
          v9 = file->cursorOffset++; /*0x78ac9d*/
          v10 = file->byteBufferBegin; /*0x78aca4*/
          if ( !v10 || v9 >= file->byteBufferEnd - v10 ) /*0x78acb2*/
            _invalid_parameter_noinfo(); /*0x78acb4*/
          this->flag360Billboard = *(_BYTE *)(v9 + file->byteBufferBegin) != 0; /*0x78acc2*/
          break; /*0x78acc5*/
        case 0x4E25: /*0x78abce*/
          for ( i = 0x34; i < 0x54; i += 4 ) /*0x78acc7*/
            *(float *)((char *)&this->embeddedTexcoords->branchMapCount + i) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78acda*/
          break; /*0x78ace3*/
        default:
          JUMPOUT(0x78AD7B); /*0x78ad7b*/
      }
      if ( OB_CTreeFileAccess_IsEOF_010201A0(file) ) /*0x78ace7*/
      {
        details.capacity = 0xF; /*0x78ad37*/
        details.size = 0; /*0x78ad3f*/
        details.storage.inlineData[0] = 0; /*0x78ad43*/
        OB_stString28_AssignBytes_010201A0( /*0x78ad47*/
          &details,
          "premature end of file reached parsing texture coordinate info",
          0x3Du);
        v18 = 3; /*0x78ad59*/
        OB_IdvFileError_Ctor_010201A0(&v16, &details, 0); /*0x78ad64*/
        ThrowException__((DWORD)&v16, &_TI3_AVIdvFileError__); /*0x78ad76*/
      }
      Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x78acf2*/
    }
    while ( Dword_010201A0 != 0x4E21 ); /*0x78acfc*/
  }
}
