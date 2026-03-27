void __thiscall sub_776780(_DWORD *this)
{
  _DWORD *v2; // edi
  TESObjectCELL *v3; // edx
  int *v4; // ecx
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  NiTMap_Entry_TESCELL *v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF
  TESObjectCELL *v10; // [esp+14h] [ebp-4h] BYREF

  while ( *(this + 3) )
  {
    v8 = (NiTMap_Entry_TESCELL *)sub_6A9030(this);
    sub_452600((NiTMap_TESCELL *)this, &v8, (void **)&v9, &v10);
    v2 = (_DWORD *)v9;
    NiTMap_RemoveAt(this, v9);
    v3 = v10;
    v2[0x41] = 0;
    *(this + ((unsigned int)v3[1].members.super.modlist.next >> 5) + 0x10) &= ~(1 << ((int)v3[1].members.super.modlist.next
                                                                                    & 0x1F));
    FormHeapFree((unsigned int)v3);
  }
  for ( ; *(this + 7); --*(this + 7) )
  {
    v4 = (int *)*(this + 5);
    v5 = *v4;
    v6 = *v4 == 0;
    *(this + 5) = *v4;
    if ( v6 )
      *(this + 6) = 0;
    else
      *(_DWORD *)(v5 + 4) = 0;
    (*(void (__thiscall **)(_DWORD *, int *))(*(this + 4) + 8))(this + 4, v4);
  }
  v7 = *(this + 8);
  if ( v7 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*(this + 8));
    *(this + 8) = 0;
  }
  *(this + 4) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 4));
  *(this + 4) = &NiTListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable';
  *this = &NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable';
  NiTMap_Clear(this);
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
