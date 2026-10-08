void __thiscall sub_6974F0(Concurrency::details::SchedulerBase *this, int a2, int a3)
{
  UInt32 v8; // eax
  TESForm *v9; // eax
  void *v10; // eax
  int v11; // eax
  Ni2DBuffer *v12; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v14; // eax
  void *v15; // ebx
  unsigned int v16; // edi
  int *sound; // edi
  _DWORD *v18; // eax
  float *v19; // eax

  sub_69F1E0((TESObjectREFR *)this, a2, a3); /*0x697502*/
  v8 = *((_DWORD *)this + 0x26); /*0x697507*/
  if ( v8 ) /*0x69750f*/
  {
    v9 = TESForm_LookupByFormID(v8); /*0x697520*/
    v10 = OblivionDynamicCast( /*0x697529*/
            v9,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
            0);
    *((_DWORD *)this + 0x26) = v10; /*0x697533*/
    if ( v10 ) /*0x697539*/
    {
      v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x154))(v10); /*0x697545*/
      if ( v11 ) /*0x697549*/
      {
        v12 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v11 + 0x58))(v11, "Bip01 Spine2"); /*0x697557*/
        NiSmartPointer_Set__((Ni2DBuffer **)this + 0x24, v12); /*0x697560*/
      }
    }
  }
  sub_696CE0(this); /*0x697567*/
  MobileObject_SetNiNode((MobileObject *)this, *((NiAVObject **)this + 0x22)); /*0x697575*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x69757d*/
  TESObjectCELL_AddReference(DwordAtOffset40, (TESObjectREFR *)this); /*0x697584*/
  v14 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + 0x84); /*0x69758c*/
  if ( v14 ) /*0x697594*/
  {
    v15 = *(void **)(v14 + 0xC); /*0x69759b*/
    v16 = *((_DWORD *)this + 0x27); /*0x69759f*/
    if ( v16 ) /*0x6975a7*/
    {
      sub_6B73E0(*((_DWORD **)this + 0x27)); /*0x6975ab*/
      FormHeapFree(v16); /*0x6975b1*/
      *((_DWORD *)this + 0x27) = 0; /*0x6975b9*/
    }
    sound = (int *)MEMORY[0xB33398]->sound; /*0x6975c8*/
    if ( sound ) /*0x6975cd*/
    {
      if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x154))(this) ) /*0x6975dd*/
      {
        v18 = OSGLobals_PlaySound(sound, v15, 0x102, 1); /*0x6975f1*/
        *((_DWORD *)this + 0x27) = v18; /*0x6975f8*/
        if ( v18 ) /*0x6975fe*/
        {
          v19 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x174))(this); /*0x69760a*/
          sub_6B7360(*((int **)this + 0x27), *v19, v19[1], v19[2]); /*0x697640*/
          sub_6AA980((_DWORD **)sound, **((_DWORD **)this + 0x27), *((_DWORD *)this + 0x25)); /*0x697657*/
          sub_6B7190(*((int **)this + 0x27), 1); /*0x697664*/
        }
      }
    }
  }
}
