int __thiscall sub_75B8C0(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(unsigned int, int *, int, signed int *, int); // eax
  unsigned int v7; // edi
  int (__cdecl *v8)(unsigned int, int *, int, signed int *, int); // ecx
  int result; // eax
  unsigned int v10; // [esp-3Ch] [ebp-4Ch]
  unsigned int v11; // [esp-28h] [ebp-38h]
  unsigned int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)a2; /*0x75b8c4*/
  sub_752DC0((NiRenderer *)this, (unsigned int *)a2); /*0x75b8cb*/
  sub_712A20(v2); /*0x75b8d2*/
  sub_709430((char *)this + 0x1C, (signed int)v2); /*0x75b8db*/
  v12 = v2[0x87]; /*0x75b8f7*/
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v12 + 4); /*0x75b8f8*/
  a2 = 4; /*0x75b8fb*/
  v4(v12, this + 0xA, 4, &a2, 1); /*0x75b8ff*/
  v11 = v2[0x87]; /*0x75b913*/
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v11 + 4); /*0x75b914*/
  a2 = 4; /*0x75b917*/
  v5(v11, this + 0xB, 4, &a2, 1); /*0x75b91b*/
  v10 = v2[0x87]; /*0x75b930*/
  v6 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v10 + 4); /*0x75b931*/
  a2 = 4; /*0x75b934*/
  v6(v10, &v13, 4, &a2, 1); /*0x75b938*/
  *(this + 0xC) = v13; /*0x75b945*/
  v7 = v2[0x87]; /*0x75b948*/
  v8 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v7 + 4); /*0x75b94e*/
  a2 = 4; /*0x75b958*/
  result = v8(v7, &v13, 4, &a2, 1); /*0x75b95c*/
  *(this + 0xD) = v13; /*0x75b966*/
  return result; /*0x75b965*/
}
