void __thiscall sub_68A280(_DWORD *this, _DWORD *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = (_BYTE *)FormHeapAlloc(8u);
  v4 = 0;
  if ( v3 )
    v4 = sub_68B0C0(v3);
  sub_68B1D0((int)v4, 1);
  sub_68B200((_DWORD **)v4, a2);
  BSSimpleList_PushBack(this + 1, (int)v4);
}
