TESRegion *__thiscall sub_4A2ED0(_DWORD *this, TESRegion *a1)
{
  TESRegion *v3; // eax
  TESRegion *v4; // eax
  int v5; // ebx
  TESRegion *v6; // ebp
  int *areas; // esi
  int v8; // edi
  int *v9; // eax

  v3 = a1; /*0x4a2ef6*/
  if ( !a1 ) /*0x4a2efc*/
  {
    v4 = (TESRegion *)FormHeapAlloc(0x2Cu); /*0x4a2f00*/
    if ( v4 ) /*0x4a2f16*/
      v3 = TESRegion_ctor(v4); /*0x4a2f1a*/
    else
      v3 = 0; /*0x4a2f21*/
  }
  v5 = *(this + 7); /*0x4a2f2b*/
  v6 = v3; /*0x4a2f2e*/
  TESForm_CopyFrom(&v3->form); /*0x4a2f33*/
  sub_4A44D0((int *)*(this + 6), (int)v6->dataList); /*0x4a2f3f*/
  for ( ; v5; v5 = *(_DWORD *)(v5 + 4) ) /*0x4a2f46*/
  {
    if ( !*(_DWORD *)v5 ) /*0x4a2f48*/
      break; /*0x4a2f4c*/
    areas = (int *)v6->areas; /*0x4a2f4e*/
    v8 = sub_4A77F0(*(_BYTE **)v5, 0); /*0x4a2f58*/
    if ( v8 ) /*0x4a2f5c*/
    {
      if ( *areas ) /*0x4a2f5e*/
      {
        v9 = (int *)FormHeapAlloc(8u); /*0x4a2f65*/
        if ( v9 ) /*0x4a2f6f*/
        {
          *v9 = *areas; /*0x4a2f73*/
          v9[1] = 0; /*0x4a2f75*/
        }
        else
        {
          v9 = 0; /*0x4a2f7e*/
        }
        v9[1] = areas[1]; /*0x4a2f83*/
        areas[1] = (int)v9; /*0x4a2f86*/
      }
      *areas = v8; /*0x4a2f89*/
    }
  }
  return v6; /*0x4a2f94*/
}
