int __thiscall sub_69FA60(ActorVtbl *this)
{
  void (__thiscall *Unk_16)(TESForm *); // ecx
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // esi
  void (__thiscall *GetDescription)(TESForm *, BSStringT *); // eax
  const char **v10; // ecx
  int v11; // eax
  _DWORD v13[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-4h]

  v13[1] = this; /*0x69fa87*/
  this->super.super.super.super.InitializeComponent = (void (__thiscall *)(BaseFormComponent *))&MagicProjectile::`vftable'{for `MagicProjectile'}; /*0x69fa8b*/
  this->super.super.super.Unk_06 = (void (__thiscall *)(TESForm *))&MagicProjectile::`vftable'{for `TESChildCell'}; /*0x69fa91*/
  Unk_16 = this->super.super.super.Unk_16; /*0x69fa98*/
  v14 = 0; /*0x69fa9d*/
  if ( Unk_16 ) /*0x69faa5*/
  {
    v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)Unk_16 + 8))(Unk_16); /*0x69faac*/
    sub_674550((int)this, v7); /*0x69fab5*/
  }
  if ( this->super.super.super.Unk_0F ) /*0x69faba*/
  {
    MEMORY[0xB333A4]->vtbl->RemoveObject( /*0x69fad5*/
      MEMORY[0xB333A4],
      (NiAVObject **)v13,
      (NiAVObject *)this->super.super.super.Unk_0F);
    v8 = (void (__thiscall ***)(_DWORD, int))v13[0]; /*0x69fad7*/
    if ( v13[0] ) /*0x69fadd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13[0] + 4)) ) /*0x69fae3*/
      {
        if ( v8 ) /*0x69faef*/
          (**v8)(v8, 1); /*0x69faf9*/
      }
    }
  }
  GetDescription = this->super.super.super.GetDescription; /*0x69fafb*/
  if ( GetDescription ) /*0x69fb00*/
  {
    v10 = (const char **)((char *)GetDescription + 0x18); /*0x69fb02*/
    LOWORD(GetDescription) = *((_WORD *)GetDescription + 0x10); /*0x69fb05*/
    if ( (_WORD)GetDescription == 0xFFFF ) /*0x69fb0d*/
      GetDescription = (void (__thiscall *)(TESForm *, BSStringT *))strlen(v10[1]); /*0x69fb12*/
    else
      GetDescription = (void (__thiscall *)(TESForm *, BSStringT *))(unsigned __int16)GetDescription; /*0x69fb22*/
    if ( GetDescription ) /*0x69fb27*/
    {
      v11 = (*((int (__thiscall **)(const char **))*v10 + 5))(v10); /*0x69fb32*/
      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v11, 0, 1); /*0x69fb3b*/
    }
  }
  if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x69fb46*/
    sub_65A050(this, 0); /*0x69fb53*/
  v14 = 0xFFFFFFFF; /*0x69fb5a*/
  return MobileObject_destr((TESForm *)this); /*0x69fb67*/
}
