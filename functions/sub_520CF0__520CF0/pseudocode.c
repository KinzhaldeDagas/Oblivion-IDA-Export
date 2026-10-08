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

  v3 = 0; /*0x520d1f*/
  if ( !a2 ) /*0x520d23*/
    return v3; /*0x520d23*/
  if ( a2->member.type == kFormType_Idle ) /*0x520d2d*/
  {
    v4 = (TESObjectREFR **)OblivionDynamicCast( /*0x520d45*/
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESIdleForm `RTTI Type Descriptor',
                             0);
    a2a = v4; /*0x520d4c*/
    if ( v4 ) /*0x520d50*/
    {
      Str1.m_data = 0; /*0x520d56*/
      Str1.m_dataLen = 0; /*0x520d5a*/
      Str1.m_bufLen = 0; /*0x520d5f*/
      v5 = *(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x14); /*0x520d6f*/
      v15 = 0; /*0x520d72*/
      v6 = (char *)v5(this + 1); /*0x520d76*/
      TESIdleForm_BuildIdleAnimsRoot(v6, &Str1); /*0x520d79*/
      Str2.m_data = 0; /*0x520d81*/
      Str2.m_dataLen = 0; /*0x520d85*/
      Str2.m_bufLen = 0; /*0x520d8a*/
      next = v4[6]->member.super.modlist.next; /*0x520d9a*/
      v3 = 1; /*0x520d9d*/
      LOBYTE(v15) = 1; /*0x520d9f*/
      v8 = (char *)((int (__thiscall *)(TESObjectREFR **))next)(v4 + 6); /*0x520da3*/
      TESIdleForm_BuildIdleAnimsRoot(v8, &Str2); /*0x520da6*/
      if ( Str2.m_data && Str1.m_data ) /*0x520dbc*/
        v9 = CRT_StricmpLocaleDispatch(Str1.m_data, Str2.m_data); /*0x520dc0*/
      else
        v9 = 2 * (Str2.m_data == 0) - 1; /*0x520dd1*/
      if ( v9 ) /*0x520dd7*/
      {
        v3 = v9 < 0; /*0x520e3a*/
      }
      else if ( (this->member.flags & 0x20) == 0 || ((unsigned int)v4[2] & 0x20) != 0 ) /*0x520deb*/
      {
        if ( ((unsigned int)v4[2] & 0x20) == 0 || (this->member.flags & 0x20) != 0 ) /*0x520dfd*/
        {
          data = this; /*0x520dff*/
          do /*0x520e36*/
          {
            if ( !v3 ) /*0x520e03*/
              break; /*0x520e03*/
            if ( data == (TESForm *)a2a ) /*0x520e09*/
              v3 = 0; /*0x520e0b*/
            for ( i = data[2].member.modlist.next; i; i = i[8].next ) /*0x520e12*/
            {
              if ( !v3 ) /*0x520e16*/
                break; /*0x520e16*/
              if ( sub_520590((TESObjectREFR **)i, a2a) ) /*0x520e1f*/
                v3 = 0; /*0x520e28*/
            }
            data = (TESForm *)data[2].member.modlist.data; /*0x520e31*/
          }
          while ( data ); /*0x520e36*/
        }
      }
      else
      {
        v3 = 0; /*0x520ded*/
      }
      FormHeapFree((unsigned int)Str2.m_data); /*0x520e42*/
      Str2.m_data = 0; /*0x520e4c*/
      Str2.m_bufLen = 0; /*0x520e50*/
      Str2.m_dataLen = 0; /*0x520e55*/
      FormHeapFree((unsigned int)Str1.m_data); /*0x520e5a*/
    }
    return v3; /*0x520e77*/
  }
  return TESForm_LessThan(this, a2); /*0x520e64*/
}
