void __thiscall sub_5D0D50(int ***this)
{
  int **v2; // eax
  int *v3; // ecx
  bool v4; // zf
  unsigned int **v5; // edi
  int v6; // edx
  unsigned int *v7; // ebx

  while ( *(this + 3) ) /*0x5d0d56*/
  {
    v2 = *(this + 1); /*0x5d0d60*/
    v3 = *v2; /*0x5d0d63*/
    v4 = *v2 == 0; /*0x5d0d65*/
    *(this + 1) = (int **)*v2; /*0x5d0d67*/
    if ( v4 ) /*0x5d0d6a*/
      *(this + 2) = 0; /*0x5d0d71*/
    else
      v3[1] = 0; /*0x5d0d6c*/
    v5 = (unsigned int **)v2[2]; /*0x5d0d76*/
    ((void (__thiscall *)(int ***, int **))(*this)[2])(this, v2); /*0x5d0d7f*/
    *(this + 3) = (int **)((char *)*(this + 3) + 0xFFFFFFFF); /*0x5d0d81*/
    if ( v5 ) /*0x5d0d87*/
    {
      v7 = *v5; /*0x5d0d89*/
      if ( *v5 ) /*0x5d0d89*/
      {
        ContainerEntryExtraData_DestroyDataTable(*v5, v6); /*0x5d0d91*/
        FormHeapFree((unsigned int)v7); /*0x5d0d97*/
      }
      FormHeapFree((unsigned int)v5); /*0x5d0da0*/
    }
  }
}
