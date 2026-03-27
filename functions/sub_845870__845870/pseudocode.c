void __thiscall sub_845870(void *this, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // esi
  int v11; // ecx
  float *v12; // ebp
  double v13; // st6
  unsigned int v14; // eax
  double v15; // st5
  int v16; // [esp+18h] [ebp-D8h]
  int v17; // [esp+18h] [ebp-D8h]
  float v18; // [esp+20h] [ebp-D0h]
  float v19; // [esp+28h] [ebp-C8h]
  int v20; // [esp+34h] [ebp-BCh]
  int v21; // [esp+40h] [ebp-B0h]
  int v22; // [esp+50h] [ebp-A0h]
  int v23; // [esp+64h] [ebp-8Ch]
  float v24[13]; // [esp+70h] [ebp-80h] BYREF
  float v25[16]; // [esp+A4h] [ebp-4Ch] BYREF

  v5 = dword_B45BCC;
  (*(void (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0xBC))(this, a2, 0, 0);
  v6 = **(_DWORD **)(v5 + 0x24);
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0);
  v8 = *(_DWORD *)(v6 + 4);
  v16 = v7;
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      v7 = v16;
    }
    *(_DWORD *)(v6 + 4) = v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  sub_848FA0((_DWORD **)v6, (int)a5);
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4);
  v10 = *(_DWORD *)(v9 + 4);
  v11 = dword_B43128;
  v17 = dword_B43128;
  if ( v10 != dword_B43128 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v11 = v17;
    }
    *(_DWORD *)(v9 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  v12 = (float *)sub_7EE1F0(a5);
  if ( !v12 )
  {
    v12 = (float *)sub_7EE1D0(a5);
    if ( !v12 )
      JUMPOUT(0x845C6A);
  }
  v13 = flt_A3D65C;
  if ( Value > 1 )
  {
    qmemcpy(v24, v12 + 2, sizeof(v24));
    v25[0] = v24[0];
    v25[1] = v24[1];
    v25[2] = v24[2];
    v25[3] = v24[9];
    v25[4] = v24[3];
    v25[5] = v24[4];
    v25[6] = v24[5];
    v14 = 0xA;
    v25[7] = v24[0xA];
    v25[8] = v24[6];
    v25[9] = v24[7];
    v25[0xA] = v24[8];
    v25[0xB] = v24[0xB];
    v25[0xC] = 0.0;
    v25[0xD] = 0.0;
    v25[0xE] = 0.0;
    v25[0xF] = v24[0xC];
    qmemcpy(&unk_B462D8, v25, 0x40u);
    v18 = v12[0x10];
    v19 = 1.0;
    while ( 1 )
    {
      v15 = v18;
      if ( (v14 & 1) != 0 )
        v19 = v15 * v19;
      v14 >>= 1;
      if ( !v14 )
      {
        flt_B46228 = 1.0 - v19;
        switch ( *((_BYTE *)v12 + 0x44) )
        {
          case 0:
            *(float *)&dword_B461A8 = 0.0;
            *(float *)&v20 = v13;
            dword_B461AC = v20;
            *(float *)&dword_B461B0 = 0.0;
            dword_B461B4 = v20;
            break;
          case 1:
            *(float *)&v22 = v13;
            dword_B461A8 = v22;
            dword_B461AC = v22;
            *(float *)&dword_B461B0 = 0.0;
            dword_B461B4 = v22;
            JUMPOUT(0x845C1F);
          case 2:
            *(float *)&dword_B461A8 = 0.0;
            *(float *)&v23 = v13;
            dword_B461AC = v23;
            dword_B461B0 = v23;
            dword_B461B4 = v23;
            break;
          case 3:
            *(float *)&v21 = v13;
            dword_B461A8 = v21;
            dword_B461AC = v21;
            dword_B461B0 = v21;
            dword_B461B4 = v21;
            break;
          default:
            JUMPOUT(0x845BFE);
        }
        JUMPOUT(0x845C21);
      }
      v18 = v15 * v15;
    }
  }
  JUMPOUT(0x845C62);
}
