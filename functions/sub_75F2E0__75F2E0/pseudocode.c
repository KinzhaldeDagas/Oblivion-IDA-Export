NiObject *__thiscall sub_75F2E0(void *this, int a2)
{
  NiObject *v2; // eax
  void *v4; // [esp+4h] [ebp-4h] BYREF

  v4 = this; /*0x75f2e0*/
  (*(void (__thiscall **)(void *, void **))(*(_DWORD *)this + 0xAC))(this, &v4); /*0x75f2ed*/
  v2 = (NiObject *)FormHeapAlloc(0x18u); /*0x75f2f1*/
  if ( v2 ) /*0x75f2fb*/
    return sub_6E7FA0(v2, (char)v4); /*0x75f303*/
  else
    return 0; /*0x75f30c*/
}
