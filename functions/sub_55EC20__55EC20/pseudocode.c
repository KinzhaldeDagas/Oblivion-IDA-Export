int __thiscall sub_55EC20(NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> **this, int a2)
{
  int v3; // esi
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *v5; // eax
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *v6; // eax
  _DWORD *v7; // eax
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *v8; // ecx
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  v9 = 0;
  if ( !a2 )
    return 0;
  if ( !*this )
  {
    v5 = (NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *)FormHeapAlloc(0x10u);
    v10 = 0;
    if ( v5 )
      v6 = NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(
             v5,
             0x25u);
    else
      v6 = 0;
    v10 = 0xFFFFFFFF;
    *this = v6;
  }
  if ( NiTMap_GetAt(*this, a2, &v9) )
    return v9;
  v7 = (_DWORD *)FormHeapAlloc(8u);
  v10 = 1;
  if ( v7 )
  {
    v3 = (int)(v7 + 1);
    *v7 = 1;
    ArrayConstructor(
      v7 + 1,
      4u,
      1,
      (int)Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))sub_7016A0);
  }
  v8 = *this;
  v10 = 0xFFFFFFFF;
  NiTMap_SetAt(v8, a2, v3);
  return v3;
}
