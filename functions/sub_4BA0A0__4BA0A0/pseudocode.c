UInt32 __usercall sub_4BA0A0@<eax>(TESForm *this@<ecx>, char a2@<bpl>, int a3@<esi>)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // esi
  _DWORD *v6; // ebx
  unsigned int i; // eax
  int v8; // ecx
  size_t v10; // [esp-10h] [ebp-14h]
  size_t v11; // [esp-10h] [ebp-14h]
  size_t v12; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2);
  TESModel_Save((char *)this + 0x24, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESTexture_Save((int)this + 0x3C, 0x4E4F4349);
  v4 = *((_WORD *)this + 0x29);
  if ( v4 )
  {
    HIDWORD(v10) = a3;
    v5 = v4;
    v6 = (_DWORD *)FormHeapAlloc((unsigned __int64)v4 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v4);
    _memset(v6, 0, 4 * v5);
    for ( i = 0; i < v5; ++i )
    {
      v8 = *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * i);
      if ( v8 )
        v6[i] = v8;
    }
    LODWORD(v10) = 4 * v5;
    TESForm_PutFormRecordChunkData(0x4D414E53, v6, v10);
  }
  LODWORD(v12) = 0x20;
  TESForm_PutFormRecordChunkData(0x4D414E43, (char *)this + 0x58, v12);
  LODWORD(v11) = 8;
  TESForm_PutFormRecordChunkData(0x4D414E42, this + 5, v11);
  return TESForm_FinalizeFormRecord(this);
}
