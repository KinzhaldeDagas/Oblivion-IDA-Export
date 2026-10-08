int __cdecl sub_8AFB50(int a1, int a2)
{
  int v2; // edi
  int BhkCollisionObject; // eax
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v9; // esi

  v2 = 0; /*0x8afb57*/
  if ( !a1 ) /*0x8afb5b*/
    return v2; /*0x8afb5b*/
  BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x8afb5e*/
  if ( !BhkCollisionObject
    || (result = *(_DWORD *)(BhkCollisionObject + 0x10)) == 0
    || ((v5 = *(_DWORD *)(result + 8)) == 0 || (v6 = v5 + 0x14) == 0 ? (v7 = 0) : (v7 = *(_DWORD *)(v6 + 0x1C)),
        ((v7 >> 8) & 0x1F) != a2) )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x8afb9c*/
    if ( v8 ) /*0x8afba0*/
    {
      v9 = 0; /*0x8afba2*/
      do /*0x8afbc9*/
      {
        if ( *(unsigned __int16 *)(v8 + 0xB6) <= v9 ) /*0x8afbad*/
          break; /*0x8afbad*/
        v2 = sub_8AFB50(*(_DWORD *)(*(_DWORD *)(v8 + 0xB0) + 4 * v9++), a2); /*0x8afbbf*/
      }
      while ( !v2 ); /*0x8afbc9*/
    }
    return v2; /*0x8afbcc*/
  }
  return result; /*0x8afbce*/
}
