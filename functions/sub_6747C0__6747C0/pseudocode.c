int *__thiscall sub_6747C0(int *this)
{
  int *v1; // esi
  int *result; // eax
  unsigned int v3; // ecx

  v1 = this + 0x18;
LABEL_2:
  while ( 1 )
  {
    result = v1;
    v3 = 0;
    if ( !v1 )
      return result;
    do
    {
      if ( *result )
        ++v3;
      result = (int *)result[1];
    }
    while ( result );
    result = v1;
    if ( v3 <= dword_B36CD0 )
      return result;
    while ( *result )
    {
      if ( !result[1] )
      {
        BSSimpleList_Remove(v1, *result);
        goto LABEL_2;
      }
      result = (int *)result[1];
    }
  }
}
