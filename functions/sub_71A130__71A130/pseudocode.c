int __thiscall sub_71A130(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // ebx
  int (__cdecl *v4)(int, NiTriBasedGeomData *, int, signed int *, int); // edx
  NiTriBasedGeomData *v5; // edi
  int result; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // ecx
  void (__cdecl *v10)(int, int, int, int *, int); // edx
  int (__cdecl *v11)(int, signed int *, int, int *, int); // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int (__cdecl *v16)(int, int, int, int *, int); // eax
  int v17; // [esp-18h] [ebp-28h]
  int v18; // [esp-18h] [ebp-28h]
  int v19; // [esp-14h] [ebp-24h]
  int v20; // [esp-14h] [ebp-24h]
  int v21; // [esp-14h] [ebp-24h]
  int v22; // [esp-10h] [ebp-20h]
  int v23; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x71a132*/
  sub_732E70(this, a2); /*0x71a13b*/
  v4 = *(int (__cdecl **)(int, NiTriBasedGeomData *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x71a146*/
  v5 = this + 1; /*0x71a152*/
  v19 = *(_DWORD *)(v2 + 0x21C); /*0x71a156*/
  a2 = 2; /*0x71a157*/
  result = v4(v19, this + 1, 2, &a2, 1); /*0x71a15f*/
  if ( *((_WORD *)this + 0x22) )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v7 = 2 * LOWORD(v5->__vftable); /*0x71a186*/
      v8 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this); /*0x71a188*/
      v9 = *(_DWORD *)(v8 + 8); /*0x71a18a*/
      ++*(_DWORD *)(v8 + 0xC); /*0x71a18d*/
      *(_DWORD *)(v8 + 8) = v9 + v7; /*0x71a194*/
      *((_DWORD *)this + 0x12) = v9; /*0x71a197*/
    }
    else
    {
      *((_DWORD *)this + 0x12) = FormHeapAlloc(
                                   (unsigned __int64)LOWORD(v5->__vftable) >> 0x1F != 0
                                 ? 0xFFFFFFFF
                                 : 2 * LOWORD(v5->__vftable));
    }
    v22 = 2 * LOWORD(v5->__vftable); /*0x71a1d4*/
    v10 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x71a1d5*/
    v20 = *((_DWORD *)this + 0x12); /*0x71a1d8*/
    v17 = *(_DWORD *)(v2 + 0x21C); /*0x71a1d9*/
    v23 = 2; /*0x71a1da*/
    v10(v17, v20, v22, &v23, 1); /*0x71a1e2*/
    if ( *(_DWORD *)(v2 + 0xD8) < 0xA000111u ) /*0x71a1f1*/
    {
      LOBYTE(a2) = 1; /*0x71a24d*/
    }
    else
    {
      v18 = *(_DWORD *)(v2 + 0x21C); /*0x71a205*/
      v11 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v18 + 4); /*0x71a206*/
      v23 = 1; /*0x71a209*/
      result = v11(v18, &a2, 1, &v23, 1); /*0x71a20d*/
      if ( !(_BYTE)a2 ) /*0x71a217*/
        return result; /*0x71a217*/
    }
    v12 = (unsigned __int16)(this->members.m_usTriangles + 2 * LOWORD(v5->__vftable)); /*0x71a228*/
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v13 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this); /*0x71a23a*/
      v14 = *(_DWORD *)(v13 + 8); /*0x71a23c*/
      ++*(_DWORD *)(v13 + 0xC); /*0x71a23f*/
      *(_DWORD *)(v13 + 8) = v14 + 2 * v12; /*0x71a245*/
      *((_DWORD *)this + 0x13) = v14; /*0x71a248*/
    }
    else
    {
      *((_DWORD *)this + 0x13) = FormHeapAlloc((unsigned __int64)v12 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v12);
    }
    v15 = *(_DWORD *)(v2 + 0x21C); /*0x71a275*/
    v16 = *(int (__cdecl **)(int, int, int, int *, int))(v15 + 4); /*0x71a282*/
    v21 = *((_DWORD *)this + 0x13); /*0x71a289*/
    v23 = 2; /*0x71a28b*/
    return v16(v15, v21, 2 * v12, &v23, 1); /*0x71a293*/
  }
  return result; /*0x71a299*/
}
