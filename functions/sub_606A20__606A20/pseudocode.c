TESForm *__thiscall sub_606A20(TESForm *this, void *a2)
{
  _DWORD *v3; // esi
  int v4; // edi
  TESForm *result; // eax
  int *i; // ebx
  int v7; // edi
  int v8; // esi

  sub_566380(this, a2); /*0x606a2f*/
  v3 = *((_DWORD **)this + 0xF); /*0x606a34*/
  if ( v3[1] ) /*0x606a37*/
  {
    do /*0x606a54*/
    {
      v4 = *(_DWORD *)(v3[1] + 4); /*0x606a43*/
      FormHeapFree(v3[1]); /*0x606a47*/
      v3[1] = v4; /*0x606a51*/
    }
    while ( v4 ); /*0x606a54*/
  }
  *v3 = 0; /*0x606a65*/
  result = (TESForm *)OblivionDynamicCast( /*0x606a6b*/
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &AlarmPackage `RTTI Type Descriptor',
                        0);
  if ( result ) /*0x606a75*/
  {
    for ( i = (int *)result[2].member.refID; i; i = (int *)i[1] ) /*0x606a7c*/
    {
      v7 = *i; /*0x606a80*/
      if ( !*i ) /*0x606a80*/
        break; /*0x606a84*/
      result = this; /*0x606a86*/
      v8 = *((_DWORD *)this + 0xF); /*0x606a8a*/
      if ( *(_DWORD *)v8 ) /*0x606a8d*/
      {
        result = (TESForm *)FormHeapAlloc(8u); /*0x606a94*/
        if ( result ) /*0x606a9e*/
        {
          result->vtbl = *(TESFormVtbl **)v8; /*0x606aa2*/
          *(_DWORD *)&result->member.type = 0; /*0x606aa4*/
        }
        else
        {
          result = 0; /*0x606aad*/
        }
        *(_DWORD *)&result->member.type = *(_DWORD *)(v8 + 4); /*0x606ab2*/
        *(_DWORD *)(v8 + 4) = result; /*0x606ab5*/
      }
      *(_DWORD *)v8 = v7; /*0x606ab8*/
    }
  }
  return result; /*0x606ac1*/
}
