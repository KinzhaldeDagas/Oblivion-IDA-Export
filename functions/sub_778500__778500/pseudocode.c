// Buffer factory audit 2026-10-02: independent cached line-index path, manager+14 IB/+18 capacity. Requests 4*vertexCount+4 bytes, INDEX16; iterates byte connectivity flags to emit successive index pairs and an optional last-to-zero closing pair. Uses CreateIndexBuffer wrapper778180. Current decompile has incorrect COM Lock arity/stack tracking and phantom EDI input; parameter reconstruction remains incomplete.
_DWORD *__userpurge sub_778500@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<edi>,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _WORD *a8)
{
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // ecx
  _DWORD *v13; // edi
  _DWORD *v14; // esi
  int (__stdcall *v15)(_DWORD *, _DWORD, unsigned int, int *, _DWORD, int); // eax
  void *v16; // ecx
  _WORD *v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // edx
  void *v20; // ecx
  _DWORD *v22; // [esp+24h] [ebp-18h]
  int v23; // [esp+28h] [ebp-14h] BYREF
  int v24; // [esp+2Ch] [ebp-10h]
  int v25; // [esp+30h] [ebp-Ch]
  int v26; // [esp+34h] [ebp-8h]
  unsigned int v27; // [esp+38h] [ebp-4h]
  unsigned int v28; // [esp+40h] [ebp+4h]

  v22 = a1; /*0x778507*/
  if ( !a1[2] ) /*0x778503*/
    return 0; /*0x778511*/
  if ( !a3 || !a4 ) /*0x778522*/
    return 0; /*0x77852a*/
  v10 = (_DWORD *)a1[5]; /*0x778533*/
  v11 = a7; /*0x778540*/
  v28 = 4 * a3 + 4; /*0x778544*/
  if ( v10 ) /*0x778548*/
  {
    v12 = *v10; /*0x77854e*/
    v23 = 0; /*0x778557*/
    v24 = 0; /*0x77855b*/
    v25 = 0; /*0x77855f*/
    v26 = 0; /*0x778563*/
    v27 = 0; /*0x778567*/
    if ( (*(int (__stdcall **)(_DWORD *, int *))(v12 + 0x34))(v10, &v23) >= 0 ) /*0x778573*/
    {
      if ( v23 == 0x65 && v24 == 7 && v25 == a6 && v26 == v11 && v27 >= v28 ) /*0x7785ab*/
      {
        v13 = v10; /*0x7785b1*/
        goto LABEL_14; /*0x7785b1*/
      }
      (*(void (__stdcall **)(_DWORD *))(*v10 + 8))(v10); /*0x77863f*/
    }
    a1 = v22; /*0x778641*/
  }
  v13 = NiDX9IndexBufferManager_CreateIndexBuffer(a1, v28, a6, 0x65, v11, 0); /*0x778655*/
  if ( !v13 ) /*0x778659*/
  {
    Shared_NoOpVirtual_60D0A0(v20); /*0x778664*/
    return 0; /*0x778675*/
  }
LABEL_14:
  v14 = a5; /*0x7785b3*/
  *a5 = 0; /*0x7785c3*/
  v15 = *(int (__stdcall **)(_DWORD *, _DWORD, unsigned int, int *, _DWORD, int))(*v13 + 0x2C); /*0x7785cb*/
  a7 = 0; /*0x7785d1*/
  if ( v15(v13, 0, v28, &a7, 0, a2) < 0 ) /*0x7785dd*/
  {
    Shared_NoOpVirtual_60D0A0(v16); /*0x77867d*/
    (*(void (**)(void))(*v13 + 0x30))(); /*0x77868b*/
    (*(void (__stdcall **)(_DWORD *))(*v13 + 8))(v13); /*0x778693*/
    v13 = 0; /*0x778695*/
  }
  else
  {
    v17 = a8; /*0x7785e3*/
    v18 = a3 - 1; /*0x7785e7*/
    v19 = 0; /*0x7785ea*/
    if ( a3 != 1 ) /*0x7785ee*/
    {
      do /*0x778618*/
      {
        if ( *(_BYTE *)a5 ) /*0x7785f9*/
        {
          *v17 = v19; /*0x778601*/
          v17[1] = v19 + 1; /*0x778606*/
          v17 += 2; /*0x77860a*/
          *v14 += 2; /*0x77860d*/
        }
        a5 = (_DWORD *)((char *)a5 + 1); /*0x778610*/
        ++v19; /*0x778614*/
      }
      while ( v19 < v18 ); /*0x778618*/
    }
    if ( *(_BYTE *)a5 ) /*0x77861e*/
    {
      *(_DWORD *)v17 = (unsigned __int16)v18; /*0x778623*/
      *v14 += 2; /*0x77862c*/
    }
    (*(void (**)(void))(*v13 + 0x30))(); /*0x778635*/
  }
  v22[5] = v13; /*0x77869f*/
  v22[6] = v28; /*0x7786a2*/
  return v13; /*0x77850e*/
}
