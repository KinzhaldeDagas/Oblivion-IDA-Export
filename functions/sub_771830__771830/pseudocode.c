char __stdcall sub_771830(int a1, float *a2)
{
  float *v2; // ecx
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  float *v8; // eax
  NiDX9Renderer *v9; // ecx
  double v10; // st7
  double v11; // st6
  double v12; // st7

  switch ( a1 )
  {
    case 1:
      v2 = (float *)dword_B42754;
      v3 = a2;
      flt_B42760 = dword_B42754->member.invViewMatrix.m[0][1] * a2[4]
                 + dword_B42754->member.invViewMatrix.m[0][0] * *a2
                 + dword_B42754->member.invViewMatrix.m[0][2] * a2[8];
      flt_B42770 = v2[0x285] * a2[4] + *a2 * v2[0x284] + v2[0x286] * a2[8];
      flt_B42780 = a2[4] * v2[0x289] + v2[0x288] * *a2 + v2[0x28A] * a2[8];
      flt_B42764 = v2[0x280] * a2[1] + v2[0x281] * a2[5] + a2[9] * v2[0x282];
      flt_B42774 = v2[0x285] * a2[5] + v2[0x284] * a2[1] + v2[0x286] * a2[9];
      flt_B42784 = v2[0x288] * a2[1] + a2[5] * v2[0x289] + a2[9] * v2[0x28A];
      flt_B42768 = v2[0x280] * a2[2] + v2[0x281] * a2[6] + v2[0x282] * a2[0xA];
      flt_B42778 = a2[2] * v2[0x284] + v2[0x285] * a2[6] + v2[0x286] * a2[0xA];
      flt_B42788 = v2[0x289] * a2[6] + v2[0x288] * a2[2] + v2[0x28A] * a2[0xA];
      flt_B42790 = v2[0x28D] * a2[4] + *a2 * v2[0x28C] + v2[0x28E] * a2[8] + a2[0xC];
      flt_B42794 = v2[0x28D] * a2[5] + v2[0x28C] * a2[1] + v2[0x28E] * a2[9] + a2[0xD];
      v4 = a2[2] * v2[0x28C];
      v5 = v2[0x28D] * a2[6];
      goto LABEL_3;
    case 2:
      v3 = a2;
      v2 = (float *)dword_B42754;
      flt_B42760 = a2[4] * dword_B42754->member.invViewMatrix.m[0][1]
                 + dword_B42754->member.invViewMatrix.m[0][0] * *a2
                 + dword_B42754->member.invViewMatrix.m[0][2] * a2[8];
      flt_B42770 = v2[0x285] * a2[4] + *a2 * v2[0x284] + v2[0x286] * a2[8];
      flt_B42780 = a2[4] * v2[0x289] + v2[0x288] * *a2 + v2[0x28A] * a2[8];
      flt_B42764 = a2[5] * v2[0x281] + v2[0x280] * a2[1] + a2[9] * v2[0x282];
      flt_B42774 = v2[0x285] * a2[5] + v2[0x284] * a2[1] + v2[0x286] * a2[9];
      flt_B42784 = v2[0x288] * a2[1] + a2[5] * v2[0x289] + a2[9] * v2[0x28A];
      flt_B42768 = v2[0x280] * a2[2] + a2[6] * v2[0x281] + v2[0x282] * a2[0xA];
      flt_B42778 = a2[2] * v2[0x284] + v2[0x285] * a2[6] + v2[0x286] * a2[0xA];
      flt_B42788 = v2[0x289] * a2[6] + v2[0x288] * a2[2] + v2[0x28A] * a2[0xA];
      flt_B42790 = a2[4] * v2[0x28D] + v2[0x28C] * *a2 + v2[0x28E] * a2[8] + a2[0xC];
      flt_B42794 = v2[0x28C] * a2[1] + a2[5] * v2[0x28D] + a2[9] * v2[0x28E] + a2[0xD];
      v4 = v2[0x28D] * a2[6];
      v5 = v2[0x28C] * a2[2];
LABEL_3:
      v6 = v4 + v5 + v2[0x28E] * v3[0xA] + v3[0xE];
      goto LABEL_4;
    case 3:
      v8 = a2;
      v9 = dword_B42754;
      flt_B42760 = a2[4] * dword_B42754->member.invViewMatrix.m[0][1]
                 + dword_B42754->member.invViewMatrix.m[0][0] * *a2
                 + dword_B42754->member.invViewMatrix.m[0][2] * a2[8];
      flt_B42770 = a2[4] * v9->member.invViewMatrix.m[1][1]
                 + v9->member.invViewMatrix.m[1][0] * *a2
                 + v9->member.invViewMatrix.m[1][2] * a2[8];
      flt_B42780 = v9->member.invViewMatrix.m[2][1] * a2[4]
                 + *a2 * v9->member.invViewMatrix.m[2][0]
                 + v9->member.invViewMatrix.m[2][2] * a2[8];
      flt_B42764 = v9->member.invViewMatrix.m[0][0] * a2[1]
                 + a2[5] * v9->member.invViewMatrix.m[0][1]
                 + v9->member.invViewMatrix.m[0][2] * a2[9];
      flt_B42774 = v9->member.invViewMatrix.m[1][0] * a2[1]
                 + a2[5] * v9->member.invViewMatrix.m[1][1]
                 + a2[9] * v9->member.invViewMatrix.m[1][2];
      flt_B42784 = v9->member.invViewMatrix.m[2][1] * a2[5]
                 + v9->member.invViewMatrix.m[2][0] * a2[1]
                 + v9->member.invViewMatrix.m[2][2] * a2[9];
      flt_B42768 = v9->member.invViewMatrix.m[0][0] * a2[2]
                 + v9->member.invViewMatrix.m[0][1] * a2[6]
                 + v9->member.invViewMatrix.m[0][2] * a2[0xA];
      flt_B42778 = v9->member.invViewMatrix.m[1][1] * a2[6]
                 + v9->member.invViewMatrix.m[1][0] * a2[2]
                 + v9->member.invViewMatrix.m[1][2] * a2[0xA];
      v10 = a2[2] * v9->member.invViewMatrix.m[2][0];
      v11 = v9->member.invViewMatrix.m[2][1] * a2[6];
      goto LABEL_7;
    case 4:
      _memset(&flt_B42760, 0, 0x40);
      v12 = flt_A3D65C;
      flt_B42774 = flt_A3D65C;
      flt_B42780 = v12;
      flt_B42790 = v12;
      flt_B42794 = v12;
      return 1;
    case 5:
      v9 = dword_B42754;
      v8 = a2;
      flt_B42760 = dword_B42754->member.invViewMatrix.m[0][1] * a2[4]
                 + *a2 * dword_B42754->member.invViewMatrix.m[0][0]
                 + dword_B42754->member.invViewMatrix.m[0][2] * a2[8];
      flt_B42770 = a2[4] * v9->member.invViewMatrix.m[1][1]
                 + v9->member.invViewMatrix.m[1][0] * *a2
                 + v9->member.invViewMatrix.m[1][2] * a2[8];
      flt_B42780 = a2[4] * v9->member.invViewMatrix.m[2][1]
                 + v9->member.invViewMatrix.m[2][0] * *a2
                 + v9->member.invViewMatrix.m[2][2] * a2[8];
      flt_B42764 = v9->member.invViewMatrix.m[0][1] * a2[5]
                 + a2[1] * v9->member.invViewMatrix.m[0][0]
                 + a2[9] * v9->member.invViewMatrix.m[0][2];
      flt_B42774 = a2[5] * v9->member.invViewMatrix.m[1][1]
                 + v9->member.invViewMatrix.m[1][0] * a2[1]
                 + a2[9] * v9->member.invViewMatrix.m[1][2];
      flt_B42784 = a2[5] * v9->member.invViewMatrix.m[2][1]
                 + v9->member.invViewMatrix.m[2][0] * a2[1]
                 + v9->member.invViewMatrix.m[2][2] * a2[9];
      flt_B42768 = a2[2] * v9->member.invViewMatrix.m[0][0]
                 + v9->member.invViewMatrix.m[0][1] * a2[6]
                 + v9->member.invViewMatrix.m[0][2] * a2[0xA];
      flt_B42778 = v9->member.invViewMatrix.m[1][0] * a2[2]
                 + v9->member.invViewMatrix.m[1][1] * a2[6]
                 + v9->member.invViewMatrix.m[1][2] * a2[0xA];
      v10 = a2[6] * v9->member.invViewMatrix.m[2][1];
      v11 = a2[2] * v9->member.invViewMatrix.m[2][0];
      goto LABEL_7;
    case 6:
      v8 = a2;
      v9 = dword_B42754;
      flt_B42760 = a2[4] * dword_B42754->member.invViewMatrix.m[0][1]
                 + *a2 * dword_B42754->member.invViewMatrix.m[0][0]
                 + dword_B42754->member.invViewMatrix.m[0][2] * a2[8];
      flt_B42770 = v9->member.invViewMatrix.m[1][1] * a2[4]
                 + *a2 * v9->member.invViewMatrix.m[1][0]
                 + v9->member.invViewMatrix.m[1][2] * a2[8];
      flt_B42780 = a2[4] * v9->member.invViewMatrix.m[2][1]
                 + v9->member.invViewMatrix.m[2][0] * *a2
                 + v9->member.invViewMatrix.m[2][2] * a2[8];
      flt_B42764 = a2[5] * v9->member.invViewMatrix.m[0][1]
                 + v9->member.invViewMatrix.m[0][0] * a2[1]
                 + a2[9] * v9->member.invViewMatrix.m[0][2];
      flt_B42774 = v9->member.invViewMatrix.m[1][1] * a2[5]
                 + v9->member.invViewMatrix.m[1][0] * a2[1]
                 + v9->member.invViewMatrix.m[1][2] * a2[9];
      flt_B42784 = v9->member.invViewMatrix.m[2][0] * a2[1]
                 + a2[5] * v9->member.invViewMatrix.m[2][1]
                 + a2[9] * v9->member.invViewMatrix.m[2][2];
      flt_B42768 = a2[2] * v9->member.invViewMatrix.m[0][0]
                 + a2[6] * v9->member.invViewMatrix.m[0][1]
                 + v9->member.invViewMatrix.m[0][2] * a2[0xA];
      flt_B42778 = a2[2] * v9->member.invViewMatrix.m[1][0]
                 + v9->member.invViewMatrix.m[1][1] * a2[6]
                 + v9->member.invViewMatrix.m[1][2] * a2[0xA];
      v10 = v9->member.invViewMatrix.m[2][1] * a2[6];
      v11 = v9->member.invViewMatrix.m[2][0] * a2[2];
LABEL_7:
      flt_B42788 = v10 + v11 + v9->member.invViewMatrix.m[2][2] * v8[0xA];
      flt_B42790 = v8[0xC];
      flt_B42794 = v8[0xD];
      v6 = v8[0xE];
LABEL_4:
      flt_B42798 = v6;
      flt_B4276C = 0.0;
      flt_B4277C = 0.0;
      flt_B4278C = 0.0;
      flt_B4279C = 0.0;
      return 1;
    default:
      JUMPOUT(0x77201E);
  }
}
