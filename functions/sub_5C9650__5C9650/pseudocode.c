void __thiscall sub_5C9650(Tile **this, unsigned int arg0, int a3, char *a2, int a5, char a6)
{
  _DWORD *v7; // edi
  Tile *v8; // ebp
  Tile *v9; // ebp
  BSStringT v10; // [esp+0h] [ebp-2Ch] BYREF
  BSStringT *v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+28h] [ebp-4h]

  v11 = &v10; /*0x5c9682*/
  v12 = 1; /*0x5c9688*/
  v10.m_data = 0; /*0x5c9690*/
  *(_DWORD *)&v10.m_dataLen = 0; /*0x5c9692*/
  BSStringT_Set(&v10, a2, 0); /*0x5c969a*/
  v7 = (_DWORD *)RaceSexMenu_GetCategoryTileByName(this, (unsigned __int8 *)v10.m_data, *(int *)&v10.m_dataLen); /*0x5c96b8*/
  Tile_SetFloat(*(this + 0xF), (_DWORD *)0xFB3, fConstant_2); /*0x5c96ba*/
  v8 = *(this + 1); /*0x5c96bf*/
  *(float *)&v10.m_dataLen = Tile_GetFloat(v7, 0xFA8); /*0x5c96cf*/
  Tile_SetFloat(v8, (_DWORD *)0xFAE, *(float *)&v10.m_dataLen); /*0x5c96d9*/
  v9 = *(this + 1); /*0x5c96de*/
  *(float *)&v10.m_dataLen = Tile_GetFloat(v7, 0xFD0); /*0x5c96ee*/
  Tile_SetFloat(v9, (_DWORD *)0xFAF, *(float *)&v10.m_dataLen); /*0x5c96f8*/
  if ( a6 ) /*0x5c9702*/
    sub_5C6AF0(this, (int)v7, 0); /*0x5c9709*/
  Tile_SetFloat(*(this + 0xD), (_DWORD *)0xFB7, flt_A6906C); /*0x5c9720*/
  Tile_SetFloat(*(this + 0xD), (_DWORD *)0xFB7, 0.0); /*0x5c9733*/
  FormHeapFree(arg0); /*0x5c973d*/
  FormHeapFree((unsigned int)a2); /*0x5c9743*/
}
