void __thiscall sub_723050(NiRenderTargetGroup *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v3; // ebp
  int v4; // eax
  Ni2DBuffer *v5; // edi
  Ni2DBuffer *v6; // eax
  DWORD CurrentThreadId; // eax
  int v8; // ecx
  TESWaterCulling *v9; // ebp
  Ni2DBuffer *v10; // eax
  Atmosphere *v11; // ecx
  char *v12; // eax
  NiCamera *CastingType; // eax
  Ni2DBuffer *v14; // esi
  _DWORD *v15; // eax
  Ni2DBuffer *v16; // eax
  int *v17; // eax
  LONG (__stdcall *v18)(volatile LONG *); // ebp
  void (__thiscall ***v19)(_DWORD, int); // edi
  UInt32 v21[2]; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+20h] [ebp-4h]

  v3 = a2;
  sub_707AB0(this, (int)a2);
  NiTMap_GetAt(v3->__vftable, (int)this, &a2);
  v4 = *((_DWORD *)this + 0x2E);
  v5 = a2;
  if ( v4 )
  {
    if ( NiTMap_GetAt(v3->__vftable, v4, &a2) )
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v5[9].members, a2);
    }
    else
    {
      v6 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD, Ni2DBuffer *))(**((_DWORD **)this + 0x2E) + 0x18))(
                           *((_DWORD *)this + 0x2E),
                           v3);
      NiSmartPointer_Set__((Ni2DBuffer **)&v5[9].members, v6);
      (*(void (__thiscall **)(_DWORD, Ni2DBuffer *))(**((_DWORD **)this + 0x2E) + 0x38))(*((_DWORD *)this + 0x2E), v3);
    }
  }
  EnterCriticalSection(&stru_B3FA00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3FA7C;
  dword_B3FA78 = CurrentThreadId;
  v8 = *((_DWORD *)this + 0x2F);
  v9 = 0;
  if ( v8 )
  {
    if ( (_UNKNOWN *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) == &unk_B40124 )
    {
      v10 = (Ni2DBuffer *)FormHeapAlloc(0x10u);
      a2 = v10;
      v22 = 0;
      if ( v10 )
        v9 = (TESWaterCulling *)sub_7385B0(v10);
      v11 = *((Atmosphere **)this + 0x2F);
      v22 = 0xFFFFFFFF;
      v12 = (char *)sub_452A60(v11);
      sub_738630(v9, v12);
      CastingType = (NiCamera *)TESEnchantableForm_GetCastingType(*((_DWORD **)this + 0x2F));
      TESWaterCulling::SetCamera(v9, CastingType);
      NiSmartPointer_Set__((Ni2DBuffer **)&v5[9].members.width, (Ni2DBuffer *)v9);
    }
    else
    {
      sub_4EC910((NiGeometry *)v5, *((BSShader **)this + 0x2F));
      (*(void (__thiscall **)(_DWORD, Ni2DBuffer *))(**((_DWORD **)this + 0x2F) + 0x18))(*((_DWORD *)this + 0x2F), v5);
      v14 = *((Ni2DBuffer **)this + 0x2B);
      a2 = v14;
      if ( v14 )
        InterlockedIncrement((volatile LONG *)&v14->members);
      v22 = 2;
      v15 = (_DWORD *)FormHeapAlloc(0x30u);
      v21[1] = (UInt32)v15;
      if ( v15 )
        v16 = (Ni2DBuffer *)sub_731620(v15, (int)v14);
      else
        v16 = 0;
      LOBYTE(v22) = 1;
      v17 = (int *)sub_7077D0(v5, v21, v16, 0);
      LOBYTE(v22) = 3;
      sub_55E2A0((int *)&v5[8].members.height, v17);
      v18 = InterlockedDecrement;
      LOBYTE(v22) = 1;
      if ( v21[0] )
      {
        v19 = (void (__thiscall ***)(_DWORD, int))v21[0];
        if ( !v18((volatile LONG *)(v21[0] + 4)) )
          (**v19)(v19, 1);
      }
      if ( v14 )
      {
        if ( !v18((volatile LONG *)&v14->members) )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v14->__vftable)(v14, 1);
      }
      v22 = 0xFFFFFFFF;
    }
  }
  if ( dword_B3FA7C-- == 1 )
    dword_B3FA78 = 0;
  LeaveCriticalSection(&stru_B3FA00);
}
