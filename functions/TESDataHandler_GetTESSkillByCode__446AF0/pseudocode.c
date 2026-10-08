// Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
TESSkill_RecordView *__thiscall TESDataHandler_GetTESSkillByCode(void *this, UInt8 skillIndex)
{                                               // The native skill registry has exactly 21 valid indices, 0..20.
  if ( skillIndex > 0x14u ) /*0x446af6*/
    return 0; /*0x446b0b*/
  else
    return (TESSkill_RecordView *)((char *)this + 0x60 * (char)skillIndex + 0xD8);// Each inline TESSkill record is 0x60 bytes; its TESSkill_Data payload is at record+0x2C. /*0x446b01*/
}
