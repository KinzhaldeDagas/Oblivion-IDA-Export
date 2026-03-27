void __thiscall sub_46DDC0(char **this, void *a2)
{
  char *v3; // esi
  char *i; // esi

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESModelList `RTTI Type Descriptor',
                 0);
  if ( v3 )
  {
    (*((void (__thiscall **)(char **))*this + 1))(this);
    for ( i = v3 + 4; i; i = *((char **)i + 1) )
    {
      if ( *(_DWORD *)i )
        sub_46DD70(this, *(char **)i);
    }
  }
}
