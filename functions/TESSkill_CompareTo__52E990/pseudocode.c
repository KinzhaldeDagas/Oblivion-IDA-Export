char __thiscall TESSkill_CompareTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebx
  char result; // al
  int v6; // edi
  char *v7; // esi
  int v8; // ebx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESSkill `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  if ( !memcmp((char *)this + 0x2C, &v4[1].member.modlist.next, 0x14u) )
  {
    v6 = 0;
    v7 = (char *)this + 0x40;
    v8 = (char *)v4 - (char *)this;
    while ( 1 )
    {
      result = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)v7 + 0xC))(v7, &v7[v8]);
      if ( result )
        break;
      ++v6;
      v7 += 8;
      if ( v6 >= 4 )
        return result;
    }
  }
  return 1;
}
