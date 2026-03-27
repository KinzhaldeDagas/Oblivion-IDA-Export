__int16 __userpurge sub_614BE0@<ax>(double st7_0@<st0>, int *a2)
{
  int *v2; // esi
  __int16 v3; // di
  int v4; // eax
  int *v5; // eax
  __int16 v6; // cx

  v2 = a2;
  v3 = 2;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( !v2[1] )
        break;
      if ( v4 )
        goto LABEL_6;
LABEL_9:
      v2 = (int *)v2[1];
      if ( !v2 )
        return v3;
    }
    if ( !v4 )
      return v3;
LABEL_6:
    v5 = *(int **)(v4 + 4);
    v6 = 1;
    if ( v5 )
      v6 = sub_485660(v5, st7_0) + 1;
    v3 += v6 + 4;
    goto LABEL_9;
  }
  return v3;
}
