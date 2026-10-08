_DWORD *__thiscall TESActorBaseData_CopyFrom(unsigned int *this, void *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi
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
  _DWORD *v15; // ebp
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  unsigned int *v18; // [esp+1Ch] [ebp+4h]

  result = OblivionDynamicCast( /*0x467407*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESActorBaseData `RTTI Type Descriptor',
             0);
  v4 = result; /*0x46740c*/
  if ( result ) /*0x467413*/
  {
    v5 = result[1]; /*0x467419*/
    v6 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50); /*0x46741e*/
    *(this + 1) = v5; /*0x467422*/
    v6(this, 0x10); /*0x467429*/
    v7 = (*(int (__thiscall **)(_DWORD *))(*v4 + 0x48))(v4); /*0x467432*/
    v8 = *this; /*0x467434*/
    *((_WORD *)this + 4) = v7; /*0x467436*/
    (*(void (__thiscall **)(unsigned int *, int))(v8 + 0x50))(this, 0x10); /*0x467441*/
    v9 = (*(int (__thiscall **)(_DWORD *))(*v4 + 0x4C))(v4); /*0x46744a*/
    v10 = *this; /*0x46744c*/
    *((_WORD *)this + 5) = v9; /*0x46744e*/
    (*(void (__thiscall **)(unsigned int *, int))(v10 + 0x50))(this, 0x10); /*0x467459*/
    v11 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50); /*0x467461*/
    *((_WORD *)this + 6) = *((_WORD *)v4 + 6); /*0x467464*/
    v11(this, 0x10); /*0x46746c*/
    v12 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50); /*0x467474*/
    *((_WORD *)this + 7) = *((_WORD *)v4 + 7); /*0x467477*/
    v12(this, 0x10); /*0x46747f*/
    v13 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50); /*0x467487*/
    *((_WORD *)this + 8) = *((_WORD *)v4 + 8); /*0x46748a*/
    v13(this, 0x10); /*0x467492*/
    v14 = *(void (__thiscall **)(unsigned int *, int))(*this + 0x50); /*0x46749a*/
    *((_WORD *)this + 9) = *((_WORD *)v4 + 9); /*0x46749d*/
    v14(this, 0x10); /*0x4674a5*/
    TESActorBaseData_ClearFactionList(this); /*0x4674a9*/
    v15 = v4 + 6; /*0x4674ae*/
    v18 = this + 6; /*0x4674b6*/
    if ( v4 != (_DWORD *)0xFFFFFFE8 ) /*0x4674ba*/
    {
      do /*0x4674f9*/
      {
        v16 = (_DWORD *)*v15; /*0x4674c0*/
        if ( *v15 ) /*0x4674c0*/
        {
          v17 = (_DWORD *)FormHeapAlloc(8u); /*0x4674c9*/
          *v17 = *v16; /*0x4674d0*/
          v17[1] = v16[1]; /*0x4674d8*/
          BSSimpleList_PushBack(v18, (int)v17); /*0x4674e0*/
        }
        if ( v18[1] ) /*0x4674e9*/
          v18 = (unsigned int *)v18[1]; /*0x4674f0*/
        v15 = (_DWORD *)v15[1]; /*0x4674f4*/
      }
      while ( v15 ); /*0x4674f9*/
    }
    result = (_DWORD *)v4[5]; /*0x4674fc*/
    *(this + 5) = (unsigned int)result; /*0x4674ff*/
  }
  return result; /*0x467503*/
}
