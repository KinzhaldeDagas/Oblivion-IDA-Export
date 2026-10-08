// TES4 authoritative: resolves Havok collidable/contact reference to a NiAVObject when possible. Handles collidable type 1 directly and type 2 with a fallback through v5+0x0C.
NiAVObject *__cdecl bhkCollidable_ResolveNiAVObject(int collidable)
{
  char v1; // dl
  int *v2; // ecx
  Atmosphere *v3; // ecx
  int *v5; // esi
  int **v6; // ecx
  _DWORD v7[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = *(_BYTE *)(collidable + 0x18);           // Collidable type byte at +0x18 selects entity/collidable resolution path. /*0x8afce4*/
  if ( v1 == 1 ) /*0x8afcf0*/
  {
    v2 = (int *)(collidable + *(_DWORD *)(collidable + 0x10));// Type 1 path: collidable body/entity data is at collidable + *(collidable+0x10). /*0x8afcf5*/
    if ( v2 ) /*0x8afcf7*/
    {
      v3 = (Atmosphere *)*sub_47F990(v2, v7, (int)&stru_BA7B80); /*0x8afd08*/
      if ( v3 ) /*0x8afd0c*/
        return Shared_GetPointerAtOffset08(v3); // Resolved bhk/Ni object is converted to NiAVObject through sub_452A60. /*0x8afd17*/
      return 0; /*0x8afd0c*/
    }
  }
  if ( v1 != 2 ) /*0x8afd1b*/
    return 0; /*0x8afd63*/
  v5 = (int *)(collidable + *(_DWORD *)(collidable + 0x10));// Type 2 path also uses collidable + *(collidable+0x10), then attempts the same bhk/Ni object lookup. /*0x8afd21*/
  if ( !v5 ) /*0x8afd23*/
    return 0; /*0x8afd23*/
  v3 = (Atmosphere *)*sub_47F990(v5, v7, (int)&stru_BA7B80); /*0x8afd36*/
  if ( v3 ) /*0x8afd3a*/
    return Shared_GetPointerAtOffset08(v3); /*0x8afd3a*/
  v6 = (int **)v5[3]; /*0x8afd47*/
  if ( v6 ) /*0x8afd4c*/
    return (NiAVObject *)sub_89F6B0(v6, 0);     // Type 2 fallback resolves NiAVObject through pointer at resolved body +0x0C when the bhk object lookup is absent. /*0x8afd50*/
  else
    return 0; /*0x8afd5c*/
}
