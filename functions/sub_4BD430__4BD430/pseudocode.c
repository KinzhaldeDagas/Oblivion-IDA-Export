void __thiscall sub_4BD430(
        void *this,
        TESWorldSpace *arg0,
        int a3,
        int a4,
        Ni2DBuffer *a5,
        Ni2DBuffer *a6,
        int a7,
        int a8)
{
  TESWorldSpace *ParentWorldpsace; // edi
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *v9; // esi
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *v10; // eax
  Ni2DBuffer *v11; // edi
  bool v12; // zf
  const char *v13; // eax
  IOTask *v14; // eax
  IOTask *v15; // eax
  IOTask *v16; // eax
  Ni2DBuffer *v17; // [esp-8h] [ebp-140h] BYREF
  Ni2DBuffer *v18; // [esp-4h] [ebp-13Ch]
  Ni2DBuffer *a2; // [esp+14h] [ebp-124h] BYREF
  Ni2DBuffer *v20; // [esp+18h] [ebp-120h]
  Ni2DBuffer **v21; // [esp+1Ch] [ebp-11Ch]
  void *v22; // [esp+20h] [ebp-118h]
  char v23[260]; // [esp+24h] [ebp-114h] BYREF
  int v24; // [esp+134h] [ebp-4h]

  ParentWorldpsace = arg0;
  v9 = 0;
  v22 = this;
  v20 = a5;
  a2 = a6;
  if ( arg0 )
  {
    if ( !sub_4BDE80(this, a3, a4) )
    {
      if ( TESWorldSpace_GetParentWorldpsace(arg0) )
        ParentWorldpsace = TESWorldSpace_GetParentWorldpsace(arg0);
      if ( a8 != 2 || sub_4F0DA0((int)ParentWorldpsace, a3, a4) )
      {
        v10 = (NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *)FormHeapAlloc(0x2Cu);
        v21 = (Ni2DBuffer **)v10;
        v24 = 0;
        if ( v10 )
          v9 = NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(v10);
        v18 = a2;
        v24 = 0xFFFFFFFF;
        *((_DWORD *)v9 + 2) = ParentWorldpsace;
        *(_DWORD *)v9 = a3;
        *((_DWORD *)v9 + 1) = a4;
        NiSmartPointer_Set__((Ni2DBuffer **)v9 + 8, v18);
        NiSmartPointer_Set__((Ni2DBuffer **)v9 + 7, v20);
        LOWORD(v18) = a4;
        LOWORD(v17) = a3;
        *((_BYTE *)v9 + 0x28) = 0;
        *((_DWORD *)v9 + 9) = a8;
        v11 = 0;
        v20 = (Ni2DBuffer *)sub_4EF1D0((__int16)v17, (unsigned __int16)v18);
        a2 = 0;
        v12 = externalLodFiles == 0;
        v24 = 1;
        if ( v12 )
        {
          v16 = (IOTask *)FormHeapAlloc(0x30u);
          v21 = (Ni2DBuffer **)v16;
          LOBYTE(v24) = 3;
          if ( v16 )
          {
            v15 = sub_4BCA90(v16, *(_DWORD *)(4 * a7 + 0xA45A58), (int)v22, (int)v9);
            goto LABEL_17;
          }
        }
        else
        {
          v13 = (const char *)(*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)v9 + 2) + 0xD4))(
                                *((_DWORD *)v9 + 2),
                                a3,
                                a4);
          _sprintf(v23, "DistantLOD\\%s_%i_%i.lod", v13, v17, v18);
          if ( !OBSE_g_FileFinder || !OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v23, 0, 0, 1) )
            goto LABEL_19;
          v14 = (IOTask *)FormHeapAlloc(0x30u);
          v21 = (Ni2DBuffer **)v14;
          LOBYTE(v24) = 2;
          if ( v14 )
          {
            v15 = sub_4BCAC0(v14, v23, *(_DWORD *)(4 * a7 + 0xA45A58), (int)v22, (int)v9);
            goto LABEL_17;
          }
        }
        v15 = 0;
LABEL_17:
        LOBYTE(v24) = 1;
        sub_4BCB70((int *)&a2, (int)v15);
        v11 = a2;
        if ( a2 )
        {
          v18 = 0;
          v21 = &v17;
          v17 = a2;
          InterlockedIncrement((volatile LONG *)&a2->members.width);
          (*(void (__thiscall **)(void *, Ni2DBuffer *, Ni2DBuffer *, Ni2DBuffer *))(*(_DWORD *)v22 + 0xC))(
            v22,
            v20,
            v17,
            v18);
          (*((void (__thiscall **)(IOManager *, Ni2DBuffer *))ioManager->vtbl + 0xF))(ioManager, v11);
          goto LABEL_20;
        }
LABEL_19:
        sub_4BD230(v9);
        FormHeapFree((unsigned int)v9);
LABEL_20:
        v24 = 0xFFFFFFFF;
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v11->members.width) )
            (*(void (__thiscall **)(Ni2DBuffer *, int))v11->__vftable)(v11, 1);
        }
      }
    }
  }
}
