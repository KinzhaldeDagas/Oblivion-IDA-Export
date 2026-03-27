void __thiscall sub_5D0D50(int **this)
{
  int *v2; // eax
  int v3; // ecx
  bool v4; // zf
  unsigned int **v5; // edi
  int v6; // edx
  unsigned int *v7; // ebx

  while ( *(this + 3) )
  {
    v2 = *(this + 1);
    v3 = *v2;
    v4 = *v2 == 0;
    *(this + 1) = (int *)*v2;
    if ( v4 )
      *(this + 2) = 0;
    else
      *(_DWORD *)(v3 + 4) = 0;
    v5 = (unsigned int **)v2[2];
    ((void (__thiscall *)(int **, int *))(*this)[2])(this, v2);
    *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF);
    if ( v5 )
    {
      v7 = *v5;
      if ( *v5 )
      {
        ContainerEntryExtraData_DestroyDataTable(*v5, v6);
        FormHeapFree((unsigned int)v7);
      }
      FormHeapFree((unsigned int)v5);
    }
  }
}
