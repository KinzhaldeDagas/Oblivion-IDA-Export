void __thiscall sub_559F10(unsigned int *this)
{
  unsigned int v2; // esi
  int v3; // eax

  v2 = *(this + 2); /*0x559f14*/
  if ( v2 ) /*0x559f19*/
  {
    v3 = *(_DWORD *)(v2 + 0x20); /*0x559f1b*/
    if ( v3 ) /*0x559f20*/
    {
      if ( *(_DWORD *)(v3 + 4) == 1 ) /*0x559f26*/
      {
        sub_559CE0((unsigned int *)*(this + 2)); /*0x559f2a*/
        FormHeapFree(v2); /*0x559f30*/
        *(this + 2) = 0; /*0x559f38*/
      }
    }
  }
}
