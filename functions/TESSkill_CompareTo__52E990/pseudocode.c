// Compare the exact five-dword SKIL DATA payload, then compare four separate mastery-tier descriptions. No major/minor state exists in TESSkill.
char __thiscall TESSkill_CompareTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebx
  char result; // al
  int v6; // edi
  char *v7; // esi
  int v8; // ebx

  v3 = (TESForm *)OblivionDynamicCast( /*0x52e9a7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESSkill `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x52e9ac*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x52e9bf*/
    return 1; /*0x52e9b6*/
  if ( !memcmp((char *)this + 0x2C, &v4[1].member.modlist.next, 0x14u) ) /*0x52e9d9*/
  {
    v6 = 0; /*0x52ea50*/
    v7 = (char *)this + 0x40; /*0x52ea52*/
    v8 = (char *)v4 - (char *)this; /*0x52ea55*/
    while ( 1 ) /*0x52ea62*/
    {
      result = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)v7 + 0xC))(v7, &v7[v8]); /*0x52ea62*/
      if ( result ) /*0x52ea66*/
        break; /*0x52ea66*/
      ++v6; /*0x52ea68*/
      v7 += 8; /*0x52ea6b*/
      if ( v6 >= 4 ) /*0x52ea71*/
        return result; /*0x52ea71*/
    }
  }
  return 1; /*0x52e9b5*/
}
