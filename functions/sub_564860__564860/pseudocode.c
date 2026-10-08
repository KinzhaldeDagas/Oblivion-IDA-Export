// BSTreeNode leaf LOD child setter: replaces child under Leaves and updates leaf array. No frond-equivalent setter was found in this node surface.
char __thiscall sub_564860(int *this, int a2, int a3)
{
  const void *v4; // ecx
  int v5; // ebp
  unsigned __int16 NumLeafLODLevels; // ax
  unsigned __int16 v7; // si
  int v8; // ebx
  int v9; // esi
  _DWORD *v10; // eax
  unsigned int v12; // [esp+14h] [ebp-14h] BYREF
  __int16 v13; // [esp+18h] [ebp-10h]
  __int16 v14; // [esp+1Ah] [ebp-Eh]
  unsigned int v15; // [esp+24h] [ebp-4h] BYREF

  v12 = 0; /*0x56488b*/
  v13 = 0; /*0x56488f*/
  v14 = 0; /*0x564894*/
  v4 = (const void *)*(this + 0x37); /*0x564899*/
  v15 = 0; /*0x5648a1*/
  if ( !v4 /*0x5648d3*/
    || !*(this + 0x39)
    || (v5 = a3) == 0
    || (NumLeafLODLevels = BSTreeModel_GetNumLeafLODLevels(v4), v7 = a2, (unsigned __int16)a2 >= NumLeafLODLevels) )
  {
    JUMPOUT(0x564961); /*0x564961*/
  }
  v8 = (*(int (__thiscall **)(int *))(*this + 0xA4))(this); /*0x5648e5*/
  if ( !v8 ) /*0x5648e9*/
  {
    v15 = 0xFFFFFFFF; /*0x5648ef*/
    BSStringT_Clear(&v12); /*0x5648f7*/
    JUMPOUT(0x56496A); /*0x56496a*/
  }
  v9 = 4 * v7; /*0x564909*/
  v10 = (_DWORD *)(v9 + *(this + 0x39)); /*0x56490b*/
  if ( *v10 ) /*0x56490d*/
  {
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v8 + 0x88))(v8, &a2, *v10); /*0x564924*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v15); /*0x56492a*/
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x84))(v8, v5, 1); /*0x56493c*/
  return sub_564944(*(this + 0x39), v9, a2, a3);
}
