unsigned __int8 __thiscall sub_42A440(int **this, int a2, char a3)
{
  int *v4; // eax
  int *i; // eax
  int v6; // ecx
  int v7; // esi
  unsigned __int8 result; // al

  if ( !*(this + 3) )
  {
    v4 = (int *)FormHeapAlloc(8u);
    if ( v4 )
    {
      *v4 = 0;
      v4[1] = 0;
    }
    else
    {
      v4 = 0;
    }
    *(this + 3) = v4;
  }
  for ( i = *(this + 3); i; i = (int *)i[1] )
  {
    v6 = *i;
    if ( !*i )
      break;
    if ( *(_DWORD *)v6 == a2 )
    {
      *(_DWORD *)v6 = a2;
      *(_BYTE *)(v6 + 4) = a3;
      return a3;
    }
  }
  v7 = FormHeapAlloc(8u);
  result = (unsigned __int8)BSSimpleList_PushFront(*(this + 3), v7);
  *(_DWORD *)v7 = a2;
  *(_BYTE *)(v7 + 4) = a3;
  return result;
}
