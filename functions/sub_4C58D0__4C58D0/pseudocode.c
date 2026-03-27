void __thiscall sub_4C58D0(unsigned int **this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  ExtraDataList *v3; // esi
  BSExtraDataVtbl *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // ebx
  int i; // esi
  _DWORD *v11; // ecx
  int v12; // ecx
  void (__thiscall ***v13)(_DWORD, int); // ebx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // esi
  int v18; // ebx
  int v19; // esi
  _DWORD *v20; // ebx
  int v21; // [esp+18h] [ebp-4h] BYREF

  if ( *(this + 9) )
  {
    nullsub_returnTrue_0arg();
    v2 = InterlockedDecrement;
    if ( **(this + 9) )
    {
      v3 = (ExtraDataList *)*(this + 8);
      if ( v3 )
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 8)) )
          v4 = sub_424180(v3 + 2);
        else
          v4 = (BSExtraDataVtbl *)bhkWorldM;
        if ( v4 )
        {
          v5 = (int)*(this + 9);
          if ( *(_DWORD *)(v5 + 0x94) )
          {
            v6 = *(_DWORD *)(v5 + 0x94);
            if ( v6 )
              (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x60))(v6);
          }
        }
      }
      v7 = (int)*(this + 9);
      v8 = *(_DWORD *)(v7 + 0x94);
      v9 = (_DWORD *)(v7 + 0x94);
      if ( v8 )
      {
        if ( !v2((volatile LONG *)(v8 + 4)) )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
        *v9 = 0;
      }
      for ( i = 0; i < 0x10; i += 4 )
      {
        v11 = *(this + 9);
        if ( *(_DWORD *)(i + *v11) )
        {
          *(_DWORD *)(i + v11[1]) = 0;
          *(_DWORD *)(i + (*(this + 9))[2]) = 0;
          *(_DWORD *)(i + (*(this + 9))[3]) = 0;
          v12 = *(_DWORD *)(i + **(this + 9));
          (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v12 + 0x8C))(v12, &v21, 0);
          if ( v21 )
          {
            v13 = (void (__thiscall ***)(_DWORD, int))v21;
            if ( !v2((volatile LONG *)(v21 + 4)) )
              (**v13)(v13, 1);
          }
        }
        *(_DWORD *)(i + **(this + 9)) = 0;
      }
      FormHeapFree(**(this + 9));
      **(this + 9) = 0;
    }
    v14 = (int)*(this + 9);
    v15 = *(_DWORD *)(v14 + 0x14);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 0x1C);
      if ( v16 )
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v16 + 0x88))(v16, &v21, *(_DWORD *)(v14 + 0x14));
        if ( v21 )
        {
          v17 = (void (__thiscall ***)(_DWORD, int))v21;
          if ( !v2((volatile LONG *)(v21 + 4)) )
            (**v17)(v17, 1);
        }
      }
      v18 = (int)*(this + 9);
      v19 = *(_DWORD *)(v18 + 0x14);
      v20 = (_DWORD *)(v18 + 0x14);
      if ( v19 )
      {
        if ( !v2((volatile LONG *)(v19 + 4)) )
          (**(void (__thiscall ***)(int, int))v19)(v19, 1);
        *v20 = 0;
      }
    }
    sub_4BFE80(this);
    nullsub_returnTrue_0arg();
  }
}
