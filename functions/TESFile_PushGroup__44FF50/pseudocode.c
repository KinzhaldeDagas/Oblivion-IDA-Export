void __thiscall TESFile_PushGroup(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi

  if ( a2 ) /*0x44ff5a*/
  {
    v3 = (_DWORD *)FormHeapAlloc(0x18u);        // MEF v44 decode-only rejection: TESFile_PushGroup allocation is unchecked, but its void caller immediately assumes +0x284 changed and writes through current top. Local skip would corrupt group state; not implemented. /*0x44ff67*/
    BSSimpleList_PushFront(this + 0xA1, (int)v3); /*0x44ff70*/
    *v3 = *a2; /*0x44ff77*/
    v3[1] = a2[1]; /*0x44ff7c*/
    v3[2] = a2[2]; /*0x44ff82*/
    v3[3] = a2[3]; /*0x44ff88*/
    v3[4] = a2[4]; /*0x44ff8e*/
  }
}
