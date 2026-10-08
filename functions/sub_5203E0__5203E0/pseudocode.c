UInt32 __usercall sub_5203E0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  _DWORD *v4; // eax
  size_t v6; // [esp-4h] [ebp-10h]
  size_t v7; // [esp-4h] [ebp-10h]
  int Src; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  TESForm_InitializeFormRecord(this, a2); /*0x5203e6*/
  TESModel_Save(this + 1, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x5203fd*/
  sub_56A450((int **)this + 0xC); /*0x520405*/
  LODWORD(v6) = 1; /*0x52040a*/
  TESForm_PutFormRecordChunkData(0x4D414E41, (char *)this + 0x38, v6); /*0x520415*/
  Src = 0; /*0x52041c*/
  v9 = 0; /*0x520420*/
  v3 = *((_DWORD *)this + 0x10); /*0x520424*/
  if ( v3 ) /*0x52042c*/
    Src = *(_DWORD *)(v3 + 0xC); /*0x520431*/
  if ( (this->member.flags & 0x20) == 0 ) /*0x52043e*/
  {
    v4 = *((_DWORD **)this + 0x11); /*0x520440*/
    if ( v4 ) /*0x520445*/
    {
      while ( (v4[2] & 0x20) != 0 ) /*0x520450*/
      {
        v4 = (_DWORD *)v4[0x11]; /*0x520452*/
        if ( !v4 ) /*0x520457*/
          goto LABEL_9; /*0x520457*/
      }
      v9 = v4[3]; /*0x52045e*/
    }
  }
LABEL_9:
  LODWORD(v7) = 8; /*0x520462*/
  TESForm_PutFormRecordChunkData(0x41544144, &Src, v7); /*0x52046e*/
  return TESForm_FinalizeFormRecord(this); /*0x52047d*/
}
