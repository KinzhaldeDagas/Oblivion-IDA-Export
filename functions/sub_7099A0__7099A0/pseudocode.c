int __thiscall sub_7099A0(int *this, int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7099a2*/
  sub_700AC0((NiRenderer *)this, (unsigned int *)a2); /*0x7099a9*/
  sub_709430((char *)this + 0x1C, v2); /*0x7099b2*/
  sub_709430((char *)this + 0x28, v2); /*0x7099bb*/
  sub_709430((char *)this + 0x34, v2); /*0x7099c4*/
  sub_709430((char *)this + 0x40, v2); /*0x7099cd*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x7099e5*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4); /*0x7099e6*/
  a2 = 4; /*0x7099e9*/
  v4(v8, this + 0x13, 4, &a2, 1); /*0x7099f1*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x7099f3*/
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 4); /*0x7099f9*/
  a2 = 4; /*0x709a0a*/
  return v6(v5, this + 0x14, 4, &a2, 1); /*0x709a17*/
}
