TESForm *__thiscall sub_606A20(TESForm *this, void *a2)
{
  _DWORD *v3; // esi
  int v4; // edi
  TESForm *result; // eax
  int *i; // ebx
  int v7; // edi
  int v8; // esi

  sub_566380(this, a2);
  v3 = *((_DWORD **)this + 0xF);
  if ( v3[1] )
  {
    do
    {
      v4 = *(_DWORD *)(v3[1] + 4);
      FormHeapFree(v3[1]);
      v3[1] = v4;
    }
    while ( v4 );
  }
  *v3 = 0;
  result = (TESForm *)OblivionDynamicCast(
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &AlarmPackage `RTTI Type Descriptor',
                        0);
  if ( result )
  {
    for ( i = (int *)result[2].member.refID; i; i = (int *)i[1] )
    {
      v7 = *i;
      if ( !*i )
        break;
      result = this;
      v8 = *((_DWORD *)this + 0xF);
      if ( *(_DWORD *)v8 )
      {
        result = (TESForm *)FormHeapAlloc(8u);
        if ( result )
        {
          result->vtbl = *(TESFormVtbl **)v8;
          *(_DWORD *)&result->member.type = 0;
        }
        else
        {
          result = 0;
        }
        *(_DWORD *)&result->member.type = *(_DWORD *)(v8 + 4);
        *(_DWORD *)(v8 + 4) = result;
      }
      *(_DWORD *)v8 = v7;
    }
  }
  return result;
}
