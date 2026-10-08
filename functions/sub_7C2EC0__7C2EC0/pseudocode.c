char __cdecl sub_7C2EC0(int a1, int a2)
{
  _DWORD *v2; // eax
  bool v3; // zf
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = 0; /*0x7c2ecf*/
  if ( !NiTMap_GetAt(&stru_B2CBC4, a1, &v5) ) /*0x7c2ed7*/
    return 0; /*0x7c2ed7*/
  v2 = *(_DWORD **)(v5 + 0x38); /*0x7c2ee3*/
  if ( !v2 ) /*0x7c2ee8*/
    return 0; /*0x7c2efe*/
  while ( 1 ) /*0x7c2ef0*/
  {
    v3 = v2[2] == a2; /*0x7c2ef0*/
    v2 = (_DWORD *)*v2; /*0x7c2ef6*/
    if ( v3 ) /*0x7c2ef8*/
      break; /*0x7c2ef8*/
    if ( !v2 ) /*0x7c2efc*/
      return 0; /*0x7c2efc*/
  }
  return 1; /*0x7c2f01*/
}
