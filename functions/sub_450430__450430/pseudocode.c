// Closes and frees every currently open group record, repeatedly popping the TESFile group stack until current group is null.
void __thiscall TESFile_CloseAllOpenGroups(unsigned int *this)
{
  unsigned int v2; // edi
  int v3; // ebp
  unsigned int *v4; // eax

  v2 = *(this + 0xA1); /*0x450434*/
  if ( v2 ) /*0x45043c*/
  {
    v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4])); /*0x45044b*/
    do /*0x4504a7*/
    {
      if ( *(_BYTE *)(v3 + 0x184) ) /*0x450450*/
      {
        TESFile_CloseGroupRecord((int)this); /*0x45045b*/
      }
      else
      {
        v4 = (unsigned int *)*(this + 0xA2); /*0x450466*/
        if ( v4 ) /*0x45046e*/
        {
          *(this + 0xA2) = v4[1]; /*0x450473*/
          *(this + 0xA1) = *v4; /*0x45047c*/
          FormHeapFree((unsigned int)v4); /*0x450482*/
        }
        else
        {
          *(this + 0xA1) = 0; /*0x45048c*/
        }
        FormHeapFree(v2); /*0x450497*/
      }
      v2 = *(this + 0xA1); /*0x45049f*/
    }
    while ( v2 ); /*0x4504a7*/
  }
}
