// OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
void __thiscall OB_stVector4_DestroyThiscall_010201A0(OB_stVector4_010201A0 *this)
{
  if ( this->begin ) /*0x794eb3*/
    FormHeapFree((unsigned int)this->begin); /*0x794ebb*/
  this->begin = 0; /*0x794ec3*/
  this->end = 0; /*0x794eca*/
  this->capacity = 0; /*0x794ed1*/
}
