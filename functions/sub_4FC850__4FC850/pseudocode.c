char __userpurge sub_4FC850@<al>(Script *this@<ecx>, char a2@<bpl>, int a3)
{
  unsigned int v4; // eax
  char result; // al

  this->super.vtbl->DoPostFixup(&this->super);
  LOWORD(v4) = *(_WORD *)(a3 + 0x10);
  if ( (_WORD)v4 == 0xFFFF )
    v4 = strlen(*(const char **)(a3 + 0xC));
  else
    v4 = (unsigned __int16)v4;
  if ( !v4 )
    return ((char (__thiscall *)(Script *, int))this->super.vtbl->Unk_23)(this, 1);
  result = sub_4FA5E0((int *)this, a3);
  if ( result )
  {
    this->super.vtbl->SetEditorID(&this->super, *(const char **)(a3 + 0xC));
    this->info.unk0 = *(_DWORD *)(a3 + 0x28);
    this->info.numRefs = *(_DWORD *)(a3 + 0x2C);
    this->info.dataLength = *(_DWORD *)(a3 + 0x30);
    this->info.varCount = *(_DWORD *)(a3 + 0x34);
    this->info.type = *(_DWORD *)(a3 + 0x38);
    sub_4F9DF0((void **)&this->super.vtbl, a2, a3, this->info.dataLength, *(void **)(a3 + 0x20));
    sub_4FC730(this);
    sub_4FC6C0((BSSimpleList_VoidPtr *)this);
    if ( this->info.dataLength )
    {
      sub_4FC040((int *)(a3 + 0x44), &this->refList.var);
      sub_4FA780((int *)(a3 + 0x3C), &this->varList.data);
    }
    ((void (__thiscall *)(Script *, _DWORD))this->super.vtbl->Unk_23)(this, 0);
    return ((char (__thiscall *)(Script *, int))this->super.vtbl->SetFromActiveFile)(this, 1);
  }
  return result;
}
