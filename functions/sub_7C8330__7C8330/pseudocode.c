NiObjectNET *__thiscall sub_7C8330(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x34u);
  v4 = 0;
  if ( v3 )
    v4 = NiFogProperty_constr(v3);
  sub_740CF0(this, (int)v4, a2);
  return v4;
}
