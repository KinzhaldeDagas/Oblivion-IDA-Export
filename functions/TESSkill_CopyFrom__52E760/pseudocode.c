char *__thiscall TESSkill_CopyFrom(TESForm *this, TESForm *a2)
{
  char *result; // eax
  char *v4; // ebx
  char *v5; // esi
  int v6; // ebx
  int v7; // edi

  result = (char *)OblivionDynamicCast(
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESSkill `RTTI Type Descriptor',
                     0);
  v4 = result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    *((_DWORD *)this + 0xB) = *((_DWORD *)v4 + 0xB);
    *((_DWORD *)this + 0xC) = *((_DWORD *)v4 + 0xC);
    *((_DWORD *)this + 0xD) = *((_DWORD *)v4 + 0xD);
    *((_DWORD *)this + 0xE) = *((_DWORD *)v4 + 0xE);
    *((_DWORD *)this + 0xF) = *((_DWORD *)v4 + 0xF);
    v5 = (char *)this + 0x40;
    v6 = v4 - (char *)this;
    v7 = 4;
    do
    {
      result = (char *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)v5 + 8))(v5, &v5[v6]);
      v5 += 8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
