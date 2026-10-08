void __thiscall sub_6D2A80(float *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  double v7; // st7
  char v8; // dl
  unsigned int i; // ecx
  int v10; // esi
  float v11; // [esp+4h] [ebp-4h]

  v2 = *((_DWORD *)this + 4); /*0x6d2a84*/
  if ( v2 ) /*0x6d2a89*/
  {
    v3 = *(_DWORD *)(v2 + 0x10); /*0x6d2a8f*/
    v4 = *(_DWORD *)(v2 + 8); /*0x6d2a97*/
    v5 = *(_DWORD *)(v2 + 0xC); /*0x6d2a9d*/
    if ( !v4 ) /*0x6d2aa0*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v2; /*0x6d2aa2*/
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6d2aac*/
        (**v6)(v6, 1); /*0x6d2ac2*/
      *(this + 4) = 0.0; /*0x6d2ac4*/
      *(this + 3) = flt_A7C6B0; /*0x6d2ad3*/
      return; /*0x6d2ad9*/
    }
    v11 = *(float *)(v5 + 4); /*0x6d2ae0*/
    v7 = v11; /*0x6d2ae4*/
    if ( v4 == 1 ) /*0x6d2ae8*/
      goto LABEL_15; /*0x6d2ae8*/
    if ( v3 == 1 || v3 == 5 ) /*0x6d2af2*/
    {
      v8 = 1; /*0x6d2af4*/
      for ( i = 1; i < v4; ++i ) /*0x6d2af6*/
      {
        if ( v7 != *(float *)(i * *(unsigned __int8 *)(v2 + 0x14) + v5 + 4) ) /*0x6d2b12*/
          v8 = 0; /*0x6d2b14*/
        if ( !v8 ) /*0x6d2b1b*/
          return; /*0x6d2b1b*/
      }
LABEL_15:
      v10 = *((_DWORD *)this + 4); /*0x6d2b29*/
      if ( v10 ) /*0x6d2b2e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6d2b36*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x6d2b4c*/
        v7 = v11; /*0x6d2b4e*/
        *(this + 4) = 0.0; /*0x6d2b52*/
      }
      *(this + 3) = v7; /*0x6d2b5a*/
    }
  }
}
