void __stdcall sub_4BCEF0(int a1)
{
  int v1; // edi
  unsigned int v2; // eax
  unsigned __int16 v3; // dx
  TESObjectCELL *v4; // esi
  int v5; // eax
  int v6; // edi
  NiAVObject *v7; // esi
  unsigned int v8; // [esp+24h] [ebp-2Ch]
  unsigned int a2; // [esp+28h] [ebp-28h]
  unsigned int v10; // [esp+2Ch] [ebp-24h]
  TESObjectCELL *v11; // [esp+40h] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *v12; // [esp+44h] [ebp-Ch] BYREF
  int v13; // [esp+48h] [ebp-8h]
  unsigned int v14; // [esp+4Ch] [ebp-4h]

  v1 = a1;
  if ( a1 && *(_BYTE *)(a1 + 0x28) && *(_DWORD *)(a1 + 0x20) && *(_DWORD *)(a1 + 0x1C) )
  {
    v2 = sub_7B2110(*(_WORD *)a1, *(_WORD *)(a1 + 4));
    v3 = *(_WORD *)(v1 + 4);
    v14 = v2;
    v13 = sub_4EF1D0(*(_WORD *)v1, v3);
    v12 = (NiTMap_Entry_TESCELL *)sub_6A9030((_DWORD *)(v1 + 0xC));
    while ( v12 )
    {
      a1 = 0;
      v11 = 0;
      sub_452600((NiTMap_TESCELL *)(v1 + 0xC), &v12, (void **)&a1, &v11);
      v4 = v11;
      if ( !a1 )
        goto LABEL_10;
      if ( v11 )
      {
        v5 = *(_DWORD *)v11->members.extraData.members.m_presenceBitfield;
        if ( v5 )
          (*(void (__stdcall **)(TESForm::ModReferenceList *, _DWORD, _DWORD, int, unsigned int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x11C))(
            v11->members.super.modlist.next,
            *(_DWORD *)&v11->members.super.type,
            *(_DWORD *)&v11->members.flags0,
            v5,
            v14,
            v13,
            *(_DWORD *)(v1 + 0x1C),
            *(_DWORD *)(v1 + 0x20));
LABEL_10:
        if ( v4 )
        {
          v10 = *(_DWORD *)&v4->members.flags0;
          *(_DWORD *)&v4->members.fullName.name.m_dataLen = &NiTArray<float>::`vftable';
          FormHeapFree(v10);
          a2 = (unsigned int)v4->members.super.modlist.next;
          v4->members.super.modlist.data = (Data *)&NiTArray<float>::`vftable';
          FormHeapFree(a2);
          v8 = *(_DWORD *)&v4->members.super.type;
          v4->vtbl = (TESFormVtbl *)&NiTArray<float>::`vftable';
          FormHeapFree(v8);
          FormHeapFree((unsigned int)v4);
        }
      }
    }
    NiTMap_Clear((_DWORD *)(v1 + 0xC));
    v6 = *(_DWORD *)(v1 + 0x20);
    v7 = (NiAVObject *)dword_B34424;
    if ( *(_DWORD *)(v6 + 4) > 2u )
      ((void (__thiscall *)(NiAVObject *, int, int))v7->vtbl[1].super.super.Destructor)(v7, v6, 1);
    NiAVObject_UpdateNiAVObject(v7, 0.0, 1);
    NiAVObject_InitializePropertyState(v7);
  }
}
