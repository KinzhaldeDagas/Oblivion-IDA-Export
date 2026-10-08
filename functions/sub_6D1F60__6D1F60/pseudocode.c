void __thiscall sub_6D1F60(MEF_RefPointerArray16 *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  char *v4; // ebp
  unsigned int i; // edi
  int v6; // esi
  LONG v7; // [esp+14h] [ebp-10h] BYREF
  unsigned int v8; // [esp+20h] [ebp-4h]

  j_NiSingleInterpController_LinkObject((int)a2); /*0x6d1f8c*/
  if ( *((_DWORD *)this + 0xC) ) /*0x6d1f91*/
  {
    v3 = sub_7124D0(a2); /*0x6d1f9e*/
    v4 = (char *)(this + 4); /*0x6d1fa0*/
    NiTObjectArray_Resize16(this + 4, v3); /*0x6d1fa6*/
    for ( i = 0; i < v3; ++i ) /*0x6d1faf*/
    {
      v6 = sub_7124A0(a2); /*0x6d1fba*/
      v7 = v6; /*0x6d1fbe*/
      if ( v6 ) /*0x6d1fc2*/
        InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x6d1fc8*/
      v8 = 0; /*0x6d1fd6*/
      sub_5254D0(v4, i, &v7); /*0x6d1fde*/
      v8 = 0xFFFFFFFF; /*0x6d1fe5*/
      if ( v6 ) /*0x6d1fed*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6d1ff3*/
          (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6d2005*/
      }
    }
  }
}
