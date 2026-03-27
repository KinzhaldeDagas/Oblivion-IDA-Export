int __thiscall sub_8BB600(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // [esp+4h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+8h] [ebp+0h]

  if ( !*(_BYTE *)(*(int (__thiscall **)(void *, int *, int))(*(_DWORD *)this + 0x10))(this, &a3, a3) )
    JUMPOUT(0x8BB67D);
  LOBYTE(retaddr) = 0;
  switch ( v7 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      return def_8BB62E(a2, a3, a4, a5, a6);
    default:
      JUMPOUT(0x8BB654);
  }
}
