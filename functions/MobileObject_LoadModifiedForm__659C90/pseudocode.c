// Verified 2026-10-04: 659EA3 is an internal switch-join and shared SEH epilogue, not a callable function. All entry xrefs are local; reattached without changing bytes/labels. Reads process-level byte: 0 high(0x2EC),1 middle-high(0x18C),2 middle-low(0xA8),3 low(0x90),FF none. Creates missing tier with matching constructor and registers owner; existing mismatched tier uses owner virtual transition. Shared tail calls TESObjectREFR load then process +0x3F8 with changeMask,currentFlags,owner.
void __thiscall MobileObject_LoadModifiedForm(MobileObject *self, unsigned int changeMask, unsigned int currentFlags)
{
  LowProcess *process; // ecx
  int v5; // eax
  LowProcess *v6; // ecx
  LowProcess *v7; // ecx
  HighProcess *v8; // eax
  HighProcess *v9; // eax
  LowProcess *v10; // ecx
  MiddleHighProcess *v11; // eax
  LowProcess *v12; // ecx
  MiddleLowProcess *v13; // eax
  LowProcess *v14; // ecx
  LowProcess *v15; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  LowProcess *v17; // ecx
  int v18; // [esp-10h] [ebp-34h]
  char destination; // [esp+13h] [ebp-11h] BYREF
  HighProcess *v20; // [esp+14h] [ebp-10h]
  int v21; // [esp+20h] [ebp-4h]

  TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &destination, 1u); /*0x659cbf*/
  switch ( destination ) /*0x659cd5*/
  {
    case 0xFF: /*0x659cd5*/
      process = self->process; /*0x659cdc*/
      if ( process ) /*0x659ce1*/
      {
        v5 = process->GetProcessLevel(process); /*0x659cec*/
        sub_674550((int)self, v5); /*0x659cf5*/
        v6 = self->process; /*0x659cfa*/
        if ( v6 ) /*0x659cff*/
          ((void (__thiscall *)(LowProcess *, int))v6->Destructor)(v6, 1); /*0x659d07*/
        self->process = 0; /*0x659d09*/
      }
      break; /*0x659d10*/
    case 0: /*0x659cd5*/
      v7 = self->process; /*0x659d15*/
      if ( !v7 ) /*0x659d1a*/
      {
        v8 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x659d41*/
        v20 = v8; /*0x659d49*/
        v21 = 0; /*0x659d4f*/
        if ( v8 ) /*0x659d57*/
          v9 = HighProcess::HighProcess(v8); /*0x659d5b*/
        else
          v9 = 0; /*0x659d6d*/
        v18 = 0; /*0x659d66*/
        goto LABEL_34; /*0x659d68*/
      }
      if ( v7->GetProcessLevel(v7) ) /*0x659d21*/
        self->vtbl->super.MoveToHigh((TESObjectREFR *)self); /*0x659d35*/
      break; /*0x659d37*/
    case 1: /*0x659cd5*/
      v10 = self->process; /*0x659d78*/
      if ( !v10 ) /*0x659d7d*/
      {
        v11 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu); /*0x659da5*/
        v20 = (HighProcess *)v11; /*0x659dad*/
        v21 = 1; /*0x659db3*/
        if ( v11 ) /*0x659dbb*/
          v9 = (HighProcess *)MiddleHighProcess::MiddleHighProcess(v11); /*0x659dbf*/
        else
          v9 = 0; /*0x659dd1*/
        v18 = 1; /*0x659dca*/
        goto LABEL_34; /*0x659dcc*/
      }
      if ( v10->GetProcessLevel(v10) != 1 ) /*0x659d89*/
        self->vtbl->MoveToMiddleHigh(self); /*0x659d99*/
      break; /*0x659d9b*/
    case 2: /*0x659cd5*/
      v12 = self->process; /*0x659ddd*/
      if ( !v12 ) /*0x659de2*/
      {
        v13 = (MiddleLowProcess *)FormHeapAlloc(0xA8u); /*0x659e0a*/
        v20 = (HighProcess *)v13; /*0x659e12*/
        v21 = 2; /*0x659e18*/
        if ( v13 ) /*0x659e20*/
          v9 = (HighProcess *)MiddleLowProcess::MiddleLowProcess(v13); /*0x659e24*/
        else
          v9 = 0; /*0x659e33*/
        v18 = 2; /*0x659e2f*/
        goto LABEL_34; /*0x659e31*/
      }
      if ( v12->GetProcessLevel(v12) != 2 ) /*0x659dee*/
        self->vtbl->MoveToMiddleLow(self); /*0x659dfe*/
      break; /*0x659e00*/
    case 3: /*0x659cd5*/
      v14 = self->process; /*0x659e3c*/
      if ( v14 ) /*0x659e41*/
      {
        if ( v14->GetProcessLevel(v14) != 3 ) /*0x659e4d*/
          self->vtbl->MoveToLow(self); /*0x659e59*/
      }
      else
      {
        v15 = (LowProcess *)FormHeapAlloc(0x90u); /*0x659e62*/
        v20 = (HighProcess *)v15; /*0x659e6a*/
        v21 = 3; /*0x659e70*/
        if ( v15 ) /*0x659e78*/
          v9 = (HighProcess *)LowProcess::LowProcess(v15); /*0x659e7c*/
        else
          v9 = 0; /*0x659e83*/
        v18 = 3; /*0x659e8b*/
LABEL_34:
        v21 = 0xFFFFFFFF; /*0x659e8d*/
        self->process = v9; /*0x659e9b*/
        ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], self, v18, 0, 0, 0); /*0x659e9e*/
      }
      break; /*0x659e5b*/
    default:
      break;
  }
  if ( self->vtbl->super.GetNiNode(self) ) /*0x659ead*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(self); /*0x659eb7*/
    if ( !TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) || destination ) /*0x659ed1*/
      ((void (__thiscall *)(MobileObject *, _DWORD))self->vtbl->super.Set3D)(self, 0); /*0x659edf*/
  }
  TESObjectREFR_LoadModifiedForm((TESObjectREFR *)self, changeMask, currentFlags); /*0x659eed*/
  v17 = self->process; /*0x659ef2*/
  if ( v17 ) /*0x659ef7*/
    v17->LoadGame(v17, changeMask, currentFlags, self); /*0x659f04*/
}
