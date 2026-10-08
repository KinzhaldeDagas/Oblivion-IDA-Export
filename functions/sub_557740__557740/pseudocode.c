// Destroy the three owned image-channel vectors at +0x10 in every 64-byte EGT basis record.
void __stdcall FaceGenEgtBasisRecordArray_Destruct(void *begin, void *end)
{
  char *v2; // esi

  v2 = (char *)begin; /*0x557741*/
  if ( begin != end ) /*0x55774c*/
  {
    do /*0x557767*/
    {
      _LN21(v2 + 0x10, 0x10u, 3, (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0); /*0x55775d*/
      v2 += 0x40; /*0x557762*/
    }
    while ( v2 != end ); /*0x557767*/
  }
}
