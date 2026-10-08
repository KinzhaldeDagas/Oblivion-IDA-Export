// CustomAnimSupport decode: clears TESAnimation by freeing heap-copied KFFZ strings and list nodes.
void __thiscall TESAnimation_ClearReferences(unsigned int *this)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // [esp-4h] [ebp-Ch]

  while ( *(this + 2) || *(this + 1) ) /*0x46874e*/
  {
    v2 = (unsigned int *)*(this + 2); /*0x468750*/
    v3 = *(this + 1); /*0x468755*/
    if ( v2 ) /*0x468758*/
    {
      *(this + 2) = v2[1]; /*0x46875d*/
      *(this + 1) = *v2; /*0x468763*/
      FormHeapFree((unsigned int)v2); /*0x468766*/
      FormHeapFree(v3); /*0x46876f*/
    }
    else
    {
      v4 = *(this + 1); /*0x468779*/
      *(this + 1) = 0; /*0x46877a*/
      FormHeapFree(v4); /*0x468781*/
    }
  }
}
