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
  int v14; // [esp-8h] [ebp-2Ch]
  Ni2DBuffer *a2; // [esp+14h] [ebp-10h]

  if ( iDistantLODGroupWidth_DistantLOD > 1 )
    v3 = (NiAVObject *)(((__int16)(iDistantLODGroupWidth_DistantLOD / 2
                                 - SHIWORD(arg4) % iDistantLODGroupWidth_DistantLOD
                                 + HIWORD(arg4)) << 0x10)
                      | (unsigned __int16)(arg4
                                         + iDistantLODGroupWidth_DistantLOD / 2
                                         - (__int16)arg4 % iDistantLODGroupWidth_DistantLOD));
  else
    v3 = (NiAVObject *)iDistantLODGroupWidth_DistantLOD;
  v4 = (void **)a3;
  v5 = 0;
  *a3 = 0;
  a2 = (Ni2DBuffer *)sub_7B2AA0((int)a1);
  if ( !a2 )
    return 0;
  v14 = (int)a1[2];
  a3 = 0;
  if ( NiTMap_GetAt(&off_B2C33C, v14, &a3) )
  {
    v5 = a3;
  }
  else
  {
    v7 = (_DWORD *)FormHeapAlloc(0x30u);
    if ( v7 )
      v5 = (NiAVObject **)sub_7B3B70(v7);
    NiSmartPointer_Set__((Ni2DBuffer **)v5 + 7, a2);
    *v5 = *a1;
    v5[1] = a1[1];
    v5[2] = a1[2];
    NiTMap_SetAt(&off_B2C33C, (int)a1[2], (int)v5);
  }
  v8 = *v4;
  v9 = v5[4];
  v10 = (BSTextureManager *)(v5 + 3);
  if ( !*v4 )
  {
    while ( v9 )
    {
      m_pcName = (char *)v9->members.super.m_pcName;
      v9 = (NiAVObject *)v9->vtbl;
      if ( *((_WORD *)m_pcName + 7) != *((_WORD *)m_pcName + 6) && v3 == *((NiAVObject **)m_pcName + 9) )
      {
        *v4 = m_pcName;
        break;
      }
      if ( *v4 )
        break;
    }
    v8 = *v4;
    if ( !*v4 )
      goto LABEL_20;
  }
  if ( v8[6] == v8[7] )
  {
LABEL_20:
    v12 = (NiAVObject **)FormHeapAlloc(0x28u);
    a3 = v12;
    if ( v12 )
      v13 = sub_802E00(v12, (int)a2, v3, 0);
    else
      v13 = 0;
    *v4 = v13;
    ++dword_B42D5C;
    sub_802A90(*v4, a1);
    sub_5B1E20(v10, v4);
    ((void (__thiscall *)(NiNode *, _DWORD, int))LODTree->vtbl->AddObject)(LODTree, *(_DWORD *)*v4, 1);
  }
  return *((_WORD *)*v4 + 6) - *((_WORD *)*v4 + 7);
}
