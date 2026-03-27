void __thiscall sub_58B670(_DWORD *this, float a2, float a3, float a4, float a5)
{
  _DWORD *v5; // ebp
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // edx
  unsigned __int16 v9; // cx
  int v10; // eax
  int v11; // esi
  unsigned int v12; // edi
  int v13; // edx
  unsigned __int16 v14; // ax
  __int16 v15; // ax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  char v19; // al
  _DWORD *v20; // esi
  int v21; // eax
  int v22; // [esp+4h] [ebp-20h]
  int v23; // [esp+8h] [ebp-1Ch]
  int v24; // [esp+Ch] [ebp-18h]

  v5 = (_DWORD *)*(this + 0xD);
  while ( v5 )
  {
    v6 = (_DWORD *)v5[2];
    v7 = (_DWORD *)v6[6];
    v5 = (_DWORD *)*v5;
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = v7[2];
        v9 = *(_WORD *)(v8 + 0x18);
        v7 = (_DWORD *)*v7;
        if ( v9 == 0xFC8 )
          break;
        if ( v9 > 0xFC8u || !v7 )
          goto LABEL_23;
      }
      if ( fConstant_2 == *(float *)(v8 + 4) )
      {
        v10 = v6[9];
        if ( v10 )
        {
          v11 = v10 + 0xAC;
          v12 = 0;
          sub_4784A0((_WORD *)(v10 + 0xAC));
          if ( *(_WORD *)(v11 + 0xA) )
          {
            v13 = *(_DWORD *)(v11 + 4);
            do
            {
              v14 = *(_WORD *)(v11 + 0xA);
              if ( *(_DWORD *)(v13 + 4 * v14 - 4) )
                break;
              v15 = v14 - 1;
              *(_WORD *)(v11 + 0xA) = v15;
            }
            while ( v15 );
          }
          v16 = v6[9];
          if ( *(_WORD *)(v16 + 0xB8) )
          {
            do
            {
              if ( *(unsigned __int16 *)(v16 + 0xB6) > v12 )
              {
                v17 = *(_DWORD *)(*(_DWORD *)(v16 + 0xB0) + 4 * v12);
                if ( v17 )
                {
                  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
                  if ( v18 )
                  {
                    while ( (_UNKNOWN *)v18 != &unk_B352A4 )
                    {
                      v18 = *(_DWORD *)(v18 + 4);
                      if ( !v18 )
                        goto LABEL_19;
                    }
                    v19 = 1;
                  }
                  else
                  {
LABEL_19:
                    v19 = 0;
                  }
                  v20 = v19 != 0 ? (_DWORD *)v17 : 0;
                  if ( v20 )
                  {
                    v24 = Double_To_SInt32(a5);
                    v23 = Double_To_SInt32(a4);
                    v22 = Double_To_SInt32(a3);
                    v21 = Double_To_SInt32(a2);
                    sub_4A17F0(v20, v21, v22, v23, v24);
                  }
                }
              }
              v16 = v6[9];
              ++v12;
            }
            while ( v12 < *(unsigned __int16 *)(v16 + 0xB8) );
          }
        }
      }
    }
LABEL_23:
    sub_58B670(v6, a2, a3, a4, a5);
  }
}
