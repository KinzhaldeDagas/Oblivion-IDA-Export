void __thiscall sub_4BD230(_DWORD *this)
{
  unsigned int v2; // ecx
  NiTMap_TESCELL *v3; // ebp
  unsigned int v4; // eax
  _DWORD *v5; // edx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // edi
  int v10; // esi
  unsigned int v11; // [esp-Ch] [ebp-3Ch]
  unsigned int next; // [esp-8h] [ebp-38h]
  unsigned int v13; // [esp-4h] [ebp-34h]
  TESObjectCELL *v14; // [esp+14h] [ebp-1Ch] BYREF
  NiTMap_Entry_TESCELL *v15; // [esp+18h] [ebp-18h] BYREF
  _DWORD *v16; // [esp+1Ch] [ebp-14h]
  void *v17; // [esp+20h] [ebp-10h] BYREF
  int v18; // [esp+2Ch] [ebp-4h]

  v16 = this;
  v2 = *(this + 4);
  v3 = (NiTMap_TESCELL *)(v16 + 3);
  v4 = 0;
  v18 = 2;
  if ( v2 )
  {
    v5 = (_DWORD *)v16[5];
    while ( !*v5 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v2 )
        goto LABEL_5;
    }
    v6 = *(NiTMap_Entry_TESCELL **)(v16[5] + 4 * v4);
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  v15 = v6;
  while ( v15 )
  {
    v14 = 0;
    sub_452600(v3, &v15, &v17, &v14);
    v7 = v14;
    if ( v14 )
    {
      v13 = *(_DWORD *)&v14->members.flags0;
      *(_DWORD *)&v14->members.fullName.name.m_dataLen = &NiTArray<float>::`vftable';
      FormHeapFree(v13);
      next = (unsigned int)v7->members.super.modlist.next;
      v7->members.super.modlist.data = (Data *)&NiTArray<float>::`vftable';
      FormHeapFree(next);
      v11 = *(_DWORD *)&v7->members.super.type;
      v7->vtbl = (TESFormVtbl *)&NiTArray<float>::`vftable';
      FormHeapFree(v11);
      FormHeapFree((unsigned int)v7);
    }
  }
  NiTMap_Clear(v3);
  v8 = *(this + 8);
  v9 = InterlockedDecrement;
  LOBYTE(v18) = 1;
  if ( v8 )
  {
    if ( !v9((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v10 = *(this + 7);
  LOBYTE(v18) = 0;
  if ( v10 )
  {
    if ( !v9((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v18 = 0xFFFFFFFF;
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>((unsigned int *)v3);
}
