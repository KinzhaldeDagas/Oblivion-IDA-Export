NiAVObject *__thiscall sub_521A40(_BYTE *this, TESChildCELL *a2)
{
  NiAVObject *result; // eax
  int *v4; // ebx
  NiAVObject *v5; // esi
  int v6; // eax
  int *v7; // eax
  int *v8; // eax

  result = 0;
  if ( a2 )
  {
    v4 = (int *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5A))(a2);
    v5 = (NiAVObject *)sub_4B3750(this, a2, 0);
    v6 = NiObjectNET_LookupObjectByName(v5, "Bip01");
    if ( v4 )
    {
      if ( v6 )
      {
        sub_478070(v4, v5);
LABEL_10:
        NiAVObject_InitializePropertyState(v5);
        NiNode_UpdateDynamicEffectState((NiNode *)v5);
        NiAVObject_UpdateNiAVObject(v5, 0.0, 0);
      }
    }
    else if ( v6 )
    {
      v7 = (int *)FormHeapAlloc(0x154u);
      if ( v7 )
        v8 = sub_478730(v7, (int)a2, v5);
      else
        v8 = 0;
      (*((void (__thiscall **)(TESChildCELL *, int *))a2->vtbl + 0x5B))(a2, v8);
      goto LABEL_10;
    }
    return v5;
  }
  return result;
}
