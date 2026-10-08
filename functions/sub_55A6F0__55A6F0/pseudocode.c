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

  if ( a2 ) /*0x55a6fd*/
  {
    if ( a3 ) /*0x55a708*/
    {
      if ( a4 ) /*0x55a715*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x54))(a4) ) /*0x55a722*/
        {
          if ( a5 > 0.0 && a5 <= 1.0 ) /*0x55a74a*/
          {
            if ( *(this + 1) ) /*0x55a750*/
            {
              v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x54))(a4); /*0x55a761*/
              v7 = 0; /*0x55a763*/
              if ( *(this + 2) ) /*0x55a765*/
              {
                v8 = a5; /*0x55a76e*/
                do /*0x55a7f0*/
                {
                  v9 = 0xC * *(_DWORD *)(*(this + 1) + 4 * v7); /*0x55a782*/
                  v10 = (float *)(v6 + 0xC * (v7 + *(this + 3))); /*0x55a78a*/
                  ++v7; /*0x55a790*/
                  v11 = *v10 - *(float *)(v9 + v6); /*0x55a793*/
                  v12 = v10[1] - *(float *)(v9 + v6 + 4); /*0x55a79e*/
                  v13 = v10[2] - *(float *)(v9 + v6 + 8); /*0x55a7a9*/
                  v14 = v11 * v8; /*0x55a7b3*/
                  v15 = v12 * v8; /*0x55a7bd*/
                  v16 = v13 * v8; /*0x55a7c7*/
                  *(float *)(v9 + a2) = *(float *)(v9 + a2) + v14; /*0x55a7d2*/
                  *(float *)(v9 + a2 + 4) = *(float *)(v9 + a2 + 4) + v15; /*0x55a7dd*/
                  *(float *)(v9 + a2 + 8) = *(float *)(v9 + a2 + 8) + v16; /*0x55a7eb*/
                }
                while ( v7 < *(this + 2) ); /*0x55a7f0*/
              }
            }
          }
        }
      }
    }
  }
}
