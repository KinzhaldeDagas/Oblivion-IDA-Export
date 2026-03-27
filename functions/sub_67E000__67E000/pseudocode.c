void __thiscall sub_67E000(char **this, Sky *a2)
{
  NiNode *Health; // eax
  char *v4; // eax
  float *v5; // eax
  Actor *v6; // ecx
  NiNode *v7; // eax
  float *v8; // [esp-4h] [ebp-Ch]
  NiNode *v9; // [esp-4h] [ebp-Ch]

  if ( a2 )
  {
    if ( *(this + 9) )
    {
      Health = TESHealthForm_GetHealth(a2);
      if ( Health )
      {
        v8 = (float *)sub_4BEF40(*(this + 9));
        v4 = (char *)TESHealthForm_GetHealth(a2);
        v5 = (float *)sub_6899C0(v4);
        Health = (NiNode *)sub_8AA350(v5, v8);
        if ( (_BYTE)Health )
        {
          Health = (NiNode *)TESEnchantableForm_GetCastingType(*(this + 9));
          *(this + 9) = (char *)Health;
        }
      }
      v6 = (Actor *)*(this + 0xA);
      LOBYTE(Health) = v6 && Actor_IsCreature(v6);
      v9 = Health;
      v7 = TESHealthForm_GetHealth(a2);
      sub_68C4E0(a2, *(this + 9), v7, v9);
    }
    sub_67DE90((char *)this, a2);
  }
}
