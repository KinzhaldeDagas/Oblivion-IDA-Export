// Verified worker path: obtains the queued/archive file, loads the TerrainLODQuad NIF through NiStream/BSStream, and stores the loaded object in TerrainLODQuadLoadTask.loadedTerrainNode (+0x3C).
void __thiscall TerrainLODQuadLoadTask_LoadNIF(TerrainLODQuadLoadTask_OblivionLayout_048Verified *this)
{
  ArchiveFile *v2; // edi
  char *v3; // [esp-8h] [ebp-4B4h]
  _DWORD v4[292]; // [esp+Ch] [ebp-4A0h] BYREF
  unsigned int v5; // [esp+4A8h] [ebp-4h]

  v2 = sub_434650(this, 0, 1); /*0x4ed118*/
  NiStream::NiStream((NiStream *)v4); /*0x4ed11a*/
  v4[0] = &BSStream::`vftable'; /*0x4ed11f*/
  v4[0x123] = 0; /*0x4ed127*/
  v4[0x122] = 0; /*0x4ed132*/
  v3 = *(char **)&this->ioTaskBase_000_02B[0x20]; /*0x4ed141*/
  v5 = 0; /*0x4ed146*/
  if ( sub_6F9980((char *)v4, v3, (void (__thiscall ***)(_DWORD, int))v2) ) /*0x4ed151*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->loadedTerrainNode_03C, *(Ni2DBuffer **)v4[0x82]); /*0x4ed167*/
  v5 = 0xFFFFFFFF; /*0x4ed170*/
  BSStream::~BSStream((BSStream *)v4); /*0x4ed17b*/
}
