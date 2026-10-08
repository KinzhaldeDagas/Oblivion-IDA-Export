NiObjectNET *__thiscall sub_7C8330(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x34u); /*0x7c8357*/
  v4 = 0; /*0x7c8363*/
  if ( v3 ) /*0x7c836b*/
    v4 = NiFogProperty_constr(v3); /*0x7c8374*/
  sub_740CF0(this, (int)v4, a2); /*0x7c8386*/
  return v4; /*0x7c838d*/
}
