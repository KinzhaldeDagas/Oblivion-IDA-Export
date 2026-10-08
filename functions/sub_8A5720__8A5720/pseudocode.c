void __cdecl sub_8A5720(int a1)
{
  int BhkCollisionObject; // eax
  int *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int i; // eax

  if ( a1 ) /*0x8a5727*/
  {
    BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x8a572a*/
    if ( BhkCollisionObject ) /*0x8a5734*/
    {
      v2 = *(int **)(BhkCollisionObject + 0x10); /*0x8a5736*/
      if ( v2 ) /*0x8a573b*/
        sub_8A5600(v2); /*0x8a573f*/
    }
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x8a574c*/
    v4 = v3; /*0x8a574e*/
    if ( v3 ) /*0x8a5752*/
    {
      v5 = *(unsigned __int16 *)(v3 + 0xB6); /*0x8a5754*/
      v6 = 0; /*0x8a575b*/
      if ( *(_WORD *)(v4 + 0xB6) ) /*0x8a5754*/
      {
        if ( v5 ) /*0x8a5763*/
          goto LABEL_9; /*0x8a5763*/
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) ) /*0x8a5765*/
        {
          sub_8A5720(i); /*0x8a5773*/
          if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 ) /*0x8a5787*/
            break; /*0x8a5787*/
LABEL_9:
          ; /*0x8a5769*/
        }
      }
    }
  }
}
