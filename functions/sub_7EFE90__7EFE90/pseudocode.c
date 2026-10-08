char __thiscall sub_7EFE90(Ni2DBuffer **this, NiAVObject *a2)
{
  NiAVObject *v2; // ebp
  NiPropertyState *v4; // esi
  NiAVObject *v5; // edi
  NiPropertyState *v6; // edi
  int v7; // esi
  int v8; // ecx
  Ni2DBuffer *v9; // eax
  int v10; // edx
  int v11; // eax
  NiPropertyState *output; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x7efe93*/
  v4 = *NiGeometry_GetPropertyState((NiGeometry *)a2, (NiPropertyState **)&a2); /*0x7efea7*/
  if ( a2 ) /*0x7efeaf*/
  {
    v5 = a2; /*0x7efeb1*/
    if ( !InterlockedDecrement((volatile LONG *)&a2->members) ) /*0x7efeb7*/
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x7efecd*/
  }
  if ( !v4 ) /*0x7efed1*/
  {
    NiAVObject_InitializePropertyState(v2); /*0x7efed5*/
    v4 = *NiGeometry_GetPropertyState((NiGeometry *)v2, &output); /*0x7efee6*/
    if ( output ) /*0x7efeee*/
    {
      v6 = output; /*0x7efef0*/
      if ( !InterlockedDecrement((volatile LONG *)output + 1) ) /*0x7efef6*/
        (**(void (__thiscall ***)(NiPropertyState *, int))v6)(v6, 1); /*0x7eff0c*/
    }
  }
  v7 = *((_DWORD *)v4 + 8); /*0x7eff0e*/
  if ( !v7 ) /*0x7eff13*/
    return 0; /*0x7eff6a*/
  v8 = *(_DWORD *)(v7 + 0x20); /*0x7eff15*/
  if ( *(_DWORD *)v8 ) /*0x7eff18*/
    v9 = *(Ni2DBuffer **)(*(_DWORD *)v8 + 8); /*0x7eff1e*/
  else
    v9 = 0; /*0x7eff23*/
  NiSmartPointer_Set__(this + 0x27, v9); /*0x7eff2c*/
  v10 = *(_DWORD *)(v7 + 0x20); /*0x7eff31*/
  if ( *(_DWORD *)v10 ) /*0x7eff34*/
    v11 = (*(unsigned __int16 *)(*(_DWORD *)v10 + 4) >> 0xC) & 3; /*0x7eff41*/
  else
    v11 = 3; /*0x7eff46*/
  ((void (__thiscall *)(Ni2DBuffer **, int))(*this)[5].members.data)(this, v11); /*0x7eff53*/
  sub_4A1220((int ***)v2, v7); /*0x7eff58*/
  return 1; /*0x7eff5d*/
}
