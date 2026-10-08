int __thiscall sub_752DC0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, NiPropertyState **, int, int *, int); // eax
  unsigned int v5; // edi
  int (__cdecl *v6)(unsigned int, unsigned int **, int, int *, int); // eax
  int result; // eax
  unsigned int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x752dc3*/
  sub_7008A0(this, (signed int)a2); /*0x752dca*/
  sub_713620(v2, (int)&this->members.accumulator); /*0x752dd5*/
  v8 = v2[0x87]; /*0x752ded*/
  v4 = *(void (__cdecl **)(unsigned int, NiPropertyState **, int, int *, int))(v8 + 4); /*0x752dee*/
  v9 = 4; /*0x752df1*/
  v4(v8, &this->members.propertyState, 4, &v9, 1); /*0x752df9*/
  sub_712A20(v2); /*0x752e00*/
  v5 = v2[0x87]; /*0x752e05*/
  v6 = *(int (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v5 + 4); /*0x752e0b*/
  v9 = 1; /*0x752e1d*/
  result = v6(v5, &a2, 1, &v9, 1); /*0x752e25*/
  LOBYTE(this->members.pad014[0]) = (_BYTE)a2 != 0; /*0x752e33*/
  return result; /*0x752e2f*/
}
