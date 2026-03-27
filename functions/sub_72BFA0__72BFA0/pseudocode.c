int *__thiscall sub_72BFA0(int *this, int *a2)
{
  NiObject *v4; // eax
  NiObject *v5; // esi
  unsigned int v6; // edi
  bool v7; // zf
  NiObject *v8; // eax
  unsigned int v9; // ebx
  NiObject *v10; // eax
  NiObject *v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h]

  if ( !sub_72BCA0(this, a2) )
    return this;
  v4 = (NiObject *)FormHeapAlloc(0x2Cu);
  v5 = v4;
  v11 = v4;
  v6 = 0;
  v12 = 0;
  if ( v4 )
  {
    NiObject_constr(v4);
    v5->__vftable = (NiObjectVtbl *)&NiSkinInstance::`vftable';
    v5[1].__vftable = 0;
    v5[1].members.m_uiRefCount = 0;
    v5[2].__vftable = 0;
    v5[2].members.m_uiRefCount = 0;
    v5[3].__vftable = (NiObjectVtbl *)0xFFFFFFFF;
    v5[3].members.m_uiRefCount = 0;
    v5[4].__vftable = 0;
    v5[4].members.m_uiRefCount = 0;
    v5[5].__vftable = 0;
  }
  else
  {
    v5 = 0;
  }
  v12 = 0xFFFFFFFF;
  sub_72BC00(this, (int)v5, (_DWORD **)a2);
  v7 = NiTMap_GetAt((_DWORD *)*a2, *(this + 4), &v11) == 0;
  v8 = v11;
  if ( v7 )
    v8 = (NiObject *)*(this + 4);
  v5[2].__vftable = (NiObjectVtbl *)v8;
  v9 = *(_DWORD *)(*(this + 2) + 0x40);
  v5[2].members.m_uiRefCount = FormHeapAlloc((unsigned __int64)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9);
  if ( v9 )
  {
    do
    {
      if ( NiTMap_GetAt((_DWORD *)*a2, *(_DWORD *)(*(this + 5) + 4 * v6), &v11) )
        v10 = v11;
      else
        v10 = *(NiObject **)(*(this + 5) + 4 * v6);
      *(_DWORD *)(v5[2].members.m_uiRefCount + 4 * v6++) = v10;
    }
    while ( v6 < v9 );
  }
  return (int *)v5;
}
