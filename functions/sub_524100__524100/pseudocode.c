int *__thiscall sub_524100(TESForm *this, int *a2, signed int a3)
{
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // edx
  Data *OverrideFile; // eax
  Data *v6; // ebx
  int v7; // eax
  bool v8; // zf
  int *SourceTexture_010201A0; // eax
  void *v11; // [esp+14h] [ebp-124h] BYREF
  int v12; // [esp+18h] [ebp-120h]
  void *slot[2]; // [esp+1Ch] [ebp-11Ch] BYREF
  char ArgList[260]; // [esp+24h] [ebp-114h] BYREF
  int v15; // [esp+134h] [ebp-4h]

  v12 = 0; /*0x524144*/
  GetSaveSize = this->vtbl[1].GetSaveSize; /*0x52414e*/
  slot[1] = a2; /*0x524156*/
  if ( !GetSaveSize(this, 0x45) ) /*0x52415e*/
  {
    OverrideFile = TESForm_GetOverrideFile(this, 0); /*0x52416f*/
    v6 = OverrideFile; /*0x524174*/
    if ( !OverrideFile || !TESFile_GetIsMaster(OverrideFile) ) /*0x524180*/
    {
      *a2 = 0; /*0x52423f*/
      return a2; /*0x52423f*/
    }
    if ( a3 > 2 ) /*0x524197*/
      goto LABEL_6; /*0x524197*/
    if ( a3 == 2 ) /*0x5241ab*/
    {
      v8 = TESActorBase_IsFemale(this) == 1; /*0x5241b4*/
    }
    else
    {
      if ( a3 != 1 ) /*0x5241bc*/
        goto LABEL_12; /*0x5241bc*/
      v8 = TESActorBase_IsFemale(this) == 0; /*0x5241c5*/
    }
    if ( !v8 ) /*0x5241c7*/
    {
LABEL_6:
      v7 = sub_523D80(); /*0x524199*/
      sub_405070(a2, v7); /*0x5241a1*/
      return a2; /*0x5241a6*/
    }
LABEL_12:
    _sprintf(ArgList, "data\\Textures\\Faces\\%s\\%08X_%i.dds", v6->name, this->member.refID, a3); /*0x5241c9*/
    SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((NiSourceTexture **)slot, ArgList, 1, 1); /*0x5241fb*/
    sub_405070(&v11, *SourceTexture_010201A0); /*0x524207*/
    v15 = 1; /*0x524210*/
    NiPointerSlot_Release(slot); /*0x524217*/
    sub_4A19F0(a2, (int *)&v11); /*0x524223*/
    v12 = 1; /*0x52422c*/
    LOBYTE(v15) = 0; /*0x524230*/
    NiPointerSlot_Release(&v11); /*0x524238*/
    return a2; /*0x52423d*/
  }
  *a2 = 0; /*0x524160*/
  return a2; /*0x524247*/
}
