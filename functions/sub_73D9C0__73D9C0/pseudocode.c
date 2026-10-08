int __thiscall sub_73D9C0(int *this, int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, int *, int); // eax
  int result; // eax
  bool v6; // cc
  unsigned int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = (unsigned int *)a2; /*0x73d9c3*/
  sub_709EE0(this, (unsigned int *)a2); /*0x73d9ca*/
  v7 = v2[0x87]; /*0x73d9e3*/
  v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v7 + 4); /*0x73d9e4*/
  a2 = 4; /*0x73d9e7*/
  v4(v7, &v8, 4, &a2, 1); /*0x73d9ef*/
  result = v8; /*0x73d9f1*/
  v6 = v8 < 2; /*0x73d9f8*/
  *(this + 0x37) = v8; /*0x73d9fb*/
  if ( !v6 ) /*0x73da01*/
    *(this + 0x37) = 0; /*0x73da03*/
  if ( v2[0x36] < 0x14000004 ) /*0x73da17*/
    return sub_712A20(v2); /*0x73da1b*/
  return result; /*0x73da20*/
}
