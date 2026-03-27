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

  v3 = *(this + 0xB);
  if ( v3 )
  {
    if ( v3 >= 0xBB8 )
      *(this + 0xB) = 0xBB8;
    v4 = *(this + 0xB);
    if ( v4 >= dword_B2E2FC )
    {
      v14 = dword_B2E2FC;
      v5 = dword_B2E2FC;
    }
    else
    {
      v5 = *(this + 0xB);
      v14 = v5;
    }
    v6 = v4 - v5;
    v7 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    v15 = v7;
    if ( v7 )
    {
      v8 = 4 * v6;
      if ( a2 )
      {
        sub_89C310(v7, v8 + *(this + 0xA), v5, 0);
        sub_8A6410(*(_DWORD *)(*(this + 0xA) + 4 * v6));
        v9 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
        v10 = (_BYTE *)*(this + 4);
        if ( v10 && *(_DWORD *)(v9 + 0xB4) == 9 )
        {
          sub_8BAB10(v10, SLODWORD(flt_A34BA0), SLODWORD(flt_A34BA0));
          sub_8BAB60(*(this + 4));
          sub_8A6440(*(int **)(*(this + 0xA) + 4 * v6));
        }
        else
        {
          sub_898B70((_DWORD **)v9, SLODWORD(flt_A34BA0));
          sub_8A6440(*(int **)(*(this + 0xA) + 4 * v6));
        }
      }
      else
      {
        sub_89C310(v7, v8 + *(this + 0xA), v5, 1);
      }
      for ( i = v6; i < *(this + 0xB); ++i )
      {
        v12 = (int (__stdcall ****)(signed int))(*(this + 0xA) + 4 * i);
        if ( *v12 )
          v13 = (*v12)[3];
        else
          v13 = 0;
        if ( v13 )
          v13[6] = (int (__stdcall *)(signed int))((unsigned int)v13[6] & 0xFFFFFFEF);
        else
          sub_8996C0(v15, &a2, *v12);
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0xA) + 4 * i));
      }
      _memset(v8 + *(this + 0xA), 0, 4 * v14);
      *(this + 0xB) = v6;
    }
  }
}
