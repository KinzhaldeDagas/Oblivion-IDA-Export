char __thiscall sub_658B00(void **this, int a2, int a3)
{
  int v4; // ebp
  _DWORD **v5; // esi
  _DWORD **v6; // eax

  v4 = Double_To_SInt32(unk_B36C68 * dbl_A3C800); /*0x658b16*/
  v5 = 0; /*0x658b18*/
  if ( v4 ) /*0x658b1c*/
  {
    do /*0x658b8f*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x198))(a2, 0) ) /*0x658b3c*/
        break; /*0x658b40*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x344))(a2); /*0x658b4c*/
      v6 = (_DWORD **)OblivionDynamicCast( /*0x658b60*/
                        *(this + 0xB),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
      v5 = v6; /*0x658b65*/
      if ( v6 ) /*0x658b6c*/
      {
        if ( !((unsigned __int8 (__thiscall *)(_DWORD **, _DWORD))(*v6)[0x66])(v6, 0) ) /*0x658b7a*/
          ((void (__thiscall *)(_DWORD **))(*v5)[0xD1])(v5); /*0x658b8a*/
      }
      --v4; /*0x658b8c*/
    }
    while ( v4 ); /*0x658b8f*/
    if ( v5 ) /*0x658b94*/
    {
      if ( !((unsigned __int8 (__thiscall *)(_DWORD **, _DWORD))(*v5)[0x66])(v5, 0) ) /*0x658ba2*/
        (*(void (__thiscall **)(_DWORD *))(*v5[0x16] + 0x20))(v5[0x16]); /*0x658bb0*/
    }
  }
  return 0; /*0x658bb2*/
}
