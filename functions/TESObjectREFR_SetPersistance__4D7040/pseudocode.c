void __userpurge TESObjectREFR_SetPersistance(TESChildCELL *this@<ecx>, double st5_0@<st2>, double a3@<st1>, char a4)
{
  TESObjectCELL *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *v9; // eax

  v5 = (TESObjectCELL *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6);
  v6 = *((_DWORD *)this + 2);
  if ( a4 )
    v7 = v6 | 0x400;
  else
    v7 = v6 & 0xFFFFFBFF;
  *((_DWORD *)this + 2) = v7;
  if ( a4 )
  {
    (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x10))(this, 1);
    if ( v5 )
    {
      if ( !TESObjectCELL_IsInterior(v5) && !TESForm_GetQuestItem((TESForm *)v5) )
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(v5);
        TESWorldspace_Boh_(WorldSpace, st5_0, a3, this);
      }
    }
  }
  else if ( v5 )
  {
    if ( TESForm_GetQuestItem((TESForm *)v5) )
    {
      v9 = TESObjectCELL_GetWorldSpace(v5);
      sub_4F03D0(v9, (int)this);
      (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x24))(this, 1);
    }
  }
}
