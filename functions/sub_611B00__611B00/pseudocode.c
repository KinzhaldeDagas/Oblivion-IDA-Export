void __userpurge sub_611B00(
        _DWORD *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6)
{
  unsigned int v7; // esi

  v7 = *(this + 0x41);
  if ( v7 )
  {
    if ( v7 == a6 )
      return;
    sub_47AB80((char *)*(this + 0x41), a2, a3, a4, a5);
    FormHeapFree(v7);
  }
  *(this + 0x41) = a6;
}
