char __usercall sub_45CE00@<al>(_DWORD *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  NiTMap_Entry_TESCELL *v10; // eax
  AnimSequenceSingle *v11; // esi
  TESForm *v12; // eax
  TESObjectREFR *v13; // eax
  void *v14; // edi
  void *v16; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+Ch] [ebp-8h] BYREF
  int a1; // [esp+10h] [ebp-4h] BYREF

  v5 = *(this + 0x15);
  v6 = *(_DWORD *)(v5 + 4);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_DWORD **)(v5 + 8);
    v9 = v8;
    while ( !*v9 )
    {
      ++v7;
      ++v9;
      if ( v7 >= v6 )
        goto LABEL_5;
    }
    v10 = (NiTMap_Entry_TESCELL *)v8[v7];
  }
  else
  {
LABEL_5:
    v10 = 0;
  }
  for ( i = v10; i; LOBYTE(v10) = NiTMap_RemoveAt((_DWORD *)*(this + 0x15), (int)v11) )
  {
    sub_452600((NiTMap_TESCELL *)*(this + 0x15), &i, (void **)&a1, (TESObjectCELL **)&v16);
    v11 = (AnimSequenceSingle *)a1;
    if ( a1 )
    {
      v12 = TESForm_LookupByFormID(a1);
      v13 = (TESObjectREFR *)OblivionDynamicCast(
                               v12,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
    }
    else
    {
      v13 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    }
    v14 = v16;
    if ( !v13 )
      goto LABEL_15;
    if ( v13->member.niNode )
    {
      sub_458ED0(this, a2, a3, a4, v13, v11, (int)v16);
LABEL_15:
      MemoryHeap_Free_checked(v14);
      continue;
    }
    MemoryHeap_Free_checked(v16);
  }
  if ( *(_DWORD *)(*(this + 0x15) + 0xC) )
    LOBYTE(v10) = (*(char (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                    dword_B34D90,
                    "LoadAnimations() call finished, but still has elements in the map.");
  return (char)v10;
}
