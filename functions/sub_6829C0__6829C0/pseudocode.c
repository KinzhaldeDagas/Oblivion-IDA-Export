int __thiscall sub_6829C0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v2; // ebp
  unsigned int v3; // esi
  unsigned int v4; // eax
  _DWORD *v5; // edx
  NiTMap_Entry_TESCELL *v6; // eax
  void *vtbl; // esi
  NiTMap_Entry_TESCELL *v9; // [esp+8h] [ebp-8h] BYREF
  void *v10; // [esp+Ch] [ebp-4h] BYREF

  sub_49F470((struct _RTL_CRITICAL_SECTION *)&qword_B3BB2C[0x135]); /*0x6829cc*/
  v2 = this + 4; /*0x6829d5*/
  if ( !*((_DWORD *)this + 0x10) ) /*0x6829d1*/
  {
    v3 = *((_DWORD *)this + 5); /*0x6829e3*/
    v4 = 0; /*0x6829e6*/
    if ( v3 ) /*0x6829ea*/
    {
      v5 = *((_DWORD **)this + 6); /*0x6829ef*/
      while ( !*v5 ) /*0x6829f4*/
      {
        ++v4; /*0x6829fa*/
        ++v5; /*0x6829fd*/
        if ( v4 >= v3 ) /*0x682a02*/
          goto LABEL_6; /*0x682a02*/
      }
      v6 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 6) + 4 * v4); /*0x682a81*/
    }
    else
    {
LABEL_6:
      v6 = 0; /*0x682a04*/
    }
    v9 = v6; /*0x682a08*/
    if ( v6 ) /*0x682a0c*/
      NiTMap_U32Pointer_GetNextEntry(this + 1, &v9, &v10, (TESObjectCELL **)this + 0x10); /*0x682a19*/
    if ( !v2->vtbl ) /*0x682a1e*/
    {
      v9 = (NiTMap_Entry_TESCELL *)NiTMapBase_GetFirstNode((unsigned int *)this + 8); /*0x682a30*/
      if ( v9 ) /*0x682a34*/
        NiTMap_U32Pointer_GetNextEntry(this + 2, &v9, &v10, (TESObjectCELL **)this + 0x10); /*0x682a43*/
    }
    vtbl = v2->vtbl; /*0x682a48*/
    if ( v2->vtbl ) /*0x682a48*/
    {
      sub_42FA10((int)this, (int)"PathBuilder", 2); /*0x682a58*/
      sub_42FC90(this, 0); /*0x682a61*/
      *((_DWORD *)this + 0x11) = vtbl; /*0x682a68*/
      sub_42FD10(this); /*0x682a6b*/
    }
  }
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&qword_B3BB2C[0x135]); /*0x682a72*/
}
