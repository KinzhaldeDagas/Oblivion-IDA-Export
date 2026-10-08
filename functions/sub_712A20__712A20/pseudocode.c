int __thiscall sub_712A20(unsigned int *this)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // eax
  int v3; // eax
  unsigned int *v4; // esi
  unsigned int v5; // eax
  int result; // eax
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v7 = *(this + 0x87); /*0x712a3a*/
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4); /*0x712a3b*/
  v8 = 4; /*0x712a3e*/
  v2(v7, &v9, 4, &v8, 1); /*0x712a46*/
  v3 = *(this + 0x8A); /*0x712a48*/
  v4 = this + 0x89; /*0x712a4e*/
  if ( v4[2] == v3 ) /*0x712a5a*/
  {
    if ( v3 ) /*0x712a5e*/
      v5 = 2 * v3; /*0x712a60*/
    else
      v5 = 1; /*0x712a64*/
    sub_6E8CA0(v4, v5); /*0x712a6c*/
  }
  result = v9; /*0x712a76*/
  *(_DWORD *)(*v4 + 4 * v4[2]++) = v9; /*0x712a7a*/
  return result; /*0x712a81*/
}
