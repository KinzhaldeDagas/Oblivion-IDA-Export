UInt32 __usercall sub_4A2DB0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  int *i; // esi
  _DWORD *j; // esi

  TESForm_InitializeFormRecord(this, a2); /*0x4a2db4*/
  v3 = *((_DWORD *)this + 8); /*0x4a2db9*/
  if ( v3 ) /*0x4a2dbe*/
    TESForm_PutCurrentChunkData4(0x4D414E57, *(_DWORD *)(v3 + 0xC)); /*0x4a2dc9*/
  for ( i = *((int **)this + 7); i; i = (int *)i[1] ) /*0x4a2dd6*/
  {
    if ( !i[1] && !*i ) /*0x4a2dde*/
      break; /*0x4a2de1*/
    sub_4A6E20(*i, (int)this); /*0x4a2de5*/
  }
  for ( j = *((_DWORD **)this + 6); j; j = (_DWORD *)j[1] ) /*0x4a2df6*/
  {
    if ( !j[1] && !*j ) /*0x4a2dfe*/
      break; /*0x4a2e01*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*j + 4))(*j); /*0x4a2e0a*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4a2e15*/
}
