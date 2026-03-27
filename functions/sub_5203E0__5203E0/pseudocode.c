UInt32 __usercall sub_5203E0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  _DWORD *v4; // eax
  size_t v6; // [esp-4h] [ebp-10h]
  size_t v7; // [esp-4h] [ebp-10h]
  int Src; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  TESForm_InitializeFormRecord(this, a2);
  TESModel_Save(this + 1, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  sub_56A450((int **)this + 0xC);
  LODWORD(v6) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E41, (char *)this + 0x38, v6);
  Src = 0;
  v9 = 0;
  v3 = *((_DWORD *)this + 0x10);
  if ( v3 )
    Src = *(_DWORD *)(v3 + 0xC);
  if ( (this->member.flags & 0x20) == 0 )
  {
    v4 = *((_DWORD **)this + 0x11);
    if ( v4 )
    {
      while ( (v4[2] & 0x20) != 0 )
      {
        v4 = (_DWORD *)v4[0x11];
        if ( !v4 )
          goto LABEL_9;
      }
      v9 = v4[3];
    }
  }
LABEL_9:
  LODWORD(v7) = 8;
  TESForm_PutFormRecordChunkData(0x41544144, &Src, v7);
  return TESForm_FinalizeFormRecord(this);
}
