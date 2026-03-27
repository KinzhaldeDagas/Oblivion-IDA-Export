int *__thiscall sub_8A4BA0(int *this)
{
  int *result; // eax
  int *v3; // edi
  bool v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // esi
  int v7; // edi
  int v8; // eax
  char v9; // al
  void (__thiscall ***v10)(_DWORD, int); // esi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  bhkRefObject *v14; // eax
  bhkRefObject *v15; // esi
  int v16; // [esp+20h] [ebp-28h]
  int *i; // [esp+24h] [ebp-24h]
  int v18; // [esp+28h] [ebp-20h]
  float v20; // [esp+30h] [ebp-18h]
  int v21; // [esp+34h] [ebp-14h] BYREF
  int v22; // [esp+38h] [ebp-10h] BYREF
  unsigned int v23; // [esp+44h] [ebp-4h]

  result = (int *)((unsigned int)*(this + 6) >> 2);
  v16 = 0;
  if ( (*(this + 6) & 4) == 0 )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    v18 = result ? result[0xAC] : 0;
    if ( v18 )
    {
      v3 = this + 4;
      for ( i = v3; ; v3 = i )
      {
        v4 = 0;
        if ( v3 )
        {
          v16 |= 1u;
          if ( *sub_677C70(v3, &v21) )
            v4 = 1;
        }
        if ( (v16 & 1) != 0 )
        {
          v5 = (void (__thiscall ***)(_DWORD, int))v21;
          v16 &= ~1u;
          if ( v21 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
            {
              if ( v5 )
                (**v5)(v5, 1);
            }
          }
        }
        if ( !v4 )
          break;
        v6 = *sub_677C70(v3, &v22);
        v23 = 0;
        if ( v6 )
        {
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
          if ( v8 )
          {
            while ( (BSStringT *)v8 != &stru_BA7D50 )
            {
              v8 = *(_DWORD *)(v8 + 4);
              if ( !v8 )
                goto LABEL_23;
            }
            v9 = 1;
          }
          else
          {
LABEL_23:
            v9 = 0;
          }
          v7 = v9 != 0 ? v6 : 0;
        }
        else
        {
          v7 = 0;
        }
        v10 = (void (__thiscall ***)(_DWORD, int))v22;
        v23 = 0xFFFFFFFF;
        if ( v22 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
          {
            if ( v10 )
              (**v10)(v10, 1);
          }
        }
        i = (int *)i[1];
        if ( v7 )
        {
          v11 = *(this + 2);
          v20 = 1.0;
          if ( v11 && (v12 = v11 + 0x14) != 0 )
            v13 = *(_DWORD *)(v12 + 0x1C);
          else
            v13 = 0;
          if ( (v13 & 0x3F) == 8 )
          {
            switch ( (v13 >> 8) & 0x1F )
            {
              case 0x11u:
              case 0x12u:
              case 0x17u:
              case 0x18u:
                v20 = flt_A3744C;
                break;
              default:
                break;
            }
          }
          v14 = sub_8C22F0(v7, v20);
          v15 = v14;
          if ( v14 )
          {
            sub_8A46C0(this, (volatile LONG *)v14);
            (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x60))(v7);
            ((void (__thiscall *)(bhkRefObject *, int))v15->__vftable[1].Unk_04)(v15, v18);
          }
        }
      }
      *(this + 6) |= 4u;
      return this;
    }
  }
  return result;
}
