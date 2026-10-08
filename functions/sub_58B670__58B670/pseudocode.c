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

  v5 = (_DWORD *)*(this + 0xD); /*0x58b672*/
  while ( v5 )
  {
    v6 = (_DWORD *)v5[2]; /*0x58b680*/
    v7 = (_DWORD *)v6[6]; /*0x58b686*/
    v5 = (_DWORD *)*v5; /*0x58b68b*/
    if ( v7 )
    {
      while ( 1 ) /*0x58b694*/
      {
        v8 = v7[2]; /*0x58b694*/
        v9 = *(_WORD *)(v8 + 0x18); /*0x58b69a*/
        v7 = (_DWORD *)*v7; /*0x58b6a3*/
        if ( v9 == 0xFC8 ) /*0x58b6a5*/
          break; /*0x58b6a5*/
        if ( v9 > 0xFC8u || !v7 ) /*0x58b6af*/
          goto LABEL_23; /*0x58b6af*/
      }
      if ( fConstant_2 == *(float *)(v8 + 4) )
      {
        v10 = v6[9]; /*0x58b6d2*/
        if ( v10 )
        {
          v11 = v10 + 0xAC; /*0x58b6dd*/
          v12 = 0; /*0x58b6e5*/
          sub_4784A0((_WORD *)(v10 + 0xAC)); /*0x58b6e7*/
          if ( *(_WORD *)(v11 + 0xA) ) /*0x58b6ec*/
          {
            v13 = *(_DWORD *)(v11 + 4); /*0x58b6f2*/
            do /*0x58b71d*/
            {
              v14 = *(_WORD *)(v11 + 0xA); /*0x58b700*/
              if ( *(_DWORD *)(v13 + 4 * v14 - 4) ) /*0x58b707*/
                break; /*0x58b711*/
              v15 = v14 - 1; /*0x58b713*/
              *(_WORD *)(v11 + 0xA) = v15; /*0x58b719*/
            }
            while ( v15 ); /*0x58b71d*/
          }
          v16 = v6[9]; /*0x58b71f*/
          if ( *(_WORD *)(v16 + 0xB8) )
          {
            do
            {
              if ( *(unsigned __int16 *)(v16 + 0xB6) > v12 )
              {
                v17 = *(_DWORD *)(*(_DWORD *)(v16 + 0xB0) + 4 * v12); /*0x58b741*/
                if ( v17 )
                {
                  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17); /*0x58b74f*/
                  if ( v18 ) /*0x58b753*/
                  {
                    while ( (char *)v18 != &MEMORY[0xB33E90][0x1414] ) /*0x58b75a*/
                    {
                      v18 = *(_DWORD *)(v18 + 4); /*0x58b760*/
                      if ( !v18 ) /*0x58b765*/
                        goto LABEL_19; /*0x58b765*/
                    }
                    v19 = 1; /*0x58b7f0*/
                  }
                  else
                  {
LABEL_19:
                    v19 = 0; /*0x58b767*/
                  }
                  v20 = v19 != 0 ? (_DWORD *)v17 : 0;
                  if ( v20 ) /*0x58b771*/
                  {
                    v24 = Double_To_SInt32(a5); /*0x58b780*/
                    v23 = Double_To_SInt32(a4); /*0x58b78a*/
                    v22 = Double_To_SInt32(a3); /*0x58b794*/
                    v21 = Double_To_SInt32(a2); /*0x58b795*/
                    sub_4A17F0(v20, v21, v22, v23, v24); /*0x58b79d*/
                  }
                }
              }
              v16 = v6[9]; /*0x58b7a2*/
              ++v12; /*0x58b7ac*/
            }
            while ( v12 < *(unsigned __int16 *)(v16 + 0xB8) );
          }
        }
      }
    }
LABEL_23:
    sub_58B670(v6, a2, a3, a4, a5); /*0x58b7b7*/
  }
}
