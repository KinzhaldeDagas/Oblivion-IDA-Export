void __thiscall sub_7C71B0(_DWORD *this, float *a2)
{
  _DWORD *v2; // edi
  int *v3; // ebx
  int v4; // eax
  int *v5; // ebp
  int v6; // esi
  int *v7; // edi
  bool v8; // zf
  int *v9; // ebp
  void (__thiscall ***v10)(_DWORD, int); // edi
  int v12; // [esp+18h] [ebp-24h] BYREF
  int *v13; // [esp+1Ch] [ebp-20h] BYREF
  float v14; // [esp+20h] [ebp-1Ch]
  float v15; // [esp+24h] [ebp-18h]
  int *v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v18; // [esp+38h] [ebp-4h]

  v2 = this;
  v3 = (int *)*(this + 0x3A);
  sub_7D2FF0(*(this + 0x46), a2);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = v3[2];
      v5 = v3;
      v3 = (int *)*v3;
      v16 = v5;
      v15 = sub_7D2FF0(v4, a2);
      v6 = 0;
      v12 = 0;
      v7 = (int *)v2[0x3A];
      v18 = 0;
      if ( v7 != v5 )
      {
        while ( 1 )
        {
          v8 = v6 == v7[2];
          v9 = v7 + 2;
          v13 = v7;
          v7 = (int *)*v7;
          if ( !v8 )
          {
            if ( v6 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
                (**(void (__thiscall ***)(int, int))v6)(v6, 1);
            }
            v6 = *v9;
            v12 = *v9;
            if ( v12 )
              InterlockedIncrement((volatile LONG *)(v6 + 4));
          }
          v14 = *(float *)(v6 + 0xD0);
          if ( v15 > (double)v14 )
            break;
          if ( v7 == v16 )
            goto LABEL_18;
        }
        sub_7C17D0((int **)this + 0x39, &v17, &v13);
        if ( v17 )
        {
          v10 = (void (__thiscall ***)(_DWORD, int))v17;
          if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
            (**v10)(v10, 1);
        }
        sub_7C6A20(this + 0x39, (int)v13, &v12);
      }
LABEL_18:
      v18 = 0xFFFFFFFF;
      if ( v6 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
      if ( !v3 )
        break;
      v2 = this;
    }
  }
}
