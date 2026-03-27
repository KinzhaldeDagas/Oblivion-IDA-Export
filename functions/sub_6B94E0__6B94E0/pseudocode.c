void sub_6B94E0()
{
  UnkBohBoh *v0; // esi

  v0 = dword_B3C218;
  if ( dword_B3C218 )
  {
    v0->unk10 = 0;
    sub_6B9250((BSSimpleList_VoidPtr **)v0, 1);
    FormHeapFree((unsigned int)v0);
    dword_B3C218 = 0;
  }
}
