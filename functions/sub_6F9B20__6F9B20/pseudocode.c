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
  NiRTTI *v10; // eax
  char v11; // al
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // edi
  NiRTTI *v16; // eax
  char v17; // al
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  unsigned int v21; // [esp+8h] [ebp-8h]
  int v22; // [esp+Ch] [ebp-4h] BYREF

  if ( !*((_DWORD *)this + 0x122) ) /*0x6f9b29*/
    return sub_714390(this); /*0x6f9d81*/
  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x34))(this); /*0x6f9b3a*/
  if ( !result ) /*0x6f9b3e*/
    return result; /*0x6f9b3e*/
  *((_DWORD *)this + 0x9C) = 0; /*0x6f9b4a*/
  *((_DWORD *)this + 0x9B) = 0; /*0x6f9b50*/
  *((_DWORD *)this + 0x9A) = 0; /*0x6f9b56*/
  sub_712930(this); /*0x6f9b5c*/
  v3 = *((_DWORD *)this + 0x36); /*0x6f9b61*/
  v4 = sub_712290("5.0.0.1"); /*0x6f9b6c*/
  v5 = v3 >= v4; /*0x6f9b76*/
  if ( v3 < v4 || sub_713FF0(this) )
  {
    v6 = *((_DWORD *)this + 0x36); /*0x6f9b8c*/
    if ( v6 >= sub_712290("5.0.0.6") ) /*0x6f9ba1*/
      sub_713030(this); /*0x6f9ba5*/
    v7 = *((_DWORD *)this + 0x7D); /*0x6f9baa*/
    v21 = v7; /*0x6f9bb6*/
    if ( *((_DWORD *)this + 0x9A) >= v7 )
    {
LABEL_13:
      (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x48))(this); /*0x6f9c0a*/
      if ( *((_DWORD *)this + 0x9B) >= v7 )
      {
LABEL_27:
        if ( *((_DWORD *)this + 0x9C) >= v7 ) /*0x6f9cbb*/
        {
LABEL_40:
          sub_7126A0(this); /*0x6f9d4f*/
          sub_7135C0(this); /*0x6f9d58*/
          return 1; /*0x6f9d66*/
        }
        while ( *((_DWORD *)this + 0x98) != 2 )
        {
          v15 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9C)); /*0x6f9cda*/
          if ( !v15 ) /*0x6f9cdf*/
            goto LABEL_38; /*0x6f9cdf*/
          v16 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15); /*0x6f9ce8*/
          if ( v16 ) /*0x6f9cec*/
          {
            while ( v16 != &stru_B3F584 ) /*0x6f9cf5*/
            {
              v16 = v16->parent; /*0x6f9cf7*/
              if ( !v16 ) /*0x6f9cfc*/
                goto LABEL_33; /*0x6f9cfc*/
            }
            v17 = 1; /*0x6f9d6e*/
          }
          else
          {
LABEL_33:
            v17 = 0; /*0x6f9cfe*/
          }
          v18 = v17 != 0 ? v15 : 0;
          if ( !v18 /*0x6f9d2c*/
            || (v19 = *((_DWORD **)this + 0x122), v20 = *(_DWORD *)(v18 + 8), v22 = 0, !v19)
            || !v20
            || (NiTMap_GetAt(v19, v20, &v22), !v22) )
          {
LABEL_38:
            (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v15 + 0x3C))(v15, this); /*0x6f9d36*/
          }
          if ( ++*((_DWORD *)this + 0x9C) >= v21 ) /*0x6f9d49*/
            goto LABEL_40; /*0x6f9d49*/
        }
      }
      else
      {
        while ( *((_DWORD *)this + 0x98) != 2 )
        {
          v9 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9B)); /*0x6f9c39*/
          if ( !v9 ) /*0x6f9c3e*/
            goto LABEL_24; /*0x6f9c3e*/
          v10 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x6f9c47*/
          if ( v10 ) /*0x6f9c4b*/
          {
            while ( v10 != &stru_B3F584 ) /*0x6f9c55*/
            {
              v10 = v10->parent; /*0x6f9c5b*/
              if ( !v10 ) /*0x6f9c60*/
                goto LABEL_19; /*0x6f9c60*/
            }
            v11 = 1; /*0x6f9d67*/
          }
          else
          {
LABEL_19:
            v11 = 0; /*0x6f9c62*/
          }
          v12 = v11 != 0 ? v9 : 0;
          if ( !v12 /*0x6f9c90*/
            || (v13 = *((_DWORD **)this + 0x122), v14 = *(_DWORD *)(v12 + 8), v22 = 0, !v13)
            || !v14
            || (NiTMap_GetAt(v13, v14, &v22), !v22) )
          {
LABEL_24:
            (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v9 + 0x20))(v9, this); /*0x6f9c9a*/
          }
          if ( ++*((_DWORD *)this + 0x9B) >= v21 ) /*0x6f9cad*/
          {
            v7 = v21; /*0x6f9cb3*/
            goto LABEL_27; /*0x6f9cb3*/
          }
        }
      }
    }
    else
    {
      while ( *((_DWORD *)this + 0x98) != 2 ) /*0x6f9bc7*/
      {
        if ( v5 ) /*0x6f9bcf*/
        {
          v8 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9A)); /*0x6f9bdd*/
          (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v8 + 0x1C))(v8, this); /*0x6f9be6*/
        }
        else if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x50))(this) ) /*0x6f9bf5*/
        {
          return 0; /*0x6f9bf5*/
        }
        if ( ++*((_DWORD *)this + 0x9A) >= v7 ) /*0x6f9c08*/
          goto LABEL_13; /*0x6f9c08*/
      }
    }
  }
  return 0; /*0x6f9b40*/
}
