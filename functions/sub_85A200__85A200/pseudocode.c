int __thiscall sub_85A200(_DWORD *this, int a2, _WORD *a3, char a4, char *a5, char a6, int a7)
{
  int result; // eax
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // ecx

  for ( result = a7; result > 0; a7 = result )
  {
    if ( a6 )
    {
      if ( a4 != 1 )
      {
LABEL_16:
        ++*a3;
        goto LABEL_17;
      }
      v14 = FormHeapAlloc(0x10u);
      if ( v14 )
        v15 = sub_7E2370(v14, a2, 0x18B, *a5, 0, 0);
      else
        v15 = 0;
      v11 = this + 0xA;
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0xA) + 4))(this + 0xA);
      v12[2] = v15;
      *v12 = 0;
      v12[1] = *(this + 0xC);
      v16 = (_DWORD *)*(this + 0xC);
      if ( !v16 )
      {
LABEL_15:
        v11[1] = v12;
        v11[2] = v12;
        ++v11[3];
        result = a7;
        goto LABEL_17;
      }
      *v16 = v12;
      *(this + 0xC) = v12;
      ++*(this + 0xD);
      result = a7;
    }
    else
    {
      if ( a4 != 1 )
        goto LABEL_16;
      v9 = FormHeapAlloc(0x10u);
      if ( v9 )
        v10 = sub_7E2370(v9, a2, 0x18A, *a5, 0, 0);
      else
        v10 = 0;
      v11 = this + 0xA;
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0xA) + 4))(this + 0xA);
      v12[2] = v10;
      *v12 = 0;
      v12[1] = *(this + 0xC);
      v13 = (_DWORD *)*(this + 0xC);
      if ( !v13 )
        goto LABEL_15;
      *v13 = v12;
      *(this + 0xC) = v12;
      ++*(this + 0xD);
      result = a7;
    }
LABEL_17:
    result -= Value;
  }
  return result;
}
