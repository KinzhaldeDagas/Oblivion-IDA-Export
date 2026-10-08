char __thiscall TESObjectCELL_SaveFormRecord(TESForm *this, Data *a2)
{
  TESForm *v4; // esi
  TESFormVtbl *vtbl; // edi
  TESForm *v6; // ecx
  Data *OverrideFile; // eax
  int v8; // eax
  char v9; // [esp+7h] [ebp-15h]
  _DWORD v10[5]; // [esp+8h] [ebp-14h] BYREF

  if ( (this->member.flags & 0x20) != 0 ) /*0x4d346e*/
    return 0; /*0x4d3470*/
  v9 = 0; /*0x4d3482*/
  sub_496EA0((char *)&unk_B35C80, (TESObjectCELL *)this); /*0x4d3487*/
  if ( TESFile_GetIsMaster(a2) || (this->member.flags & 2) != 0 ) /*0x4d34a3*/
  {
LABEL_13:
    v9 = 1; /*0x4d34e0*/
  }
  else
  {
    v4 = this + 3; /*0x4d34a5*/
    if ( this != (TESForm *)0xFFFFFFB8 ) /*0x4d34aa*/
    {
      while ( *(_DWORD *)&v4->member.type || v4->vtbl ) /*0x4d34b9*/
      {
        vtbl = v4->vtbl; /*0x4d34bb*/
        v6 = (TESForm *)v4->vtbl; /*0x4d34bf*/
        v4 = *(TESForm **)&v4->member.type; /*0x4d34c1*/
        OverrideFile = TESForm_GetOverrideFile(v6, 0xFFFFFFFF); /*0x4d34c3*/
        if ( OverrideFile == a2 || !OverrideFile || ((int)vtbl->super.CopyFromBase & 2) != 0 ) /*0x4d34d8*/
          goto LABEL_13; /*0x4d34d8*/
        if ( !v4 ) /*0x4d34dc*/
          break; /*0x4d34dc*/
      }
    }
  }
  sub_496F50(&unk_B35C80, (TESObjectCELL *)this); /*0x4d34e5*/
  if ( !v9 ) /*0x4d34f5*/
    return 0; /*0x4d34fa*/
  this->vtbl->Unk_09(this); /*0x4d350b*/
  TESFile_WriteFormRecord(a2, (int)this); /*0x4d3510*/
  v8 = dword_B05E20; /*0x4d3518*/
  v10[2] = this->member.refID; /*0x4d3521*/
  v10[0] = v8; /*0x4d352a*/
  v10[3] = 6; /*0x4d352e*/
  v10[1] = 0; /*0x4d3536*/
  v10[4] = 0; /*0x4d353a*/
  TESFile_OpenGroupRecord(a2, v10); /*0x4d353e*/
  if ( !TESFile_GetIsMaster(a2) || TESForm_GetOverrideFile(this, 0) == a2 ) /*0x4d3558*/
    sub_4CD3B0((TESObjectCELL *)this, a2); /*0x4d355d*/
  return 1; /*0x4d3472*/
}
