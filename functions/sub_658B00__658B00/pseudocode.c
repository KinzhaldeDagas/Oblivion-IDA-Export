char __thiscall sub_658B00(void **this, int a2, int a3)
{
  int v4; // ebp
  _DWORD **v5; // esi
  _DWORD **v6; // eax

  v4 = Double_To_SInt32(flt_B36C68 * dbl_A3C800);
  v5 = 0;
  if ( v4 )
  {
    do
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x198))(a2, 0) )
        break;
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x344))(a2);
      v6 = (_DWORD **)OblivionDynamicCast(
                        *(this + 0xB),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
      v5 = v6;
      if ( v6 )
      {
        if ( !((unsigned __int8 (__thiscall *)(_DWORD **, _DWORD))(*v6)[0x66])(v6, 0) )
          ((void (__thiscall *)(_DWORD **))(*v5)[0xD1])(v5);
      }
      --v4;
    }
    while ( v4 );
    if ( v5 )
    {
      if ( !((unsigned __int8 (__thiscall *)(_DWORD **, _DWORD))(*v5)[0x66])(v5, 0) )
        (*(void (__thiscall **)(_DWORD *))(*v5[0x16] + 0x20))(v5[0x16]);
    }
  }
  return 0;
}
