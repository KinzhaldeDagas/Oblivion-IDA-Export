NiObject *__thiscall sub_564A80(void *this)
{
  NiObject *v1; // edi
  int v2; // eax
  int v3; // esi

  v1 = 0; /*0x564aab*/
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA4))(this); /*0x564aad*/
  if ( v2 ) /*0x564ab1*/
  {
    v3 = *(_DWORD *)(v2 + 0xA8); /*0x564ab3*/
    if ( v3 ) /*0x564abf*/
    {
      InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x564ac5*/
      v1 = NiRTTI_Cast((BSStringT *)&stru_BA7F78, *(NiObject **)(v3 + 0x10)); /*0x564ae8*/
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x564afa*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x564b0c*/
    }
  }
  return v1; /*0x564b10*/
}
