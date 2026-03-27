0x774BD0: mov     eax, [esp+arg_0]
0x774BD4: cmp     eax, 3154454Dh
0x774BD9: jg      loc_774D2B
0x774BDF: jz      loc_774D25
0x774BE5: add     eax, 0FFFFFFECh; switch 98 cases
0x774BE8: cmp     eax, 61h
0x774BEB: ja      def_774BF8; jumptable 00774BF8 default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774BF1: movzx   eax, ds:byte_774E74[eax]
0x774BF8: jmp     ds:jpt_774BF8[eax*4]; switch jump
0x774BFF: mov     eax, offset aD3dfmt_r8g8b8; jumptable 00774BF8 case 20
0x774C04: retn
0x774C05: mov     eax, offset aD3dfmt_a8r8g8b; jumptable 00774BF8 case 21
0x774C0A: retn
0x774C0B: mov     eax, offset aD3dfmt_x8r8g8b; jumptable 00774BF8 case 22
0x774C10: retn
0x774C11: mov     eax, offset aD3dfmt_r5g6b5; jumptable 00774BF8 case 23
0x774C16: retn
0x774C17: mov     eax, offset aD3dfmt_x1r5g5b; jumptable 00774BF8 case 24
0x774C1C: retn
0x774C1D: mov     eax, offset aD3dfmt_a1r5g5b; jumptable 00774BF8 case 25
0x774C22: retn
0x774C23: mov     eax, offset aD3dfmt_a4r4g4b; jumptable 00774BF8 case 26
0x774C28: retn
0x774C29: mov     eax, offset aD3dfmt_r3g3b2; jumptable 00774BF8 case 27
0x774C2E: retn
0x774C2F: mov     eax, offset aD3dfmt_a8; jumptable 00774BF8 case 28
0x774C34: retn
0x774C35: mov     eax, offset aD3dfmt_a8r3g3b; jumptable 00774BF8 case 29
0x774C3A: retn
0x774C3B: mov     eax, offset aD3dfmt_x4r4g4b; jumptable 00774BF8 case 30
0x774C40: retn
0x774C41: mov     eax, offset aD3dfmt_a2b10g1; jumptable 00774BF8 case 31
0x774C46: retn
0x774C47: mov     eax, offset aD3dfmt_a8b8g8r; jumptable 00774BF8 case 32
0x774C4C: retn
0x774C4D: mov     eax, offset aD3dfmt_x8b8g8r; jumptable 00774BF8 case 33
0x774C52: retn
0x774C53: mov     eax, offset aD3dfmt_g16r16; jumptable 00774BF8 case 34
0x774C58: retn
0x774C59: mov     eax, offset aD3dfmt_a2r10g1; jumptable 00774BF8 case 35
0x774C5E: retn
0x774C5F: mov     eax, offset aD3dfmt_a16b16g; jumptable 00774BF8 case 36
0x774C64: retn
0x774C65: mov     eax, offset aD3dfmt_a8p8; jumptable 00774BF8 case 40
0x774C6A: retn
0x774C6B: mov     eax, offset aD3dfmt_p8; jumptable 00774BF8 case 41
0x774C70: retn
0x774C71: mov     eax, offset aD3dfmt_l8; jumptable 00774BF8 case 50
0x774C76: retn
0x774C77: mov     eax, offset aD3dfmt_a8l8; jumptable 00774BF8 case 51
0x774C7C: retn
0x774C7D: mov     eax, offset aD3dfmt_a4l4; jumptable 00774BF8 case 52
0x774C82: retn
0x774C83: mov     eax, offset aD3dfmt_v8u8; jumptable 00774BF8 case 60
0x774C88: retn
0x774C89: mov     eax, offset aD3dfmt_l6v5u5; jumptable 00774BF8 case 61
0x774C8E: retn
0x774C8F: mov     eax, offset aD3dfmt_x8l8v8u; jumptable 00774BF8 case 62
0x774C94: retn
0x774C95: mov     eax, offset aD3dfmt_q8w8v8u; jumptable 00774BF8 case 63
0x774C9A: retn
0x774C9B: mov     eax, offset aD3dfmt_v16u16; jumptable 00774BF8 case 64
0x774CA0: retn
0x774CA1: mov     eax, offset aD3dfmt_a2w10v1; jumptable 00774BF8 case 67
0x774CA6: retn
0x774CA7: mov     eax, offset aD3dfmt_d16_loc; jumptable 00774BF8 case 70
0x774CAC: retn
0x774CAD: mov     eax, offset aD3dfmt_d32; jumptable 00774BF8 case 71
0x774CB2: retn
0x774CB3: mov     eax, offset aD3dfmt_d15s1; jumptable 00774BF8 case 73
0x774CB8: retn
0x774CB9: mov     eax, offset aD3dfmt_d24s8; jumptable 00774BF8 case 75
0x774CBE: retn
0x774CBF: mov     eax, offset aD3dfmt_d24x8; jumptable 00774BF8 case 77
0x774CC4: retn
0x774CC5: mov     eax, offset aD3dfmt_d24x4s4; jumptable 00774BF8 case 79
0x774CCA: retn
0x774CCB: mov     eax, offset aD3dfmt_d16; jumptable 00774BF8 case 80
0x774CD0: retn
0x774CD1: mov     eax, offset aD3dfmt_d32f_lo; jumptable 00774BF8 case 82
0x774CD6: retn
0x774CD7: mov     eax, offset aD3dfmt_d24fs8; jumptable 00774BF8 case 83
0x774CDC: retn
0x774CDD: mov     eax, offset aD3dfmt_l16; jumptable 00774BF8 case 81
0x774CE2: retn
0x774CE3: mov     eax, offset aD3dfmt_vertexd; jumptable 00774BF8 case 100
0x774CE8: retn
0x774CE9: mov     eax, offset aD3dfmt_index16; jumptable 00774BF8 case 101
0x774CEE: retn
0x774CEF: mov     eax, offset aD3dfmt_index32; jumptable 00774BF8 case 102
0x774CF4: retn
0x774CF5: mov     eax, offset aD3dfmt_q16w16v; jumptable 00774BF8 case 110
0x774CFA: retn
0x774CFB: mov     eax, offset aD3dfmt_r16f; jumptable 00774BF8 case 111
0x774D00: retn
0x774D01: mov     eax, offset aD3dfmt_g16r16f; jumptable 00774BF8 case 112
0x774D06: retn
0x774D07: mov     eax, offset aD3dfmt_a16b1_0; jumptable 00774BF8 case 113
0x774D0C: retn
0x774D0D: mov     eax, offset aD3dfmt_r32f; jumptable 00774BF8 case 114
0x774D12: retn
0x774D13: mov     eax, offset aD3dfmt_g32r32f; jumptable 00774BF8 case 115
0x774D18: retn
0x774D19: mov     eax, offset aD3dfmt_a32b32g; jumptable 00774BF8 case 116
0x774D1E: retn
0x774D1F: mov     eax, offset aD3dfmt_cxv8u8; jumptable 00774BF8 case 117
0x774D24: retn
0x774D25: mov     eax, offset aD3dfmt_multi2_; "D3DFMT_MULTI2_ARGB8"
0x774D2A: retn
0x774D2B: cmp     eax, 34545844h
0x774D30: jg      short loc_774D70
0x774D32: jz      short loc_774D6A
0x774D34: cmp     eax, 32595559h
0x774D39: jg      short loc_774D5D
0x774D3B: jz      short loc_774D57
0x774D3D: cmp     eax, 31545844h
0x774D42: jz      short loc_774D51
0x774D44: cmp     eax, 32545844h
0x774D49: jnz     short def_774BF8; jumptable 00774BF8 default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774D4B: mov     eax, offset aD3dfmt_dxt2; "D3DFMT_DXT2"
0x774D50: retn
0x774D51: mov     eax, offset aD3dfmt_dxt1; "D3DFMT_DXT1"
0x774D56: retn
0x774D57: mov     eax, offset aD3dfmt_yuy2; "D3DFMT_YUY2"
0x774D5C: retn
0x774D5D: cmp     eax, 33545844h
0x774D62: jnz     short def_774BF8; jumptable 00774BF8 default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774D64: mov     eax, offset aD3dfmt_dxt3; "D3DFMT_DXT3"
0x774D69: retn
0x774D6A: mov     eax, offset aD3dfmt_dxt4; "D3DFMT_DXT4"
0x774D6F: retn
0x774D70: cmp     eax, 47424752h
0x774D75: jg      short loc_774D99
0x774D77: jz      short loc_774D93
0x774D79: cmp     eax, 35545844h
0x774D7E: jz      short loc_774D8D
0x774D80: cmp     eax, 42475247h
0x774D85: jnz     short def_774BF8; jumptable 00774BF8 default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774D87: mov     eax, offset aD3dfmt_g8r8_g8; "D3DFMT_G8R8_G8B8"
0x774D8C: retn
0x774D8D: mov     eax, offset aD3dfmt_dxt5; "D3DFMT_DXT5"
0x774D92: retn
0x774D93: mov     eax, offset aD3dfmt_r8g8_b8; "D3DFMT_R8G8_B8G8"
0x774D98: retn
0x774D99: cmp     eax, 59565955h
0x774D9E: jz      short loc_774DA6
0x774DA0: mov     eax, offset aUnknown; jumptable 00774BF8 default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774DA5: retn
0x774DA6: mov     eax, offset aD3dfmt_uyvy; "D3DFMT_UYVY"
0x774DAB: retn
