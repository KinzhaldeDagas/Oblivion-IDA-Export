char __thiscall EndUsingRenderTargetGroup(_DWORD **this)
{
  unsigned int v2; // esi
  int v3; // esi
  int v4; // eax
  char v5; // al
  _DWORD *v6; // eax
  bool v7; // zf
  _DWORD *v8; // edx
  bool v9; // bl
  unsigned int i; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = 0;
  for ( i = 0; i < (*(int (__thiscall **)(_DWORD))(**(this + 0x21F) + 0x64))(*(this + 0x21F)); v2 = i )
  {
    v3 = (*(int (__thiscall **)(_DWORD, unsigned int))(**(this + 0x21F) + 0x80))(*(this + 0x21F), v2);
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x10))(v3);
      if ( v4 )
      {
        while ( (_UNKNOWN *)v4 != &unk_B42654 )
        {
          v4 = *(_DWORD *)(v4 + 4);
          if ( !v4 )
            goto LABEL_6;
        }
        v5 = 1;
      }
      else
      {
LABEL_6:
        v5 = 0;
      }
      v3 &= -(v5 != 0);
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x24))(v3) )
    {
      InterlockedIncrement((volatile LONG *)(v3 + 4));
      v6 = *(this + 0x23E);
      if ( v6 )
      {
        while ( 1 )
        {
          v7 = v3 == v6[2];
          v8 = v6;
          v6 = (_DWORD *)*v6;
          if ( v7 )
            break;
          if ( !v6 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v8 = 0;
      }
      v9 = v8 == 0;
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      if ( v9 )
      {
        v12 = v3;
        InterlockedIncrement((volatile LONG *)(v3 + 4));
        sub_7C16B0(this + 0x23D, &v12);
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
    }
    ++i;
  }
  return 1;
}
