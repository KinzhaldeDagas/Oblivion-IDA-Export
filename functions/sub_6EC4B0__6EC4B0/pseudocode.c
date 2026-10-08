NiObject *__thiscall sub_6EC4B0(void *this, int a2)
{
  NiObject *v2; // eax
  _DWORD v4[5]; // [esp+4h] [ebp-14h] BYREF

  (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0xA8))(this, v4); /*0x6ec4e0*/
  v2 = (NiObject *)FormHeapAlloc(0x18u); /*0x6ec4e4*/
  v4[1] = v2; /*0x6ec4ec*/
  v4[4] = 0; /*0x6ec4f2*/
  if ( v2 ) /*0x6ec4fa*/
    return sub_6E7FA0(v2, v4[0]); /*0x6ec503*/
  else
    return 0; /*0x6ec51a*/
}
