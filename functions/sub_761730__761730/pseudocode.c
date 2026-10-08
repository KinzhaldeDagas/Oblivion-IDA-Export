// Oblivion string and behavior identify NiDX9RenderedTextureData::CreateSurf. Selects D3D format/usage/pool from NiRenderedTexture settings, creates a one-level texture or render-target surface, records exact byte size, and updates renderer video-memory accounting.
int __userpurge sub_761730@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3@<esi>, _DWORD *a4, int a5, int a6)
{
  void *v9; // ecx
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // edx
  signed int v15; // eax
  void *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  unsigned int v20; // ecx
  int v21; // [esp+24h] [ebp-10h]
  signed int v22; // [esp+30h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h]
  int v24; // [esp+38h] [ebp+4h]

  if ( !a4 ) /*0x76173d*/
    return 0; /*0x761740*/
  a1[0x15] = (*(int (__thiscall **)(_DWORD *, int, int))(*a4 + 0x4C))(a4, a2, a3); /*0x761754*/
  a1[0x16] = (*(int (__thiscall **)(_DWORD *))(*a4 + 0x50))(a4); /*0x761760*/
  a1[0x17] = 1; /*0x761763*/
  v9 = (void *)a4[7]; /*0x76176d*/
  v10 = a4[8]; /*0x761770*/
  v22 = a4[6]; /*0x761773*/
  retaddr = v9; /*0x761785*/
  v24 = v10; /*0x761789*/
  v11 = (_DWORD *)sub_773960(&v22, (int *)(a1[2] + 0x74C)); /*0x76178d*/
  qmemcpy(a1 + 3, v11, 0x44u); /*0x76179c*/
  v12 = v11[3]; /*0x76179e*/
  v13 = 0; /*0x7617a1*/
  v14 = 0; /*0x7617a6*/
  if ( *((_BYTE *)a4 + 0x3C) ) /*0x7617a8*/
    v14 = 1; /*0x7617b1*/
  else
    v13 = 1; /*0x7617b8*/
  if ( *((_BYTE *)a4 + 0x34) ) /*0x7617bd*/
    v12 = a4[0xE]; /*0x7617c3*/
  v15 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, int))(**(_DWORD **)(a1[2] + 0x280) + 0x5C))( /*0x7617f1*/
          *(_DWORD *)(a1[2] + 0x280),
          a1[0x15],
          a1[0x16],
          1,
          v14,
          v12,
          v13);
  if ( v15 >= 0 ) /*0x7617f5*/
  {
    v17 = a1[0x15] * a1[0x16]; /*0x761821*/
    a1[0x14] = v24; /*0x76182f*/
    a1[0x18] = v17; /*0x761832*/
    switch ( v12 ) /*0x76183e*/
    {
      case 0x14: /*0x76183e*/
        a1[0x18] = 3 * v17; /*0x76184c*/
        break; /*0x76184f*/
      case 0x15: /*0x76183e*/
      case 0x16: /*0x76183e*/
      case 0x72: /*0x76183e*/
        a1[0x18] = 4 * v17; /*0x761858*/
        break; /*0x76185b*/
      case 0x17: /*0x76183e*/
      case 0x18: /*0x76183e*/
      case 0x19: /*0x76183e*/
      case 0x1A: /*0x76183e*/
      case 0x51: /*0x76183e*/
        v18 = 2 * v17; /*0x761845*/
        goto LABEL_16; /*0x761847*/
      case 0x24: /*0x76183e*/
      case 0x71: /*0x76183e*/
        v18 = 8 * v17; /*0x761861*/
        goto LABEL_16; /*0x761863*/
      case 0x74: /*0x76183e*/
        v18 = 0x10 * v17; /*0x761865*/
LABEL_16:
        a1[0x18] = v18; /*0x761868*/
        break; /*0x761868*/
      default:
        break;
    }
    LODWORD(MEMORY[0xB3F9B0][0x9AD]) += a1[0x18]; /*0x76186b*/
    v19 = a1[0x18]; /*0x761874*/
    v20 = 0; /*0x76187e*/
    if ( (v19 & 0xFFFFF000) != v19 ) /*0x761882*/
      v20 = (v19 & 0xFFFFF000) - v19 + 0x1000; /*0x76188b*/
    LODWORD(MEMORY[0xB3F9B0][0x9AE]) += v20; /*0x76188d*/
    return v21; /*0x761893*/
  }
  else
  {
    D3D9_HResultToString(v15); /*0x7617f8*/
    Shared_NoOpVirtual_60D0A0(v16); /*0x761803*/
    a1[0x14] = 0; /*0x76180d*/
    return 0; /*0x761815*/
  }
}
