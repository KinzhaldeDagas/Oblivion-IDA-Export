void __thiscall sub_776B10(_DWORD *this)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // ebp
  _DWORD *v8; // esi
  TESObjectCELL *v9; // eax
  bool v10; // zf
  TESObjectCELL *v11; // ecx
  int v12; // [esp-8h] [ebp-20h]
  TESObjectCELL *v13; // [esp+Ch] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v14; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 1);
  v3 = 0;
  if ( v2 )
  {
    v4 = (_DWORD *)*(this + 2);
    v5 = v4;
    while ( !*v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
    v6 = (NiTMap_Entry_TESCELL *)v4[v3];
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  v14 = v6;
  while ( v14 )
  {
    v13 = 0;
    sub_452600((NiTMap_TESCELL *)this, &v14, (void **)&v15, &v13);
    v7 = v13;
    if ( v13 )
    {
      (*(void (__stdcall **)(_DWORD, TESForm::ModReferenceList *, _DWORD))(*(_DWORD *)*(this + 8) + 0xD4))(
        *(this + 8),
        v13[1].members.super.modlist.next,
        0);
      v8 = v15;
      v12 = (int)v15;
      BYTE1(v7[1].members.fullName.vtbl) = 0;
      NiTMap_RemoveAt(this, v12);
      v9 = (TESObjectCELL *)*(this + 5);
      if ( v9 )
      {
        while ( 1 )
        {
          v10 = v8 == (_DWORD *)v9->members.super.flags;
          v11 = v9;
          v9 = (TESObjectCELL *)v9->vtbl;
          if ( v10 )
            break;
          if ( !v9 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v11 = 0;
      }
      v13 = v11;
      if ( v11 )
        sub_7AA860((BSTextureManager *)(this + 4), (NiTPointerList_Node_void **)&v13);
      v8[0x41] = 0;
      FormHeapFree((unsigned int)v7);
    }
  }
}
