int __thiscall sub_77CEC0(unsigned int **this)
{
  Atmosphere *v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *PointerAtOffset08; // eax
  unsigned int **v5; // ecx
  Atmosphere *v6; // esi
  unsigned int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (Atmosphere *)sub_77C9C0(this); /*0x77cec6*/
  if ( v2 ) /*0x77cecd*/
  {
    v3 = InterlockedDecrement; /*0x77ced0*/
    do /*0x77cf2f*/
    {
      PointerAtOffset08 = Shared_GetPointerAtOffset08(v2); /*0x77ced9*/
      NiTMap_RemoveAt(*(this + 8), (int)PointerAtOffset08); /*0x77cee2*/
      v5 = (unsigned int **)*(this + 8); /*0x77cee7*/
      if ( !v5 ) /*0x77ceec*/
        break; /*0x77ceec*/
      if ( !*(this + 7) ) /*0x77ceee*/
        break; /*0x77cef5*/
      v8 = 0; /*0x77cf02*/
      sub_7B2600(v5, this + 7, &v9, &v8); /*0x77cf0a*/
      v6 = (Atmosphere *)v8; /*0x77cf0f*/
      if ( v8 ) /*0x77cf15*/
      {
        if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x77cf1b*/
          ((void (__thiscall *)(Atmosphere *, int))v6->__vftbl->GetObjectNode)(v6, 1); /*0x77cf29*/
      }
      v2 = v6; /*0x77cf2d*/
    }
    while ( v6 ); /*0x77cf2f*/
  }
  return NiTMap_Clear(*(this + 8)); /*0x77cf36*/
}
