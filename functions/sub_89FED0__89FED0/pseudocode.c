void __thiscall sub_89FED0(int **this, int a2)
{
  int *v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax
  int *v5; // ecx
  _WORD *v6; // [esp+4h] [ebp+4h]

  if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
    {
      v6 = *(_WORD **)(a2 + 8);
      v3 = (int)v2;
      v4 = (_DWORD *)v2[6];
      if ( v4 )
      {
        if ( v2[2] )
          sub_89BE60(v2, v4);
        sub_8BC730(*(int (__stdcall ****)(signed int))(v3 + 0x18));
        *(_DWORD *)(v3 + 0x18) = 0;
      }
      *(_DWORD *)(v3 + 0x18) = v6;
      sub_8BC720(v6);
      v5 = *(int **)(v3 + 8);
      if ( v5 )
        sub_899990(v5, v3, *(_DWORD *)(v3 + 0x18));
    }
  }
}
