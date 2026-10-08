int __cdecl sub_8E8040(signed int a1)
{
  signed int v1; // edi
  void (__cdecl *v2)(int, int *, int, signed int *, int); // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1; /*0x8e8044*/
  v7 = *(_DWORD *)(a1 + 0x21C); /*0x8e805c*/
  v2 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x8e805d*/
  a1 = 4; /*0x8e8062*/
  v2(v7, &v8, 4, &a1, 1); /*0x8e806a*/
  v3 = sub_8E7E60(v8); /*0x8e8071*/
  v4 = v3; /*0x8e8076*/
  if ( !v3 ) /*0x8e807d*/
    return 0; /*0x8e80b8*/
  (*(void (__thiscall **)(_DWORD *, signed int))(*v3 + 4))(v3, v1); /*0x8e8087*/
  v5 = v4[1]; /*0x8e8089*/
  if ( *(_WORD *)(v5 + 4) ) /*0x8e808c*/
    ++*(_WORD *)(v5 + 6); /*0x8e8092*/
  *v4 = &hkConstraintCinfo::`vftable'; /*0x8e809b*/
  sub_8A0200(v4, 0); /*0x8e80a1*/
  FormHeapFree((unsigned int)v4); /*0x8e80a7*/
  return v5; /*0x8e80b1*/
}
