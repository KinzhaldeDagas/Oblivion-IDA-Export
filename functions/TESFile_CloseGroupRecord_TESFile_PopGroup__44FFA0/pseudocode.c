void __thiscall TESFile_CloseGroupRecord_::TESFile_PopGroup(unsigned int *this)
{
  unsigned int v1; // esi
  unsigned int *v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v1 = *(this + 0xA1); /*0x44ffa1*/
  if ( v1 ) /*0x44ffa9*/
  {
    v2 = (unsigned int *)*(this + 0xA2); /*0x44ffab*/
    if ( v2 ) /*0x44ffb3*/
    {
      *(this + 0xA2) = v2[1]; /*0x44ffb8*/
      *(this + 0xA1) = *v2; /*0x44ffc1*/
      FormHeapFree((unsigned int)v2); /*0x44ffc7*/
      FormHeapFree(v1); /*0x44ffd0*/
    }
    else
    {
      v3 = *(this + 0xA1); /*0x44ffda*/
      *(this + 0xA1) = 0; /*0x44ffdb*/
      FormHeapFree(v3); /*0x44ffe5*/
    }
  }
}
