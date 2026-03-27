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

  v2 = *(this + 0xB);
  if ( v2 )
  {
    if ( v2 >= 0xBB8 )
      *(this + 0xB) = 0xBB8;
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    if ( v3 )
    {
      sub_89C310(v3, *(this + 0xA), *(this + 0xB), 0);
      for ( i = 0; i < *(this + 0xB); ++i )
      {
        v5 = *(this + 0xA);
        v6 = *(_DWORD *)(v5 + 4 * i);
        if ( v6 )
          v7 = *(_DWORD *)(v6 + 0xC);
        else
          v7 = 0;
        if ( v7 )
          *(_DWORD *)(v7 + 0x18) &= ~0x10u;
        else
          sub_8996C0(v3, &v10, *(int (__stdcall ****)(signed int))(v5 + 4 * i));
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0xA) + 4 * i));
      }
      v8 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
      v9 = (_BYTE *)*(this + 4);
      if ( v9 && *(_DWORD *)(v8 + 0xB4) == 9 )
      {
        sub_8BAB10(v9, SLODWORD(flt_A34BA0), SLODWORD(flt_A34BA0));
        sub_8BAB60(*(this + 4));
      }
      else
      {
        sub_898B70((_DWORD **)v8, SLODWORD(flt_A34BA0));
      }
      _memset(*(this + 0xA), 0, 4 * *(this + 0xB));
      *(this + 0xB) = 0;
    }
  }
}
