void __thiscall sub_6C3AC0(_DWORD *this, int a2, int a3)
{
  float *v4; // ebx
  NiRTTI *v5; // eax
  char v6; // al
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  float v11[8]; // [esp-20h] [ebp-5Ch] BYREF
  float v12[4]; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v13[8]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a2 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6c3adb*/
    if ( v5 ) /*0x6c3adf*/
    {
      while ( v5 != &stru_B3D91C ) /*0x6c3ae6*/
      {
        v5 = v5->parent; /*0x6c3ae8*/
        if ( !v5 ) /*0x6c3aed*/
          goto LABEL_6; /*0x6c3aed*/
      }
      v6 = 1; /*0x6c3b65*/
    }
    else
    {
LABEL_6:
      v6 = 0; /*0x6c3aef*/
    }
    v4 = v6 != 0 ? (float *)a2 : 0;
  }
  else
  {
    v4 = 0; /*0x6c3ad0*/
  }
  v7 = *(this + 0xC); /*0x6c3af9*/
  sub_7150F0(v12, (float *)(v7 + 0x30)); /*0x6c3b04*/
  v8 = *(_DWORD *)(v7 + 0x54); /*0x6c3b0c*/
  *(float *)&v13[7] = *(float *)(v7 + 0x60); /*0x6c3b0f*/
  v9 = *(_DWORD *)(v7 + 0x58); /*0x6c3b13*/
  v10 = *(_DWORD *)(v7 + 0x5C); /*0x6c3b16*/
  v13[0] = v8; /*0x6c3b19*/
  *(float *)&v13[3] = v12[0]; /*0x6c3b21*/
  v13[1] = v9; /*0x6c3b29*/
  v13[2] = v10; /*0x6c3b31*/
  *(float *)&v13[6] = v12[3]; /*0x6c3b39*/
  *(float *)&v13[4] = v12[1]; /*0x6c3b42*/
  *(float *)&v13[5] = v12[2]; /*0x6c3b46*/
  qmemcpy(v11, v13, sizeof(v11)); /*0x6c3b53*/
  sub_6C3960(v4, v11[0], v11[1], SLODWORD(v11[2]), SLODWORD(v11[3]), v11[4], SLODWORD(v11[5]), SLODWORD(v11[6]), v11[7]); /*0x6c3b57*/
}
