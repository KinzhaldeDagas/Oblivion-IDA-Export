void __thiscall sub_6C3AC0(_DWORD *this, int a2, int a3)
{
  float *v4; // ebx
  int v5; // eax
  char v6; // al
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11[8]; // [esp-20h] [ebp-5Ch] BYREF
  float v12[4]; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v13[8]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3D91C )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_6;
      }
      v6 = 1;
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    v4 = v6 != 0 ? (float *)a2 : 0;
  }
  else
  {
    v4 = 0;
  }
  v7 = *(this + 0xC);
  sub_7150F0(v12, (float *)(v7 + 0x30));
  v8 = *(_DWORD *)(v7 + 0x54);
  *(float *)&v13[7] = *(float *)(v7 + 0x60);
  v9 = *(_DWORD *)(v7 + 0x58);
  v10 = *(_DWORD *)(v7 + 0x5C);
  v13[0] = v8;
  *(float *)&v13[3] = v12[0];
  v13[1] = v9;
  v13[2] = v10;
  *(float *)&v13[6] = v12[3];
  *(float *)&v13[4] = v12[1];
  *(float *)&v13[5] = v12[2];
  qmemcpy(v11, v13, sizeof(v11));
  sub_6C3960(v4, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], *(float *)&v11[7]);
}
