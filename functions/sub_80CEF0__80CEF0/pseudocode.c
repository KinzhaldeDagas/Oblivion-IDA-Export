int __thiscall sub_80CEF0(void *this)
{
  NiD3DPass **v2; // esi
  int result; // eax

  v2 = &g_ShadowLightPassBySelector; /*0x80cef4*/
  do /*0x80cf18*/
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++); /*0x80cf0d*/
  while ( (int)v2 < (int)&dword_B455A8 ); /*0x80cf18*/
  return result; /*0x80cf1a*/
}
