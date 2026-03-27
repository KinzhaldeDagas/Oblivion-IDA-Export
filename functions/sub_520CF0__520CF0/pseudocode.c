bool __thiscall sub_520CF0(TESForm *this, TESForm *a2)
{
  bool v3; // bl
  TESObjectREFR **v4; // ebp
  int (__thiscall *v5)(TESForm *); // eax
  char *v6; // eax
  TESForm::ModReferenceList *next; // edx
  char *v8; // eax
  int v9; // eax
  TESForm *data; // ebp
  TESForm::ModReferenceList *i; // esi
  BSStringT Str2; // [esp+14h] [ebp-1Ch] BYREF
  BSStringT Str1; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]
  TESObjectREFR **a2a; // [esp+34h] [ebp+4h]

  v3 = 0;
  if ( !a2 )
    return v3;
  if ( a2->member.type == kFormType_Idle )
  {
    v4 = (TESObjectREFR **)OblivionDynamicCast(
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESIdleForm `RTTI Type Descriptor',
                             0);
    a2a = v4;
    if ( v4 )
    {
      Str1.m_data = 0;
      Str1.m_dataLen = 0;
      Str1.m_bufLen = 0;
      v5 = *(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x14);
      v15 = 0;
      v6 = (char *)v5(this + 1);
      sub_521370(v6, &Str1);
      Str2.m_data = 0;
      Str2.m_dataLen = 0;
      Str2.m_bufLen = 0;
      next = v4[6]->member.super.modlist.next;
      v3 = 1;
      LOBYTE(v15) = 1;
      v8 = (char *)((int (__thiscall *)(TESObjectREFR **))next)(v4 + 6);
      sub_521370(v8, &Str2);
      if ( Str2.m_data && Str1.m_data )
        v9 = _strcmp(Str1.m_data, Str2.m_data);
      else
        v9 = 2 * (Str2.m_data == 0) - 1;
      if ( v9 )
      {
        v3 = v9 < 0;
      }
      else if ( (this->member.flags & 0x20) == 0 || ((unsigned int)v4[2] & 0x20) != 0 )
      {
        if ( ((unsigned int)v4[2] & 0x20) == 0 || (this->member.flags & 0x20) != 0 )
        {
          data = this;
          do
          {
            if ( !v3 )
              break;
            if ( data == (TESForm *)a2a )
              v3 = 0;
            for ( i = data[2].member.modlist.next; i; i = i[8].next )
            {
              if ( !v3 )
                break;
              if ( sub_520590((TESObjectREFR **)i, a2a) )
                v3 = 0;
            }
            data = (TESForm *)data[2].member.modlist.data;
          }
          while ( data );
        }
      }
      else
      {
        v3 = 0;
      }
      FormHeapFree((unsigned int)Str2.m_data);
      Str2.m_data = 0;
      Str2.m_bufLen = 0;
      Str2.m_dataLen = 0;
      FormHeapFree((unsigned int)Str1.m_data);
    }
    return v3;
  }
  return TESForm_LessThan(this, a2);
}
