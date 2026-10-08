int __thiscall sub_8BB600(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  const char *v9; // eax
  int v10; // [esp+4h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+8h] [ebp+0h]

  v6 = a3; /*0x8bb601*/
  if ( !*(_BYTE *)(*(int (__thiscall **)(void *, int *, int))(*(_DWORD *)this + 0x10))(this, &a3, a3) ) /*0x8bb618*/
    JUMPOUT(0x8BB67D); /*0x8bb67d*/
  LOBYTE(retaddr) = 0; /*0x8bb627*/
  switch ( v10 ) /*0x8bb62e*/
  {
    case 0: /*0x8bb62e*/
      return def_8BB62E((int)"Report", v6, v10, (int)this, a2, a3, a4, a5, a6); /*0x8bb63a*/
    case 1: /*0x8bb62e*/
      return def_8BB62E((int)"Warning", v6, v10, (int)this, a2, a3, a4, a5, a6); /*0x8bb641*/
    case 2: /*0x8bb62e*/
      v9 = "Assert"; /*0x8bb643*/
      return def_8BB62E((int)v9, v6, v10, (int)this, a2, a3, a4, a5, a6); /*0x8bb648*/
    case 3: /*0x8bb62e*/
      v9 = "Error"; /*0x8bb64a*/
      return def_8BB62E((int)v9, v6, v10, (int)this, a2, a3, a4, a5, a6);
    default:
      JUMPOUT(0x8BB654); /*0x8bb654*/
  }
}
