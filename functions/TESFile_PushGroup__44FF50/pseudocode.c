void __thiscall TESFile_PushGroup(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi

  if ( a2 )
  {
    v3 = (_DWORD *)FormHeapAlloc(0x18u);
    BSSimpleList_PushFront(this + 0xA1, (int)v3);
    *v3 = *a2;
    v3[1] = a2[1];
    v3[2] = a2[2];
    v3[3] = a2[3];
    v3[4] = a2[4];
  }
}
