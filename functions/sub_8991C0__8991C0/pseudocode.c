const void **__thiscall sub_8991C0(_DWORD *this)
{
  _WORD *v2; // eax
  const void **v3; // ebx

  v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x2C); /*0x8991d1*/
  v2[2] = 0x40; /*0x8991d6*/
  v3 = (const void **)sub_8D9EC0(v2); /*0x8991e1*/
  sub_898F10(this, v3); /*0x8991e5*/
  sub_899130(this, v3); /*0x8991ed*/
  sub_899030(v3, this); /*0x8991f2*/
  sub_899090(this, v3); /*0x8991f9*/
  return v3; /*0x899201*/
}
