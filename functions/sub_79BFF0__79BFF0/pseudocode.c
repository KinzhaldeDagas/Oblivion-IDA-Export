// OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
void __stdcall OB_stVector4_DestroyStdcall_010201A0(OB_stVector4_010201A0 *this)
{
  if ( this->begin ) /*0x79bff5*/
    FormHeapFree((unsigned int)this->begin); /*0x79bffd*/
  this->begin = 0; /*0x79c005*/
  this->end = 0; /*0x79c00c*/
  this->capacity = 0; /*0x79c013*/
}
