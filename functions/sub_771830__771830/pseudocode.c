//
// DX11 bounded observation 2026-09-30: recipes 1 and 2 read the renderer pointer B42754 and inverse-view elements at renderer+0xA00..0xA38, combining source matrix columns into B42760 scratch including translation. Main IDA extent is 771830..77201E with one chunk; full helper/default/switch-tail qualification remains pending. Do not infer a complete recipe evaluator from this partial observation.
// DX11 verified 2026-09-30: complete body includes default return at 77201E..772024 and six-entry switch table 772024..77203C. Default returns AL=0 without scratch writes. Recipes 1/2 multiply inverse-view (renderer B42754 +A00) by source first three columns and include inverse-view translation. Recipes 3/5/6 use same 3x3 product but copy source translation. All those recipes explicitly zero output column4 INCLUDING m44. Recipe4 zeroes 64-byte scratch then sets indices5,8,12,13 to float at A3D65C (IDB 0.5), ignores source and camera. B42760 scratch is shared output, not retained frame state. Case4 external call is standard memset. Previous incomplete extent observation is superseded by default/table disassembly verification.
char __stdcall sub_771830(int a1, float *a2)
{
  float *v2; // ecx
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  char result; // al
  float *v8; // eax
  NiDX9Renderer *v9; // ecx
  double v10; // st7
  double v11; // st6
  double v12; // st7

  switch ( a1 ) /*0x771843*/
  {
    case 1: /*0x771843*/
      v2 = (float *)unk_B42754; /*0x77184a*/
      v3 = a2; /*0x771850*/
      unk_B42760 = unk_B42754->member.invViewMatrix.m[0][1] * a2[4] /*0x771872*/
                 + unk_B42754->member.invViewMatrix.m[0][0] * *a2
                 + unk_B42754->member.invViewMatrix.m[0][2] * a2[8];
      unk_B42770 = v2[0x285] * a2[4] + *a2 * v2[0x284] + v2[0x286] * a2[8]; /*0x771896*/
      unk_B42780 = a2[4] * v2[0x289] + v2[0x288] * *a2 + v2[0x28A] * a2[8]; /*0x7718ba*/
      unk_B42764 = v2[0x280] * a2[1] + v2[0x281] * a2[5] + a2[9] * v2[0x282]; /*0x7718df*/
      unk_B42774 = v2[0x285] * a2[5] + v2[0x284] * a2[1] + v2[0x286] * a2[9]; /*0x771904*/
      unk_B42784 = v2[0x288] * a2[1] + a2[5] * v2[0x289] + a2[9] * v2[0x28A]; /*0x771929*/
      unk_B42768 = v2[0x280] * a2[2] + v2[0x281] * a2[6] + v2[0x282] * a2[0xA]; /*0x77194e*/
      unk_B42778 = a2[2] * v2[0x284] + v2[0x285] * a2[6] + v2[0x286] * a2[0xA]; /*0x771973*/
      unk_B42788 = v2[0x289] * a2[6] + v2[0x288] * a2[2] + v2[0x28A] * a2[0xA]; /*0x771998*/
      unk_B42790 = v2[0x28D] * a2[4] + *a2 * v2[0x28C] + v2[0x28E] * a2[8] + a2[0xC]; /*0x7719bf*/
      unk_B42794 = v2[0x28D] * a2[5] + v2[0x28C] * a2[1] + v2[0x28E] * a2[9] + a2[0xD]; /*0x7719e7*/
      v4 = a2[2] * v2[0x28C]; /*0x7719f0*/
      v5 = v2[0x28D] * a2[6]; /*0x7719fc*/
      goto LABEL_3; /*0x7719fc*/
    case 2: /*0x771843*/
      v3 = a2; /*0x771a35*/
      v2 = (float *)unk_B42754; /*0x771a39*/
      unk_B42760 = a2[4] * unk_B42754->member.invViewMatrix.m[0][1] /*0x771a5d*/
                 + unk_B42754->member.invViewMatrix.m[0][0] * *a2
                 + unk_B42754->member.invViewMatrix.m[0][2] * a2[8];
      unk_B42770 = v2[0x285] * a2[4] + *a2 * v2[0x284] + v2[0x286] * a2[8]; /*0x771a81*/
      unk_B42780 = a2[4] * v2[0x289] + v2[0x288] * *a2 + v2[0x28A] * a2[8]; /*0x771aa5*/
      unk_B42764 = a2[5] * v2[0x281] + v2[0x280] * a2[1] + a2[9] * v2[0x282]; /*0x771aca*/
      unk_B42774 = v2[0x285] * a2[5] + v2[0x284] * a2[1] + v2[0x286] * a2[9]; /*0x771aef*/
      unk_B42784 = v2[0x288] * a2[1] + a2[5] * v2[0x289] + a2[9] * v2[0x28A]; /*0x771b14*/
      unk_B42768 = v2[0x280] * a2[2] + a2[6] * v2[0x281] + v2[0x282] * a2[0xA]; /*0x771b39*/
      unk_B42778 = a2[2] * v2[0x284] + v2[0x285] * a2[6] + v2[0x286] * a2[0xA]; /*0x771b5e*/
      unk_B42788 = v2[0x289] * a2[6] + v2[0x288] * a2[2] + v2[0x28A] * a2[0xA]; /*0x771b83*/
      unk_B42790 = a2[4] * v2[0x28D] + v2[0x28C] * *a2 + v2[0x28E] * a2[8] + a2[0xC]; /*0x771baa*/
      unk_B42794 = v2[0x28C] * a2[1] + a2[5] * v2[0x28D] + a2[9] * v2[0x28E] + a2[0xD]; /*0x771bd2*/
      v4 = v2[0x28D] * a2[6]; /*0x771bde*/
      v5 = v2[0x28C] * a2[2]; /*0x771be7*/
LABEL_3:
      v6 = v4 + v5 + v2[0x28E] * v3[0xA] + v3[0xE]; /*0x7719ff*/
      goto LABEL_4; /*0x771a0c*/
    case 3: /*0x771843*/
      v8 = a2; /*0x771bef*/
      v9 = unk_B42754; /*0x771bf3*/
      unk_B42760 = a2[4] * unk_B42754->member.invViewMatrix.m[0][1] /*0x771c17*/
                 + unk_B42754->member.invViewMatrix.m[0][0] * *a2
                 + unk_B42754->member.invViewMatrix.m[0][2] * a2[8];
      unk_B42770 = a2[4] * v9->member.invViewMatrix.m[1][1] /*0x771c3b*/
                 + v9->member.invViewMatrix.m[1][0] * *a2
                 + v9->member.invViewMatrix.m[1][2] * a2[8];
      unk_B42780 = v9->member.invViewMatrix.m[2][1] * a2[4] /*0x771c5f*/
                 + *a2 * v9->member.invViewMatrix.m[2][0]
                 + v9->member.invViewMatrix.m[2][2] * a2[8];
      unk_B42764 = v9->member.invViewMatrix.m[0][0] * a2[1] /*0x771c84*/
                 + a2[5] * v9->member.invViewMatrix.m[0][1]
                 + v9->member.invViewMatrix.m[0][2] * a2[9];
      unk_B42774 = v9->member.invViewMatrix.m[1][0] * a2[1] /*0x771ca9*/
                 + a2[5] * v9->member.invViewMatrix.m[1][1]
                 + a2[9] * v9->member.invViewMatrix.m[1][2];
      unk_B42784 = v9->member.invViewMatrix.m[2][1] * a2[5] /*0x771cce*/
                 + v9->member.invViewMatrix.m[2][0] * a2[1]
                 + v9->member.invViewMatrix.m[2][2] * a2[9];
      unk_B42768 = v9->member.invViewMatrix.m[0][0] * a2[2] /*0x771cf3*/
                 + v9->member.invViewMatrix.m[0][1] * a2[6]
                 + v9->member.invViewMatrix.m[0][2] * a2[0xA];
      unk_B42778 = v9->member.invViewMatrix.m[1][1] * a2[6] /*0x771d18*/
                 + v9->member.invViewMatrix.m[1][0] * a2[2]
                 + v9->member.invViewMatrix.m[1][2] * a2[0xA];
      v10 = a2[2] * v9->member.invViewMatrix.m[2][0]; /*0x771d21*/
      v11 = v9->member.invViewMatrix.m[2][1] * a2[6]; /*0x771d2d*/
      goto LABEL_7; /*0x771d2d*/
    case 4: /*0x771843*/
      _memset((int)&unk_B42760, 0, 0x40u); /*0x771d66*/
      v12 = kHeadBodyNormalMatchRadius; /*0x771d6b*/
      unk_B42774 = kHeadBodyNormalMatchRadius; /*0x771d71*/
      unk_B42780 = v12; /*0x771d7a*/
      unk_B42790 = v12; /*0x771d82*/
      unk_B42794 = v12; /*0x771d89*/
      return 1; /*0x771d8f*/
    case 5: /*0x771843*/
      v9 = unk_B42754; /*0x771d92*/
      v8 = a2; /*0x771d98*/
      unk_B42760 = unk_B42754->member.invViewMatrix.m[0][1] * a2[4] /*0x771dba*/
                 + *a2 * unk_B42754->member.invViewMatrix.m[0][0]
                 + unk_B42754->member.invViewMatrix.m[0][2] * a2[8];
      unk_B42770 = a2[4] * v9->member.invViewMatrix.m[1][1] /*0x771dde*/
                 + v9->member.invViewMatrix.m[1][0] * *a2
                 + v9->member.invViewMatrix.m[1][2] * a2[8];
      unk_B42780 = a2[4] * v9->member.invViewMatrix.m[2][1] /*0x771e02*/
                 + v9->member.invViewMatrix.m[2][0] * *a2
                 + v9->member.invViewMatrix.m[2][2] * a2[8];
      unk_B42764 = v9->member.invViewMatrix.m[0][1] * a2[5] /*0x771e27*/
                 + a2[1] * v9->member.invViewMatrix.m[0][0]
                 + a2[9] * v9->member.invViewMatrix.m[0][2];
      unk_B42774 = a2[5] * v9->member.invViewMatrix.m[1][1] /*0x771e4c*/
                 + v9->member.invViewMatrix.m[1][0] * a2[1]
                 + a2[9] * v9->member.invViewMatrix.m[1][2];
      unk_B42784 = a2[5] * v9->member.invViewMatrix.m[2][1] /*0x771e71*/
                 + v9->member.invViewMatrix.m[2][0] * a2[1]
                 + v9->member.invViewMatrix.m[2][2] * a2[9];
      unk_B42768 = a2[2] * v9->member.invViewMatrix.m[0][0] /*0x771e96*/
                 + v9->member.invViewMatrix.m[0][1] * a2[6]
                 + v9->member.invViewMatrix.m[0][2] * a2[0xA];
      unk_B42778 = v9->member.invViewMatrix.m[1][0] * a2[2] /*0x771ebb*/
                 + v9->member.invViewMatrix.m[1][1] * a2[6]
                 + v9->member.invViewMatrix.m[1][2] * a2[0xA];
      v10 = a2[6] * v9->member.invViewMatrix.m[2][1]; /*0x771ec4*/
      v11 = a2[2] * v9->member.invViewMatrix.m[2][0]; /*0x771ecd*/
      goto LABEL_7; /*0x771ed3*/
    case 6: /*0x771843*/
      v8 = a2; /*0x771ed8*/
      v9 = unk_B42754; /*0x771edc*/
      unk_B42760 = a2[4] * unk_B42754->member.invViewMatrix.m[0][1] /*0x771f00*/
                 + *a2 * unk_B42754->member.invViewMatrix.m[0][0]
                 + unk_B42754->member.invViewMatrix.m[0][2] * a2[8];
      unk_B42770 = v9->member.invViewMatrix.m[1][1] * a2[4] /*0x771f24*/
                 + *a2 * v9->member.invViewMatrix.m[1][0]
                 + v9->member.invViewMatrix.m[1][2] * a2[8];
      unk_B42780 = a2[4] * v9->member.invViewMatrix.m[2][1] /*0x771f48*/
                 + v9->member.invViewMatrix.m[2][0] * *a2
                 + v9->member.invViewMatrix.m[2][2] * a2[8];
      unk_B42764 = a2[5] * v9->member.invViewMatrix.m[0][1] /*0x771f6d*/
                 + v9->member.invViewMatrix.m[0][0] * a2[1]
                 + a2[9] * v9->member.invViewMatrix.m[0][2];
      unk_B42774 = v9->member.invViewMatrix.m[1][1] * a2[5] /*0x771f92*/
                 + v9->member.invViewMatrix.m[1][0] * a2[1]
                 + v9->member.invViewMatrix.m[1][2] * a2[9];
      unk_B42784 = v9->member.invViewMatrix.m[2][0] * a2[1] /*0x771fb7*/
                 + a2[5] * v9->member.invViewMatrix.m[2][1]
                 + a2[9] * v9->member.invViewMatrix.m[2][2];
      unk_B42768 = a2[2] * v9->member.invViewMatrix.m[0][0] /*0x771fdc*/
                 + a2[6] * v9->member.invViewMatrix.m[0][1]
                 + v9->member.invViewMatrix.m[0][2] * a2[0xA];
      unk_B42778 = a2[2] * v9->member.invViewMatrix.m[1][0] /*0x772001*/
                 + v9->member.invViewMatrix.m[1][1] * a2[6]
                 + v9->member.invViewMatrix.m[1][2] * a2[0xA];
      v10 = v9->member.invViewMatrix.m[2][1] * a2[6]; /*0x77200d*/
      v11 = v9->member.invViewMatrix.m[2][0] * a2[2]; /*0x772016*/
LABEL_7:
      unk_B42788 = v10 + v11 + v9->member.invViewMatrix.m[2][2] * v8[0xA]; /*0x771d30*/
      unk_B42790 = v8[0xC]; /*0x771d46*/
      unk_B42794 = v8[0xD]; /*0x771d4f*/
      v6 = v8[0xE]; /*0x771d55*/
LABEL_4:
      unk_B42798 = v6; /*0x771a0f*/
      unk_B4276C = 0.0; /*0x771a1a*/
      unk_B4277C = 0.0; /*0x771a20*/
      unk_B4278C = 0.0; /*0x771a26*/
      unk_B4279C = 0.0; /*0x771a2c*/
      result = 1; /*0x771a15*/
      break; /*0x771a32*/
    default:
      result = 0; /*0x77201e*/
      break; /*0x77201e*/
  }
  return result; /*0x772020*/
}
