void __thiscall sub_49CA50(int **this)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebp
  int v4; // eax
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // esi
  int *v7; // esi
  int v8; // edi
  int *v9; // eax
  unsigned int v10; // esi
  unsigned int i; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h] BYREF

  if ( *(this + 2) )
  {
    v2 = (_DWORD)*(this + 6) * (_DWORD)*(this + 6);
    v3 = 0;
    for ( i = v2; v3 < v2; ++v3 )
    {
      v4 = (*(this + 2))[v3];
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 0x1C);
        if ( v5 )
        {
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v5 + 0x88))(v5, &v12, (*(this + 2))[v3]);
          if ( v12 )
          {
            v6 = (void (__thiscall ***)(_DWORD, int))v12;
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
              (**v6)(v6, 1);
          }
        }
        v7 = &(*(this + 2))[v3];
        v8 = *v7;
        if ( *v7 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          {
            if ( v8 )
              (**(void (__thiscall ***)(int, int))v8)(v8, 1);
          }
          *v7 = 0;
        }
        v2 = i;
      }
    }
    v9 = *(this + 2);
    if ( v9 )
    {
      v10 = (unsigned int)(v9 + 0xFFFFFFFF);
      _LN21(v9, 4u, v9[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v10);
    }
    *(this + 2) = 0;
  }
}
