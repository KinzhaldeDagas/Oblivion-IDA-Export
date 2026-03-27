void __thiscall sub_4B3030(
        char *this,
        int a2,
        float *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        Ni2DBuffer *a9)
{
  float *v10; // ebx
  float *v11; // edi
  int v12; // eax
  int v13; // esi
  float v14; // [esp+20h] [ebp-128h]
  float v15; // [esp+20h] [ebp-128h]
  float v16; // [esp+20h] [ebp-128h]
  float v17; // [esp+20h] [ebp-128h]
  unsigned int v18; // [esp+24h] [ebp-124h]
  int v19; // [esp+2Ch] [ebp-11Ch]
  char Str[268]; // [esp+38h] [ebp-110h] BYREF

  if ( a9 )
  {
    if ( a2 )
    {
      v10 = a3;
      if ( a3 )
      {
        if ( a4 )
        {
          if ( a5 )
          {
            sub_46D540(Str, this);
            if ( Str[0] )
            {
              v19 = sub_4B2BD0((int)this);
              v18 = 0;
              v11 = (float *)(a2 + 8);
              do
              {
                v12 = FormHeapAlloc(0x20u);
                v13 = 0;
                if ( v12 )
                {
                  *(_DWORD *)(v12 + 0x1C) = 0;
                  v13 = v12;
                }
                NiSmartPointer_Set__((Ni2DBuffer **)(v13 + 0x1C), a9);
                v14 = floor(*(float *)(a4 + 4 * v18));
                *(float *)(v13 + 0x18) = v14 / fCostant_100;
                v15 = floor(v11[0xFFFFFFFE]);
                *(float *)v13 = v15;
                v16 = floor(v11[0xFFFFFFFF]);
                *(float *)(v13 + 4) = v16;
                v17 = floor(*v11);
                *(float *)(v13 + 8) = v17;
                *(float *)(v13 + 0xC) = *v10;
                *(float *)(v13 + 0x10) = v10[1];
                *(float *)(v13 + 0x14) = *(float *)((char *)v11 + (_DWORD)a3 - a2);
                sub_4385B0(Str, v13, v19);
                v11 += 3;
                v10 += 3;
                ++v18;
              }
              while ( v18 < a5 );
              sub_4B2730(this, a5, a7);
            }
          }
        }
      }
    }
  }
}
