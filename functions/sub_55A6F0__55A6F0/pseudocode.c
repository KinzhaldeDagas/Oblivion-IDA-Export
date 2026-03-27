void __thiscall sub_55A6F0(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v6; // eax
  unsigned int v7; // esi
  double v8; // st7
  int v9; // ecx
  float *v10; // edx
  float v11; // [esp+8h] [ebp-18h]
  float v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+10h] [ebp-10h]
  float v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h]
  float v16; // [esp+1Ch] [ebp-4h]

  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x54))(a4) )
        {
          if ( a5 > 0.0 && a5 <= 1.0 )
          {
            if ( *(this + 1) )
            {
              v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x54))(a4);
              v7 = 0;
              if ( *(this + 2) )
              {
                v8 = a5;
                do
                {
                  v9 = 0xC * *(_DWORD *)(*(this + 1) + 4 * v7);
                  v10 = (float *)(v6 + 0xC * (v7 + *(this + 3)));
                  ++v7;
                  v11 = *v10 - *(float *)(v9 + v6);
                  v12 = v10[1] - *(float *)(v9 + v6 + 4);
                  v13 = v10[2] - *(float *)(v9 + v6 + 8);
                  v14 = v11 * v8;
                  v15 = v12 * v8;
                  v16 = v13 * v8;
                  *(float *)(v9 + a2) = *(float *)(v9 + a2) + v14;
                  *(float *)(v9 + a2 + 4) = *(float *)(v9 + a2 + 4) + v15;
                  *(float *)(v9 + a2 + 8) = *(float *)(v9 + a2 + 8) + v16;
                }
                while ( v7 < *(this + 2) );
              }
            }
          }
        }
      }
    }
  }
}
