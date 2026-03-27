double __userpurge sub_6150E0@<st0>(_DWORD *this@<ecx>, double st5_0@<st2>, double result@<st0>, char a4)
{
  _DWORD *v5; // eax
  int **v6; // eax
  int **v7; // ecx
  int v8; // ebp
  int v9; // edi
  int *v10; // eax
  bool v11; // zf
  int *v12; // [esp+8h] [ebp-4h]
  int v13; // [esp+10h] [ebp+4h]
  float v14; // [esp+10h] [ebp+4h]
  float v15; // [esp+10h] [ebp+4h]

  if ( a4
    || sub_6135F0((int)this)
    && (v5 = (_DWORD *)sub_6135F0((int)this), Actor_IsSwimming(v5))
    && !Actor_IsSwimming((_DWORD *)*(this + 0xF))
    && !Actor_CanFightInWater((void *)*(this + 0xF))
    || !*((_BYTE *)this + 0x174) )
  {
    v6 = (int **)*(this + 0x10);
    if ( v6 )
    {
      v12 = *v6;
      if ( *v6 )
      {
        if ( v6[1] )
        {
          v13 = (*v6)[1];
          if ( !sub_614290((int)this) )
          {
            v14 = (double)v13 * flt_B37218;
            sub_484370(v14);
            v13 = Double_To_SInt32(result);
          }
          if ( !*((_BYTE *)this + 0x158) )
          {
            v15 = (double)v13 * flt_B37220;
            sub_484370(v15);
            v13 = Double_To_SInt32(result);
          }
          v7 = *(int ***)(*(this + 0x10) + 4);
          v8 = 0;
          v9 = v13;
          if ( v7 )
          {
            do
            {
              v10 = *v7;
              v11 = *v7 == 0;
              v7 = (int **)v7[1];
              if ( !v11 )
              {
                if ( *v10 )
                {
                  if ( v10[1] >= v9 && v10 != v12 )
                  {
                    v9 = v10[1];
                    v8 = *v10;
                  }
                }
              }
            }
            while ( v7 );
            if ( v8 )
            {
              v12[1] = v13;
              sub_6243D0(this, st5_0, v8, v9 + 0xA);
            }
          }
        }
      }
    }
  }
  return result;
}
