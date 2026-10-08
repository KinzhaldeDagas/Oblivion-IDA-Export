void __thiscall sub_88AD90(int *this)
{
  unsigned int v2; // eax
  const void **v3; // ebp
  unsigned int i; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int *v8; // ecx
  int v9; // ecx
  int v10; // [esp+4h] [ebp-8h] BYREF

  v2 = *(this + 0xD); /*0x88ad96*/
  if ( v2 ) /*0x88ad9b*/
  {
    if ( v2 >= 0xC8 ) /*0x88ada6*/
      *(this + 0xD) = 0xC8; /*0x88ada8*/
    v3 = (const void **)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x88adb7*/
    if ( v3 ) /*0x88adbb*/
    {
      sub_89CD00(v3, *(this + 0xC), *(this + 0xD)); /*0x88adcc*/
      for ( i = 0; i < *(this + 0xD); ++i ) /*0x88add3*/
      {
        v5 = *(this + 0xC); /*0x88add8*/
        v6 = *(_DWORD *)(v5 + 4 * i); /*0x88addb*/
        if ( v6 ) /*0x88ade0*/
          v7 = *(_DWORD *)(v6 + 0xC); /*0x88ade2*/
        else
          v7 = 0; /*0x88ade7*/
        if ( v7 ) /*0x88adeb*/
          *(_BYTE *)(v7 + 0x10) &= ~1u; /*0x88aded*/
        else
          sub_899B30(v3, *(int (__stdcall ****)(signed int))(v5 + 4 * i)); /*0x88adf6*/
        v8 = *(int **)(*(this + 0xC) + 4 * i); /*0x88adfe*/
        if ( v8 ) /*0x88ae03*/
        {
          v9 = *sub_47F990(v8, &v10, (int)&stru_BA7B80); /*0x88ae14*/
          if ( v9 ) /*0x88ae18*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 0x50))(v9); /*0x88ae1f*/
        }
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0xC) + 4 * i)); /*0x88ae27*/
      }
      _memset(*(this + 0xC), 0, 4 * *(this + 0xD)); /*0x88ae42*/
      *(this + 0xD) = 0; /*0x88ae4a*/
    }
  }
}
