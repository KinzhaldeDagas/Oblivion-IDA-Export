void __userpurge Actor_ForceModCurAVi(_DWORD *a1@<ecx>, int a2@<ebx>, int actorValue, float delta, int a5)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  int v9; // ebx
  float *ContainerChanges; // eax
  float v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]

  if ( actorValue != 0xA || delta >= 0.0 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x278))(a1) ) /*0x5e290c*/
  {
    v12 = (float)SLODWORD(delta); /*0x5e291a*/
    v6 = v12; /*0x5e291e*/
    v13 = (float)Double_To_SInt32(v12); /*0x5e2931*/
    v7 = v6 - v13; /*0x5e293d*/
    v8 = v13; /*0x5e293d*/
    if ( v7 < dbl_A2FC68 ) /*0x5e294a*/
      v8 = v8 - dbl_A2F928; /*0x5e294c*/
    v14 = v8; /*0x5e2952*/
    v9 = Double_To_SInt32(v14); /*0x5e2960*/
    delta = (float)v9; /*0x5e2973*/
    AVCollection_AdjustValue((AVCollection *)(a1 + 0x22), actorValue, delta, 1u); /*0x5e297f*/
    if ( actorValue == 8 && v9 < 0 ) /*0x5e298b*/
      (*(void (__thiscall **)(_DWORD *, int, float, int))(*a1 + 0x3B8))(a1, a5, COERCE_FLOAT(LODWORD(delta)), a2); /*0x5e29a4*/
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x40))(a1, 0x200000); /*0x5e29b2*/
    if ( (unsigned int)(actorValue - 0xC) <= 0x14 && (actorValue == 0x12 || actorValue == 0x1B) ) /*0x5e29c5*/
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x11)); /*0x5e29ca*/
      if ( ContainerChanges ) /*0x5e29d1*/
        sub_484310(ContainerChanges); /*0x5e29d5*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x2C0))(a1); /*0x5e29e4*/
    }
  }
  Actor_ForceModCurAVi_::Done(actorValue, SLODWORD(delta), a5); /*0x5e29e5*/
}
