//
// [2026-10-03 plugin scene tracking] Private shape ProcessClone wrapper invokes this function after confirming map/source/destination metadata. Afterwards it refreshes destination propertyState+AC->shaderProperty+18 and remaps source node/group through cloningProcess's first map. An uncloned parent is cleared, never borrowed from the source hierarchy. Material/fade/LOD snapshots are value-copied.
void __thiscall NiGeometry_ProcessClone(NiGeometry *this, void *cloningProcess)
{
  _DWORD **v3; // ebp
  NiObject *skinData; // eax
  _DWORD *v5; // edi
  Ni2DBuffer *v6; // eax
  DWORD CurrentThreadId; // eax
  NiObject *shader; // ecx
  unsigned int *v9; // ebp
  _DWORD *v10; // eax
  Atmosphere *v11; // ecx
  char *v12; // eax
  NiCamera *CastingType; // eax
  volatile LONG *unk0AC; // esi
  char *v15; // eax
  char *v16; // eax
  int *v17; // eax
  LONG (__stdcall *v18)(volatile LONG *); // ebp
  void (__thiscall ***v19)(_DWORD, int); // edi
  UInt32 v21[2]; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+20h] [ebp-4h]

  v3 = (_DWORD **)cloningProcess; /*0x723079*/
  sub_707AB0((NiRenderTargetGroup *)this, (int)cloningProcess); /*0x72307e*/
  NiTMap_GetAt(*v3, (int)this, &cloningProcess); /*0x72308c*/
  skinData = this->member.skinData; /*0x723091*/
  v5 = cloningProcess; /*0x723099*/
  if ( skinData ) /*0x72309d*/
  {
    if ( NiTMap_GetAt(*v3, (int)skinData, &cloningProcess) ) /*0x7230a8*/
    {
      NiSmartPointer_Set__((Ni2DBuffer **)v5 + 0x2E, (Ni2DBuffer *)cloningProcess); /*0x7230bc*/
    }
    else
    {
      v6 = (Ni2DBuffer *)((int (__thiscall *)(NiObject *, _DWORD **))this->member.skinData->__vftable->Copy)( /*0x7230cf*/
                           this->member.skinData,
                           v3);
      NiSmartPointer_Set__((Ni2DBuffer **)v5 + 0x2E, v6); /*0x7230d8*/
      ((void (__thiscall *)(NiObject *, _DWORD **))this->member.skinData->__vftable->Unk_0E)(this->member.skinData, v3); /*0x7230e9*/
    }
  }
  EnterCriticalSection(&unk_B3FA00); /*0x7230f0*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7230f6*/
  ++unk_B3FA7C; /*0x723101*/
  unk_B3FA78 = CurrentThreadId; /*0x723107*/
  shader = this->member.shader; /*0x72310c*/
  v9 = 0; /*0x723112*/
  if ( shader ) /*0x723116*/
  {
    if ( (BSStringT *)shader->__vftable->GetType(shader) == &stru_B40124 ) /*0x72312d*/
    {
      v10 = (_DWORD *)FormHeapAlloc(0x10u); /*0x723131*/
      cloningProcess = v10; /*0x723139*/
      v22 = 0; /*0x72313f*/
      if ( v10 ) /*0x723143*/
        v9 = sub_7385B0(v10); /*0x72314c*/
      v11 = (Atmosphere *)this->member.shader; /*0x72314e*/
      v22 = 0xFFFFFFFF; /*0x723154*/
      v12 = (char *)Shared_GetPointerAtOffset08(v11); /*0x72315c*/
      sub_738630(v9, v12); /*0x723164*/
      CastingType = (NiCamera *)TESEnchantableForm_GetCastingType(&this->member.shader->__vftable); /*0x72316f*/
      TESWaterCulling::SetCamera((TESWaterCulling *)v9, CastingType); /*0x723177*/
      NiSmartPointer_Set__((Ni2DBuffer **)v5 + 0x2F, (Ni2DBuffer *)v9); /*0x723183*/
    }
    else
    {
      NiGeometry_SetShader((NiGeometry *)v5, (BSShader *)this->member.shader); /*0x723196*/
      ((void (__thiscall *)(NiObject *, _DWORD *))this->member.shader->__vftable->Copy)(this->member.shader, v5); /*0x7231a7*/
      unk0AC = (volatile LONG *)this->member.unk0AC; /*0x7231a9*/
      cloningProcess = (void *)unk0AC; /*0x7231b1*/
      if ( unk0AC ) /*0x7231b5*/
        InterlockedIncrement(unk0AC + 1); /*0x7231bb*/
      v22 = 2; /*0x7231c3*/
      v15 = (char *)FormHeapAlloc(0x30u); /*0x7231c7*/
      v21[1] = (UInt32)v15; /*0x7231cf*/
      if ( v15 ) /*0x7231da*/
        v16 = sub_731620(v15, (int)unk0AC); /*0x7231df*/
      else
        v16 = 0; /*0x7231e6*/
      LOBYTE(v22) = 1; /*0x7231f1*/
      v17 = (int *)sub_7077D0(v5, v21, (Ni2DBuffer *)v16, 0); /*0x7231f5*/
      LOBYTE(v22) = 3; /*0x723201*/
      OB_NiSmartPointer_Assign_010201A0(v5 + 0x2B, v17); /*0x723206*/
      v18 = InterlockedDecrement; /*0x723211*/
      LOBYTE(v22) = 1; /*0x723217*/
      if ( v21[0] ) /*0x72321b*/
      {
        v19 = (void (__thiscall ***)(_DWORD, int))v21[0]; /*0x72321d*/
        if ( !v18((volatile LONG *)(v21[0] + 4)) ) /*0x723223*/
          (**v19)(v19, 1); /*0x723234*/
      }
      if ( unk0AC ) /*0x723238*/
      {
        if ( !v18(unk0AC + 1) ) /*0x72323e*/
          (**(void (__thiscall ***)(volatile LONG *, int))unk0AC)(unk0AC, 1); /*0x72324b*/
      }
      v22 = 0xFFFFFFFF; /*0x723251*/
    }
  }
  if ( unk_B3FA7C-- == 1 ) /*0x72326e*/
    unk_B3FA78 = 0; /*0x723276*/
  LeaveCriticalSection(&unk_B3FA00); /*0x723285*/
}
