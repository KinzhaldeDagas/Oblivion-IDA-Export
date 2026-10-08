int __thiscall sub_89FE90(_DWORD *this, char a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx

  if ( a2 == 0x41 || a2 == 0x61 ) /*0x89fe9a*/
  {
    if ( this ) /*0x89feae*/
    {
      v4 = *(this + 2); /*0x89feb0*/
      if ( v4 ) /*0x89feb5*/
      {
        v3 = *(_DWORD *)(v4 + 0x18); /*0x89feb7*/
        goto LABEL_10; /*0x89feba*/
      }
    }
  }
  else if ( this ) /*0x89fe9e*/
  {
    v2 = *(this + 2); /*0x89fea0*/
    if ( v2 ) /*0x89fea5*/
    {
      v3 = *(_DWORD *)(v2 + 0x1C); /*0x89fea7*/
      goto LABEL_10; /*0x89feaa*/
    }
  }
  v3 = 0; /*0x89febc*/
LABEL_10:
  if ( v3 ) /*0x89fec0*/
    return *(_DWORD *)(v3 + 0xC); /*0x89fec2*/
  else
    return 0; /*0x89fec8*/
}
