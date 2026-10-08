// positive sp value has been detected, the output may be wrong!
void __thiscall sub_593B20(Menu *this, _DWORD *a2, signed int a3)
{
  int *v6; // edi
  Tile *vftable; // esi
  Tile *v9; // eax
  BSStringT *v10; // esi
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  const char *v14; // eax
  int v15; // [esp-28h] [ebp-164h] BYREF
  float v16; // [esp-24h] [ebp-160h]
  BSStringT v17; // [esp-20h] [ebp-15Ch]
  int v18; // [esp-18h] [ebp-154h]
  int v19; // [esp-14h] [ebp-150h]
  int v20; // [esp-10h] [ebp-14Ch]
  BSStringT v21; // [esp-Ch] [ebp-148h] BYREF
  char *v22[2]; // [esp-4h] [ebp-140h] BYREF
  BSStringT v23; // [esp+18h] [ebp-124h]
  char v24[20]; // [esp+28h] [ebp-114h] BYREF
  int v25; // [esp+114h] [ebp-28h]
  int *v26; // [esp+11Ch] [ebp-20h]
  int v27; // [esp+120h] [ebp-1Ch]

  v6 = v26; /*0x593b5b*/
  vftable = (Tile *)this[2].__vftable; /*0x593b66*/
  v21.m_data = 0; /*0x593b73*/
  v21.m_dataLen = 0; /*0x593b77*/
  v21.m_bufLen = 0; /*0x593b7c*/
  BSStringT_Set(&v21, "effect_template", 0); /*0x593b81*/
  v25 = 0; /*0x593b8f*/
  v9 = Menu::RenderTemplate(this, vftable, v21.m_data, 0); /*0x593b96*/
  v10 = (BSStringT *)v9; /*0x593b9b*/
  if ( v9 ) /*0x593b9f*/
  {
    v16 = (float)v27; /*0x593baf*/
    Tile_SetFloat(v9, 0xFAEu, v16); /*0x593bb7*/
    v11 = *(_DWORD *)&this[3].members.ownsTemplates; /*0x593bbc*/
    if ( v11 ) /*0x593bc4*/
      v12 = v11 + 0x24; /*0x593bc6*/
    else
      v12 = 0; /*0x593bcb*/
    v16 = *(float *)EffectItem_GetDisplayText((int)v22, v12, 1.0); /*0x593be2*/
    LOBYTE(v25) = 1; /*0x593bea*/
    Tile_SetString(v10, (_DWORD *)0xFB1, (char *)LODWORD(v16)); /*0x593bf2*/
    LOBYTE(v25) = 0; /*0x593bfc*/
    FormHeapFree((unsigned int)v22[0]); /*0x593c03*/
    v22[0] = (char *)&v15; /*0x593c0b*/
    EffectItem_GetName( /*0x593c12*/
      v6,
      (int)&v15,
      v13,
      SLODWORD(v16),
      v17,
      v18,
      v19,
      v20,
      (int)v21.m_data,
      *(BSStringT **)&v21.m_dataLen);
    sub_58A020(v10, v22[0], (int)v22[1]); /*0x593c19*/
    v14 = *(const char **)(v6[7] + 0x48); /*0x593c21*/
    if ( !v14 ) /*0x593c26*/
      v14 = EmptyString; /*0x593c28*/
    _sprintf(v24, "%s\\%s", "Icons", v14); /*0x593c3d*/
    Tile_SetString(v10, (_DWORD *)0xFAF, v24); /*0x593c51*/
  }
  FormHeapFree((unsigned int)v23.m_data); /*0x593c5b*/
}
