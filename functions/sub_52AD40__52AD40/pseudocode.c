void __thiscall sub_52AD40(char *this)
{
  unsigned int v2; // edi
  char *m_data; // [esp-4h] [ebp-24h]

  m_data = unk_B36300.m_data; /*0x52ad71*/
  unk_B362FC = 0; /*0x52ad7a*/
  FormHeapFree((unsigned int)m_data); /*0x52ad80*/
  unk_B36300.m_data = 0; /*0x52ad85*/
  word_B36306[0] = 0; /*0x52ad8b*/
  word_B36304 = 0; /*0x52ad92*/
  v2 = *((_DWORD *)this + 0x19); /*0x52ad99*/
  if ( v2 ) /*0x52ada1*/
  {
    Shared_NoOpVirtual_60D0A0(*((void **)this + 0x19)); /*0x52ada5*/
    FormHeapFree(v2); /*0x52adab*/
  }
  Script_StaticDestructor((TESForm *)(this + 0xC)); /*0x52adba*/
  sub_56A7A0((BSSimpleList_VoidPtr *)(this + 4)); /*0x52adca*/
}
