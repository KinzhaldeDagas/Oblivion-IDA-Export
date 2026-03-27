int __thiscall sub_75DCA0(int *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v6)(unsigned int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v7)(unsigned int, unsigned int *, int, int *, int); // edx
  NiTArray_NiTexturingPropertyMap *v8; // ebp
  unsigned int i; // esi
  void (__cdecl *v10)(unsigned int, unsigned int *, int, int *, int); // eax
  int v11; // eax
  unsigned int v12; // [esp-44h] [ebp-58h]
  unsigned int v13; // [esp-30h] [ebp-44h]
  unsigned int v14; // [esp-1Ch] [ebp-30h]
  unsigned int v15; // [esp-1Ch] [ebp-30h]
  unsigned int v16; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v17; // [esp+Ch] [ebp-8h] BYREF
  int v18; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_759DE0(this, (signed int)a2);
  if ( v2[0x36] > 0xA010000 )
  {
    v14 = v2[0x87];
    v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v14 + 4);
    v18 = 4;
    v5(v14, this + 0x1C, 4, &v18, 1);
    v13 = v2[0x87];
    v6 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v13 + 4);
    v18 = 1;
    v6(v13, &a2, 1, &v18, 1);
    *((_BYTE *)this + 0x6C) = (_BYTE)a2 != 0;
    v7 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v2[0x87] + 4);
    v12 = v2[0x87];
    v18 = 4;
    v7(v12, &v16, 4, &v18, 1);
    v8 = (NiTArray_NiTexturingPropertyMap *)(this + 0x1D);
    NiTArray_SetSize((unsigned __int16 *)this + 0x3A, v16);
    for ( i = 0; i < v16; ++i )
    {
      v15 = v2[0x87];
      v10 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v15 + 4);
      v18 = 4;
      v10(v15, &v17, 4, &v18, 1);
      if ( v17 )
      {
        v11 = FormHeapAlloc(0x10u);
        if ( v11 )
        {
          *(_DWORD *)v11 = &NiTArray<NiPointer<NiAVObject>>::`vftable';
          *(_WORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 0xE) = 1;
          *(_WORD *)(v11 + 0xA) = 0;
          *(_WORD *)(v11 + 0xC) = 0;
          *(_DWORD *)(v11 + 4) = 0;
        }
        else
        {
          v11 = 0;
        }
        v18 = v11;
        sub_523B10((unsigned __int16 *)v11, v17);
        NiTArray_SetAt(v8, i, &v18);
      }
    }
    return sub_712A20(v2);
  }
  else
  {
    *(this + 0x1C) = *((unsigned __int16 *)this + 4);
    sub_75DB40((unsigned __int16 *)this, 1u);
    return sub_712A20(v2);
  }
}
