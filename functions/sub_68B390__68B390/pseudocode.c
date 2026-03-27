void __thiscall sub_68B390(int *this, void *a2)
{
  char **v3; // eax

  v3 = (char **)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                  &PathMiddleHigh `RTTI Type Descriptor',
                  0);
  if ( v3 )
    sub_68C6F0(this + 5, v3 + 5);
  sub_68AA20(this, (int)a2);
}
