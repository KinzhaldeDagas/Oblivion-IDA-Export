int __thiscall sub_947EE0(char **this, int *a2)
{
  int v2; // eax
  int v4; // esi
  int result; // eax
  char **v6; // ebx
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v2 = *a2; /*0x947eea*/
  v4 = 0; /*0x947ef7*/
  v8 = 0; /*0x947efc*/
  v7 = 0; /*0x947f00*/
  result = (*(int (__thiscall **)(int *, int *, int *))(v2 + 8))(a2, &v8, &v7); /*0x947f04*/
  if ( v7 > 0 ) /*0x947f0b*/
  {
    v6 = this + 2; /*0x947f0d*/
    do /*0x947f28*/
    {
      sub_8B0E80(v6, *(unsigned __int8 *)(v4 + v8), (int)a2); /*0x947f1c*/
      result = v7; /*0x947f21*/
      ++v4; /*0x947f25*/
    }
    while ( v4 < v7 ); /*0x947f28*/
  }
  return result; /*0x947f2a*/
}
