void __thiscall sub_7C6DE0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int **v7; // eax
  int *v8; // esi
  int v9; // edi
  int *v10; // ecx
  int *v11; // eax
  int **v12; // eax
  bool v13; // bl
  void (__thiscall ***v14)(_DWORD, int); // ebp
  int v15; // [esp+4h] [ebp-10h]
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h] BYREF

  v2 = this;
  v3 = (_DWORD *)*(this + 0x43);
  v15 = 0;
  v4 = this + 0x3D;
  if ( v3 )
  {
    sub_7C58F0(v4, v3, (_DWORD *)v2[0x3E]);
  }
  else
  {
    sub_749800(v4, v2 + 0x45);
    v2[0x43] = v2[0x3E];
  }
  v5 = (_DWORD *)v2[0x42];
  v6 = v2 + 0x3D;
  if ( v5 )
  {
    sub_7C58F0(v6, v5, (_DWORD *)v2[0x3E]);
  }
  else
  {
    sub_749800(v6, v2 + 0x44);
    v2[0x42] = v2[0x3E];
  }
  v7 = (int **)v2[0x43];
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      while ( 1 )
      {
        v9 = v8[2];
        v17 = *v8;
        if ( v9 )
        {
          if ( *(float *)(v9 + 0xDC) > dbl_A2FC80 || flt_B2C680 <= (double)*(float *)(v9 + 0xE0) )
          {
            v15 |= 1u;
            v13 = (*(_BYTE *)(*sub_405AD0((_DWORD *)v9, &v18) + 0x18) & 1) == 0
               && (*(float *)(v9 + 0xDC) < dbl_A6E700 || flt_B2C680 <= (double)*(float *)(v9 + 0xE0));
            if ( (v15 & 1) != 0 )
            {
              v15 &= ~1u;
              if ( v18 )
              {
                v14 = (void (__thiscall ***)(_DWORD, int))v18;
                if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
                  (**v14)(v14, 1);
                v2 = this;
              }
            }
            if ( v13 )
            {
              if ( v9 == a2 )
                sub_7C5950(v2 + 0x3D, v8, (int *)v2[0x42]);
              else
                sub_7C58F0(v2 + 0x3D, v8, (_DWORD *)v2[0x43]);
            }
          }
          else
          {
            v10 = (int *)v2[0x42];
            if ( v8 != v10 )
            {
              if ( (int *)v2[0x3E] == v8 )
                v2[0x3E] = *v8;
              if ( (int *)v2[0x3E] == v10 )
                v2[0x3E] = v8;
              if ( (int *)v2[0x3F] == v8 )
                v2[0x3F] = v8[1];
              if ( *v8 )
                *(_DWORD *)(*v8 + 4) = v8[1];
              v11 = (int *)v8[1];
              if ( v11 )
                *v11 = *v8;
              v12 = (int **)v10[1];
              v8[1] = (int)v12;
              *v8 = (int)v10;
              if ( v12 )
                *v12 = v8;
              v10[1] = (int)v8;
            }
          }
        }
        if ( !v17 )
          break;
        v8 = (int *)v17;
      }
    }
  }
}
