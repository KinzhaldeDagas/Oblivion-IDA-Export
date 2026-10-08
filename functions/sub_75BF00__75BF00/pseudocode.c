int __thiscall sub_75BF00(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  unsigned int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x75bf03*/
  sub_752DC0(this, a2); /*0x75bf0a*/
  v6 = v2[0x87]; /*0x75bf23*/
  v4 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v6 + 4); /*0x75bf24*/
  v7 = 1; /*0x75bf27*/
  v4(v6, &a2, 1, &v7, 1); /*0x75bf2f*/
  LOBYTE(this->members.pad014[1]) = (_BYTE)a2 != 0; /*0x75bf3c*/
  return sub_712A20(v2); /*0x75bf46*/
}
