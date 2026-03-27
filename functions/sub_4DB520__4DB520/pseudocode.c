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

  baseForm = this->super.baseForm;
  if ( !baseForm
    || !((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm)
    || (result = (bhkCharacterProxy *)this->vtbl->super.GetBaseForm((TESObjectREFR *)this),
        *((_BYTE *)result + 4) == 0x29) )
  {
    v5 = (char *)sub_7616D0(&stru_B34448);
    _sprintf(v5, "%.2f", arg0);
    v12 = atof(v5);
    if ( v12 >= (double)flt_A34BA0 )
    {
      if ( flt_A31C80 < (double)v12 )
        v12 = flt_A31C80;
    }
    else
    {
      v12 = flt_A34BA0;
    }
    MarkAsModified = this->vtbl->super.super.MarkAsModified;
    this->super.scale = v12;
    MarkAsModified((TESForm *)this, 0x10);
    v13 = this->vtbl->super.GetScale((TESObjectREFR *)this);
    result = (bhkCharacterProxy *)this->vtbl->super.GetNiNode((TESObjectREFR *)this);
    v7 = (NiAVObject *)result;
    if ( result )
    {
      a2[1] = 0.0;
      v14 = fabs(v13);
      *((float *)result + 0x18) = v14;
      NiAVObject_UpdateNiAVObject((NiAVObject *)result, 0.0, SLODWORD(a2[1]));
      NiAVObject_UpdateNiAVObject(v7, 0.0, 0);
      result = (bhkCharacterProxy *)((int (__thiscall *)(MobileObject *))this->vtbl->super.IsActor)(this);
      if ( (_BYTE)result )
      {
        CharProxy = MobileObject_GetCharProxy(this);
        v15 = 0.0;
        if ( CharProxy )
          v15 = *((float *)CharProxy + 0xCB);
        this->vtbl->Unk_72(this);
        process = this->process;
        if ( process )
        {
          a2[1] = 0.0;
          Unk_63 = process->Unk_63;
          LODWORD(a2[4]) = &a2[1];
          Unk_63(process, 0);
        }
        this->vtbl->super.Unk_52((TESObjectREFR *)this);
        result = MobileObject_GetCharProxy(this);
        if ( result )
          *((float *)result + 0xCB) = v15;
        if ( this == (MobileObject *)TESDataHandler_g_PlayerRef )
          return (bhkCharacterProxy *)sub_666B50(TESDataHandler_g_PlayerRef);
      }
    }
  }
  return result;
}
