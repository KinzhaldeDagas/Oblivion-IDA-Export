// Oblivion CTL loader called twice at most by FaceGenManager_Construct for FaceGen\\si.ctl. Uses FRCTL001 format marker, reads 0x18-byte header (two scalar outputs + four basis dimensions), loads four named control basis banks, then FanControls data/precomputation. Returns false on read/load failure; destroys binary file on all observed return paths. Header scalar meanings remain unresolved.
bool __cdecl FaceGen_LoadCtlFile(
        OB_stString28_010201A0 *path,
        unsigned int *outHeader0,
        unsigned int *outHeader1,
        unsigned int *outBasisDimensions,
        void *namedControlBanks,
        void *fanControls)
{
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  void *v15; // ecx
  bool CtlDataAndPrecompute; // al
  OB_stString28_010201A0 v17; // [esp-20h] [ebp-B4h] BYREF
  unsigned int v18; // [esp-4h] [ebp-98h]
  void *v19; // [esp+14h] [ebp-80h]
  unsigned int *v20; // [esp+18h] [ebp-7Ch]
  OB_stStringStorage16_010201A0 *p_storage; // [esp+1Ch] [ebp-78h]
  void *v22; // [esp+20h] [ebp-74h]
  unsigned int *v23; // [esp+24h] [ebp-70h]
  _DWORD v24[2]; // [esp+28h] [ebp-6Ch] BYREF
  _DWORD v25[4]; // [esp+30h] [ebp-64h] BYREF
  unsigned int v26[17]; // [esp+40h] [ebp-54h] BYREF
  unsigned int v27; // [esp+90h] [ebp-4h]

  v23 = outHeader1; /*0x6ed8ab*/
  p_storage = &v17.storage; /*0x6ed8b1*/
  v20 = outHeader0; /*0x6ed8b5*/
  v18 = 0xF; /*0x6ed8c9*/
  v17.capacity = 0; /*0x6ed8cc*/
  v22 = namedControlBanks; /*0x6ed8d4*/
  v19 = fanControls; /*0x6ed8d8*/
  v17.storage.inlineData[4] = 0; /*0x6ed8dc*/
  OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)&v17.storage, "FRCTL001", 8u); /*0x6ed8df*/
  sub_6F6110( /*0x6ed8e8*/
    (FutBinaryFileC *)v26,
    (int)v17.storage.heapData,
    *((unsigned int *)&v17.storage.heapData + 1),
    *((int *)&v17.storage.heapData + 2),
    *((int *)&v17.storage.heapData + 3),
    v17.size,
    v17.capacity,
    v18);
  v18 = 1; /*0x6ed8ed*/
  v17.capacity = 0xF; /*0x6ed8f4*/
  p_storage = (OB_stStringStorage16_010201A0 *)&v17; /*0x6ed8f7*/
  v17.size = 0; /*0x6ed900*/
  v27 = 0; /*0x6ed904*/
  v17.storage.inlineData[0] = 0; /*0x6ed90b*/
  OB_stString28_AssignSubstring_010201A0(&v17, path, 0, 0xFFFFFFFF); /*0x6ed90e*/
  if ( !sub_6F66E0( /*0x6ed917*/
          v26,
          v17.allocatorState,
          (unsigned int)v17.storage.heapData,
          *((int *)&v17.storage.heapData + 1),
          *((int *)&v17.storage.heapData + 2),
          *((int *)&v17.storage.heapData + 3),
          v17.size,
          v17.capacity,
          v18) )
    goto LABEL_2; /*0x6ed917*/
  if ( !sub_6F5E50(v26, (int)v24, 1, 0x18) ) /*0x6ed944*/
    goto LABEL_2; /*0x6ed944*/
  v7 = v25; /*0x6ed94d*/
  v8 = 2; /*0x6ed951*/
  do /*0x6ed970*/
  {
    v9 = 2; /*0x6ed960*/
    do /*0x6ed96b*/
    {
      ++v7; /*0x6ed965*/
      --v9; /*0x6ed968*/
    }
    while ( v9 ); /*0x6ed96b*/
    --v8; /*0x6ed96d*/
  }
  while ( v8 ); /*0x6ed970*/
  v10 = v24[1]; /*0x6ed97a*/
  *v20 = v24[0]; /*0x6ed97e*/
  v11 = v25[0]; /*0x6ed984*/
  *v23 = v10; /*0x6ed988*/
  v12 = v25[1]; /*0x6ed98a*/
  v13 = v25[2]; /*0x6ed98e*/
  *outBasisDimensions = v11; /*0x6ed992*/
  v14 = v25[3]; /*0x6ed994*/
  outBasisDimensions[1] = v12; /*0x6ed998*/
  v18 = (unsigned int)outBasisDimensions; /*0x6ed99b*/
  v17.capacity = (unsigned int)v26; /*0x6ed9a0*/
  v15 = v22; /*0x6ed9a1*/
  outBasisDimensions[2] = v13; /*0x6ed9a5*/
  outBasisDimensions[3] = v14; /*0x6ed9a8*/
  if ( !FaceGen_ReadNamedControlBasisBanks(v15, (BSFaceGenBinaryFile *)v17.capacity, (const unsigned int *)v18) ) /*0x6ed9ab*/
  {
LABEL_2:
    v27 = 0xFFFFFFFF; /*0x6ed920*/
LABEL_3:
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v26, (int)outBasisDimensions); /*0x6ed92b*/
    return 0; /*0x6ed932*/
  }
  CtlDataAndPrecompute = FanControls_ReadCtlDataAndPrecompute(v19, (BSFaceGenBinaryFile *)v26, outBasisDimensions); /*0x6ed9c2*/
  v27 = 0xFFFFFFFF; /*0x6ed9c9*/
  if ( !CtlDataAndPrecompute ) /*0x6ed9d4*/
    goto LABEL_3; /*0x6ed9d4*/
  BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v26, (int)outBasisDimensions); /*0x6ed9da*/
  return 1; /*0x6ed9e1*/
}
