void __thiscall sub_4B6DB0(TESForm *this)
{
  TESForm **v2; // esi
  TESForm **v3; // ebx
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  const char *v6; // eax
  TESForm **v7; // eax
  int v8; // [esp-Ch] [ebp-14h]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)(this + 3), this);
    v2 = (TESForm **)((char *)this + 0x68);
    v3 = 0;
    if ( this != (TESForm *)0xFFFFFF98 )
    {
      do
      {
        if ( !v2[1] && !*v2 )
          break;
        *(_DWORD *)ArgList = *v2;
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
        v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        if ( v5 )
        {
          *v2 = v5;
          v3 = v2;
          v2 = (TESForm **)v2[1];
        }
        else
        {
          v6 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(
                               this,
                               this->member.refID);
          PrintError("Could not find RandomTeleport (%08X) for Door '%s' (%08X).", *(_DWORD *)ArgList, v6, v8);
          if ( v3 )
          {
            BSSimpleList_Remove(v3, *(int *)ArgList);
            v2 = (TESForm **)v3[1];
          }
          else
          {
            v7 = (TESForm **)v2[1];
            if ( v7 )
            {
              v2[1] = v7[1];
              *v2 = *v7;
              FormHeapFree((unsigned int)v7);
            }
            else
            {
              *v2 = 0;
            }
          }
        }
      }
      while ( v2 );
    }
    TESForm_SetIsLinked(this, 1);
  }
}
