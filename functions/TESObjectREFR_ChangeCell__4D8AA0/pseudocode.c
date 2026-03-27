int __thiscall TESObjectREFR_ChangeCell(TESObjectREFR *this, TESObjectCELL *a2)
{
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  int result; // eax
  int v5; // ecx

  if ( a2 )
  {
    if ( this->member.parentCell != a2 )
      this->vtbl->super.MarkAsModified((TESForm *)this, 4);
  }
  IsActor = this->vtbl->IsActor;
  this->member.parentCell = a2;
  result = ((int (__thiscall *)(TESObjectREFR *))IsActor)(this);
  if ( (_BYTE)result )
  {
    v5 = *((_DWORD *)this + 0x16);
    if ( v5 )
      return (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)v5 + 0x500))(v5, this);
  }
  return result;
}
