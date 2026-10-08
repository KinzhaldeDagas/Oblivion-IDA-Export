char __thiscall sub_72CE60(const void **this, int Key)
{
  _DWORD *v2; // ebx
  unsigned int v3; // ebp
  int v4; // esi
  const void *v7; // [esp-10h] [ebp-20h]
  size_t v8; // [esp-Ch] [ebp-1Ch]
  size_t v9; // [esp-4h] [ebp-14h]
  int (__cdecl *v10)(const void *, const void *); // [esp+4h] [ebp-Ch]

  v2 = (_DWORD *)Key; /*0x72ce61*/
  v3 = *(_DWORD *)(Key + 8); /*0x72ce66*/
  v4 = 0; /*0x72ce6a*/
  if ( !v3 ) /*0x72ce71*/
    return 1; /*0x72cea3*/
  while ( 1 ) /*0x72ce7e*/
  {
    LODWORD(v9) = PtFuncCompare; /*0x72ce7e*/
    HIDWORD(v8) = 2; /*0x72ce83*/
    LODWORD(v8) = *(this + 2); /*0x72ce85*/
    v7 = *this; /*0x72ce86*/
    Key = *(unsigned __int16 *)(*v2 + 8 * v4); /*0x72ce8c*/
    if ( !bsearch(&Key, v7, v8, v9, v10) ) /*0x72ce90*/
      break; /*0x72ce90*/
    if ( ++v4 >= v3 ) /*0x72cea1*/
      return 1; /*0x72cea1*/
  }
  return 0; /*0x72cea3*/
}
