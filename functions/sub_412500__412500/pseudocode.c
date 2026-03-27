void __thiscall sub_412500(_DWORD *this, int a2, float *a3, int a4)
{
  unsigned int v5; // edi
  NiAVObject *v6; // esi
  double v7; // st7
  float v9; // [esp+1Ch] [ebp-28h] BYREF
  float v10; // [esp+20h] [ebp-24h]
  float v11; // [esp+24h] [ebp-20h]
  float v12; // [esp+28h] [ebp-1Ch]
  float v13; // [esp+2Ch] [ebp-18h]
  float v14; // [esp+30h] [ebp-14h]
  int v15[4]; // [esp+34h] [ebp-10h] BYREF
  float i; // [esp+48h] [ebp+4h]

  if ( a2 )
  {
    *(float *)v15 = 1.0;
    v5 = 0;
    *(float *)&v15[1] = 0.0;
    *(float *)&v15[2] = 0.0;
    *(float *)&v15[3] = 0.0;
    for ( i = flt_B03174 * 0.5; v5 < dword_B03178; ++v5 )
    {
      if ( ((1 << (v5 - 0x20 * (v5 >> 5))) & *(this + (v5 >> 5) + 1)) != 0 )
      {
        sub_412250(v5, &v9);
        v9 = *a3 + v9;
        v10 = a3[1] + v10;
        v11 = a3[2] + v11;
        v6 = sub_47F1A0(flt_B03174, (int)v15);
        (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v6, 0);
        v12 = v9 + i;
        v6->members.m_localTransform.pos.x = v12;
        v13 = i + v10;
        v7 = v11;
        v6->members.m_localTransform.pos.y = v13;
        v14 = v7;
        v6->members.m_localTransform.pos.z = v14;
      }
    }
  }
}
