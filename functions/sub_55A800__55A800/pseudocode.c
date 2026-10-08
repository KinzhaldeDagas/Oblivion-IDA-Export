void __thiscall sub_55A800(_DWORD *this, _DWORD *a2, int a3, int a4, float a5)
{
  int v6; // eax
  unsigned int v7; // esi
  double v8; // st7
  int v9; // edx
  float *v10; // ecx
  float *v11; // edi
  float *v12; // edx
  double v13; // st6
  float v14; // [esp+8h] [ebp-24h]
  float v15; // [esp+Ch] [ebp-20h]
  float v16; // [esp+10h] [ebp-1Ch]
  float v17; // [esp+10h] [ebp-1Ch]
  float v18; // [esp+14h] [ebp-18h]
  float v19; // [esp+18h] [ebp-14h]
  float v20; // [esp+1Ch] [ebp-10h]
  float v21; // [esp+20h] [ebp-Ch]
  float v22; // [esp+24h] [ebp-8h]
  float v23; // [esp+28h] [ebp-4h]

  if ( *a2 ) /*0x55a809*/
  {
    if ( a3 ) /*0x55a81a*/
    {
      if ( a4 ) /*0x55a826*/
      {
        if ( a5 > 0.0 && a5 <= 1.0 ) /*0x55a84a*/
        {
          if ( *(this + 1) ) /*0x55a850*/
          {
            v6 = (*(int (**)(void))(*(_DWORD *)a4 + 0x54))(); /*0x55a85f*/
            if ( v6 ) /*0x55a863*/
            {
              v7 = 0; /*0x55a86a*/
              if ( *(this + 2) ) /*0x55a86c*/
              {
                v8 = a5; /*0x55a875*/
                do /*0x55a928*/
                {
                  v9 = *(_DWORD *)(*(this + 1) + 4 * v7); /*0x55a87d*/
                  v10 = (float *)(*a2 + v9 * a2[1]); /*0x55a889*/
                  v16 = v10[2]; /*0x55a89e*/
                  v11 = (float *)(v6 + 0xC * v9); /*0x55a8a2*/
                  v12 = (float *)(v6 + 0xC * (v7 + *(this + 3))); /*0x55a8ad*/
                  ++v7; /*0x55a8b0*/
                  v18 = *v12 - *v11; /*0x55a8b7*/
                  v19 = v12[1] - v11[1]; /*0x55a8c1*/
                  v20 = v12[2] - v11[2]; /*0x55a8cb*/
                  v21 = v18 * v8; /*0x55a8d5*/
                  v22 = v19 * v8; /*0x55a8df*/
                  v23 = v20 * v8; /*0x55a8e9*/
                  v14 = v21 + *v10; /*0x55a8f5*/
                  v13 = v10[1]; /*0x55a8fd*/
                  *v10 = v14; /*0x55a901*/
                  v15 = v13 + v22; /*0x55a907*/
                  v10[1] = v15; /*0x55a913*/
                  v17 = v16 + v23; /*0x55a91a*/
                  v10[2] = v17; /*0x55a922*/
                }
                while ( v7 < *(this + 2) ); /*0x55a928*/
              }
            }
          }
        }
      }
    }
  }
}
