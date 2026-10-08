bool __thiscall sub_4BA170(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  int v9; // esi

  v3 = (TESForm *)OblivionDynamicCast( /*0x4ba187*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectTREE `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4ba18c*/
  if ( !v3 ) /*0x4ba193*/
    return 1; /*0x4ba199*/
  if ( !memcmp((char *)this + 0x58, (const void *)((int (__thiscall *)(TESForm *))v3->vtbl[1].SaveGame)(v3), 0x20u) /*0x4ba249*/
    && *(float *)&v4[5].vtbl == *((float *)this + 0x1E)
    && *(float *)&v4[5].member.type == *((float *)this + 0x1F) )
  {
    v6 = *((unsigned __int16 *)this + 0x29); /*0x4ba24b*/
    if ( v6 == HIWORD(v4[3].member.flags) ) /*0x4ba255*/
    {
      v7 = 0; /*0x4ba257*/
      if ( !*((_WORD *)this + 0x29) ) /*0x4ba25b*/
        return TESForm_CompareAllComponentsTo(this, v4) != 0; /*0x4ba287*/
      v8 = *((_DWORD **)this + 0x13); /*0x4ba25d*/
      v9 = *(_DWORD *)&v4[3].member.type - (_DWORD)v8; /*0x4ba263*/
      while ( *v8 == *(_DWORD *)((char *)v8 + v9) ) /*0x4ba26a*/
      {
        ++v7; /*0x4ba26c*/
        ++v8; /*0x4ba26f*/
        if ( v7 >= v6 ) /*0x4ba274*/
          return TESForm_CompareAllComponentsTo(this, v4) != 0; /*0x4ba274*/
      }
    }
  }
  return 1; /*0x4ba195*/
}
