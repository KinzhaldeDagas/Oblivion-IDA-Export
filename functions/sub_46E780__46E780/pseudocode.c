char *__thiscall sub_46E780(unsigned int *this, void *a2)
{
  char *result; // eax
  char *v4; // edi
  bool v5; // zf
  char *v6; // edi
  _DWORD *v7; // ebp
  _DWORD *v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  char *v13; // [esp+Ch] [ebp+4h]

  result = (char *)OblivionDynamicCast(
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                     &TESReactionForm `RTTI Type Descriptor',
                     0);
  v4 = result;
  if ( result )
  {
    result = (char *)sub_46E600(this);
    v5 = v4 + 4 == 0;
    v6 = v4 + 4;
    v7 = this + 1;
    v13 = v6;
    if ( !v5 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD **)v6;
        if ( !*(_DWORD *)v6 )
          break;
        v9 = (_DWORD *)FormHeapAlloc(8u);
        *v9 = *v8;
        v9[1] = v8[1];
        v10 = v7;
        if ( v7[1] )
        {
          v11 = (int)(v7 + 1);
          do
          {
            v10 = *(_DWORD **)v11;
            v5 = *(_DWORD *)(*(_DWORD *)v11 + 4) == 0;
            v11 = *(_DWORD *)v11 + 4;
          }
          while ( !v5 );
        }
        if ( *v10 )
        {
          v12 = (_DWORD *)FormHeapAlloc(8u);
          if ( v12 )
          {
            *v12 = v9;
            v12[1] = 0;
            v10[1] = v12;
          }
          else
          {
            v10[1] = 0;
          }
        }
        else
        {
          *v10 = v9;
        }
        if ( v7[1] )
          v7 = (_DWORD *)v7[1];
        v13 = *((char **)v13 + 1);
        result = v13;
        if ( !v13 )
          break;
        v6 = v13;
      }
    }
  }
  return result;
}
