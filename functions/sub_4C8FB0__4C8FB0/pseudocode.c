void __thiscall sub_4C8FB0(TESForm *this)
{
  int *v2; // esi
  int *v3; // ebx
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  void *v6; // eax
  const char *v7; // eax
  int *v8; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 ) /*0x4c8fbc*/
  {
    v2 = (int *)((char *)this + 0x2C); /*0x4c8fc4*/
    v3 = 0; /*0x4c8fc7*/
    if ( this != (TESForm *)0xFFFFFFD4 ) /*0x4c8fcb*/
    {
      do /*0x4c908a*/
      {
        if ( !v2[1] && !*v2 ) /*0x4c8fd7*/
          break; /*0x4c8fda*/
        *(_DWORD *)ArgList = *v2; /*0x4c8fe2*/
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4c8fea*/
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4c8ff5*/
        v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4c9010*/
        v6 = OblivionDynamicCast( /*0x4c9019*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESGrass `RTTI Type Descriptor',
               0);
        if ( v6 ) /*0x4c9023*/
        {
          *v2 = (int)v6; /*0x4c9081*/
          v3 = v2; /*0x4c9083*/
          v2 = (int *)v2[1]; /*0x4c9085*/
        }
        else
        {
          v7 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)( /*0x4c9033*/
                               this,
                               this->member.refID);
          PrintError("Could not find Grass (%08X) for LandTexture '%s' (%08X).", *(_DWORD *)ArgList, v7, v9); /*0x4c9040*/
          if ( v3 ) /*0x4c904a*/
          {
            BSSimpleList_Remove(v3, *(int *)ArgList); /*0x4c9053*/
            v2 = (int *)v3[1]; /*0x4c9058*/
          }
          else
          {
            v8 = (int *)v2[1]; /*0x4c905d*/
            if ( v8 ) /*0x4c9062*/
            {
              v2[1] = v8[1]; /*0x4c9067*/
              *v2 = *v8; /*0x4c906d*/
              FormHeapFree((unsigned int)v8); /*0x4c906f*/
            }
            else
            {
              *v2 = 0; /*0x4c9079*/
            }
          }
        }
      }
      while ( v2 ); /*0x4c908a*/
    }
    TESForm_SetIsLinked(this, 1); /*0x4c9094*/
  }
}
