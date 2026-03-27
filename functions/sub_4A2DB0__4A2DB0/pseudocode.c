UInt32 __usercall sub_4A2DB0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  int *i; // esi
  _DWORD *j; // esi

  TESForm_InitializeFormRecord(this, a2);
  v3 = *((_DWORD *)this + 8);
  if ( v3 )
    TESForm_PutCurrentChunkData4(0x4D414E57, *(_DWORD *)(v3 + 0xC));
  for ( i = *((int **)this + 7); i; i = (int *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    sub_4A6E20(*i);
  }
  for ( j = *((_DWORD **)this + 6); j; j = (_DWORD *)j[1] )
  {
    if ( !j[1] && !*j )
      break;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*j + 4))(*j);
  }
  return TESForm_FinalizeFormRecord(this);
}
