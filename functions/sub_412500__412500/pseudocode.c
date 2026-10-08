void __thiscall sub_412500(_DWORD *this, int a2, float *a3, int a4)
{
  unsigned int v5; // edi
  NiAVObject *SquareOutline; // esi
  double v7; // st7
  float v9; // [esp+1Ch] [ebp-28h] BYREF
  float v10; // [esp+20h] [ebp-24h]
  float v11; // [esp+24h] [ebp-20h]
  float v12; // [esp+28h] [ebp-1Ch]
  float v13; // [esp+2Ch] [ebp-18h]
  float v14; // [esp+30h] [ebp-14h]
  int v15[4]; // [esp+34h] [ebp-10h] BYREF
  float i; // [esp+48h] [ebp+4h]

  if ( a2 ) /*0x41250e*/
  {
    *(float *)v15 = 1.0; /*0x412517*/
    v5 = 0; /*0x41251b*/
    *(float *)&v15[1] = 0.0; /*0x412525*/
    *(float *)&v15[2] = 0.0; /*0x412529*/
    *(float *)&v15[3] = 0.0; /*0x41252d*/
    for ( i = flt_B03174 * 0.5; v5 < dword_B03178; ++v5 ) /*0x412541*/
    {
      if ( ((1 << (v5 - 0x20 * (v5 >> 5))) & *(this + (v5 >> 5) + 1)) != 0 ) /*0x41256f*/
      {
        sub_412250(v5, &v9); /*0x41257b*/
        v9 = *a3 + v9; /*0x41258e*/
        v10 = a3[1] + v10; /*0x41259a*/
        v11 = a3[2] + v11; /*0x4125a5*/
        SquareOutline = NiLines_CreateSquareOutline(flt_B03174, (const NiColorAlpha *)v15); /*0x4125bd*/
        (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, SquareOutline, 0); /*0x4125ca*/
        v12 = v9 + i; /*0x4125da*/
        SquareOutline->members.m_localTransform.pos.x = v12; /*0x4125e2*/
        v13 = i + v10; /*0x4125e9*/
        v7 = v11; /*0x4125f1*/
        SquareOutline->members.m_localTransform.pos.y = v13; /*0x4125f5*/
        v14 = v7; /*0x4125f8*/
        SquareOutline->members.m_localTransform.pos.z = v14; /*0x412600*/
      }
    }
  }
}
