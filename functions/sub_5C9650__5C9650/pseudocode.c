void __thiscall sub_5C9650(Tile **this, unsigned int arg0, int a3, char *a2, int a5, char a6)
{
  _DWORD *v7; // edi
  Tile *v8; // ebp
  Tile *v9; // ebp
  BSStringT v10; // [esp+0h] [ebp-2Ch] BYREF
  BSStringT *v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+28h] [ebp-4h]

  v11 = &v10;
  v12 = 1;
  v10.m_data = 0;
  *(_DWORD *)&v10.m_dataLen = 0;
  BSStringT_Set(&v10, a2, 0);
  v7 = (_DWORD *)sub_5C3110(this, (unsigned __int8 *)v10.m_data, *(int *)&v10.m_dataLen);
  Tile_SetFloat(*(this + 0xF), (_DWORD *)0xFB3, fConstant_2);
  v8 = *(this + 1);
  *(float *)&v10.m_dataLen = Tile_GetFloat(v7, 0xFA8);
  Tile_SetFloat(v8, (_DWORD *)0xFAE, *(float *)&v10.m_dataLen);
  v9 = *(this + 1);
  *(float *)&v10.m_dataLen = Tile_GetFloat(v7, 0xFD0);
  Tile_SetFloat(v9, (_DWORD *)0xFAF, *(float *)&v10.m_dataLen);
  if ( a6 )
    sub_5C6AF0(this, (int)v7, 0);
  Tile_SetFloat(*(this + 0xD), (_DWORD *)0xFB7, flt_A6906C);
  Tile_SetFloat(*(this + 0xD), (_DWORD *)0xFB7, 0.0);
  FormHeapFree(arg0);
  FormHeapFree((unsigned int)a2);
}
