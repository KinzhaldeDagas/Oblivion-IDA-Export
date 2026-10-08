void __thiscall ActvEffListEntry_CompareName(void *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // ecx
  int v6; // edi
  const char **Name; // edi
  int *v8; // ecx
  const char **v9; // eax
  int v10; // esi
  int v11; // [esp-4h] [ebp-34h]
  int v12; // [esp+0h] [ebp-30h]
  int v13; // [esp+0h] [ebp-30h]
  int v14; // [esp+4h] [ebp-2Ch]
  BSStringT v15; // [esp+4h] [ebp-2Ch]
  BSStringT v16; // [esp+8h] [ebp-28h]
  int v17; // [esp+Ch] [ebp-24h]
  unsigned int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h] BYREF
  unsigned int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  BSStringT *v22[5]; // [esp+1Ch] [ebp-14h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)this + 0xC); /*0x5b221b*/
  v4 = *(_DWORD *)(v3 + 0x1C); /*0x5b221e*/
  v5 = *(int **)(a2 + 0xC); /*0x5b2231*/
  v6 = v5[7]; /*0x5b2234*/
  if ( *(_DWORD *)(v4 + 0x98) == 0x46464553 && *(_DWORD *)(v6 + 0x98) == 0x46464553 ) /*0x5b223f*/
  {
    Name = (const char **)EffectItem_GetName(v5, (int)v22, v12, v14, v16, v19, v20, v21, (int)v22[0], v22[1]); /*0x5b224b*/
    v8 = *(int **)(*(_DWORD *)this + 0xC); /*0x5b224f*/
    v22[3] = 0; /*0x5b2259*/
    v9 = (const char **)EffectItem_GetName(v8, (int)&v19, v11, v13, v15, v17, v19, v20, v21, v22[0]); /*0x5b225d*/
    CRT_StricmpLocaleDispatch(*v9, *Name); /*0x5b2268*/
    FormHeapFree(v18); /*0x5b2277*/
    v19 = 0; /*0x5b228a*/
    FormHeapFree(v20); /*0x5b228f*/
    ActvEffListEntry_CompareName_::Done(a2); /*0x5b229c*/
  }
  else if ( v4 != v6 /*0x5b22be*/
         || ((v10 = *(_DWORD *)(v4 + 0x58), (v10 & 0x80000) != 0) || (v10 & 0x100000) != 0)
         && *(_DWORD *)(v3 + 0x14) != v5[5] )
  {
    ActvEffListEntry_CompareName_::Return_0(a2); /*0x5b22a0*/
  }
  else
  {
    ActvEffListEntry_CompareName_::Return_1(a2); /*0x5b22bf*/
  }
}
