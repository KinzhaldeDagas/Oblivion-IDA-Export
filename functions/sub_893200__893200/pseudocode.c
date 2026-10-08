void __thiscall sub_893200(unsigned int *this, char a2)
{
  unsigned int v3; // esi

  if ( a2 ) /*0x893208*/
  {
    v3 = *(this + 3); /*0x89320b*/
    if ( v3 ) /*0x893210*/
    {
      sub_890F70((_DWORD *)*(this + 3)); /*0x893214*/
      FormHeapFree(v3); /*0x89321a*/
    }
    *(this + 3) = 0; /*0x893222*/
  }
}
