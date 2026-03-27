void __thiscall sub_530590(_WORD *this, int *a2)
{
  int v3; // eax
  _WORD **v4; // ebx
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  _WORD **v8; // edx
  _WORD *v9; // ecx
  int v10; // ecx

  if ( a2 && *(this + 0x10) != 0xFFFF )
  {
    v3 = sub_52F520(a2, (int)this);
    v4 = *(_WORD ***)(v3 + 8);
    v5 = (_DWORD *)(v3 + 4);
    if ( v4[(unsigned __int16)*(this + 0x10)] == this )
    {
      sub_5304C0(v5, (unsigned __int16)*(this + 0x10));
    }
    else
    {
      v6 = *(_DWORD *)(v3 + 0x10);
      v7 = 0;
      if ( v6 > 0 )
      {
        v8 = v4;
        while ( *v8 != this )
        {
          ++v7;
          ++v8;
          if ( v7 >= v6 )
            goto LABEL_15;
        }
        if ( v7 < (unsigned int)v6 )
        {
          v9 = v4[v7];
          v4[v7] = 0;
          if ( v9 )
            --v5[4];
          v10 = v5[3] - 1;
          if ( v7 == v10 )
            v5[3] = v10;
        }
      }
    }
LABEL_15:
    sub_5A56F0(v5);
    sub_52EFE0((int)v5);
  }
}
