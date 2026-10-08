// Oblivion binary evidence: deep-copies the incoming 28-byte st_string through a temporary, assigns it to CTreeEngine +0x24, then destroys the temporary. Parse calls it with the parsed branch-texture filename. After that observation, SpeedTreeRT 4.1 TreeEngine.h SetBranchTexture(const st_string&) and TreeEngine.cpp Parse corroborate the identity; this is distinct from the public const char* filename setter.
void __thiscall OB_CTreeEngine_SetBranchTexture_010201A0(
        OB_CTreeEngine_010201A0 *this,
        const OB_stString28_010201A0 *filename)
{
  OB_stString28_010201A0 temporaryFilename; // [esp+8h] [ebp-28h] BYREF
  int v4; // [esp+2Ch] [ebp-4h]

  temporaryFilename.capacity = 0xF; /*0x7a3523*/
  temporaryFilename.size = 0; /*0x7a352b*/
  temporaryFilename.storage.inlineData[0] = 0; /*0x7a3533*/
  OB_stString28_AssignSubstring_010201A0((int)&temporaryFilename, filename, 0, 0xFFFFFFFF); /*0x7a3538*/
  v4 = 0; /*0x7a3549*/
  OB_stString28_AssignSubstring_010201A0((int)this->branchTextureFilenameSmallString, &temporaryFilename, 0, 0xFFFFFFFF); /*0x7a3551*/
  if ( temporaryFilename.capacity >= 0x10 ) /*0x7a355b*/
    FormHeapFree((unsigned int)temporaryFilename.storage.heapData); /*0x7a3562*/
}
