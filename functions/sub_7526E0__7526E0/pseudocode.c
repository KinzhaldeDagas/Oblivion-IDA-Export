int __thiscall sub_7526E0(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u); /*0x7526e6*/
  v4 = (int)v3; /*0x7526eb*/
  if ( v3 ) /*0x7526f2*/
  {
    sub_752BF0(v3); /*0x7526f6*/
    *(float *)(v4 + 0x1C) = 1.0; /*0x7526fd*/
    *(_DWORD *)v4 = &NiPSysSpawnModifier::`vftable'; /*0x752707*/
    *(float *)(v4 + 0x24) = 0.0; /*0x75270d*/
    *(_WORD *)(v4 + 0x18) = 1; /*0x752710*/
    *(float *)(v4 + 0x28) = 0.0; /*0x752714*/
    *(_WORD *)(v4 + 0x20) = 1; /*0x752717*/
    *(float *)(v4 + 0x2C) = 0.0; /*0x75271b*/
    *(_WORD *)(v4 + 0x22) = 1; /*0x75271e*/
    *(float *)(v4 + 0x30) = 0.0; /*0x752722*/
  }
  else
  {
    v4 = 0; /*0x752727*/
  }
  sub_752C40(this, v4, a2); /*0x752731*/
  *(_WORD *)(v4 + 0x18) = *((_WORD *)this + 0xC); /*0x75273a*/
  *(float *)(v4 + 0x1C) = *((float *)this + 7); /*0x752741*/
  *(_WORD *)(v4 + 0x20) = *((_WORD *)this + 0x10); /*0x752748*/
  *(_WORD *)(v4 + 0x22) = *((_WORD *)this + 0x11); /*0x752750*/
  *(float *)(v4 + 0x24) = *((float *)this + 9); /*0x752757*/
  *(float *)(v4 + 0x28) = *((float *)this + 0xA); /*0x75275f*/
  *(float *)(v4 + 0x2C) = *((float *)this + 0xB); /*0x752765*/
  *(float *)(v4 + 0x30) = *((float *)this + 0xC); /*0x75276c*/
  return v4; /*0x75276f*/
}
