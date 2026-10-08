char __cdecl sub_4977B0(int a1)
{
  char v1; // bl
  unsigned int v2; // ebp
  unsigned int i; // esi
  int v4; // ecx
  int v5; // eax

  if ( !a1 ) /*0x4977ba*/
    return 0; /*0x49781d*/
  v1 = NiAVObject_GetBhkBlendCollisionObject(a1) != 0; /*0x4977c9*/
  v2 = *(unsigned __int16 *)(a1 + 0xB6); /*0x4977cc*/
  for ( i = 0; i < v2; ++i ) /*0x4977cc*/
  {
    if ( *(unsigned __int16 *)(a1 + 0xB6) > i ) /*0x4977e9*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x4977f1*/
      if ( v4 ) /*0x4977f6*/
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4977fd*/
        if ( v5 ) /*0x497801*/
          v1 += sub_4977B0(v5); /*0x49780c*/
      }
    }
  }
  return v1; /*0x497817*/
}
