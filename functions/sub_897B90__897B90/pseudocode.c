int __thiscall sub_897B90(NiRenderer *this, int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, NiPropertyState **, int, int *, int); // edx
  unsigned int v6; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2; /*0x897b92*/
  sub_711C90(this, (unsigned int *)a2); /*0x897b99*/
  v4 = *(void (__cdecl **)(unsigned int, NiPropertyState **, int, int *, int))(v2[0x87] + 4); /*0x897ba4*/
  v6 = v2[0x87]; /*0x897bb4*/
  a2 = 2; /*0x897bb5*/
  v4(v6, &this->members.propertyState, 2, &a2, 1); /*0x897bbd*/
  return sub_712A20(v2); /*0x897bc9*/
}
