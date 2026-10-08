void __cdecl sub_442F70(volatile LONG *a1)
{
  volatile LONG *v1; // esi
  int v2; // eax
  int v3; // edi
  volatile LONG *v4; // esi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // eax
  int v8; // edi
  int v9; // esi
  volatile LONG *v10; // eax
  Ni2DBuffer *v11; // [esp-4h] [ebp-24h]
  int v12; // [esp+10h] [ebp-10h] BYREF
  unsigned int v13; // [esp+1Ch] [ebp-4h]

  v1 = a1; /*0x442f94*/
  if ( a1 ) /*0x442f9a*/
  {
    v2 = (*(int (__thiscall **)(volatile LONG *))(*a1 + 0xC))(a1); /*0x442fa7*/
    v3 = v2; /*0x442fa9*/
    if ( v2 ) /*0x442fad*/
    {
      a1 = *(volatile LONG **)(v2 + 0xB4); /*0x442fbb*/
      v4 = a1; /*0x442fb3*/
      if ( a1 ) /*0x442fbf*/
        InterlockedIncrement(a1 + 1); /*0x442fc5*/
      v5 = InterlockedDecrement; /*0x442fcd*/
      v13 = 0; /*0x442fd3*/
      if ( v4 ) /*0x442fdb*/
      {
        v11 = (Ni2DBuffer *)*sub_700790((void *)v4, &v12); /*0x442feb*/
        LOBYTE(v13) = 1; /*0x442ff0*/
        NiSmartPointer_Set__((Ni2DBuffer **)&a1, v11); /*0x442ff5*/
        LOBYTE(v13) = 0; /*0x443000*/
        if ( v12 ) /*0x443005*/
        {
          v6 = (void (__thiscall ***)(_DWORD, int))v12; /*0x443007*/
          if ( !v5((volatile LONG *)(v12 + 4)) ) /*0x44300d*/
            (**v6)(v6, 1); /*0x44301f*/
        }
        v4 = a1; /*0x443023*/
        (*(void (__thiscall **)(int, volatile LONG *))(*(_DWORD *)v3 + 0x8C))(v3, a1); /*0x443030*/
      }
      v13 = 0xFFFFFFFF; /*0x443034*/
      if ( v4 ) /*0x44303c*/
      {
        if ( !v5(v4 + 1) ) /*0x443042*/
          (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x443050*/
      }
    }
    else
    {
      v7 = (*(int (__thiscall **)(volatile LONG *))(*v1 + 8))(v1); /*0x44306c*/
      v8 = v7; /*0x44306e*/
      if ( v7 ) /*0x443072*/
      {
        v9 = *(unsigned __int16 *)(v7 + 0xB6); /*0x443074*/
        if ( *(_WORD *)(v7 + 0xB6) ) /*0x443074*/
        {
          do /*0x4430a6*/
          {
            if ( *(unsigned __int16 *)(v8 + 0xB6) > (unsigned int)--v9 ) /*0x44308c*/
              v10 = *(volatile LONG **)(*(_DWORD *)(v8 + 0xB0) + 4 * v9); /*0x443098*/
            else
              v10 = 0; /*0x44308e*/
            sub_442F70(v10); /*0x44309c*/
          }
          while ( v9 ); /*0x4430a6*/
        }
      }
    }
  }
}
