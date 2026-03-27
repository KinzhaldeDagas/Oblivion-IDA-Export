int *__thiscall sub_8A53E0(int *this)
{
  int *result; // eax
  int *v3; // ebp
  bool v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // esi
  int v7; // eax
  char v8; // al
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v10; // eax
  int v11; // edx
  int v12; // [esp+14h] [ebp-20h]
  int v13; // [esp+18h] [ebp-1Ch]
  int v15; // [esp+20h] [ebp-14h] BYREF
  int v16; // [esp+24h] [ebp-10h] BYREF
  unsigned int v17; // [esp+30h] [ebp-4h]

  result = (int *)((unsigned int)*(this + 6) >> 2);
  v12 = 0;
  if ( (*(this + 6) & 4) != 0 )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    v13 = result ? result[0xAC] : 0;
    if ( v13 )
    {
      v3 = this + 4;
      while ( 1 )
      {
        v4 = 0;
        if ( v3 )
        {
          v12 |= 1u;
          if ( *sub_677C70(v3, &v15) )
            v4 = 1;
        }
        if ( (v12 & 1) != 0 )
        {
          v5 = (void (__thiscall ***)(_DWORD, int))v15;
          v12 &= ~1u;
          if ( v15 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
            {
              if ( v5 )
                (**v5)(v5, 1);
            }
          }
        }
        if ( !v4 )
          break;
        v6 = *sub_677C70(v3, &v16);
        v17 = 0;
        if ( v6 )
        {
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
          if ( v7 )
          {
            while ( (BSStringT *)v7 != &stru_BA7D50 )
            {
              v7 = *(_DWORD *)(v7 + 4);
              if ( !v7 )
                goto LABEL_21;
            }
            v8 = 1;
          }
          else
          {
LABEL_21:
            v8 = 0;
          }
          v6 &= -(v8 != 0);
        }
        v9 = (void (__thiscall ***)(_DWORD, int))v16;
        v17 = 0xFFFFFFFF;
        if ( v16 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
          {
            if ( v9 )
              (**v9)(v9, 1);
          }
        }
        if ( v6 )
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6);
          v11 = *(_DWORD *)v6;
          if ( v10 )
          {
            (*(void (__thiscall **)(int))(v11 + 0x60))(v6);
            sub_67A850(this + 4);
          }
          else
          {
            v3 = (int *)v3[1];
            (*(void (__thiscall **)(int, int))(v11 + 0x5C))(v6, v13);
          }
        }
      }
      *(this + 6) &= ~4u;
      return this;
    }
  }
  return result;
}
