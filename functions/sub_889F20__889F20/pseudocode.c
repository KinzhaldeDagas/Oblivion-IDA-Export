void __thiscall sub_889F20(int *this, char a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // ecx
  int v8; // edi
  int v9; // eax
  _BYTE *v10; // ecx
  unsigned int i; // ebx
  int (__stdcall ****v12)(signed int); // ecx
  int (__stdcall **v13)(signed int); // eax
  int v14; // [esp+18h] [ebp-8h]
  _DWORD *v15; // [esp+1Ch] [ebp-4h]

  v3 = *(this + 0xB); /*0x889f26*/
  if ( v3 ) /*0x889f2b*/
  {
    if ( v3 >= 0xBB8 ) /*0x889f36*/
      *(this + 0xB) = 0xBB8; /*0x889f38*/
    v4 = *(this + 0xB); /*0x889f3f*/
    if ( v4 >= dword_B2E2FC ) /*0x889f4b*/
    {
      v14 = dword_B2E2FC; /*0x889f55*/
      v5 = dword_B2E2FC; /*0x889f59*/
    }
    else
    {
      v5 = *(this + 0xB); /*0x889f4d*/
      v14 = v5; /*0x889f4f*/
    }
    v6 = v4 - v5; /*0x889f5e*/
    v7 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x889f69*/
    v15 = v7; /*0x889f6d*/
    if ( v7 ) /*0x889f71*/
    {
      v8 = 4 * v6; /*0x889f7d*/
      if ( a2 ) /*0x889f84*/
      {
        sub_89C310(v7, v8 + *(this + 0xA), v5, 0); /*0x889f8f*/
        sub_8A6410(*(_DWORD *)(*(this + 0xA) + 4 * v6)); /*0x889f9a*/
        v9 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x889fa6*/
        v10 = (_BYTE *)*(this + 4); /*0x889fa8*/
        if ( v10 && *(_DWORD *)(v9 + 0xB4) == 9 ) /*0x889fb6*/
        {
          sub_8BAB10(v10, SLODWORD(flt_A34BA0), SLODWORD(flt_A34BA0)); /*0x889fc8*/
          sub_8BAB60(*(this + 4)); /*0x889fd0*/
          sub_8A6440(*(int **)(*(this + 0xA) + 4 * v6)); /*0x889fdb*/
        }
        else
        {
          sub_898B70((_DWORD **)v9, SLODWORD(flt_A34BA0)); /*0x889fee*/
          sub_8A6440(*(int **)(*(this + 0xA) + 4 * v6)); /*0x889ff9*/
        }
      }
      else
      {
        sub_89C310(v7, v8 + *(this + 0xA), v5, 1); /*0x88a009*/
      }
      for ( i = v6; i < *(this + 0xB); ++i ) /*0x88a013*/
      {
        v12 = (int (__stdcall ****)(signed int))(*(this + 0xA) + 4 * i); /*0x88a018*/
        if ( *v12 ) /*0x88a01b*/
          v13 = (*v12)[3]; /*0x88a021*/
        else
          v13 = 0; /*0x88a026*/
        if ( v13 ) /*0x88a02a*/
          v13[6] = (int (__stdcall *)(signed int))((unsigned int)v13[6] & 0xFFFFFFEF); /*0x88a02c*/
        else
          sub_8996C0(v15, &a2, *v12); /*0x88a03e*/
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0xA) + 4 * i)); /*0x88a049*/
      }
      _memset(v8 + *(this + 0xA), 0, 4 * v14); /*0x88a06a*/
      *(this + 0xB) = v6; /*0x88a072*/
    }
  }
}
