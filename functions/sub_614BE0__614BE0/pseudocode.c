__int16 __stdcall sub_614BE0(int *a1)
{
  int *v2; // esi
  __int16 v3; // di
  int v4; // eax
  int *v5; // eax
  __int16 v6; // cx

  v2 = a1; /*0x614be1*/
  v3 = 2; /*0x614be8*/
  if ( a1 ) /*0x614bed*/
  {
    while ( 1 ) /*0x614bf4*/
    {
      v4 = *v2; /*0x614bf4*/
      if ( !v2[1] ) /*0x614bf0*/
        break; /*0x614bf0*/
      if ( v4 ) /*0x614c00*/
        goto LABEL_6; /*0x614c00*/
LABEL_9:
      v2 = (int *)v2[1]; /*0x614c20*/
      if ( !v2 ) /*0x614c25*/
        return v3; /*0x614c25*/
    }
    if ( !v4 ) /*0x614bfa*/
      return v3; /*0x614bfa*/
LABEL_6:
    v5 = *(int **)(v4 + 4); /*0x614c02*/
    v6 = 1; /*0x614c07*/
    if ( v5 ) /*0x614c0c*/
      v6 = sub_485660(v5) + 1; /*0x614c19*/
    v3 += v6 + 4; /*0x614c1c*/
    goto LABEL_9; /*0x614c1c*/
  }
  return v3; /*0x614c2a*/
}
