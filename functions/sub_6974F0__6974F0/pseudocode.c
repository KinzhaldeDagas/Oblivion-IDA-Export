void __userpurge sub_6974F0(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  UInt32 v8; // eax
  TESForm *v9; // eax
  void *v10; // eax
  int v11; // eax
  Ni2DBuffer *v12; // eax
  TESObjectCELL *ParentCell; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  _DWORD **sound; // edi
  int v18; // eax
  float *v19; // eax

  sub_69F1E0((int *)a1, a2, a3, a4, a5, a6, a7);
  v8 = *((_DWORD *)a1 + 0x26);
  if ( v8 )
  {
    v9 = TESForm_LookupByFormID(v8);
    v10 = OblivionDynamicCast(
            v9,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
            0);
    *((_DWORD *)a1 + 0x26) = v10;
    if ( v10 )
    {
      v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x154))(v10);
      if ( v11 )
      {
        v12 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v11 + 0x58))(v11, "Bip01 Spine2");
        NiSmartPointer_Set__((Ni2DBuffer **)a1 + 0x24, v12);
      }
    }
  }
  sub_696CE0(a1);
  sub_4D7D10((MobileObject *)a1, *((volatile LONG **)a1 + 0x22));
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
  sub_4D35D0(ParentCell, a3, a4, a5, (TESObjectREFR *)a1);
  v14 = *(_DWORD *)(*((_DWORD *)a1 + 0x1D) + 0x84);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 0xC);
    v16 = *((_DWORD *)a1 + 0x27);
    if ( v16 )
    {
      sub_6B73E0(*((_DWORD **)a1 + 0x27));
      FormHeapFree(v16);
      *((_DWORD *)a1 + 0x27) = 0;
    }
    sound = (_DWORD **)OSGlobals->sound;
    if ( sound )
    {
      if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1) )
      {
        OSGLobals_PlaySound(v15, 0x102, 1);
        *((_DWORD *)a1 + 0x27) = v18;
        if ( v18 )
        {
          v19 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x174))(a1);
          sub_6B7360(*((int **)a1 + 0x27), *v19, v19[1], v19[2]);
          sub_6AA980(sound, **((_DWORD **)a1 + 0x27), *((_DWORD *)a1 + 0x25));
          sub_6B7190(*((int **)a1 + 0x27), 1);
        }
      }
    }
  }
}
