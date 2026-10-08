__int16 __cdecl sub_7B3BE0(NiAVObject **a1, int arg4, NiAVObject **a3)
{
  NiAVObject *v3; // ebp
  void **v4; // edi
  NiAVObject **v5; // esi
  _DWORD *v7; // eax
  _WORD *v8; // ecx
  NiAVObject *v9; // eax
  BSTextureManager *v10; // esi
  char *m_pcName; // ecx
  NiAVObject **v12; // eax
  NiAVObject **v13; // eax
  NiAVObject *v14; // [esp-8h] [ebp-2Ch]
  Ni2DBuffer *a2; // [esp+14h] [ebp-10h]

  if ( iDistantLODGroupWidth_DistantLOD > 1 ) /*0x7b3c0e*/
    v3 = (NiAVObject *)(((__int16)(iDistantLODGroupWidth_DistantLOD / 2 /*0x7b3c48*/
                                 - SHIWORD(arg4) % iDistantLODGroupWidth_DistantLOD
                                 + HIWORD(arg4)) << 0x10)
                      | (unsigned __int16)(arg4
                                         + iDistantLODGroupWidth_DistantLOD / 2
                                         - (__int16)arg4 % iDistantLODGroupWidth_DistantLOD));
  else
    v3 = (NiAVObject *)iDistantLODGroupWidth_DistantLOD; /*0x7b3c10*/
  v4 = (void **)a3; /*0x7b3c4e*/
  v5 = 0; /*0x7b3c52*/
  *a3 = 0; /*0x7b3c55*/
  a2 = (Ni2DBuffer *)sub_7B2AA0((int)a1); /*0x7b3c61*/
  if ( !a2 ) /*0x7b3c65*/
    return 0; /*0x7b3c67*/
  v14 = a1[2]; /*0x7b3c86*/
  a3 = 0; /*0x7b3c8c*/
  if ( NiTMap_GetAt(&stru_B2C33C, (int)v14, &a3) ) /*0x7b3c90*/
  {
    v5 = a3; /*0x7b3cde*/
  }
  else
  {
    v7 = (_DWORD *)FormHeapAlloc(0x30u); /*0x7b3c9b*/
    if ( v7 ) /*0x7b3ca5*/
      v5 = (NiAVObject **)sub_7B3B70(v7); /*0x7b3cae*/
    NiSmartPointer_Set__((Ni2DBuffer **)v5 + 7, a2); /*0x7b3cb8*/
    *v5 = *a1; /*0x7b3cbf*/
    v5[1] = a1[1]; /*0x7b3cc4*/
    v5[2] = a1[2]; /*0x7b3cca*/
    NiTMap_SetAt(&stru_B2C33C, (int)a1[2], (int)v5); /*0x7b3cd7*/
  }
  v8 = *v4; /*0x7b3ce2*/
  v9 = v5[4]; /*0x7b3ce4*/
  v10 = (BSTextureManager *)(v5 + 3); /*0x7b3ce7*/
  if ( !*v4 ) /*0x7b3ce2*/
  {
    while ( v9 ) /*0x7b3cf0*/
    {
      m_pcName = (char *)v9->members.super.m_pcName; /*0x7b3cf5*/
      v9 = (NiAVObject *)v9->vtbl; /*0x7b3cff*/
      if ( *((_WORD *)m_pcName + 7) != *((_WORD *)m_pcName + 6) && v3 == *((NiAVObject **)m_pcName + 9) ) /*0x7b3d06*/
      {
        *v4 = m_pcName; /*0x7b3d0f*/
        break; /*0x7b3d0f*/
      }
      if ( *v4 ) /*0x7b3d08*/
        break; /*0x7b3d0b*/
    }
    v8 = *v4; /*0x7b3d11*/
    if ( !*v4 ) /*0x7b3d11*/
      goto LABEL_20; /*0x7b3d11*/
  }
  if ( v8[6] == v8[7] ) /*0x7b3d1b*/
  {
LABEL_20:
    v12 = (NiAVObject **)FormHeapAlloc(0x28u); /*0x7b3d23*/
    a3 = v12; /*0x7b3d2b*/
    if ( v12 ) /*0x7b3d39*/
      v13 = OB_DistantLOD_CreateInstanceBatch_010201A0(v12, (int)a2, v3, 0); /*0x7b3d45*/
    else
      v13 = 0; /*0x7b3d4c*/
    *v4 = v13; /*0x7b3d4e*/
    ++unk_B42D5C; /*0x7b3d50*/
    OB_DistantLOD_BindInstanceDescriptor_010201A0(*v4, a1); /*0x7b3d62*/
    NiTPointerList__AddTail(v10, v4); /*0x7b3d6a*/
    ((void (__thiscall *)(NiNode *, _DWORD, int))MEMORY[0xB42D64]->vtbl->AddObject)(MEMORY[0xB42D64], *(_DWORD *)*v4, 1); /*0x7b3d84*/
  }
  return *((_WORD *)*v4 + 6) - *((_WORD *)*v4 + 7); /*0x7b3c6a*/
}
