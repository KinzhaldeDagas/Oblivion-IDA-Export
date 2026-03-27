bool __thiscall sub_4BA170(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  int v9; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectTREE `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 )
    return 1;
  if ( !memcmp((char *)this + 0x58, (const void *)((int (__thiscall *)(TESForm *))v3->vtbl[1].SaveGame)(v3), 0x20u)
    && *(float *)&v4[5].vtbl == *((float *)this + 0x1E)
    && *(float *)&v4[5].member.type == *((float *)this + 0x1F) )
  {
    v6 = *((unsigned __int16 *)this + 0x29);
    if ( v6 == HIWORD(v4[3].member.flags) )
    {
      v7 = 0;
      if ( !*((_WORD *)this + 0x29) )
        return TESForm_CompareAllComponentsTo(this, v4) != 0;
      v8 = *((_DWORD **)this + 0x13);
      v9 = *(_DWORD *)&v4[3].member.type - (_DWORD)v8;
      while ( *v8 == *(_DWORD *)((char *)v8 + v9) )
      {
        ++v7;
        ++v8;
        if ( v7 >= v6 )
          return TESForm_CompareAllComponentsTo(this, v4) != 0;
      }
    }
  }
  return 1;
}
