bool __thiscall sub_67D650(int this, MobileObject *a2)
{
  void *v3; // ecx
  NiPoint3 *v4; // edi
  NiPoint3 *Position; // eax
  NiPoint3 *v6; // eax
  NiPoint3 *v7; // eax
  NiPoint3 *v8; // eax
  float v10; // [esp+0h] [ebp-14h]
  float v11; // [esp+0h] [ebp-14h]

  if ( !a2 ) /*0x67d65d*/
    return 0; /*0x67d717*/
  if ( *(_DWORD *)(this + 0x1C) && (v3 = *(void **)(this + 0x24)) != 0 ) /*0x67d66f*/
  {
    v10 = flt_A34A80; /*0x67d678*/
    v4 = (NiPoint3 *)(this + 0xC); /*0x67d67b*/
    Position = PathGraphNode_GetPosition(v3); /*0x67d67e*/
    if ( sub_480520((float *)(this + 0xC), &Position->x, v10) < 0 ) /*0x67d68f*/
    {
      v6 = PathGraphNode_GetPosition(*(void **)(this + 0x24)); /*0x67d695*/
      if ( sub_687C30(a2, v6, (float *)(this + 0xC)) ) /*0x67d69c*/
      {
        v11 = flt_A34A80; /*0x67d6b2*/
        v7 = PathGraphNode_GetPosition(*(void **)(this + 0x1C)); /*0x67d6b5*/
        if ( sub_480520((float *)this, &v7->x, v11) < 0 ) /*0x67d6c6*/
        {
          v8 = PathGraphNode_GetPosition(*(void **)(this + 0x1C)); /*0x67d6cb*/
          if ( sub_687C30(a2, (NiPoint3 *)this, &v8->x) ) /*0x67d6d3*/
            return 1; /*0x67d6e5*/
        }
      }
    }
  }
  else
  {
    v4 = (NiPoint3 *)(this + 0xC); /*0x67d6e8*/
  }
  return sub_480520((float *)this, &v4->x, flt_A34A80) < 0 && sub_687AA0(a2, (NiPoint3 *)this, v4); /*0x67d6e0*/
}
