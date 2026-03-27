int __thiscall sub_752DC0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, NiPropertyState **, int, int *, int); // eax
  unsigned int v5; // edi
  int (__cdecl *v6)(unsigned int, unsigned int **, int, int *, int); // eax
  int result; // eax
  unsigned int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, (signed int)a2);
  sub_713620(v2, (int)&this->members.accumulator);
  v8 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, NiPropertyState **, int, int *, int))(v8 + 4);
  v9 = 4;
  v4(v8, &this->members.propertyState, 4, &v9, 1);
  sub_712A20(v2);
  v5 = v2[0x87];
  v6 = *(int (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v5 + 4);
  v9 = 1;
  result = v6(v5, &a2, 1, &v9, 1);
  LOBYTE(this->members.pad014[0]) = (_BYTE)a2 != 0;
  return result;
}
