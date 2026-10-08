void __thiscall sub_889E20(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ebx
  unsigned int i; // edi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // ecx
  char v10; // [esp+13h] [ebp-1h] BYREF

  v2 = *(this + 0xB); /*0x889e24*/
  if ( v2 ) /*0x889e29*/
  {
    if ( v2 >= 0xBB8 ) /*0x889e34*/
      *(this + 0xB) = 0xBB8; /*0x889e36*/
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x889e45*/
    if ( v3 ) /*0x889e49*/
    {
      sub_89C310(v3, *(this + 0xA), *(this + 0xB), 0); /*0x889e5c*/
      for ( i = 0; i < *(this + 0xB); ++i ) /*0x889e63*/
      {
        v5 = *(this + 0xA); /*0x889e68*/
        v6 = *(_DWORD *)(v5 + 4 * i); /*0x889e6b*/
        if ( v6 ) /*0x889e73*/
          v7 = *(_DWORD *)(v6 + 0xC); /*0x889e75*/
        else
          v7 = 0; /*0x889e7a*/
        if ( v7 ) /*0x889e7e*/
          *(_DWORD *)(v7 + 0x18) &= ~0x10u; /*0x889e80*/
        else
          sub_8996C0(v3, &v10, *(int (__stdcall ****)(signed int))(v5 + 4 * i)); /*0x889e90*/
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0xA) + 4 * i)); /*0x889e9b*/
      }
      v8 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x889eaf*/
      v9 = (_BYTE *)*(this + 4); /*0x889eb1*/
      if ( v9 && *(_DWORD *)(v8 + 0xB4) == 9 ) /*0x889ec0*/
      {
        sub_8BAB10(v9, SLODWORD(flt_A34BA0), SLODWORD(flt_A34BA0)); /*0x889ed2*/
        sub_8BAB60(*(this + 4)); /*0x889eda*/
      }
      else
      {
        sub_898B70((_DWORD **)v8, SLODWORD(flt_A34BA0)); /*0x889eed*/
      }
      _memset(*(this + 0xA), 0, 4 * *(this + 0xB)); /*0x889f00*/
      *(this + 0xB) = 0; /*0x889f08*/
    }
  }
}
