void __thiscall sub_7166B0(NiRenderer *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_6EBA80(this, (int)a2);
  this->members.pad014[2] = sub_712A90(v2);
  v4 = v2[0x87];
  a2 = 0;
  v8 = v4;
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v4 + 4);
  v9 = 4;
  v5(v8, &a2, 4, &v9, 1);
  while ( a2 )
  {
    a2 = (_DWORD *)((char *)a2 + 0xFFFFFFFF);
    v9 = 0;
    sub_713620(v2, (int)&v9);
    v6 = sub_712A90(v2);
    v7 = v9;
    if ( v9 )
    {
      if ( v6 )
      {
        ((void (__thiscall *)(NiRenderer *, int, int))this->__vftable->GetRendererDesc)(this, v9, v6);
        v7 = v9;
      }
    }
    FormHeapFree(v7);
  }
}
