bhkCharacterProxy *__thiscall sub_4DB520(MobileObject *this, float arg0)
{
  TESForm *baseForm; // ecx
  bhkCharacterProxy *result; // eax
  char *v5; // edi
  void (__thiscall *MarkAsModified)(TESForm *, UInt32); // edx
  NiAVObject *v7; // edi
  bhkCharacterProxy *CharProxy; // eax
  LowProcess *process; // ecx
  void (__thiscall *Unk_63)(BaseProcess *__hidden, void *); // edx
  float a2[5]; // [esp+4h] [ebp-14h] BYREF
  float v12; // [esp+1Ch] [ebp+4h]
  float v13; // [esp+1Ch] [ebp+4h]
  float v14; // [esp+1Ch] [ebp+4h]
  float v15; // [esp+1Ch] [ebp+4h]

  baseForm = this->super.baseForm; /*0x4db524*/
  if ( !baseForm /*0x4db54a*/
    || !((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm)
    || (result = (bhkCharacterProxy *)this->vtbl->super.GetBaseForm(this), *((_BYTE *)result + 4) == 0x29) )
  {
    v5 = (char *)ActorList_ReturnHead((ActorList *)&MEMORY[0xB33E90][0x5B8]); /*0x4db564*/
    _sprintf(v5, "%.2f", arg0); /*0x4db56c*/
    v12 = atof(v5); /*0x4db577*/
    if ( v12 >= (double)flt_A34BA0 ) /*0x4db58f*/
    {
      if ( flt_A31C80 < (double)v12 ) /*0x4db5aa*/
        v12 = flt_A31C80; /*0x4db5ac*/
    }
    else
    {
      v12 = flt_A34BA0; /*0x4db593*/
    }
    MarkAsModified = this->vtbl->super.super.MarkAsModified; /*0x4db5ba*/
    this->super.scale = v12; /*0x4db5bd*/
    MarkAsModified((TESForm *)this, 0x10); /*0x4db5c4*/
    v13 = this->vtbl->super.GetScale((TESObjectREFR *)this); /*0x4db5d2*/
    result = (bhkCharacterProxy *)this->vtbl->super.GetNiNode(this); /*0x4db5e0*/
    v7 = (NiAVObject *)result; /*0x4db5e2*/
    if ( result ) /*0x4db5e6*/
    {
      a2[1] = 0.0; /*0x4db5f0*/
      v14 = fabs(v13); /*0x4db5f5*/
      *((float *)result + 0x18) = v14; /*0x4db5ff*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)result, 0.0, SLODWORD(a2[1])); /*0x4db607*/
      NiAVObject_UpdateNiAVObject(v7, 0.0, 0); /*0x4db616*/
      result = (bhkCharacterProxy *)((int (__thiscall *)(MobileObject *))this->vtbl->super.IsActor)(this); /*0x4db625*/
      if ( (_BYTE)result ) /*0x4db629*/
      {
        CharProxy = MobileObject_GetCharProxy(this); /*0x4db62d*/
        v15 = 0.0; /*0x4db636*/
        if ( CharProxy ) /*0x4db63a*/
          v15 = *((float *)CharProxy + 0xCB); /*0x4db642*/
        this->vtbl->Unk_72(this); /*0x4db650*/
        process = this->process; /*0x4db652*/
        if ( process ) /*0x4db657*/
        {
          a2[1] = 0.0; /*0x4db65c*/
          Unk_63 = process->Unk_63; /*0x4db664*/
          LODWORD(a2[4]) = &a2[1]; /*0x4db66a*/
          Unk_63(process, 0); /*0x4db66e*/
        }
        this->vtbl->super.Unk_52((TESObjectREFR *)this); /*0x4db67a*/
        result = MobileObject_GetCharProxy(this); /*0x4db67e*/
        if ( result ) /*0x4db685*/
          *((float *)result + 0xCB) = v15; /*0x4db68b*/
        if ( this == (MobileObject *)reference ) /*0x4db699*/
          return sub_666B50((MobileObject *)reference); /*0x4db69b*/
      }
    }
  }
  return result; /*0x4db6a0*/
}
