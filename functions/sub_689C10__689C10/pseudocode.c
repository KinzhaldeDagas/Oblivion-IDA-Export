void __thiscall sub_689C10(int *this)
{
  int *v1; // esi
  unsigned int v2; // edi
  int *v3; // eax

  v1 = this + 1;
  if ( this != (int *)0xFFFFFFFC && (*(this + 2) || *v1) )
  {
    v2 = *v1;
    if ( *v1 )
    {
      sub_68B1C0(*v1);
      FormHeapFree(v2);
    }
    v3 = (int *)v1[1];
    if ( v3 )
    {
      v1[1] = v3[1];
      *v1 = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *v1 = 0;
    }
  }
}
