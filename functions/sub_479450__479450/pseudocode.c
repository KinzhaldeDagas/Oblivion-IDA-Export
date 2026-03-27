int __cdecl sub_479450(const char *a1, int a2, TESObjectREFR *a3, int *a4)
{
  UInt32 v5; // esi
  NiObjectNET *v6; // ebx
  Ni2DBuffer *v7; // eax
  int v8; // ebp
  int v9; // ebx
  int *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  UInt32 v15; // [esp+14h] [ebp-2Ch] BYREF
  void (__stdcall ***v16)(signed int); // [esp+18h] [ebp-28h] BYREF
  void (__thiscall ***v17)(_DWORD, int); // [esp+1Ch] [ebp-24h]
  float v18; // [esp+28h] [ebp-18h]
  float v19; // [esp+2Ch] [ebp-14h]
  float v20; // [esp+30h] [ebp-10h]
  int v21; // [esp+3Ch] [ebp-4h]
  int *a1a; // [esp+44h] [ebp+4h]

  v5 = 0;
  if ( !a1 )
    return 0;
  if ( !a3 )
    return 0;
  a1a = a4;
  if ( !a4 )
  {
    a1a = (int *)a3->member.niNode;
    if ( !a1a )
      return 0;
  }
  v6 = (NiObjectNET *)sub_439EB0((int *)ModelLoaderPtr, a1, 1, (void *)3, 1);
  sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v16);
  v20 = 1.0;
  v19 = 1.0;
  v18 = 1.0;
  v21 = 1;
  v15 = 0;
  if ( sub_480820(v6) )
  {
    v7 = (Ni2DBuffer *)sub_4430C0(v6, (int)&v16);
    NiSmartPointer_Set__((Ni2DBuffer **)&v15, v7);
    v8 = v15;
    v5 = v15;
  }
  else
  {
    v8 = sub_700610(v6, (int)&v16);
  }
  sub_478220(v6, v8, a2, a3);
  sub_6FFC60((_DWORD *)v8);
  if ( v8 )
  {
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v8) )
      sub_4A01B0((_BYTE *)v8, 7);
    *(float *)(v8 + 0x54) = Vector3_InitValue_;
    *(float *)(v8 + 0x58) = *(&Vector3_InitValue_ + 1);
    *(float *)(v8 + 0x5C) = dword_B3F9B0;
    qmemcpy((void *)(v8 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
    if ( sub_471B80(v8) )
    {
      PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v8 + 8));
    }
    else
    {
      sub_479140(a1a, (_DWORD *)v8, v6, 0, 0xFFFFFFFF);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
      {
        v9 = *(_DWORD *)(v8 + 0x1C);
        v10 = 0;
        if ( (!v9 || a2 == 7 || a2 == 6) && a2 != 0xFFFFFFFF )
        {
          v11 = *(_DWORD *)(4 * a2 + 0xB065C8);
          if ( v11 != 0xFFFFFFFF )
            v10 = (int *)NiObjectNET_LookupObjectByName(a1a, *(char **)(4 * v11 + 0xB06550));
        }
        if ( v9 )
        {
          if ( a2 != 7 && a2 != 6 )
            goto LABEL_31;
          v12 = ((int (__thiscall *)(TESObjectREFR *))a3->vtbl->Unk_5A)(a3);
          if ( v12 )
          {
            if ( *(_DWORD *)(v8 + 0x1C) == *(_DWORD *)(v12 + 0x20) )
              goto LABEL_31;
          }
          if ( !v10 )
            goto LABEL_31;
          v13 = *v10;
        }
        else if ( v10 )
        {
          v13 = *v10;
        }
        else
        {
          v13 = *a1a;
        }
        (*(void (__stdcall **)(int, int))(v13 + 0x84))(v8, 1);
      }
    }
LABEL_31:
    NiNode_UpdateDynamicEffectState((NiNode *)v8);
    NiAVObject_InitializePropertyState((NiAVObject *)v8);
    v5 = v15;
  }
  LOBYTE(v21) = 0;
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1);
  }
  v21 = 0xFFFFFFFF;
  if ( v16 )
    ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v16)(v16, 1);
  if ( v17 )
    (**v17)(v17, 1);
  return v8;
}
