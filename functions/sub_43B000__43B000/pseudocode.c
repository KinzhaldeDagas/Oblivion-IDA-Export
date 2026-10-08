void __thiscall sub_43B000(QueuedReference *a1)
{
  Character *refr; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  QueuedReferenceInner *unk28; // eax
  _DWORD *v5; // eax
  volatile LONG *unk2C; // [esp-8h] [ebp-Ch]

  if ( a1->super.super.members.unk0C != 6 ) /*0x43b007*/
  {
    refr = a1->refr; /*0x43b009*/
    if ( (refr->member.super.super.super.super.flags & kFormFlags_InitiallyDisabled) == 0 /*0x43b01e*/
      && (refr->member.super.super.super.super.flags & kFormFlags_Deleted) == 0 )
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(refr); /*0x43b022*/
      if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x43b02e*/
      {
        unk28 = a1->unk28; /*0x43b037*/
        if ( unk28 ) /*0x43b03c*/
          sub_43A8F0((int *)MEMORY[0xB33A1C], (TESObjectREFR *)a1->refr, unk28->model); /*0x43b04c*/
        unk2C = (volatile LONG *)a1->unk2C; /*0x43b059*/
        v5 = (_DWORD *)Shared_GetDwordAtOffset40(a1->refr); /*0x43b05a*/
        sub_441EF0((int)MEMORY[0xB333A0], (TESObjectREFR *)a1->refr, v5, unk2C, 0); /*0x43b06a*/
      }
    }
    (*(void (__thiscall **)(_DWORD, Character *))(**((_DWORD **)MEMORY[0xB33A1C] + 2) + 0x10))( /*0x43b080*/
      *((_DWORD *)MEMORY[0xB33A1C] + 2),
      a1->refr);
  }
}
