void __thiscall sub_46DDC0(char **this, void *a2)
{
  char *v3; // esi
  char *i; // esi

  v3 = (char *)OblivionDynamicCast( /*0x46dddc*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESModelList `RTTI Type Descriptor',
                 0);
  if ( v3 ) /*0x46dde3*/
  {
    (*((void (__thiscall **)(char **))*this + 1))(this); /*0x46ddec*/
    for ( i = v3 + 4; i; i = *((char **)i + 1) ) /*0x46ddf1*/
    {
      if ( *(_DWORD *)i ) /*0x46ddf3*/
        TESModelList_AddUniqueModelPath(this, *(char **)i); /*0x46ddfc*/
    }
  }
}
