void __thiscall sub_47CCE0(BSTempNodeManager *this, NiNode *a2)
{
  double v3; // st6
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  char v9; // al
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  float v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h] BYREF
  float v14; // [esp+14h] [ebp+4h]

  if ( 0.0 == *((float *)this + 0x37) )
    v3 = *((float *)this + 0x37);
  else
    v3 = *(float *)&a2 - *((float *)this + 0x37);
  v4 = *((unsigned __int16 *)this + 0x5B);
  *((float *)this + 0x37) = *(float *)&a2;
  if ( v4 )
  {
    v5 = InterlockedDecrement;
    do
    {
      if ( *((unsigned __int16 *)this + 0x5B) > (unsigned int)--v4 )
      {
        v6 = *((_DWORD *)this + 0x2C);
        v7 = *(_DWORD *)(v6 + 4 * v4);
        if ( v7 )
        {
          v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 4))(*(_DWORD *)(v6 + 4 * v4));
          if ( v8 )
          {
            while ( (_UNKNOWN *)v8 != &unk_B33E88 )
            {
              v8 = *(_DWORD *)(v8 + 4);
              if ( !v8 )
                goto LABEL_11;
            }
            v9 = 1;
          }
          else
          {
LABEL_11:
            v9 = 0;
          }
          v10 = v9 != 0 ? v7 : 0;
          if ( v10 )
          {
            v14 = v3;
            v12 = *(float *)(v10 + 0xDC) - v14;
            *(float *)(v10 + 0xDC) = v12;
            if ( v12 < 0.0 )
              *(float *)(v10 + 0xDC) = 0.0;
            if ( 0.0 == *(float *)(v10 + 0xDC) )
            {
              (*(void (__thiscall **)(BSTempNodeManager *, int *, int))(*(_DWORD *)this + 0x8C))(this, &v13, v4);
              if ( v13 )
              {
                v11 = (void (__thiscall ***)(_DWORD, int))v13;
                if ( !v5((volatile LONG *)(v13 + 4)) )
                  (**v11)(v11, 1);
              }
            }
          }
        }
      }
    }
    while ( v4 );
  }
}
