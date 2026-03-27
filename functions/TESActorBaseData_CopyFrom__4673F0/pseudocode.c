_DWORD *__thiscall TESActorBaseData_CopyFrom(unsigned int *this, void *a2)
{
  _DWORD *result; // eax
  int v4; // edi
  unsigned int v5; // ecx
  void (__thiscall *v6)(unsigned int *, int); // eax
  __int16 v7; // ax
  unsigned int v8; // edx
  __int16 v9; // ax
  unsigned int v10; // edx
  void (__thiscall *v11)(unsigned int *, int); // eax
  void (__thiscall *v12)(unsigned int *, int); // eax
  void (__thiscall *v13)(unsigned int *, int); // eax
  void (__thiscall *v14)(unsigned int *, int); // eax
  int v15; // ebp
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  unsigned int *v18; // [esp+1Ch] [ebp+4h]

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESActorBaseData `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    v5 = result[1];
    v6 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50);
    *(this + 1) = v5;
    v6(this, 0x10);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x48))(v4);
    v8 = *this;
    *((_WORD *)this + 4) = v7;
    (*(void (__thiscall **)(unsigned int *, int))(v8 + 0x50))(this, 0x10);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x4C))(v4);
    v10 = *this;
    *((_WORD *)this + 5) = v9;
    (*(void (__thiscall **)(unsigned int *, int))(v10 + 0x50))(this, 0x10);
    v11 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50);
    *((_WORD *)this + 6) = *(_WORD *)(v4 + 0xC);
    v11(this, 0x10);
    v12 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50);
    *((_WORD *)this + 7) = *(_WORD *)(v4 + 0xE);
    v12(this, 0x10);
    v13 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50);
    *((_WORD *)this + 8) = *(_WORD *)(v4 + 0x10);
    v13(this, 0x10);
    v14 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50);
    *((_WORD *)this + 9) = *(_WORD *)(v4 + 0x12);
    v14(this, 0x10);
    TESActorBaseData_ClearFactionList(this);
    v15 = v4 + 0x18;
    v18 = this + 6;
    if ( v4 != 0xFFFFFFE8 )
    {
      do
      {
        v16 = *(_DWORD **)v15;
        if ( *(_DWORD *)v15 )
        {
          v17 = (_DWORD *)FormHeapAlloc(8u);
          *v17 = *v16;
          v17[1] = v16[1];
          BSSimpleList_PushBack(v18, (int)v17);
        }
        if ( v18[1] )
          v18 = (unsigned int *)v18[1];
        v15 = *(_DWORD *)(v15 + 4);
      }
      while ( v15 );
    }
    result = *(_DWORD **)(v4 + 0x14);
    *(this + 5) = (unsigned int)result;
  }
  return result;
}
