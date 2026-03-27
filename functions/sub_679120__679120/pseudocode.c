int __thiscall sub_679120(int *this, int a2)
{
  char v2; // al
  int *v3; // esi
  int v4; // ebp
  int v5; // edi
  char v6; // bl
  int *i; // ebx
  int v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v10; // eax
  float v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = 0;
  v13 = 0;
  v3 = this + 0x12;
  v12 = flt_A32048;
  v4 = 0;
  if ( *(this + 0x13) )
  {
    v5 = a2;
  }
  else
  {
    v5 = 0;
    v2 = 1;
    if ( !*v3 )
    {
      v6 = 1;
      goto LABEL_6;
    }
  }
  v6 = 0;
LABEL_6:
  if ( (v2 & 1) != 0 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  if ( !v6 )
  {
    for ( i = v3; i; i = (int *)i[1] )
    {
      v8 = *sub_677C70(i, &v13);
      if ( v13 )
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v13;
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
          (**v9)(v9, 1);
      }
      if ( v8 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
        if ( v10 )
        {
          while ( (_UNKNOWN *)v10 != &unk_B3C0D4 )
          {
            v10 = *(_DWORD *)(v10 + 4);
            if ( !v10 )
              goto LABEL_27;
          }
          if ( *(_DWORD *)(v8 + 0x1C) == a2
            && !*(_BYTE *)(v8 + 0x28)
            && (v12 > (double)*(float *)(v8 + 0x10)
             || v4 && sub_4AC730(*(_BYTE **)(v4 + 0x34), 1u) && !sub_4AC730(*(_BYTE **)(v8 + 0x34), 1u)) )
          {
            v4 = v8;
            v12 = *(float *)(v8 + 0x10);
          }
        }
      }
LABEL_27:
      ;
    }
  }
  return v4;
}
