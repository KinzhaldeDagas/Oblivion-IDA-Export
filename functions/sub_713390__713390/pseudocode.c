int __thiscall sub_713390(unsigned int *this)
{
  int (__cdecl *v2)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int i; // edi
  int v5; // [esp-14h] [ebp-24h]
  unsigned int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v6 = *(this + 0x84); /*0x7133a4*/
  v5 = *(this + 0x88); /*0x7133b5*/
  v2 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8); /*0x7133b6*/
  v7 = 4; /*0x7133b9*/
  result = v2(v5, &v6, 4, &v7, 1); /*0x7133c1*/
  for ( i = 0; i < v6; ++i ) /*0x7133cc*/
    result = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 0x2C))(this, *(_DWORD *)(*(this + 0x82) + 4 * i)); /*0x7133e1*/
  return result; /*0x7133ec*/
}
