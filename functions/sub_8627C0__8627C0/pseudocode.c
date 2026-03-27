void __stdcall sub_8627C0(_DWORD *a1)
{
  float *v1; // ebx
  double v2; // st6
  unsigned int v3; // eax
  double v4; // st5
  float v5; // [esp+10h] [ebp-C0h]
  float v6; // [esp+14h] [ebp-BCh]
  int v7; // [esp+20h] [ebp-B0h]
  float v8; // [esp+2Ch] [ebp-A4h]
  float v9; // [esp+3Ch] [ebp-94h]
  int v10; // [esp+50h] [ebp-80h]
  float v11[13]; // [esp+5Ch] [ebp-74h] BYREF
  float v12[16]; // [esp+90h] [ebp-40h] BYREF

  v1 = (float *)sub_7EE1F0(a1);
  if ( !v1 )
  {
    v1 = (float *)sub_7EE1D0(a1);
    if ( !v1 )
      JUMPOUT(0x862AA2);
  }
  v2 = flt_A3D65C;
  if ( Value > 0 )
  {
    qmemcpy(v11, v1 + 2, sizeof(v11));
    v12[0] = v11[0];
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[9];
    v12[4] = v11[3];
    v12[5] = v11[4];
    v12[6] = v11[5];
    v3 = 5;
    v12[7] = v11[0xA];
    v12[8] = v11[6];
    v12[9] = v11[7];
    v12[0xA] = v11[8];
    v12[0xB] = v11[0xB];
    v12[0xC] = 0.0;
    v12[0xD] = 0.0;
    v12[0xE] = 0.0;
    v12[0xF] = v11[0xC];
    qmemcpy(&unk_B46298, v12, 0x40u);
    v5 = v1[0x10];
    v6 = 1.0;
    while ( 1 )
    {
      v4 = v5;
      if ( (v3 & 1) != 0 )
        v6 = v4 * v6;
      v3 >>= 1;
      if ( !v3 )
      {
        flt_B46218 = 1.0 - v6;
        switch ( *((_BYTE *)v1 + 0x44) )
        {
          case 0:
            *(float *)dword_B47008 = 0.0;
            *(float *)&v7 = v2;
            dword_B4700C = v7;
            *(float *)&dword_B47010 = 0.0;
            LODWORD(flt_B47014) = v7;
            break;
          case 1:
            v9 = v2;
            *(float *)dword_B47008 = v9;
            dword_B4700C = LODWORD(v9);
            *(float *)&dword_B47010 = 0.0;
            flt_B47014 = v9;
            JUMPOUT(0x862A5E);
          case 2:
            *(float *)dword_B47008 = 0.0;
            *(float *)&v10 = v2;
            dword_B4700C = v10;
            dword_B47010 = v10;
            LODWORD(flt_B47014) = v10;
            break;
          case 3:
            v8 = v2;
            *(float *)dword_B47008 = v8;
            dword_B4700C = LODWORD(v8);
            dword_B47010 = LODWORD(v8);
            flt_B47014 = v8;
            break;
          default:
            JUMPOUT(0x862A3D);
        }
        JUMPOUT(0x862A60);
      }
      v5 = v4 * v4;
    }
  }
  JUMPOUT(0x862A9D);
}
