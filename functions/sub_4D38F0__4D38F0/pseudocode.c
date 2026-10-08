void __thiscall sub_4D38F0(TESObjectCELL *this, TESObjectREFR *a2)
{
  TESObjectCELL *ParentCell; // eax

  if ( a2 ) /*0x4d38fa*/
  {
    if ( a2->vtbl->GetBaseForm(a2) ) /*0x4d390a*/
    {
      if ( (this->members.super.flags & 0x400) != 0 ) /*0x4d391b*/
      {
        sub_496EA0((char *)&unk_B35C80, this); /*0x4d3923*/
        BSSimpleList_PushFront(&this->members.objectList.refr, (int)a2); /*0x4d392c*/
        sub_496F50(&unk_B35C80, this); /*0x4d3937*/
        sub_4247B0(&a2->member.baseExtraList, (BSExtraDataVtbl *)this); /*0x4d3940*/
        if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x4d3954*/
                         + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                       + 0x184) )
          this->vtbl->SetFromActiveFile((TESForm *)this, 1); /*0x4d396d*/
      }
      else
      {
        ParentCell = Shared_GetDwordAtOffset40(a2); /*0x4d3976*/
        if ( ParentCell ) /*0x4d397d*/
          sub_4CECD0(ParentCell, a2); /*0x4d3982*/
        sub_496EA0((char *)&unk_B35C80, this); /*0x4d398d*/
        BSSimpleList_PushFront(&this->members.objectList.refr, (int)a2); /*0x4d3996*/
        ((void (__thiscall *)(TESObjectREFR *, TESObjectCELL *))a2->vtbl->ChangeCell)(a2, this); /*0x4d39a6*/
        sub_496F50(&unk_B35C80, this); /*0x4d39ae*/
        if ( (a2->member.super.flags & 0x4000) == 0 /*0x4d39d8*/
          && !TESObjectREFR_IsPersistent(a2)
          && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                         + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                       + 0x184) )
        {
          this->vtbl->SetFromActiveFile((TESForm *)this, 1); /*0x4d39ed*/
        }
        TESObjectREFR_RegisterAttachedLightWithShadowScene(a2, 0);// This retail reference/cell lifecycle call passes useSpellEffectExtraLight=false; it registers only ordinary ExtraLight. /*0x4d39f3*/
      }
    }
  }
}
