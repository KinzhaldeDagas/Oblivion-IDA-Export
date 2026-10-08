// Verified category guard accepts6 (JA6), while six owned/serialized category lists are0..5. Query additionally matches number28 and optional witness membership. Unknown caller validation, so no safe-range claim.
char __thiscall sub_675C40(_DWORD *this, int a2, int a3, int a4, unsigned int a5, int a6, int a7)
{
  int v7; // esi
  _DWORD *v8; // ecx

  if ( a5 > 6 ) /*0x675c48*/
    return 0; /*0x675cb2*/
  v7 = *(this + a5 + 0xA); /*0x675c4d*/
  while ( v7 ) /*0x675c53*/
  {
    v8 = *(_DWORD **)v7; /*0x675c60*/
    if ( !*(_DWORD *)v7 ) /*0x675c60*/
      break; /*0x675c60*/
    v7 = *(_DWORD *)(v7 + 4); /*0x675c69*/
    if ( v8[1] == a5 /*0x675c93*/
      && v8[3] == a3
      && (v8[2] == a2 || !a2)
      && (a7 == 0xFFFFFFFF || a7 == v8[0xA])
      && (!a4 || Crime_DoesActorKnow(v8, a4)) )
    {
      return 1; /*0x675caf*/
    }
  }
  return 0; /*0x675ca5*/
}
