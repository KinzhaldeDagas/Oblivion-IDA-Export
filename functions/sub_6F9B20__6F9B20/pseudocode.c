char __thiscall sub_6F9B20(unsigned __int16 *this)
{
  char result; // al
  unsigned int v3; // edi
  unsigned int v4; // eax
  bool v5; // bl
  unsigned int v6; // edi
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  char v11; // al
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  char v17; // al
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  unsigned int v21; // [esp+8h] [ebp-8h]
  int v22; // [esp+Ch] [ebp-4h] BYREF

  if ( !*((_DWORD *)this + 0x122) )
    return sub_714390(this);
  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x34))(this);
  if ( !result )
    return result;
  *((_DWORD *)this + 0x9C) = 0;
  *((_DWORD *)this + 0x9B) = 0;
  *((_DWORD *)this + 0x9A) = 0;
  sub_712930(this);
  v3 = *((_DWORD *)this + 0x36);
  v4 = sub_712290("5.0.0.1");
  v5 = v3 >= v4;
  if ( v3 < v4 || sub_713FF0(this) )
  {
    v6 = *((_DWORD *)this + 0x36);
    if ( v6 >= sub_712290("5.0.0.6") )
      sub_713030(this);
    v7 = *((_DWORD *)this + 0x7D);
    v21 = v7;
    if ( *((_DWORD *)this + 0x9A) >= v7 )
    {
LABEL_13:
      (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x48))(this);
      if ( *((_DWORD *)this + 0x9B) >= v7 )
      {
LABEL_27:
        if ( *((_DWORD *)this + 0x9C) >= v7 )
        {
LABEL_40:
          sub_7126A0(this);
          sub_7135C0(this);
          return 1;
        }
        while ( *((_DWORD *)this + 0x98) != 2 )
        {
          v15 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9C));
          if ( !v15 )
            goto LABEL_38;
          v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15);
          if ( v16 )
          {
            while ( (char *)v16 != dword_B3F584 )
            {
              v16 = *(_DWORD *)(v16 + 4);
              if ( !v16 )
                goto LABEL_33;
            }
            v17 = 1;
          }
          else
          {
LABEL_33:
            v17 = 0;
          }
          v18 = v17 != 0 ? v15 : 0;
          if ( !v18
            || (v19 = *((_DWORD **)this + 0x122), v20 = *(_DWORD *)(v18 + 8), v22 = 0, !v19)
            || !v20
            || (NiTMap_GetAt(v19, v20, &v22), !v22) )
          {
LABEL_38:
            (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v15 + 0x3C))(v15, this);
          }
          if ( ++*((_DWORD *)this + 0x9C) >= v21 )
            goto LABEL_40;
        }
      }
      else
      {
        while ( *((_DWORD *)this + 0x98) != 2 )
        {
          v9 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9B));
          if ( !v9 )
            goto LABEL_24;
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
          if ( v10 )
          {
            while ( (char *)v10 != dword_B3F584 )
            {
              v10 = *(_DWORD *)(v10 + 4);
              if ( !v10 )
                goto LABEL_19;
            }
            v11 = 1;
          }
          else
          {
LABEL_19:
            v11 = 0;
          }
          v12 = v11 != 0 ? v9 : 0;
          if ( !v12
            || (v13 = *((_DWORD **)this + 0x122), v14 = *(_DWORD *)(v12 + 8), v22 = 0, !v13)
            || !v14
            || (NiTMap_GetAt(v13, v14, &v22), !v22) )
          {
LABEL_24:
            (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v9 + 0x20))(v9, this);
          }
          if ( ++*((_DWORD *)this + 0x9B) >= v21 )
          {
            v7 = v21;
            goto LABEL_27;
          }
        }
      }
    }
    else
    {
      while ( *((_DWORD *)this + 0x98) != 2 )
      {
        if ( v5 )
        {
          v8 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9A));
          (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v8 + 0x1C))(v8, this);
        }
        else if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x50))(this) )
        {
          return 0;
        }
        if ( ++*((_DWORD *)this + 0x9A) >= v7 )
          goto LABEL_13;
      }
    }
  }
  return 0;
}
