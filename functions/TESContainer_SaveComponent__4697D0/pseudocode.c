void __thiscall TESContainer_SaveComponent(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  size_t v3; // [esp-4h] [ebp-10h]
  _DWORD Src[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = this + 2;
  if ( *(this + 2) )
  {
    do
    {
      v2 = *(_DWORD *)(*v1 + 4);
      if ( (*(_DWORD *)(v2 + 8) & 0x20) == 0 )
      {
        LODWORD(v3) = 8;
        Src[1] = *(_DWORD *)*v1;
        Src[0] = *(_DWORD *)(v2 + 0xC);
        TESForm_PutFormRecordChunkData(0x4F544E43, Src, v3);
      }
      v1 = (_DWORD *)v1[1];
    }
    while ( v1 );
  }
}
