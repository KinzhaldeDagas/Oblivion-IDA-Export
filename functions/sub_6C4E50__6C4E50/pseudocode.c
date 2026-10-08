_DWORD *__thiscall sub_6C4E50(int *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  _DWORD *result; // eax
  Ni2DBuffer *v6; // eax
  unsigned int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6c4e52*/
  NiTimeController_LoadBinary((NiRenderer *)this, (signed int)a2); /*0x6c4e5a*/
  v7 = v2[0x87]; /*0x6c4e73*/
  v4 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v7 + 4); /*0x6c4e74*/
  v8 = 1; /*0x6c4e77*/
  v4(v7, &a2, 1, &v8, 1); /*0x6c4e7f*/
  *((_BYTE *)this + 0x6C) = (_BYTE)a2 != 0; /*0x6c4e8c*/
  result = (_DWORD *)sub_712AE0(v2); /*0x6c4e91*/
  if ( v2[0x36] >= 0xA010068 ) /*0x6c4ea0*/
  {
    v6 = (Ni2DBuffer *)sub_712A90(v2); /*0x6c4ea4*/
    return NiSmartPointer_Set__((Ni2DBuffer **)this + 0x1F, v6); /*0x6c4ead*/
  }
  return result; /*0x6c4eb2*/
}
