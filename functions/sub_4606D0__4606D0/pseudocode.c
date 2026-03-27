void __thiscall sub_4606D0(char *this, int a1)
{
  TESForm *v3; // eax

  v3 = TESForm_LookupByFormID(a1);
  if ( v3 )
    sub_45C7A0(this, v3);
  else
    sub_452DF0(*(_DWORD **)this, a1, 1);
}
