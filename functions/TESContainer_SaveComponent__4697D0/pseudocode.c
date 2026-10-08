void __thiscall TESContainer_SaveComponent(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  size_t v3; // [esp-4h] [ebp-10h]
  _DWORD Src[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = this + 2; /*0x4697d8*/
  if ( *(this + 2) ) /*0x4697d3*/
  {
    do /*0x469816*/
    {
      v2 = *(_DWORD *)(*v1 + 4); /*0x4697e2*/
      if ( (*(_DWORD *)(v2 + 8) & 0x20) == 0 ) /*0x4697ee*/
      {
        LODWORD(v3) = 8; /*0x4697f2*/
        Src[1] = *(_DWORD *)*v1; /*0x4697f8*/
        Src[0] = *(_DWORD *)(v2 + 0xC); /*0x469805*/
        TESForm_PutFormRecordChunkData(0x4F544E43, Src, v3); /*0x469809*/
      }
      v1 = (_DWORD *)v1[1]; /*0x469811*/
    }
    while ( v1 ); /*0x469816*/
  }
}
