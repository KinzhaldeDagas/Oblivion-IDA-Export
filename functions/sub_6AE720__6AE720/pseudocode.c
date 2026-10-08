double __userpurge sub_6AE720@<st0>(int this@<ecx>, double result@<st0>, _DWORD *valueOut)
{
  char v3; // bl
  double v5; // st6
  _DWORD *v6; // edi
  int *v7; // ecx
  unsigned int v8; // edi
  int *v9; // eax
  float v10; // [esp+10h] [ebp-Ch]
  MEF_U32PointerMapEntry32 *position; // [esp+14h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+18h] [ebp-4h] BYREF

  v3 = (char)valueOut; /*0x6ae724*/
  if ( (unsigned __int8)valueOut != *(_BYTE *)(this + 0xA5) ) /*0x6ae731*/
  {
    *(_BYTE *)(this + 0xA5) = (_BYTE)valueOut; /*0x6ae73b*/
    v5 = flt_B161B8; /*0x6ae741*/
    valueOut = 0; /*0x6ae747*/
    if ( v3 ) /*0x6ae74f*/
      v5 = -v5; /*0x6ae751*/
    v10 = v5; /*0x6ae75a*/
    if ( bSoundEnabled_Audio ) /*0x6ae753*/
    {
      position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode(*(unsigned int **)(this + 0x300)); /*0x6ae76e*/
      while ( position ) /*0x6ae772*/
      {
        NiTMap_U32Pointer_GetNextEntry( /*0x6ae789*/
          *(MEF_U32PointerMapLayout32 **)(this + 0x300),
          &position,
          &keyOut,
          (void **)&valueOut);
        v6 = valueOut; /*0x6ae78e*/
        if ( (*valueOut & 0x1000) != 0 ) /*0x6ae798*/
          sub_6B6AC0(valueOut); /*0x6ae79c*/
        if ( (*(_BYTE *)v6 & 0x20) == 0 ) /*0x6ae7a4*/
        {
          if ( sub_6B6AF0((int)v6) ) /*0x6ae7a8*/
          {
            sub_6B6B90(v6); /*0x6ae7b3*/
            *(float *)&keyOut = result + v10; /*0x6ae7bf*/
            result = *(float *)&keyOut; /*0x6ae7c3*/
            sub_6B6B20((int)v6, *(float *)&keyOut); /*0x6ae7ca*/
          }
        }
      }
    }
    v7 = *(int **)(this + 0x324); /*0x6ae7d6*/
    if ( v7 ) /*0x6ae7de*/
    {
      if ( !v3 ) /*0x6ae7e2*/
      {
        sub_6B7240(v7); /*0x6ae7e4*/
        sub_6B73C0(*(int **)(this + 0x324)); /*0x6ae7ef*/
        v8 = *(_DWORD *)(this + 0x324); /*0x6ae7f4*/
        if ( v8 ) /*0x6ae7fc*/
        {
          sub_6B73E0(*(_DWORD **)(this + 0x324)); /*0x6ae800*/
          FormHeapFree(v8); /*0x6ae806*/
        }
        *(_DWORD *)(this + 0x324) = 0; /*0x6ae80e*/
        return result; /*0x6ae80e*/
      }
    }
    else if ( !v3 ) /*0x6ae823*/
    {
      return result; /*0x6ae823*/
    }
    if ( !v7 ) /*0x6ae827*/
    {
      v9 = PlaySound___((int *)this, "AMBUnderwaterLP", 0x11, 1); /*0x6ae834*/
      *(_DWORD *)(this + 0x324) = v9; /*0x6ae83b*/
      if ( v9 ) /*0x6ae841*/
        sub_6B7190(v9, 1); /*0x6ae853*/
    }
  }
  return result; /*0x6ae819*/
}
