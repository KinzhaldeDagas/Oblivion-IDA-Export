void __thiscall TESFile_CloseGroupRecord_::TESFile_PopGroup(unsigned int *this)
{
  unsigned int v1; // esi
  unsigned int *v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v1 = *(this + 0xA1);
  if ( v1 )
  {
    v2 = (unsigned int *)*(this + 0xA2);
    if ( v2 )
    {
      *(this + 0xA2) = v2[1];
      *(this + 0xA1) = *v2;
      FormHeapFree((unsigned int)v2);
      FormHeapFree(v1);
    }
    else
    {
      v3 = *(this + 0xA1);
      *(this + 0xA1) = 0;
      FormHeapFree(v3);
    }
  }
}
