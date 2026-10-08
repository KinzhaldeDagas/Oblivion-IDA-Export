// Pass226/227: NiScreenSpaceCamera stream/lifecycle reconstruction path for texture array; not a RenderScreenTexture submission.
int __thiscall sub_73AA00(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // edi
  LONG *v8; // [esp+10h] [ebp-4h]
  LONG *v9; // [esp+10h] [ebp-4h]
  unsigned int i; // [esp+18h] [ebp+4h]
  unsigned int j; // [esp+18h] [ebp+4h]

  sub_70D440(this, a2); /*0x73aa0c*/
  v3 = 0; /*0x73aa18*/
  for ( i = *(this + 0x97); v3 < i; ++v3 ) /*0x73aa11*/
  {
    v4 = *(this + 0x97); /*0x73aa30*/
    v8 = (LONG *)(*((_DWORD *)this + 0x4A) + 4 * v3); /*0x73aa43*/
    if ( v4 >= *(this + 0x96) ) /*0x73aa47*/
      sub_6C4510(this + 0x92, v4 + *(this + 0x99)); /*0x73aa52*/
    sub_739810((_DWORD *)this + 0x49, v4, v8); /*0x73aa5f*/
  }
  sub_739670(this + 0x92); /*0x73aa73*/
  v5 = 0; /*0x73aa7f*/
  for ( j = *(this + 0x9F); v5 < j; ++v5 ) /*0x73aa78*/
  {
    v6 = *(this + 0x9F); /*0x73aa90*/
    v9 = (LONG *)(*((_DWORD *)this + 0x4E) + 4 * v5); /*0x73aaa3*/
    if ( v6 >= *(this + 0x9E) ) /*0x73aaa7*/
      sub_6C4510(this + 0x9A, v6 + *(this + 0xA1)); /*0x73aab2*/
    sub_7395A0((_DWORD *)this + 0x4D, v6, v9); /*0x73aabf*/
  }
  return sub_739670(this + 0x9A); /*0x73aad8*/
}
