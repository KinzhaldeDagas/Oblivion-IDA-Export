int __thiscall sub_75E920(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v6)(unsigned int, unsigned int **, int, int *, int); // eax
  unsigned int v7; // edi
  int (__cdecl *v8)(unsigned int, UInt32 *, int, int *, int); // eax
  int result; // eax
  unsigned int v10; // [esp-3Ch] [ebp-4Ch]
  unsigned int v11; // [esp-28h] [ebp-38h]
  unsigned int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x75e924*/
  sub_752DC0(this, a2); /*0x75e92b*/
  sub_712A20(v2); /*0x75e932*/
  v12 = v2[0x87]; /*0x75e94a*/
  v4 = *(void (__cdecl **)(unsigned int, UInt32 *, int, int *, int))(v12 + 4); /*0x75e94b*/
  v13 = 4; /*0x75e94e*/
  v4(v12, &this->members.pad014[2], 4, &v13, 1); /*0x75e956*/
  v11 = v2[0x87]; /*0x75e96b*/
  v5 = *(void (__cdecl **)(unsigned int, UInt32 *, int, int *, int))(v11 + 4); /*0x75e96c*/
  v13 = 4; /*0x75e96f*/
  v5(v11, &this->members.pad014[3], 4, &v13, 1); /*0x75e977*/
  v10 = v2[0x87]; /*0x75e98d*/
  v6 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v10 + 4); /*0x75e98e*/
  v13 = 1; /*0x75e991*/
  v6(v10, &a2, 1, &v13, 1); /*0x75e999*/
  LOBYTE(this->members.pad014[4]) = (_BYTE)a2 != 0; /*0x75e9aa*/
  v7 = v2[0x87]; /*0x75e9ad*/
  v8 = *(int (__cdecl **)(unsigned int, UInt32 *, int, int *, int))(v7 + 4); /*0x75e9b3*/
  v13 = 4; /*0x75e9bd*/
  result = v8(v7, &this->members.pad014[5], 4, &v13, 1); /*0x75e9c5*/
  *(float *)&this->members.pad014[6] = *(float *)&this->members.pad014[5] * *(float *)&this->members.pad014[5]; /*0x75e9cf*/
  return result; /*0x75e9d2*/
}
