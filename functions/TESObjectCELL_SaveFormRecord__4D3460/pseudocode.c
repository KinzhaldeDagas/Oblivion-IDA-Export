char __thiscall TESObjectCELL_SaveFormRecord(TESForm *this, Data *a2)
{
  TESForm *v4; // esi
  TESFormVtbl *vtbl; // edi
  TESForm *v6; // ecx
  Data *OverrideFile; // eax
  int v8; // eax
  char v9; // [esp+7h] [ebp-15h]
  _DWORD v10[5]; // [esp+8h] [ebp-14h] BYREF

  if ( (this->member.flags & 0x20) != 0 )
    return 0;
  v9 = 0;
  sub_496EA0((char *)&stru_B35C80, (TESObjectCELL *)this);
  if ( TESFile_GetIsMaster(a2) || (this->member.flags & 2) != 0 )
  {
LABEL_13:
    v9 = 1;
  }
  else
  {
    v4 = this + 3;
    if ( this != (TESForm *)0xFFFFFFB8 )
    {
      while ( *(_DWORD *)&v4->member.type || v4->vtbl )
      {
        vtbl = v4->vtbl;
        v6 = (TESForm *)v4->vtbl;
        v4 = *(TESForm **)&v4->member.type;
        OverrideFile = TESForm_GetOverrideFile(v6, 0xFFFFFFFF);
        if ( OverrideFile == a2 || !OverrideFile || ((int)vtbl->super.CopyFromBase & 2) != 0 )
          goto LABEL_13;
        if ( !v4 )
          break;
      }
    }
  }
  sub_496F50(&stru_B35C80, (TESObjectCELL *)this);
  if ( !v9 )
    return 0;
  this->vtbl->Unk_09(this);
  TESFile_WriteFormRecord(a2, (int)this);
  v8 = dword_B05E20;
  v10[2] = this->member.refID;
  v10[0] = v8;
  v10[3] = 6;
  v10[1] = 0;
  v10[4] = 0;
  TESFile_OpenGroupRecord(a2, v10);
  if ( !TESFile_GetIsMaster(a2) || TESForm_GetOverrideFile(this, 0) == a2 )
    sub_4CD3B0((TESObjectCELL *)this, a2);
  return 1;
}
