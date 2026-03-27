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

  v1 = a1;
  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(volatile LONG *))(*a1 + 0xC))(a1);
    v3 = v2;
    if ( v2 )
    {
      a1 = *(volatile LONG **)(v2 + 0xB4);
      v4 = a1;
      if ( a1 )
        InterlockedIncrement(a1 + 1);
      v5 = InterlockedDecrement;
      v13 = 0;
      if ( v4 )
      {
        v11 = (Ni2DBuffer *)*sub_700790((void *)v4, &v12);
        LOBYTE(v13) = 1;
        NiSmartPointer_Set__((Ni2DBuffer **)&a1, v11);
        LOBYTE(v13) = 0;
        if ( v12 )
        {
          v6 = (void (__thiscall ***)(_DWORD, int))v12;
          if ( !v5((volatile LONG *)(v12 + 4)) )
            (**v6)(v6, 1);
        }
        v4 = a1;
        (*(void (__thiscall **)(int, volatile LONG *))(*(_DWORD *)v3 + 0x8C))(v3, a1);
      }
      v13 = 0xFFFFFFFF;
      if ( v4 )
      {
        if ( !v5(v4 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
      }
    }
    else
    {
      v7 = (*(int (__thiscall **)(volatile LONG *))(*v1 + 8))(v1);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(unsigned __int16 *)(v7 + 0xB6);
        if ( *(_WORD *)(v7 + 0xB6) )
        {
          do
          {
            if ( *(unsigned __int16 *)(v8 + 0xB6) > (unsigned int)--v9 )
              v10 = *(volatile LONG **)(*(_DWORD *)(v8 + 0xB0) + 4 * v9);
            else
              v10 = 0;
            sub_442F70(v10);
          }
          while ( v9 );
        }
      }
    }
  }
}
