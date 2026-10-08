// Compares only the low 24-bit object-ID portions of this form's FormID and a serialized group label; load-order/master byte is intentionally ignored.
bool __thiscall TESForm_FormIDMatchesObjectID24(const void *this, unsigned int candidate_form_id)
{
  return ((candidate_form_id ^ *((_DWORD *)this + 3)) & 0xFFFFFF) == 0; /*0x46af5f*/
}
