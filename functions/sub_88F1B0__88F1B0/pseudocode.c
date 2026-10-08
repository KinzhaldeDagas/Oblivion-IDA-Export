double __cdecl sub_88F1B0(int a1, int a2)
{
  int v2; // eax
  int BhkBlendCollisionObject; // eax
  float v5; // [esp+4h] [ebp-4h]

  v5 = 1.0; /*0x88f1b8*/
  if ( a1 ) /*0x88f1be*/
  {
    if ( !a2 || (v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x58))(a1, a2)) == 0 ) /*0x88f1d4*/
      v2 = a1; /*0x88f1d6*/
    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(v2); /*0x88f1d9*/
    if ( BhkBlendCollisionObject ) /*0x88f1e3*/
      return *(float *)(BhkBlendCollisionObject + 0x14); /*0x88f1e8*/
  }
  return v5; /*0x88f1f0*/
}
