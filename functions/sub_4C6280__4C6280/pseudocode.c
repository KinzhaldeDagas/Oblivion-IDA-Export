char __thiscall sub_4C6280(unsigned int **this)
{
  unsigned int v2; // ebp
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  unsigned int **v6; // eax
  int v7; // eax
  unsigned int *v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // eax
  _DWORD *v16; // ebx
  _DWORD *v17; // ecx
  MEF_U32PointerMapEntry32 *v18; // eax
  _DWORD **v19; // ebx
  int i; // esi
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  void *valueOut; // [esp+Ch] [ebp-10h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-Ch] BYREF
  int v26; // [esp+14h] [ebp-8h]
  unsigned int keyOut; // [esp+18h] [ebp-4h] BYREF

  *(this + 7) = (unsigned int *)((unsigned int)*(this + 7) & 0xFFFFFFF7); /*0x4c6288*/
  sub_4C58D0(this); /*0x4c628c*/
  v2 = 0; /*0x4c6291*/
  if ( *(this + 9) ) /*0x4c6293*/
  {
    v3 = 0; /*0x4c629d*/
    valueOut = 0; /*0x4c629f*/
    v26 = 0; /*0x4c62a3*/
    do /*0x4c6445*/
    {
      v4 = (int)*(this + 9); /*0x4c62b0*/
      v5 = *(_DWORD *)(v4 + v2 + 0x40) == 0; /*0x4c62b3*/
      v6 = (unsigned int **)(v4 + v2 + 0x40); /*0x4c62b8*/
      if ( !v5 ) /*0x4c62bc*/
      {
        FormHeapFree(**v6); /*0x4c62c3*/
        FormHeapFree((*(this + 9))[v2 / 4 + 0x10]); /*0x4c62d0*/
        (*(this + 9))[v2 / 4 + 0x10] = 0; /*0x4c62db*/
      }
      v7 = (int)*(this + 9); /*0x4c62e3*/
      v5 = *(_DWORD *)(v7 + v2 + 0x30) == 0; /*0x4c62e6*/
      v8 = (unsigned int *)(v7 + v2 + 0x30); /*0x4c62eb*/
      if ( !v5 ) /*0x4c62ef*/
      {
        FormHeapFree(*v8); /*0x4c62f4*/
        (*(this + 9))[v2 / 4 + 0xC] = 0; /*0x4c62ff*/
      }
      v9 = (*(this + 9))[1]; /*0x4c630a*/
      if ( v9 ) /*0x4c630f*/
      {
        FormHeapFree(*(_DWORD *)(v9 + v2)); /*0x4c6315*/
        *(_DWORD *)((*(this + 9))[1] + v2) = 0; /*0x4c6323*/
      }
      v10 = (*(this + 9))[2]; /*0x4c632d*/
      if ( v10 ) /*0x4c6332*/
      {
        FormHeapFree(*(_DWORD *)(v10 + v2)); /*0x4c6338*/
        *(_DWORD *)((*(this + 9))[2] + v2) = 0; /*0x4c6346*/
      }
      v11 = (*(this + 9))[3]; /*0x4c6350*/
      if ( v11 ) /*0x4c6355*/
      {
        FormHeapFree(*(_DWORD *)(v11 + v2)); /*0x4c635b*/
        *(_DWORD *)((*(this + 9))[3] + v2) = 0; /*0x4c6369*/
      }
      v12 = (*(this + 9))[4]; /*0x4c6373*/
      if ( v12 ) /*0x4c6378*/
      {
        FormHeapFree(*(_DWORD *)(v12 + v2)); /*0x4c637e*/
        *(_DWORD *)((*(this + 9))[4] + v2) = 0; /*0x4c638c*/
      }
      v13 = (int)*(this + 9); /*0x4c6393*/
      if ( *(_DWORD *)(v3 + v13 + 0x60) ) /*0x4c6396*/
      {
        v14 = *(_DWORD *)(v3 + v13 + 0x58); /*0x4c63a1*/
        v15 = 0; /*0x4c63a5*/
        if ( v14 ) /*0x4c63a9*/
        {
          v16 = *(_DWORD **)(v3 + v13 + 0x5C); /*0x4c63ab*/
          v17 = v16; /*0x4c63af*/
          while ( !*v17 ) /*0x4c63b4*/
          {
            ++v15; /*0x4c63ba*/
            ++v17; /*0x4c63bd*/
            if ( v15 >= v14 ) /*0x4c63c2*/
              goto LABEL_20; /*0x4c63c2*/
          }
          v18 = (MEF_U32PointerMapEntry32 *)v16[v15]; /*0x4c64d7*/
        }
        else
        {
LABEL_20:
          v18 = 0; /*0x4c63c4*/
        }
        position = v18; /*0x4c63c8*/
        while ( position ) /*0x4c63cc*/
        {
          NiTMap_U32Pointer_GetNextEntry( /*0x4c63e6*/
            (MEF_U32PointerMapLayout32 *)((char *)*(this + 9) + v3 + 0x54),
            &position,
            &keyOut,
            &valueOut);
          v19 = (_DWORD **)valueOut; /*0x4c63eb*/
          if ( valueOut ) /*0x4c63f1*/
          {
            for ( i = 0; i < 0x10; ++i ) /*0x4c63f3*/
            {
              if ( v19[i] ) /*0x4c63f5*/
              {
                *v19[i] = 0; /*0x4c63fe*/
                FormHeapFree((unsigned int)v19[i]); /*0x4c6408*/
              }
            }
            FormHeapFree((unsigned int)v19); /*0x4c6419*/
            v3 = v26; /*0x4c641e*/
          }
        }
      }
      NiTMap_Clear((unsigned int *)((char *)*(this + 9) + v3 + 0x54)); /*0x4c6433*/
      v2 += 4; /*0x4c6438*/
      v3 += 0x10; /*0x4c643b*/
      v26 = v3; /*0x4c6441*/
    }
    while ( (int)v2 < 0x10 ); /*0x4c6445*/
    FormHeapFree((*(this + 9))[4]); /*0x4c6452*/
    FormHeapFree((*(this + 9))[1]); /*0x4c645e*/
    FormHeapFree((*(this + 9))[3]); /*0x4c646a*/
    FormHeapFree((*(this + 9))[2]); /*0x4c6476*/
    v21 = (*(this + 9))[0x14]; /*0x4c647e*/
    if ( v21 ) /*0x4c6487*/
    {
      if ( *(_WORD *)(v21 + 4) ) /*0x4c6489*/
      {
        if ( !--*(_WORD *)(v21 + 6) ) /*0x4c6495*/
          (**(void (__thiscall ***)(unsigned int, int))v21)(v21, 1); /*0x4c64a4*/
      }
      (*(this + 9))[0x14] = 0; /*0x4c64a9*/
    }
  }
  v22 = (unsigned int)*(this + 9); /*0x4c64b0*/
  if ( v22 ) /*0x4c64b5*/
  {
    sub_4C2180((char *)*(this + 9)); /*0x4c64b9*/
    FormHeapFree(v22); /*0x4c64bf*/
  }
  *(this + 9) = 0; /*0x4c64c7*/
  return 1; /*0x4c64ce*/
}
