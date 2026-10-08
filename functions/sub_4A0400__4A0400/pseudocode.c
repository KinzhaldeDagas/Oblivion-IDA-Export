NiObject *__thiscall sub_4A0400(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u); /*0x4a0427*/
  v4 = 0; /*0x4a0433*/
  if ( v3 ) /*0x4a043b*/
    v4 = sub_4A0200(v3); /*0x4a0444*/
  sub_721170(this, (int)v4, a2); /*0x4a0456*/
  return v4; /*0x4a045d*/
}
