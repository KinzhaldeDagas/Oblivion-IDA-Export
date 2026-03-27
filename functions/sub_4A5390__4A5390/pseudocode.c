BOOL __thiscall sub_4A5390(int *this)
{
  int *v1; // edi
  unsigned int *v2; // eax
  unsigned int v3; // esi
  unsigned int *v4; // ecx

  v1 = this + 3;
  v2 = (unsigned int *)(this + 3);
  if ( this != (int *)0xFFFFFFF4 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      v4 = (unsigned int *)v2[1];
      if ( v4 )
      {
        v2[1] = v4[1];
        *v2 = *v4;
        FormHeapFree((unsigned int)v4);
      }
      else
      {
        *v2 = 0;
      }
      FormHeapFree(v3);
      v2 = (unsigned int *)v1;
    }
    while ( v1 );
  }
  return !v1[1] && !*v1;
}
