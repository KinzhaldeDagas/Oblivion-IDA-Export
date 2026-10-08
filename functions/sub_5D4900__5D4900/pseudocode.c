void __thiscall sub_5D4900(Menu *this)
{
  Menu *v4; // esi
  Tile *v5; // eax
  MenuVtbl *vftable; // eax
  int *v7; // edi
  Tile *v8; // eax
  BSStringT *v9; // esi
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  const char *v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  char *v16; // [esp+4h] [ebp-180h]
  int v17; // [esp+8h] [ebp-17Ch]
  int v18; // [esp+Ch] [ebp-178h]
  BSStringT v19; // [esp+10h] [ebp-174h]
  int v20; // [esp+18h] [ebp-16Ch]
  float v21; // [esp+1Ch] [ebp-168h]
  _DWORD *v22; // [esp+1Ch] [ebp-168h]
  _DWORD *v23; // [esp+20h] [ebp-164h]
  _DWORD *v24; // [esp+20h] [ebp-164h]
  _DWORD *v25; // [esp+24h] [ebp-160h]
  _DWORD *v26; // [esp+24h] [ebp-160h]
  int value; // [esp+28h] [ebp-15Ch]
  BSStringT *valuea; // [esp+28h] [ebp-15Ch]
  float valueb; // [esp+28h] [ebp-15Ch]
  float valuec; // [esp+28h] [ebp-15Ch]
  float valued; // [esp+28h] [ebp-15Ch]
  int v32; // [esp+2Ch] [ebp-158h]
  int v33; // [esp+30h] [ebp-154h]
  _DWORD *v34; // [esp+34h] [ebp-150h] BYREF
  _DWORD *p_Destructor; // [esp+38h] [ebp-14Ch]
  int a3; // [esp+3Ch] [ebp-148h]
  _DWORD *p_vftable; // [esp+40h] [ebp-144h]
  BSStringT v38; // [esp+44h] [ebp-140h] BYREF
  char *a2; // [esp+4Ch] [ebp-138h]
  unsigned int v40; // [esp+50h] [ebp-134h]
  int v41; // [esp+54h] [ebp-130h]
  char *v42; // [esp+58h] [ebp-12Ch] BYREF
  int v43; // [esp+5Ch] [ebp-128h]
  Tile *parent; // [esp+60h] [ebp-124h]
  char *v45; // [esp+64h] [ebp-120h]
  int v46; // [esp+68h] [ebp-11Ch]
  int v47; // [esp+6Ch] [ebp-118h]
  int v48[62]; // [esp+70h] [ebp-114h] BYREF
  char v49; // [esp+168h] [ebp-1Ch]
  int v50; // [esp+180h] [ebp-4h]

  v4 = this; /*0x5d4942*/
  v5 = *((Tile **)this + 0xE); /*0x5d4944*/
  p_vftable = &this->__vftable; /*0x5d4951*/
  parent = v5; /*0x5d4955*/
  v38.m_data = 0; /*0x5d4959*/
  v38.m_dataLen = 0; /*0x5d495d*/
  v38.m_bufLen = 0; /*0x5d4962*/
  BSStringT_Set(&v38, "known_effect_template", 0); /*0x5d4967*/
  vftable = v4[1].__vftable; /*0x5d496c*/
  v50 = 0; /*0x5d4971*/
  if ( vftable ) /*0x5d4978*/
    p_Destructor = &vftable[2].Destructor; /*0x5d497d*/
  else
    p_Destructor = 0; /*0x5d4983*/
  a3 = 0; /*0x5d498b*/
  if ( p_Destructor ) /*0x5d498f*/
  {
    while ( 1 ) /*0x5d49b0*/
    {
      v7 = (int *)p_Destructor[1]; /*0x5d49b0*/
      v8 = Menu::RenderTemplate(v4, parent, v38.m_data, 0); /*0x5d49b8*/
      v9 = (BSStringT *)v8; /*0x5d49bd*/
      if ( v8 ) /*0x5d49c1*/
      {
        if ( v7 ) /*0x5d49c9*/
        {
          *(float *)&v34 = (float)a3; /*0x5d49d6*/
          Tile_SetFloat(v8, 0xFAAu, *(float *)&v34); /*0x5d49e6*/
          Tile_SetFloat((Tile *)v9, 0xFAEu, *(float *)&v34); /*0x5d49fa*/
          v34 = (_DWORD *)(a3 + 0x3E8); /*0x5d4a09*/
          v21 = (float)(a3 + 0x3E8); /*0x5d4a14*/
          Tile_SetFloat((Tile *)v9, 0xFA8u, v21); /*0x5d4a1c*/
          v10 = v7[4]; /*0x5d4a23*/
          LOBYTE(v11) = v10 == 1; /*0x5d4a29*/
          LOBYTE(v10) = v10 == 0; /*0x5d4a2e*/
          v16 = *(char **)EffectItem_BuildDisplayString( /*0x5d4a48*/
                            (int)&v42,
                            6,
                            COERCE_INT(1.0),
                            v10,
                            0,
                            v11,
                            (int)v23,
                            (int)v25,
                            value,
                            v32,
                            v33,
                            (int)v34,
                            (int)p_Destructor,
                            a3,
                            (int)p_vftable,
                            (int)v38.m_data,
                            *(int *)&v38.m_dataLen,
                            (int)a2,
                            v40,
                            v41,
                            (int)v42,
                            v43,
                            (int)parent,
                            (int)v45,
                            v46,
                            v47,
                            v48[0],
                            v48[1],
                            v48[2],
                            v48[3],
                            v48[4],
                            v48[5],
                            v48[6],
                            v48[7],
                            v48[8],
                            v48[9],
                            v48[0xA],
                            v48[0xB],
                            v48[0xC]);
          v49 = 1; /*0x5d4a50*/
          Tile_SetString(v9, (_DWORD *)0xFB0, v16); /*0x5d4a58*/
          v49 = 0; /*0x5d4a62*/
          FormHeapFree((unsigned int)p_vftable); /*0x5d4a69*/
          p_vftable = 0; /*0x5d4a78*/
          v38.m_data = 0; /*0x5d4a81*/
          EffectItem_GetName(v7, (int)&v34, v17, v18, v19, v20, (int)v22, (int)v24, (int)v26, valuea); /*0x5d4a86*/
          BSStringT_Set(v9 + 1, v42, 0); /*0x5d4a9c*/
          FormHeapFree((unsigned int)v42); /*0x5d4aad*/
          v12 = *((_DWORD **)a2 + 0x11); /*0x5d4ab6*/
          v42 = 0; /*0x5d4ac1*/
          v43 = 0; /*0x5d4aca*/
          valueb = Tile_GetFloat(v12, 0xFB5); /*0x5d4ad5*/
          Tile_SetFloat((Tile *)v9, 0xFB1u, valueb); /*0x5d4adf*/
          v13 = *(const char **)(v7[7] + 0x48); /*0x5d4ae7*/
          if ( !v13 ) /*0x5d4aec*/
            v13 = EmptyString; /*0x5d4aee*/
          _sprintf((char *)v48, "%s\\%s", "Icons", v13); /*0x5d4b03*/
          Tile_SetString(v9, (_DWORD *)0xFAF, (char *)v48); /*0x5d4b17*/
          p_vftable = (_DWORD *)*v7; /*0x5d4b1e*/
          valuec = (float)(int)p_vftable; /*0x5d4b29*/
          Tile_SetFloat((Tile *)v9, 0xFB2u, valuec); /*0x5d4b31*/
          Tile_SetFloat((Tile *)v9, 0xFB4u, flt_A31C80); /*0x5d4b47*/
          Tile_SetFloat((Tile *)v9, 0xFC9u, fConstant_2); /*0x5d4b5d*/
          v14 = *((_DWORD **)a2 + 0x11); /*0x5d4b66*/
          ++*(_DWORD *)&v38.m_dataLen; /*0x5d4b69*/
          valued = Tile_GetFloat(v14, 0xFB5); /*0x5d4b79*/
          Tile_SetFloat((Tile *)v9, 0xFB6u, valued); /*0x5d4b83*/
        }
      }
      v15 = *((_DWORD *)v38.m_data + 2); /*0x5d4b8c*/
      if ( !v15 ) /*0x5d4b91*/
        break; /*0x5d4b91*/
      v38.m_data = (char *)(v15 - 4); /*0x5d4b98*/
      if ( v15 == 4 ) /*0x5d4b9c*/
        break; /*0x5d4b9c*/
      v4 = (Menu *)a2; /*0x5d49a0*/
    }
  }
  FormHeapFree(v40); /*0x5d4ba7*/
}
