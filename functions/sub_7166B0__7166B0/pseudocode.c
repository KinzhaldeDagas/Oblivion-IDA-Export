void __thiscall sub_7166B0(NiRenderer *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x7166b2*/
  sub_6EBA80(this, (int)a2); /*0x7166ba*/
  this->members.pad014[2] = sub_712A90(v2); /*0x7166cd*/
  v4 = v2[0x87]; /*0x7166d0*/
  a2 = 0; /*0x7166dd*/
  v8 = v4; /*0x7166e5*/
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v4 + 4); /*0x7166e6*/
  v9 = 4; /*0x7166e9*/
  v5(v8, &a2, 4, &v9, 1); /*0x7166f1*/
  while ( a2 ) /*0x7166fb*/
  {
    a2 = (_DWORD *)((char *)a2 + 0xFFFFFFFF); /*0x716700*/
    v9 = 0; /*0x71670c*/
    sub_713620(v2, (int)&v9); /*0x716714*/
    v6 = sub_712A90(v2); /*0x71671b*/
    v7 = v9; /*0x716720*/
    if ( v9 ) /*0x716726*/
    {
      if ( v6 ) /*0x71672a*/
      {
        ((void (__thiscall *)(NiRenderer *, int, int))this->__vftable->GetRendererDesc)(this, v9, v6); /*0x716735*/
        v7 = v9; /*0x716737*/
      }
    }
    FormHeapFree(v7); /*0x71673c*/
  }
}
