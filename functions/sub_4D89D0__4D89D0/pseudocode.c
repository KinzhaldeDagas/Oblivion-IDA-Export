// TES4 authoritative: write reference rotation X at TESObjectREFR+0x20, then notify the reference through virtual slot +0x40 with change mask 4.
int __thiscall TESObjectREFR_SetRotationX(TESObjectREFR *this, float radians)
{
  void (__thiscall *MarkAsModified)(TESForm *, UInt32); // edx

  MarkAsModified = this->vtbl->super.MarkAsModified; /*0x4d89d6*/
  this->member.rot.x = radians; /*0x4d89d9*/
  return ((int (__cdecl *)(int))MarkAsModified)(4);
}
