// mwMediumArmor: Returns the display name for an Oblivion skill actor value stored at skill+0x2C. No MediumArmor actor value exists in this table.
const char *__thiscall TESSkill_GetName(void *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 0xB); /*0x52ea90*/
  if ( v1 - 0xC > 0x14 ) /*0x52ea99*/
    return 0; /*0x52eaa5*/
  else
    return (const char *)ActorValue_GetName(v1); /*0x52ea9c*/
}
