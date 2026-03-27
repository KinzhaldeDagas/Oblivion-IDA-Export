void __thiscall sub_7987D0(int this, float a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  bool v5; // zf
  int v6; // ebp
  float *v7; // esi
  float *v8; // eax
  float *v9; // eax
  float v10; // edx
  double v11; // st7
  float v12; // eax
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  float v16; // [esp+0h] [ebp-30h]
  float v17; // [esp+4h] [ebp-2Ch]
  float v18; // [esp+8h] [ebp-28h]
  float v19; // [esp+Ch] [ebp-24h] BYREF
  float v20; // [esp+10h] [ebp-20h]
  float v21; // [esp+14h] [ebp-1Ch]
  float v22; // [esp+18h] [ebp-18h]
  float v23; // [esp+1Ch] [ebp-14h]
  float v24; // [esp+20h] [ebp-10h]
  float v25[3]; // [esp+24h] [ebp-Ch] BYREF
  float v26; // [esp+34h] [ebp+4h]

  if ( *(_DWORD *)(this + 4) )
  {
    if ( LOWORD(a2) < *(_WORD *)(this + 0x28) )
    {
      if ( *(_BYTE *)(this + 1) )
      {
        v2 = *(_DWORD *)(this + 0x2C);
        if ( v2 )
        {
          v3 = v2 + 0x44 * LOWORD(a2);
          if ( v3 )
          {
            if ( *(_DWORD *)(v3 + 0x40) )
            {
              if ( *(_DWORD *)(v3 + 0x18) )
              {
                v21 = 0.0;
                v4 = 0;
                v5 = *(_WORD *)(v3 + 0xC) == 0;
                v20 = 0.0;
                v19 = 0.0;
                v24 = 0.0;
                v23 = 0.0;
                v22 = 0.0;
                if ( !v5 )
                {
                  v6 = 0;
                  do
                  {
                    v16 = *(float *)(*(_DWORD *)(v3 + 0x34) + 4 * v4);
                    v7 = (float *)(v6 + *(_DWORD *)(v3 + 0x40));
                    v8 = (float *)(dword_B42A14 + (*(unsigned __int8 *)(*(_DWORD *)(v3 + 0x38) + v4) << 6));
                    v19 = *v7;
                    v20 = v7[1];
                    v21 = v7[2];
                    v9 = sub_786ED0(&v19, v25, v8);
                    v18 = v7[2];
                    v10 = v9[1];
                    v11 = v7[1];
                    v19 = *v9;
                    v17 = v11;
                    v12 = v9[2];
                    v13 = *v7;
                    v20 = v10;
                    v26 = v13;
                    v21 = v12;
                    v14 = (float *)(v6 + *(_DWORD *)(v3 + 0x18));
                    ++v4;
                    v6 += 0xC;
                    v22 = v26 + (v19 - v26) * v16;
                    *v14 = v22;
                    v23 = (v10 - v17) * v16 + v17;
                    v15 = v21;
                    v14[1] = v23;
                    v24 = v16 * (v15 - v18) + v18;
                    v14[2] = v24;
                  }
                  while ( v4 < *(unsigned __int16 *)(v3 + 0xC) );
                }
              }
            }
          }
        }
      }
    }
  }
}
