int __thiscall sub_947F40(char *this, int *a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  int *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v3 = *a2; /*0x947f50*/
  v4 = 0; /*0x947f56*/
  v8 = 0; /*0x947f59*/
  v7 = 0; /*0x947f5d*/
  result = (*(int (__thiscall **)(int *, int *, int *))(v3 + 8))(a2, &v8, &v7); /*0x947f61*/
  if ( v7 > 0 ) /*0x947f68*/
  {
    v6 = (int *)(this + 8); /*0x947f6a*/
    do /*0x947f87*/
    {
      sub_8B1570(v6, *(unsigned __int8 *)(v4 + v8)); /*0x947f7b*/
      result = v7; /*0x947f80*/
      ++v4; /*0x947f84*/
    }
    while ( v4 < v7 ); /*0x947f87*/
  }
  return result; /*0x947f89*/
}
