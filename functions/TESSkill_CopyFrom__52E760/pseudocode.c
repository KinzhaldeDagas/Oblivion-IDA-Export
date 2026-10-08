// Copies all five SKIL DATA dwords, then four separate mastery-tier TESDescription components.
char *__thiscall TESSkill_CopyFrom(TESForm *this, TESForm *a2)
{
  char *result; // eax
  char *v4; // ebx
  char *v5; // esi
  int v6; // ebx
  int v7; // edi

  result = (char *)OblivionDynamicCast( /*0x52e778*/
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESSkill `RTTI Type Descriptor',
                     0);
  v4 = result; /*0x52e77d*/
  if ( result ) /*0x52e784*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x52e789*/
    *((_DWORD *)this + 0xB) = *((_DWORD *)v4 + 0xB); /*0x52e791*/
    *((_DWORD *)this + 0xC) = *((_DWORD *)v4 + 0xC); /*0x52e797*/
    *((_DWORD *)this + 0xD) = *((_DWORD *)v4 + 0xD); /*0x52e79d*/
    *((_DWORD *)this + 0xE) = *((_DWORD *)v4 + 0xE); /*0x52e7a3*/
    *((_DWORD *)this + 0xF) = *((_DWORD *)v4 + 0xF); /*0x52e7a9*/
    v5 = (char *)this + 0x40; /*0x52e7ac*/
    v6 = v4 - (char *)this; /*0x52e7af*/
    v7 = 4; /*0x52e7b1*/
    do /*0x52e7c9*/
    {
      result = (char *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)v5 + 8))(v5, &v5[v6]); /*0x52e7c1*/
      v5 += 8; /*0x52e7c3*/
      --v7; /*0x52e7c6*/
    }
    while ( v7 ); /*0x52e7c9*/
  }
  return result; /*0x52e7cb*/
}
