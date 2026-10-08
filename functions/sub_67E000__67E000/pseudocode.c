void __thiscall sub_67E000(char **this, TESHealthForm *a2)
{
  char *Health; // eax
  char *v4; // eax
  float *Head; // eax
  Actor *v6; // ecx
  NiDX92DBufferData *v7; // eax
  NiPoint3 *Position; // [esp-4h] [ebp-Ch]
  char *v9; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x67e00a*/
  {
    if ( *(this + 9) ) /*0x67e00c*/
    {
      Health = (char *)TESHealthForm_GetHealth(a2); /*0x67e014*/
      if ( Health ) /*0x67e01b*/
      {
        Position = TESConnectedPoint_GetPosition((TESConnectedPoint *)*(this + 9)); /*0x67e025*/
        v4 = (char *)TESHealthForm_GetHealth(a2); /*0x67e028*/
        Head = (float *)EmbeddedList_GetHead(v4); /*0x67e02f*/
        Health = (char *)sub_8AA350(Head, &Position->x); /*0x67e036*/
        if ( (_BYTE)Health ) /*0x67e03d*/
        {
          Health = (char *)TESEnchantableForm_GetCastingType(*(this + 9)); /*0x67e042*/
          *(this + 9) = Health; /*0x67e047*/
        }
      }
      v6 = (Actor *)*(this + 0xA); /*0x67e04a*/
      LOBYTE(Health) = v6 && Actor_IsCreature(v6); /*0x67e05a*/
      v9 = Health; /*0x67e060*/
      v7 = (NiDX92DBufferData *)TESHealthForm_GetHealth(a2); /*0x67e063*/
      sub_68C4E0((NiDX92DBufferData **)a2, *(this + 9), v7, v9); /*0x67e06f*/
    }
    sub_67DE90((char *)this, (Sky *)a2); /*0x67e077*/
  }
}
