char __thiscall TemporaryObjects_PlayMagicShieldShader(int *this, int a2, int a3)
{
  char v3; // al
  int *v4; // esi
  int v5; // edi
  char v6; // bl
  int *v7; // ebx
  int v8; // ebp
  int v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // edi
  int v11; // edi
  int v12; // ecx
  float v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  v4 = this + 0x12;
  v15 = 0;
  if ( *(this + 0x13) )
  {
    v5 = a2;
  }
  else
  {
    v5 = 0;
    v3 = 1;
    if ( !*v4 )
    {
      v6 = 1;
      goto LABEL_6;
    }
  }
  v6 = 0;
LABEL_6:
  if ( (v3 & 1) != 0 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  if ( v6 )
    return 0;
  v7 = v4;
  v8 = 0;
  v14 = flt_A32048;
  if ( !v4 )
    return 0;
  do
  {
    v9 = *sub_677C70(v7, &v15);
    if ( v15 )
    {
      v10 = (void (__thiscall ***)(_DWORD, int))v15;
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**v10)(v10, 1);
    }
    if ( v9 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x54))(v9) == 6 )
      {
        v11 = *(_DWORD *)(v9 + 0x18);
        if ( v11 )
        {
          if ( v14 > (double)*(float *)(v9 + 0x10) )
          {
            v12 = *(_DWORD *)(v11 + 0x20);
            if ( v12 )
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12) == a2
                && Magic_CompareShieldType(a3, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 0xC) + 0x1C) + 0x98)) )
              {
                v8 = v9;
                v14 = *(float *)(v9 + 0x10);
              }
            }
          }
        }
      }
    }
    v7 = (int *)v7[1];
  }
  while ( v7 );
  if ( !v8 )
    return 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x68))(v8);
  sub_6A0350(v8);
  return 1;
}
