unsigned int __thiscall sub_749B70(int *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  unsigned int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x749b73*/
  sub_7178F0(this, a2); /*0x749b7a*/
  v6 = v2[0x87]; /*0x749b93*/
  v4 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v6 + 4); /*0x749b94*/
  v7 = 1; /*0x749b97*/
  v4(v6, &a2, 1, &v7, 1); /*0x749b9f*/
  *((_BYTE *)this + 0xC0) = (_BYTE)a2 != 0; /*0x749bac*/
  return sub_712AE0(v2); /*0x749bb9*/
}
