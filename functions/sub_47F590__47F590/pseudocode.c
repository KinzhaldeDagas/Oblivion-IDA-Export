int __cdecl sub_47F590(_DWORD *a1)
{
  int v1; // ebp

  if ( !a1 ) /*0x47f59a*/
    JUMPOUT(0x47F64F); /*0x47f64f*/
  if ( a1[0x18] <= 1u ) /*0x47f5b0*/
    JUMPOUT(0x47F649); /*0x47f649*/
  v1 = *(_DWORD *)(a1[0x15] + 4); /*0x47f5c6*/
  if ( !*(_DWORD *)(a1[0x16] + 4) ) /*0x47f5d7*/
    JUMPOUT(0x47F63D); /*0x47f63d*/
  if ( !v1 ) /*0x47f5eb*/
    JUMPOUT(0x47F627); /*0x47f627*/
  *(_BYTE *)(a1[0x14] + *(_DWORD *)(a1[0x17] + 4)) = 0xFF; /*0x47f618*/
  return def_47F5F7(v1, 1, v1, (int)a1); /*0x47f5b9*/
}
