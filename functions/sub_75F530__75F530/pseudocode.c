NiObject *__thiscall sub_75F530(void *this, int a2)
{
  NiObject *v2; // eax
  float v4; // [esp+8h] [ebp-4h] BYREF

  v4 = *(float *)&this; /*0x75f530*/
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xAC))(this, &v4); /*0x75f53d*/
  v2 = (NiObject *)FormHeapAlloc(0x18u); /*0x75f541*/
  if ( v2 ) /*0x75f54b*/
    return sub_6D29E0(v2, v4); /*0x75f556*/
  else
    return 0; /*0x75f55f*/
}
