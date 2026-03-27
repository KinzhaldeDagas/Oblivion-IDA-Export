void __userpurge sub_531470(TESForm *this@<ecx>, double a2@<st1>, double a3@<st0>, TESObjectREFR *a4)
{
  Script *v5; // esi
  char **ExtraScriptEventList; // eax
  void (__thiscall *MarkAsModified)(TESForm *, UInt32); // eax

  if ( a4 )
  {
    v5 = (Script *)sub_531290(this);
    if ( sub_4F9FA0() )
    {
      if ( v5 )
      {
        if ( v5->info.dataLength )
        {
          ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(&a4->member.baseExtraList);
          Script_Run(v5, a3, a2, a4, ExtraScriptEventList, 0, 1);
        }
      }
    }
    if ( (*((_BYTE *)this + 0x25) & 0x10) == 0 )
    {
      MarkAsModified = this->vtbl->MarkAsModified;
      *((_BYTE *)this + 0x22) = 1;
      MarkAsModified(this, 0x10000000);
    }
  }
}
