void __stdcall sub_664D70(int a1)
{
  Ni2DBuffer *v1; // esi
  Ni2DBuffer *height; // ebx
  int v3; // eax
  int v4; // esi
  Atmosphere *v5; // ecx
  unsigned int i; // esi
  _WORD *v7; // ecx
  int (*v8)(void); // eax
  int v9; // eax

  if ( a1 )
  {
    v1 = *(Ni2DBuffer **)(a1 + 0xC);
    if ( v1 )
    {
      do
      {
        height = (Ni2DBuffer *)v1[2].members.height;
        v3 = (*((int (__thiscall **)(Ni2DBuffer *))v1->__vftable + 1))(v1);
        if ( v3 )
        {
          while ( (char *)v3 != dword_B3CA58 )
          {
            v3 = *(_DWORD *)(v3 + 4);
            if ( !v3 )
              goto LABEL_6;
          }
        }
        else
        {
LABEL_6:
          sub_6FFE90((Ni2DBuffer **)a1, v1);
        }
        v1 = height;
      }
      while ( height );
    }
    v4 = *(_DWORD *)(a1 + 0xA8);
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *(_DWORD *)(a1 + 0xA8) = 0;
    }
    v5 = *(Atmosphere **)(a1 + 0xA8);
    if ( v5 )
    {
      if ( sub_452A60(v5) != (NiAVObject *)a1 )
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0xA8) + 0x4C))(*(_DWORD *)(a1 + 0xA8), a1);
    }
    for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i )
    {
      v7 = *(_WORD **)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
      if ( v7 )
      {
        v8 = *(int (**)(void))(*(_DWORD *)v7 + 8);
        v7[0xC] &= ~1u;
        v9 = v8();
        if ( v9 )
          sub_664D70(v9);
      }
    }
  }
}
