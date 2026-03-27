char __thiscall sub_8A45A0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int *i; // edi
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  int *v7; // eax
  int v8; // ecx
  void (__thiscall *v9)(int, int); // edx
  void (__thiscall ***v10)(_DWORD, int); // esi
  char v11; // [esp+13h] [ebp-19h]
  int v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h] BYREF
  int v14; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v12 = 0;
  result = sub_89F390(this, a2);
  v11 = result;
  if ( result )
  {
    for ( i = (int *)&this->members.RenderTargets[2]; ; i = (int *)i[1] )
    {
      v5 = 0;
      if ( i )
      {
        v12 |= 1u;
        if ( *sub_677C70(i, &v13) )
          v5 = 1;
      }
      if ( (v12 & 1) != 0 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v13;
        v12 &= ~1u;
        if ( v13 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
          {
            if ( v6 )
              (**v6)(v6, 1);
          }
        }
      }
      if ( !v5 )
        break;
      v7 = sub_677C70(i, &v14);
      v8 = *v7;
      v9 = *(void (__thiscall **)(int, int))(*(_DWORD *)*v7 + 0x24);
      v15 = 0;
      v9(v8, a2);
      v15 = 0xFFFFFFFF;
      if ( v14 )
      {
        v10 = (void (__thiscall ***)(_DWORD, int))v14;
        if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
          (**v10)(v10, 1);
      }
    }
    return v11;
  }
  return result;
}
