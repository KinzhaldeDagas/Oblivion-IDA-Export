int __thiscall TESObjectREFR_ChangeCell(TESObjectREFR *this, TESObjectCELL *a2)
{
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  int result; // eax
  int v5; // ecx

  if ( a2 ) /*0x4d8aaa*/
  {
    if ( this->member.parentCell != a2 ) /*0x4d8aaf*/
      this->vtbl->super.MarkAsModified((TESForm *)this, 4); /*0x4d8ab8*/
  }
  IsActor = this->vtbl->IsActor; /*0x4d8abc*/
  this->member.parentCell = a2; /*0x4d8ac4*/
  result = ((int (__thiscall *)(TESObjectREFR *))IsActor)(this); /*0x4d8ac7*/
  if ( (_BYTE)result ) /*0x4d8acb*/
  {
    v5 = *((_DWORD *)this + 0x16); /*0x4d8acd*/
    if ( v5 ) /*0x4d8ad2*/
      return (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)v5 + 0x500))(v5, this); /*0x4d8add*/
  }
  return result; /*0x4d8adf*/
}
