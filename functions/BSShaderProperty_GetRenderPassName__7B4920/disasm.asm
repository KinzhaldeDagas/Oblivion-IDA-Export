0x7B4920: sub     esp, 10h
0x7B4923: mov     eax, ds:0B30AACh
0x7B4928: xor     eax, esp
0x7B492A: mov     [esp+10h+var_4], eax
0x7B492E: mov     eax, [esp+10h+arg_0]
0x7B4932: cmp     eax, 1A2h; switch 419 cases
0x7B4937: ja      BSShaderProperty_GetRenderPassName___def_7B493D; jumptable 007B493D default case, cases 275,276,299,300
0x7B493D: jmp     ds:jpt_7B493D[eax*4]; switch jump
0x7B4944: mov     eax, offset aBssm_zonly; jumptable 007B493D case 0
0x7B4949: mov     ecx, [esp+10h+var_4]
0x7B494D: xor     ecx, esp
0x7B494F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4954: add     esp, 10h
0x7B4957: retn
0x7B4958: mov     eax, offset aBssm_zonly_at; jumptable 007B493D case 1
0x7B495D: mov     ecx, [esp+10h+var_4]
0x7B4961: xor     ecx, esp
0x7B4963: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4968: add     esp, 10h
0x7B496B: retn
0x7B496C: mov     eax, offset aBssm_zonly_s; jumptable 007B493D case 2
0x7B4971: mov     ecx, [esp+10h+var_4]
0x7B4975: xor     ecx, esp
0x7B4977: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B497C: add     esp, 10h
0x7B497F: retn
0x7B4980: mov     eax, offset aBssm_ambient_o; jumptable 007B493D case 3
0x7B4985: mov     ecx, [esp+10h+var_4]
0x7B4989: xor     ecx, esp
0x7B498B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4990: add     esp, 10h
0x7B4993: retn
0x7B4994: mov     eax, offset aBssm_depthmap; jumptable 007B493D case 6
0x7B4999: mov     ecx, [esp+10h+var_4]
0x7B499D: xor     ecx, esp
0x7B499F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B49A4: add     esp, 10h
0x7B49A7: retn
0x7B49A8: mov     eax, offset aBssm_depthmap_; jumptable 007B493D case 7
0x7B49AD: mov     ecx, [esp+10h+var_4]
0x7B49B1: xor     ecx, esp
0x7B49B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B49B8: add     esp, 10h
0x7B49BB: retn
0x7B49BC: mov     eax, offset aBssm_depthma_0; jumptable 007B493D case 8
0x7B49C1: mov     ecx, [esp+10h+var_4]
0x7B49C5: xor     ecx, esp
0x7B49C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B49CC: add     esp, 10h
0x7B49CF: retn
0x7B49D0: mov     eax, offset aBssm_depthma_1; jumptable 007B493D case 9
0x7B49D5: mov     ecx, [esp+10h+var_4]
0x7B49D9: xor     ecx, esp
0x7B49DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B49E0: add     esp, 10h
0x7B49E3: retn
0x7B49E4: mov     eax, offset aBssm_grass_noa; jumptable 007B493D case 12
0x7B49E9: mov     ecx, [esp+10h+var_4]
0x7B49ED: xor     ecx, esp
0x7B49EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B49F4: add     esp, 10h
0x7B49F7: retn
0x7B49F8: mov     eax, offset aBssm_grasspt_n; jumptable 007B493D case 13
0x7B49FD: mov     ecx, [esp+10h+var_4]
0x7B4A01: xor     ecx, esp
0x7B4A03: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A08: add     esp, 10h
0x7B4A0B: retn
0x7B4A0C: mov     eax, offset aBssm_leaves; jumptable 007B493D case 14
0x7B4A11: mov     ecx, [esp+10h+var_4]
0x7B4A15: xor     ecx, esp
0x7B4A17: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A1C: add     esp, 10h
0x7B4A1F: retn
0x7B4A20: mov     eax, offset aBssm_fronds; jumptable 007B493D case 15
0x7B4A25: mov     ecx, [esp+10h+var_4]
0x7B4A29: xor     ecx, esp
0x7B4A2B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A30: add     esp, 10h
0x7B4A33: retn
0x7B4A34: mov     eax, offset aBssm_ambient; jumptable 007B493D case 16
0x7B4A39: mov     ecx, [esp+10h+var_4]
0x7B4A3D: xor     ecx, esp
0x7B4A3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A44: add     esp, 10h
0x7B4A47: retn
0x7B4A48: mov     eax, offset aBssm_ambient_g; jumptable 007B493D case 17
0x7B4A4D: mov     ecx, [esp+10h+var_4]
0x7B4A51: xor     ecx, esp
0x7B4A53: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A58: add     esp, 10h
0x7B4A5B: retn
0x7B4A5C: mov     eax, offset aBssm_ambient_a; jumptable 007B493D case 18
0x7B4A61: mov     ecx, [esp+10h+var_4]
0x7B4A65: xor     ecx, esp
0x7B4A67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A6C: add     esp, 10h
0x7B4A6F: retn
0x7B4A70: mov     eax, offset aBssm_ambient_0; jumptable 007B493D case 19
0x7B4A75: mov     ecx, [esp+10h+var_4]
0x7B4A79: xor     ecx, esp
0x7B4A7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A80: add     esp, 10h
0x7B4A83: retn
0x7B4A84: mov     eax, offset aBssm_ambient_s; jumptable 007B493D case 20
0x7B4A89: mov     ecx, [esp+10h+var_4]
0x7B4A8D: xor     ecx, esp
0x7B4A8F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4A94: add     esp, 10h
0x7B4A97: retn
0x7B4A98: mov     eax, offset aBssm_ambient_1; jumptable 007B493D case 21
0x7B4A9D: mov     ecx, [esp+10h+var_4]
0x7B4AA1: xor     ecx, esp
0x7B4AA3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4AA8: add     esp, 10h
0x7B4AAB: retn
0x7B4AAC: mov     eax, offset aBssm_ambient_2; jumptable 007B493D case 22
0x7B4AB1: mov     ecx, [esp+10h+var_4]
0x7B4AB5: xor     ecx, esp
0x7B4AB7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4ABC: add     esp, 10h
0x7B4ABF: retn
0x7B4AC0: mov     eax, offset aBssm_ambient_3; jumptable 007B493D case 23
0x7B4AC5: mov     ecx, [esp+10h+var_4]
0x7B4AC9: xor     ecx, esp
0x7B4ACB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4AD0: add     esp, 10h
0x7B4AD3: retn
0x7B4AD4: mov     eax, offset aBssm_ambient_4; jumptable 007B493D case 24
0x7B4AD9: mov     ecx, [esp+10h+var_4]
0x7B4ADD: xor     ecx, esp
0x7B4ADF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4AE4: add     esp, 10h
0x7B4AE7: retn
0x7B4AE8: mov     eax, offset aBssm_ambdiffte; jumptable 007B493D case 25
0x7B4AED: mov     ecx, [esp+10h+var_4]
0x7B4AF1: xor     ecx, esp
0x7B4AF3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4AF8: add     esp, 10h
0x7B4AFB: retn
0x7B4AFC: mov     eax, offset aBssm_ambdiff_0; jumptable 007B493D case 26
0x7B4B01: mov     ecx, [esp+10h+var_4]
0x7B4B05: xor     ecx, esp
0x7B4B07: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B0C: add     esp, 10h
0x7B4B0F: retn
0x7B4B10: mov     eax, offset aBssm_ambdiff_1; jumptable 007B493D case 52
0x7B4B15: mov     ecx, [esp+10h+var_4]
0x7B4B19: xor     ecx, esp
0x7B4B1B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B20: add     esp, 10h
0x7B4B23: retn
0x7B4B24: mov     eax, offset aBssm_ambdiff_2; jumptable 007B493D case 53
0x7B4B29: mov     ecx, [esp+10h+var_4]
0x7B4B2D: xor     ecx, esp
0x7B4B2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B34: add     esp, 10h
0x7B4B37: retn
0x7B4B38: mov     eax, offset aBssm_ambdiff_3; jumptable 007B493D case 27
0x7B4B3D: mov     ecx, [esp+10h+var_4]
0x7B4B41: xor     ecx, esp
0x7B4B43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B48: add     esp, 10h
0x7B4B4B: retn
0x7B4B4C: mov     eax, offset aBssm_ambdiff_4; jumptable 007B493D case 28
0x7B4B51: mov     ecx, [esp+10h+var_4]
0x7B4B55: xor     ecx, esp
0x7B4B57: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B5C: add     esp, 10h
0x7B4B5F: retn
0x7B4B60: mov     eax, offset aBssm_ambdiff_5; jumptable 007B493D case 54
0x7B4B65: mov     ecx, [esp+10h+var_4]
0x7B4B69: xor     ecx, esp
0x7B4B6B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B70: add     esp, 10h
0x7B4B73: retn
0x7B4B74: mov     eax, offset aBssm_ambdiff_6; jumptable 007B493D case 55
0x7B4B79: mov     ecx, [esp+10h+var_4]
0x7B4B7D: xor     ecx, esp
0x7B4B7F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B84: add     esp, 10h
0x7B4B87: retn
0x7B4B88: mov     eax, offset aBssm_ambdiff_7; jumptable 007B493D case 29
0x7B4B8D: mov     ecx, [esp+10h+var_4]
0x7B4B91: xor     ecx, esp
0x7B4B93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4B98: add     esp, 10h
0x7B4B9B: retn
0x7B4B9C: mov     eax, offset aBssm_ambdiff_8; jumptable 007B493D case 30
0x7B4BA1: mov     ecx, [esp+10h+var_4]
0x7B4BA5: xor     ecx, esp
0x7B4BA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4BAC: add     esp, 10h
0x7B4BAF: retn
0x7B4BB0: mov     eax, offset aBssm_ambdiff_9; jumptable 007B493D case 31
0x7B4BB5: mov     ecx, [esp+10h+var_4]
0x7B4BB9: xor     ecx, esp
0x7B4BBB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4BC0: add     esp, 10h
0x7B4BC3: retn
0x7B4BC4: mov     eax, offset aBssm_ambdif_10; jumptable 007B493D case 56
0x7B4BC9: mov     ecx, [esp+10h+var_4]
0x7B4BCD: xor     ecx, esp
0x7B4BCF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4BD4: add     esp, 10h
0x7B4BD7: retn
0x7B4BD8: mov     eax, offset aBssm_ambdif_11; jumptable 007B493D case 57
0x7B4BDD: mov     ecx, [esp+10h+var_4]
0x7B4BE1: xor     ecx, esp
0x7B4BE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4BE8: add     esp, 10h
0x7B4BEB: retn
0x7B4BEC: mov     eax, offset aBssm_ambdif_12; jumptable 007B493D case 32
0x7B4BF1: mov     ecx, [esp+10h+var_4]
0x7B4BF5: xor     ecx, esp
0x7B4BF7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4BFC: add     esp, 10h
0x7B4BFF: retn
0x7B4C00: mov     eax, offset aBssm_ambdif_13; jumptable 007B493D case 33
0x7B4C05: mov     ecx, [esp+10h+var_4]
0x7B4C09: xor     ecx, esp
0x7B4C0B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C10: add     esp, 10h
0x7B4C13: retn
0x7B4C14: mov     eax, offset aBssm_ambdif_14; jumptable 007B493D case 34
0x7B4C19: mov     ecx, [esp+10h+var_4]
0x7B4C1D: xor     ecx, esp
0x7B4C1F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C24: add     esp, 10h
0x7B4C27: retn
0x7B4C28: mov     eax, offset aBssm_ambdif_15; jumptable 007B493D case 58
0x7B4C2D: mov     ecx, [esp+10h+var_4]
0x7B4C31: xor     ecx, esp
0x7B4C33: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C38: add     esp, 10h
0x7B4C3B: retn
0x7B4C3C: mov     eax, offset aBssm_ambdif_16; jumptable 007B493D case 59
0x7B4C41: mov     ecx, [esp+10h+var_4]
0x7B4C45: xor     ecx, esp
0x7B4C47: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C4C: add     esp, 10h
0x7B4C4F: retn
0x7B4C50: mov     eax, offset aBssm_ambdif_17; jumptable 007B493D case 60
0x7B4C55: mov     ecx, [esp+10h+var_4]
0x7B4C59: xor     ecx, esp
0x7B4C5B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C60: add     esp, 10h
0x7B4C63: retn
0x7B4C64: mov     eax, offset aBssm_ambdif_18; jumptable 007B493D case 35
0x7B4C69: mov     ecx, [esp+10h+var_4]
0x7B4C6D: xor     ecx, esp
0x7B4C6F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C74: add     esp, 10h
0x7B4C77: retn
0x7B4C78: mov     eax, offset aBssm_ambdif_19; jumptable 007B493D case 61
0x7B4C7D: mov     ecx, [esp+10h+var_4]
0x7B4C81: xor     ecx, esp
0x7B4C83: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C88: add     esp, 10h
0x7B4C8B: retn
0x7B4C8C: mov     eax, offset aBssm_ambdif_20; jumptable 007B493D case 36
0x7B4C91: mov     ecx, [esp+10h+var_4]
0x7B4C95: xor     ecx, esp
0x7B4C97: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4C9C: add     esp, 10h
0x7B4C9F: retn
0x7B4CA0: mov     eax, offset aBssm_ambdif_21; jumptable 007B493D case 37
0x7B4CA5: mov     ecx, [esp+10h+var_4]
0x7B4CA9: xor     ecx, esp
0x7B4CAB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4CB0: add     esp, 10h
0x7B4CB3: retn
0x7B4CB4: mov     eax, offset aBssm_ambdif_22; jumptable 007B493D case 62
0x7B4CB9: mov     ecx, [esp+10h+var_4]
0x7B4CBD: xor     ecx, esp
0x7B4CBF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4CC4: add     esp, 10h
0x7B4CC7: retn
0x7B4CC8: mov     eax, offset aBssm_ambdif_23; jumptable 007B493D case 63
0x7B4CCD: mov     ecx, [esp+10h+var_4]
0x7B4CD1: xor     ecx, esp
0x7B4CD3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4CD8: add     esp, 10h
0x7B4CDB: retn
0x7B4CDC: mov     eax, offset aBssm_ambdif_24; jumptable 007B493D case 38
0x7B4CE1: mov     ecx, [esp+10h+var_4]
0x7B4CE5: xor     ecx, esp
0x7B4CE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4CEC: add     esp, 10h
0x7B4CEF: retn
0x7B4CF0: mov     eax, offset aBssm_ambdif_25; jumptable 007B493D case 39
0x7B4CF5: mov     ecx, [esp+10h+var_4]
0x7B4CF9: xor     ecx, esp
0x7B4CFB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D00: add     esp, 10h
0x7B4D03: retn
0x7B4D04: mov     eax, offset aBssm_ambdif_26; jumptable 007B493D case 64
0x7B4D09: mov     ecx, [esp+10h+var_4]
0x7B4D0D: xor     ecx, esp
0x7B4D0F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D14: add     esp, 10h
0x7B4D17: retn
0x7B4D18: mov     eax, offset aBssm_ambdif_27; jumptable 007B493D case 65
0x7B4D1D: mov     ecx, [esp+10h+var_4]
0x7B4D21: xor     ecx, esp
0x7B4D23: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D28: add     esp, 10h
0x7B4D2B: retn
0x7B4D2C: mov     eax, offset aBssm_ambdif_28; jumptable 007B493D case 40
0x7B4D31: mov     ecx, [esp+10h+var_4]
0x7B4D35: xor     ecx, esp
0x7B4D37: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D3C: add     esp, 10h
0x7B4D3F: retn
0x7B4D40: mov     eax, offset aBssm_ambdif_29; jumptable 007B493D case 68
0x7B4D45: mov     ecx, [esp+10h+var_4]
0x7B4D49: xor     ecx, esp
0x7B4D4B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D50: add     esp, 10h
0x7B4D53: retn
0x7B4D54: mov     eax, offset aBssm_ambdif_30; jumptable 007B493D case 41
0x7B4D59: mov     ecx, [esp+10h+var_4]
0x7B4D5D: xor     ecx, esp
0x7B4D5F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D64: add     esp, 10h
0x7B4D67: retn
0x7B4D68: mov     eax, offset aBssm_ambdif_31; jumptable 007B493D case 42
0x7B4D6D: mov     ecx, [esp+10h+var_4]
0x7B4D71: xor     ecx, esp
0x7B4D73: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D78: add     esp, 10h
0x7B4D7B: retn
0x7B4D7C: mov     eax, offset aBssm_ambdif_32; jumptable 007B493D case 66
0x7B4D81: mov     ecx, [esp+10h+var_4]
0x7B4D85: xor     ecx, esp
0x7B4D87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4D8C: add     esp, 10h
0x7B4D8F: retn
0x7B4D90: mov     eax, offset aBssm_ambdif_33; jumptable 007B493D case 67
0x7B4D95: mov     ecx, [esp+10h+var_4]
0x7B4D99: xor     ecx, esp
0x7B4D9B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4DA0: add     esp, 10h
0x7B4DA3: retn
0x7B4DA4: mov     eax, offset aBssm_ambdif_34; jumptable 007B493D case 43
0x7B4DA9: mov     ecx, [esp+10h+var_4]
0x7B4DAD: xor     ecx, esp
0x7B4DAF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4DB4: add     esp, 10h
0x7B4DB7: retn
0x7B4DB8: mov     eax, offset aBssm_ambdif_35; jumptable 007B493D case 44
0x7B4DBD: mov     ecx, [esp+10h+var_4]
0x7B4DC1: xor     ecx, esp
0x7B4DC3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4DC8: add     esp, 10h
0x7B4DCB: retn
0x7B4DCC: mov     eax, offset aBssm_ambdif_36; jumptable 007B493D case 45
0x7B4DD1: mov     ecx, [esp+10h+var_4]
0x7B4DD5: xor     ecx, esp
0x7B4DD7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4DDC: add     esp, 10h
0x7B4DDF: retn
0x7B4DE0: mov     eax, offset aBssm_ambdif_37; jumptable 007B493D case 69
0x7B4DE5: mov     ecx, [esp+10h+var_4]
0x7B4DE9: xor     ecx, esp
0x7B4DEB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4DF0: add     esp, 10h
0x7B4DF3: retn
0x7B4DF4: mov     eax, offset aBssm_ambdif_38; jumptable 007B493D case 70
0x7B4DF9: mov     ecx, [esp+10h+var_4]
0x7B4DFD: xor     ecx, esp
0x7B4DFF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E04: add     esp, 10h
0x7B4E07: retn
0x7B4E08: mov     eax, offset aBssm_ambdif_39; jumptable 007B493D case 46
0x7B4E0D: mov     ecx, [esp+10h+var_4]
0x7B4E11: xor     ecx, esp
0x7B4E13: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E18: add     esp, 10h
0x7B4E1B: retn
0x7B4E1C: mov     eax, offset aBssm_ambdif_40; jumptable 007B493D case 71
0x7B4E21: mov     ecx, [esp+10h+var_4]
0x7B4E25: xor     ecx, esp
0x7B4E27: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E2C: add     esp, 10h
0x7B4E2F: retn
0x7B4E30: mov     eax, offset aBssm_ambdif_41; jumptable 007B493D case 47
0x7B4E35: mov     ecx, [esp+10h+var_4]
0x7B4E39: xor     ecx, esp
0x7B4E3B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E40: add     esp, 10h
0x7B4E43: retn
0x7B4E44: mov     eax, offset aBssm_ambdif_42; jumptable 007B493D case 48
0x7B4E49: mov     ecx, [esp+10h+var_4]
0x7B4E4D: xor     ecx, esp
0x7B4E4F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E54: add     esp, 10h
0x7B4E57: retn
0x7B4E58: mov     eax, offset aBssm_ambdiffdi; jumptable 007B493D case 49
0x7B4E5D: mov     ecx, [esp+10h+var_4]
0x7B4E61: xor     ecx, esp
0x7B4E63: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E68: add     esp, 10h
0x7B4E6B: retn
0x7B4E6C: mov     eax, offset aBssm_ambdif_43; jumptable 007B493D case 50
0x7B4E71: mov     ecx, [esp+10h+var_4]
0x7B4E75: xor     ecx, esp
0x7B4E77: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E7C: add     esp, 10h
0x7B4E7F: retn
0x7B4E80: mov     eax, offset aBssm_ambdif_44; jumptable 007B493D case 51
0x7B4E85: mov     ecx, [esp+10h+var_4]
0x7B4E89: xor     ecx, esp
0x7B4E8B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4E90: add     esp, 10h
0x7B4E93: retn
0x7B4E94: mov     eax, offset aBssm_landad; jumptable 007B493D case 72
0x7B4E99: mov     ecx, [esp+10h+var_4]
0x7B4E9D: xor     ecx, esp
0x7B4E9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4EA4: add     esp, 10h
0x7B4EA7: retn
0x7B4EA8: mov     eax, offset aBssm_ad2; jumptable 007B493D case 74
0x7B4EAD: mov     ecx, [esp+10h+var_4]
0x7B4EB1: xor     ecx, esp
0x7B4EB3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4EB8: add     esp, 10h
0x7B4EBB: retn
0x7B4EBC: mov     eax, offset aBssm_ad2_g; jumptable 007B493D case 75
0x7B4EC1: mov     ecx, [esp+10h+var_4]
0x7B4EC5: xor     ecx, esp
0x7B4EC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4ECC: add     esp, 10h
0x7B4ECF: retn
0x7B4ED0: mov     eax, offset aBssm_ad2_px; jumptable 007B493D case 76
0x7B4ED5: mov     ecx, [esp+10h+var_4]
0x7B4ED9: xor     ecx, esp
0x7B4EDB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4EE0: add     esp, 10h
0x7B4EE3: retn
0x7B4EE4: mov     eax, offset aBssm_ad2_gpx; jumptable 007B493D case 77
0x7B4EE9: mov     ecx, [esp+10h+var_4]
0x7B4EED: xor     ecx, esp
0x7B4EEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4EF4: add     esp, 10h
0x7B4EF7: retn
0x7B4EF8: mov     eax, offset aBssm_ad2_fg; jumptable 007B493D case 78
0x7B4EFD: mov     ecx, [esp+10h+var_4]
0x7B4F01: xor     ecx, esp
0x7B4F03: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F08: add     esp, 10h
0x7B4F0B: retn
0x7B4F0C: mov     eax, offset aBssm_ad2_s; jumptable 007B493D case 79
0x7B4F11: mov     ecx, [esp+10h+var_4]
0x7B4F15: xor     ecx, esp
0x7B4F17: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F1C: add     esp, 10h
0x7B4F1F: retn
0x7B4F20: mov     eax, offset aBssm_ad2_spx; jumptable 007B493D case 80
0x7B4F25: mov     ecx, [esp+10h+var_4]
0x7B4F29: xor     ecx, esp
0x7B4F2B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F30: add     esp, 10h
0x7B4F33: retn
0x7B4F34: mov     eax, offset aBssm_ad2_sg; jumptable 007B493D case 81
0x7B4F39: mov     ecx, [esp+10h+var_4]
0x7B4F3D: xor     ecx, esp
0x7B4F3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F44: add     esp, 10h
0x7B4F47: retn
0x7B4F48: mov     eax, offset aBssm_ad2_sgpx; jumptable 007B493D case 82
0x7B4F4D: mov     ecx, [esp+10h+var_4]
0x7B4F51: xor     ecx, esp
0x7B4F53: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F58: add     esp, 10h
0x7B4F5B: retn
0x7B4F5C: mov     eax, offset aBssm_ad2_sfg; jumptable 007B493D case 83
0x7B4F61: mov     ecx, [esp+10h+var_4]
0x7B4F65: xor     ecx, esp
0x7B4F67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F6C: add     esp, 10h
0x7B4F6F: retn
0x7B4F70: mov     eax, offset aBssm_ad2_sb; jumptable 007B493D case 84
0x7B4F75: mov     ecx, [esp+10h+var_4]
0x7B4F79: xor     ecx, esp
0x7B4F7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F80: add     esp, 10h
0x7B4F83: retn
0x7B4F84: mov     eax, offset aBssm_ad2_shp; jumptable 007B493D case 85
0x7B4F89: mov     ecx, [esp+10h+var_4]
0x7B4F8D: xor     ecx, esp
0x7B4F8F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4F94: add     esp, 10h
0x7B4F97: retn
0x7B4F98: mov     eax, offset aBssm_ad2_gshp; jumptable 007B493D case 86
0x7B4F9D: mov     ecx, [esp+10h+var_4]
0x7B4FA1: xor     ecx, esp
0x7B4FA3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4FA8: add     esp, 10h
0x7B4FAB: retn
0x7B4FAC: mov     eax, offset aBssm_ad2_pxshp; jumptable 007B493D case 87
0x7B4FB1: mov     ecx, [esp+10h+var_4]
0x7B4FB5: xor     ecx, esp
0x7B4FB7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4FBC: add     esp, 10h
0x7B4FBF: retn
0x7B4FC0: mov     eax, offset aBssm_ad2_gpxsh; jumptable 007B493D case 88
0x7B4FC5: mov     ecx, [esp+10h+var_4]
0x7B4FC9: xor     ecx, esp
0x7B4FCB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4FD0: add     esp, 10h
0x7B4FD3: retn
0x7B4FD4: mov     eax, offset aBssm_ad2_fgshp; jumptable 007B493D case 89
0x7B4FD9: mov     ecx, [esp+10h+var_4]
0x7B4FDD: xor     ecx, esp
0x7B4FDF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4FE4: add     esp, 10h
0x7B4FE7: retn
0x7B4FE8: mov     eax, offset aBssm_ad2_sshp; jumptable 007B493D case 90
0x7B4FED: mov     ecx, [esp+10h+var_4]
0x7B4FF1: xor     ecx, esp
0x7B4FF3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B4FF8: add     esp, 10h
0x7B4FFB: retn
0x7B4FFC: mov     eax, offset aBssm_ad2_spxsh; jumptable 007B493D case 91
0x7B5001: mov     ecx, [esp+10h+var_4]
0x7B5005: xor     ecx, esp
0x7B5007: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B500C: add     esp, 10h
0x7B500F: retn
0x7B5010: mov     eax, offset aBssm_ad2_sgshp; jumptable 007B493D case 92
0x7B5015: mov     ecx, [esp+10h+var_4]
0x7B5019: xor     ecx, esp
0x7B501B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5020: add     esp, 10h
0x7B5023: retn
0x7B5024: mov     eax, offset aBssm_ad2_sgpxs; jumptable 007B493D case 93
0x7B5029: mov     ecx, [esp+10h+var_4]
0x7B502D: xor     ecx, esp
0x7B502F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5034: add     esp, 10h
0x7B5037: retn
0x7B5038: mov     eax, offset aBssm_ad2_sfgsh; jumptable 007B493D case 94
0x7B503D: mov     ecx, [esp+10h+var_4]
0x7B5041: xor     ecx, esp
0x7B5043: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5048: add     esp, 10h
0x7B504B: retn
0x7B504C: mov     eax, offset aBssm_ad2_sbshp; jumptable 007B493D case 95
0x7B5051: mov     ecx, [esp+10h+var_4]
0x7B5055: xor     ecx, esp
0x7B5057: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B505C: add     esp, 10h
0x7B505F: retn
0x7B5060: mov     eax, offset aBssm_ad3; jumptable 007B493D case 96
0x7B5065: mov     ecx, [esp+10h+var_4]
0x7B5069: xor     ecx, esp
0x7B506B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5070: add     esp, 10h
0x7B5073: retn
0x7B5074: mov     eax, offset aBssm_ad3_g; jumptable 007B493D case 97
0x7B5079: mov     ecx, [esp+10h+var_4]
0x7B507D: xor     ecx, esp
0x7B507F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5084: add     esp, 10h
0x7B5087: retn
0x7B5088: mov     eax, offset aBssm_ad3_px; jumptable 007B493D case 98
0x7B508D: mov     ecx, [esp+10h+var_4]
0x7B5091: xor     ecx, esp
0x7B5093: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5098: add     esp, 10h
0x7B509B: retn
0x7B509C: mov     eax, offset aBssm_ad3_gpx; jumptable 007B493D case 99
0x7B50A1: mov     ecx, [esp+10h+var_4]
0x7B50A5: xor     ecx, esp
0x7B50A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B50AC: add     esp, 10h
0x7B50AF: retn
0x7B50B0: mov     eax, offset aBssm_ad3_fg; jumptable 007B493D case 100
0x7B50B5: mov     ecx, [esp+10h+var_4]
0x7B50B9: xor     ecx, esp
0x7B50BB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B50C0: add     esp, 10h
0x7B50C3: retn
0x7B50C4: mov     eax, offset aBssm_ad3_s; jumptable 007B493D case 101
0x7B50C9: mov     ecx, [esp+10h+var_4]
0x7B50CD: xor     ecx, esp
0x7B50CF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B50D4: add     esp, 10h
0x7B50D7: retn
0x7B50D8: mov     eax, offset aBssm_ad3_spx; jumptable 007B493D case 102
0x7B50DD: mov     ecx, [esp+10h+var_4]
0x7B50E1: xor     ecx, esp
0x7B50E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B50E8: add     esp, 10h
0x7B50EB: retn
0x7B50EC: mov     eax, offset aBssm_ad3_sg; jumptable 007B493D case 103
0x7B50F1: mov     ecx, [esp+10h+var_4]
0x7B50F5: xor     ecx, esp
0x7B50F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B50FC: add     esp, 10h
0x7B50FF: retn
0x7B5100: mov     eax, offset aBssm_ad3_sgpx; jumptable 007B493D case 104
0x7B5105: mov     ecx, [esp+10h+var_4]
0x7B5109: xor     ecx, esp
0x7B510B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5110: add     esp, 10h
0x7B5113: retn
0x7B5114: mov     eax, offset aBssm_ad3_sfg; jumptable 007B493D case 105
0x7B5119: mov     ecx, [esp+10h+var_4]
0x7B511D: xor     ecx, esp
0x7B511F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5124: add     esp, 10h
0x7B5127: retn
0x7B5128: mov     eax, offset aBssm_ad3_sb; jumptable 007B493D case 106
0x7B512D: mov     ecx, [esp+10h+var_4]
0x7B5131: xor     ecx, esp
0x7B5133: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5138: add     esp, 10h
0x7B513B: retn
0x7B513C: mov     eax, offset aBssm_ad3_shp; jumptable 007B493D case 107
0x7B5141: mov     ecx, [esp+10h+var_4]
0x7B5145: xor     ecx, esp
0x7B5147: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B514C: add     esp, 10h
0x7B514F: retn
0x7B5150: mov     eax, offset aBssm_ad3_gshp; jumptable 007B493D case 108
0x7B5155: mov     ecx, [esp+10h+var_4]
0x7B5159: xor     ecx, esp
0x7B515B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5160: add     esp, 10h
0x7B5163: retn
0x7B5164: mov     eax, offset aBssm_ad3_pxshp; jumptable 007B493D case 109
0x7B5169: mov     ecx, [esp+10h+var_4]
0x7B516D: xor     ecx, esp
0x7B516F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5174: add     esp, 10h
0x7B5177: retn
0x7B5178: mov     eax, offset aBssm_ad3_gpxsh; jumptable 007B493D case 110
0x7B517D: mov     ecx, [esp+10h+var_4]
0x7B5181: xor     ecx, esp
0x7B5183: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5188: add     esp, 10h
0x7B518B: retn
0x7B518C: mov     eax, offset aBssm_ad3_fgshp; jumptable 007B493D case 111
0x7B5191: mov     ecx, [esp+10h+var_4]
0x7B5195: xor     ecx, esp
0x7B5197: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B519C: add     esp, 10h
0x7B519F: retn
0x7B51A0: mov     eax, offset aBssm_ad3_sshp; jumptable 007B493D case 112
0x7B51A5: mov     ecx, [esp+10h+var_4]
0x7B51A9: xor     ecx, esp
0x7B51AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B51B0: add     esp, 10h
0x7B51B3: retn
0x7B51B4: mov     eax, offset aBssm_ad3_spxsh; jumptable 007B493D case 113
0x7B51B9: mov     ecx, [esp+10h+var_4]
0x7B51BD: xor     ecx, esp
0x7B51BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B51C4: add     esp, 10h
0x7B51C7: retn
0x7B51C8: mov     eax, offset aBssm_ad3_sgshp; jumptable 007B493D case 114
0x7B51CD: mov     ecx, [esp+10h+var_4]
0x7B51D1: xor     ecx, esp
0x7B51D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B51D8: add     esp, 10h
0x7B51DB: retn
0x7B51DC: mov     eax, offset aBssm_ad3_sgpxs; jumptable 007B493D case 115
0x7B51E1: mov     ecx, [esp+10h+var_4]
0x7B51E5: xor     ecx, esp
0x7B51E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B51EC: add     esp, 10h
0x7B51EF: retn
0x7B51F0: mov     eax, offset aBssm_ad3_sfgsh; jumptable 007B493D case 116
0x7B51F5: mov     ecx, [esp+10h+var_4]
0x7B51F9: xor     ecx, esp
0x7B51FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5200: add     esp, 10h
0x7B5203: retn
0x7B5204: mov     eax, offset aBssm_ad3_sbshp; jumptable 007B493D case 117
0x7B5209: mov     ecx, [esp+10h+var_4]
0x7B520D: xor     ecx, esp
0x7B520F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5214: add     esp, 10h
0x7B5217: retn
0x7B5218: mov     eax, offset aBssm_adt; jumptable 007B493D case 118
0x7B521D: mov     ecx, [esp+10h+var_4]
0x7B5221: xor     ecx, esp
0x7B5223: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5228: add     esp, 10h
0x7B522B: retn
0x7B522C: mov     eax, offset aBssm_adt_mn; jumptable 007B493D case 119
0x7B5231: mov     ecx, [esp+10h+var_4]
0x7B5235: xor     ecx, esp
0x7B5237: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B523C: add     esp, 10h
0x7B523F: retn
0x7B5240: mov     eax, offset aBssm_adt_g; jumptable 007B493D case 120
0x7B5245: mov     ecx, [esp+10h+var_4]
0x7B5249: xor     ecx, esp
0x7B524B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5250: add     esp, 10h
0x7B5253: retn
0x7B5254: mov     eax, offset aBssm_adt_fg; jumptable 007B493D case 121
0x7B5259: mov     ecx, [esp+10h+var_4]
0x7B525D: xor     ecx, esp
0x7B525F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5264: add     esp, 10h
0x7B5267: retn
0x7B5268: mov     eax, offset aBssm_adt_px; jumptable 007B493D case 122
0x7B526D: mov     ecx, [esp+10h+var_4]
0x7B5271: xor     ecx, esp
0x7B5273: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5278: add     esp, 10h
0x7B527B: retn
0x7B527C: mov     eax, offset aBssm_adt_gpx; jumptable 007B493D case 123
0x7B5281: mov     ecx, [esp+10h+var_4]
0x7B5285: xor     ecx, esp
0x7B5287: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B528C: add     esp, 10h
0x7B528F: retn
0x7B5290: mov     eax, offset aBssm_adt_h; jumptable 007B493D case 124
0x7B5295: mov     ecx, [esp+10h+var_4]
0x7B5299: xor     ecx, esp
0x7B529B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B52A0: add     esp, 10h
0x7B52A3: retn
0x7B52A4: mov     eax, offset aBssm_adt_s; jumptable 007B493D case 125
0x7B52A9: mov     ecx, [esp+10h+var_4]
0x7B52AD: xor     ecx, esp
0x7B52AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B52B4: add     esp, 10h
0x7B52B7: retn
0x7B52B8: mov     eax, offset aBssm_adt_sg; jumptable 007B493D case 126
0x7B52BD: mov     ecx, [esp+10h+var_4]
0x7B52C1: xor     ecx, esp
0x7B52C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B52C8: add     esp, 10h
0x7B52CB: retn
0x7B52CC: mov     eax, offset aBssm_adt_sfg; jumptable 007B493D case 127
0x7B52D1: mov     ecx, [esp+10h+var_4]
0x7B52D5: xor     ecx, esp
0x7B52D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B52DC: add     esp, 10h
0x7B52DF: retn
0x7B52E0: mov     eax, offset aBssm_adt_spx; jumptable 007B493D case 128
0x7B52E5: mov     ecx, [esp+10h+var_4]
0x7B52E9: xor     ecx, esp
0x7B52EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B52F0: add     esp, 10h
0x7B52F3: retn
0x7B52F4: mov     eax, offset aBssm_adt_sgpx; jumptable 007B493D case 129
0x7B52F9: mov     ecx, [esp+10h+var_4]
0x7B52FD: xor     ecx, esp
0x7B52FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5304: add     esp, 10h
0x7B5307: retn
0x7B5308: mov     eax, offset aBssm_adt_sb; jumptable 007B493D case 130
0x7B530D: mov     ecx, [esp+10h+var_4]
0x7B5311: xor     ecx, esp
0x7B5313: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5318: add     esp, 10h
0x7B531B: retn
0x7B531C: mov     eax, offset aBssm_adt_sh; jumptable 007B493D case 131
0x7B5321: mov     ecx, [esp+10h+var_4]
0x7B5325: xor     ecx, esp
0x7B5327: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B532C: add     esp, 10h
0x7B532F: retn
0x7B5330: mov     eax, offset aBssm_adt_shp; jumptable 007B493D case 132
0x7B5335: mov     ecx, [esp+10h+var_4]
0x7B5339: xor     ecx, esp
0x7B533B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5340: add     esp, 10h
0x7B5343: retn
0x7B5344: mov     eax, offset aBssm_adt_mnshp; jumptable 007B493D case 133
0x7B5349: mov     ecx, [esp+10h+var_4]
0x7B534D: xor     ecx, esp
0x7B534F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5354: add     esp, 10h
0x7B5357: retn
0x7B5358: mov     eax, offset aBssm_adt_gshp; jumptable 007B493D case 134
0x7B535D: mov     ecx, [esp+10h+var_4]
0x7B5361: xor     ecx, esp
0x7B5363: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5368: add     esp, 10h
0x7B536B: retn
0x7B536C: mov     eax, offset aBssm_adt_fgshp; jumptable 007B493D case 135
0x7B5371: mov     ecx, [esp+10h+var_4]
0x7B5375: xor     ecx, esp
0x7B5377: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B537C: add     esp, 10h
0x7B537F: retn
0x7B5380: mov     eax, offset aBssm_adt_pxshp; jumptable 007B493D case 136
0x7B5385: mov     ecx, [esp+10h+var_4]
0x7B5389: xor     ecx, esp
0x7B538B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5390: add     esp, 10h
0x7B5393: retn
0x7B5394: mov     eax, offset aBssm_adt_gpxsh; jumptable 007B493D case 137
0x7B5399: mov     ecx, [esp+10h+var_4]
0x7B539D: xor     ecx, esp
0x7B539F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B53A4: add     esp, 10h
0x7B53A7: retn
0x7B53A8: mov     eax, offset aBssm_adt_hshp; jumptable 007B493D case 138
0x7B53AD: mov     ecx, [esp+10h+var_4]
0x7B53B1: xor     ecx, esp
0x7B53B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B53B8: add     esp, 10h
0x7B53BB: retn
0x7B53BC: mov     eax, offset aBssm_adt_sshp; jumptable 007B493D case 139
0x7B53C1: mov     ecx, [esp+10h+var_4]
0x7B53C5: xor     ecx, esp
0x7B53C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B53CC: add     esp, 10h
0x7B53CF: retn
0x7B53D0: mov     eax, offset aBssm_adt_sgshp; jumptable 007B493D case 140
0x7B53D5: mov     ecx, [esp+10h+var_4]
0x7B53D9: xor     ecx, esp
0x7B53DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B53E0: add     esp, 10h
0x7B53E3: retn
0x7B53E4: mov     eax, offset aBssm_adt_sfgsh; jumptable 007B493D case 141
0x7B53E9: mov     ecx, [esp+10h+var_4]
0x7B53ED: xor     ecx, esp
0x7B53EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B53F4: add     esp, 10h
0x7B53F7: retn
0x7B53F8: mov     eax, offset aBssm_adt_spxsh; jumptable 007B493D case 142
0x7B53FD: mov     ecx, [esp+10h+var_4]
0x7B5401: xor     ecx, esp
0x7B5403: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5408: add     esp, 10h
0x7B540B: retn
0x7B540C: mov     eax, offset aBssm_adt_sgpxs; jumptable 007B493D case 143
0x7B5411: mov     ecx, [esp+10h+var_4]
0x7B5415: xor     ecx, esp
0x7B5417: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B541C: add     esp, 10h
0x7B541F: retn
0x7B5420: mov     eax, offset aBssm_adt_sbshp; jumptable 007B493D case 144
0x7B5425: mov     ecx, [esp+10h+var_4]
0x7B5429: xor     ecx, esp
0x7B542B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5430: add     esp, 10h
0x7B5433: retn
0x7B5434: mov     eax, offset aBssm_adt_shshp; jumptable 007B493D case 145
0x7B5439: mov     ecx, [esp+10h+var_4]
0x7B543D: xor     ecx, esp
0x7B543F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5444: add     esp, 10h
0x7B5447: retn
0x7B5448: mov     eax, offset aBssm_adt2; jumptable 007B493D case 146
0x7B544D: mov     ecx, [esp+10h+var_4]
0x7B5451: xor     ecx, esp
0x7B5453: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5458: add     esp, 10h
0x7B545B: retn
0x7B545C: mov     eax, offset aBssm_adt2_g; jumptable 007B493D case 147
0x7B5461: mov     ecx, [esp+10h+var_4]
0x7B5465: xor     ecx, esp
0x7B5467: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B546C: add     esp, 10h
0x7B546F: retn
0x7B5470: mov     eax, offset aBssm_adt2_fg; jumptable 007B493D case 148
0x7B5475: mov     ecx, [esp+10h+var_4]
0x7B5479: xor     ecx, esp
0x7B547B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5480: add     esp, 10h
0x7B5483: retn
0x7B5484: mov     eax, offset aBssm_adt2_px; jumptable 007B493D case 149
0x7B5489: mov     ecx, [esp+10h+var_4]
0x7B548D: xor     ecx, esp
0x7B548F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5494: add     esp, 10h
0x7B5497: retn
0x7B5498: mov     eax, offset aBssm_adt2_gpx; jumptable 007B493D case 150
0x7B549D: mov     ecx, [esp+10h+var_4]
0x7B54A1: xor     ecx, esp
0x7B54A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B54A8: add     esp, 10h
0x7B54AB: retn
0x7B54AC: mov     eax, offset aBssm_adt2_h; jumptable 007B493D case 151
0x7B54B1: mov     ecx, [esp+10h+var_4]
0x7B54B5: xor     ecx, esp
0x7B54B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B54BC: add     esp, 10h
0x7B54BF: retn
0x7B54C0: mov     eax, offset aBssm_adt2_s; jumptable 007B493D case 152
0x7B54C5: mov     ecx, [esp+10h+var_4]
0x7B54C9: xor     ecx, esp
0x7B54CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B54D0: add     esp, 10h
0x7B54D3: retn
0x7B54D4: mov     eax, offset aBssm_adt2_sg; jumptable 007B493D case 153
0x7B54D9: mov     ecx, [esp+10h+var_4]
0x7B54DD: xor     ecx, esp
0x7B54DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B54E4: add     esp, 10h
0x7B54E7: retn
0x7B54E8: mov     eax, offset aBssm_adt2_sfg; jumptable 007B493D case 154
0x7B54ED: mov     ecx, [esp+10h+var_4]
0x7B54F1: xor     ecx, esp
0x7B54F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B54F8: add     esp, 10h
0x7B54FB: retn
0x7B54FC: mov     eax, offset aBssm_adt2_spx; jumptable 007B493D case 155
0x7B5501: mov     ecx, [esp+10h+var_4]
0x7B5505: xor     ecx, esp
0x7B5507: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B550C: add     esp, 10h
0x7B550F: retn
0x7B5510: mov     eax, offset aBssm_adt2_sgpx; jumptable 007B493D case 156
0x7B5515: mov     ecx, [esp+10h+var_4]
0x7B5519: xor     ecx, esp
0x7B551B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5520: add     esp, 10h
0x7B5523: retn
0x7B5524: mov     eax, offset aBssm_adt2_sb; jumptable 007B493D case 157
0x7B5529: mov     ecx, [esp+10h+var_4]
0x7B552D: xor     ecx, esp
0x7B552F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5534: add     esp, 10h
0x7B5537: retn
0x7B5538: mov     eax, offset aBssm_adt2_sh; jumptable 007B493D case 158
0x7B553D: mov     ecx, [esp+10h+var_4]
0x7B5541: xor     ecx, esp
0x7B5543: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5548: add     esp, 10h
0x7B554B: retn
0x7B554C: mov     eax, offset aBssm_adt2_shp; jumptable 007B493D case 159
0x7B5551: mov     ecx, [esp+10h+var_4]
0x7B5555: xor     ecx, esp
0x7B5557: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B555C: add     esp, 10h
0x7B555F: retn
0x7B5560: mov     eax, offset aBssm_adt2_gshp; jumptable 007B493D case 160
0x7B5565: mov     ecx, [esp+10h+var_4]
0x7B5569: xor     ecx, esp
0x7B556B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5570: add     esp, 10h
0x7B5573: retn
0x7B5574: mov     eax, offset aBssm_adt2_fgsh; jumptable 007B493D case 161
0x7B5579: mov     ecx, [esp+10h+var_4]
0x7B557D: xor     ecx, esp
0x7B557F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5584: add     esp, 10h
0x7B5587: retn
0x7B5588: mov     eax, offset aBssm_adt2_pxsh; jumptable 007B493D case 162
0x7B558D: mov     ecx, [esp+10h+var_4]
0x7B5591: xor     ecx, esp
0x7B5593: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5598: add     esp, 10h
0x7B559B: retn
0x7B559C: mov     eax, offset aBssm_adt2_gpxs; jumptable 007B493D case 163
0x7B55A1: mov     ecx, [esp+10h+var_4]
0x7B55A5: xor     ecx, esp
0x7B55A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B55AC: add     esp, 10h
0x7B55AF: retn
0x7B55B0: mov     eax, offset aBssm_adt2_hshp; jumptable 007B493D case 164
0x7B55B5: mov     ecx, [esp+10h+var_4]
0x7B55B9: xor     ecx, esp
0x7B55BB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B55C0: add     esp, 10h
0x7B55C3: retn
0x7B55C4: mov     eax, offset aBssm_adt2_sshp; jumptable 007B493D case 165
0x7B55C9: mov     ecx, [esp+10h+var_4]
0x7B55CD: xor     ecx, esp
0x7B55CF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B55D4: add     esp, 10h
0x7B55D7: retn
0x7B55D8: mov     eax, offset aBssm_adt2_sgsh; jumptable 007B493D case 166
0x7B55DD: mov     ecx, [esp+10h+var_4]
0x7B55E1: xor     ecx, esp
0x7B55E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B55E8: add     esp, 10h
0x7B55EB: retn
0x7B55EC: mov     eax, offset aBssm_adt2_sfgs; jumptable 007B493D case 167
0x7B55F1: mov     ecx, [esp+10h+var_4]
0x7B55F5: xor     ecx, esp
0x7B55F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B55FC: add     esp, 10h
0x7B55FF: retn
0x7B5600: mov     eax, offset aBssm_adt2_spxs; jumptable 007B493D case 168
0x7B5605: mov     ecx, [esp+10h+var_4]
0x7B5609: xor     ecx, esp
0x7B560B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5610: add     esp, 10h
0x7B5613: retn
0x7B5614: mov     eax, offset aBssm_adt2_sg_0; jumptable 007B493D case 169
0x7B5619: mov     ecx, [esp+10h+var_4]
0x7B561D: xor     ecx, esp
0x7B561F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5624: add     esp, 10h
0x7B5627: retn
0x7B5628: mov     eax, offset aBssm_adt2_sbsh; jumptable 007B493D case 170
0x7B562D: mov     ecx, [esp+10h+var_4]
0x7B5631: xor     ecx, esp
0x7B5633: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5638: add     esp, 10h
0x7B563B: retn
0x7B563C: mov     eax, offset aBssm_adt2_shsh; jumptable 007B493D case 171
0x7B5641: mov     ecx, [esp+10h+var_4]
0x7B5645: xor     ecx, esp
0x7B5647: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B564C: add     esp, 10h
0x7B564F: retn
0x7B5650: mov     eax, offset aBssm_adts; jumptable 007B493D case 172
0x7B5655: mov     ecx, [esp+10h+var_4]
0x7B5659: xor     ecx, esp
0x7B565B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5660: add     esp, 10h
0x7B5663: retn
0x7B5664: mov     eax, offset aBssm_adts_g; jumptable 007B493D case 173
0x7B5669: mov     ecx, [esp+10h+var_4]
0x7B566D: xor     ecx, esp
0x7B566F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5674: add     esp, 10h
0x7B5677: retn
0x7B5678: mov     eax, offset aBssm_adts_h; jumptable 007B493D case 174
0x7B567D: mov     ecx, [esp+10h+var_4]
0x7B5681: xor     ecx, esp
0x7B5683: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5688: add     esp, 10h
0x7B568B: retn
0x7B568C: mov     eax, offset aBssm_adts_fg; jumptable 007B493D case 175
0x7B5691: mov     ecx, [esp+10h+var_4]
0x7B5695: xor     ecx, esp
0x7B5697: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B569C: add     esp, 10h
0x7B569F: retn
0x7B56A0: mov     eax, offset aBssm_adts_px; jumptable 007B493D case 176
0x7B56A5: mov     ecx, [esp+10h+var_4]
0x7B56A9: xor     ecx, esp
0x7B56AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B56B0: add     esp, 10h
0x7B56B3: retn
0x7B56B4: mov     eax, offset aBssm_adts_gpx; jumptable 007B493D case 177
0x7B56B9: mov     ecx, [esp+10h+var_4]
0x7B56BD: xor     ecx, esp
0x7B56BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B56C4: add     esp, 10h
0x7B56C7: retn
0x7B56C8: mov     eax, offset aBssm_adts_s; jumptable 007B493D case 178
0x7B56CD: mov     ecx, [esp+10h+var_4]
0x7B56D1: xor     ecx, esp
0x7B56D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B56D8: add     esp, 10h
0x7B56DB: retn
0x7B56DC: mov     eax, offset aBssm_adts_sg; jumptable 007B493D case 179
0x7B56E1: mov     ecx, [esp+10h+var_4]
0x7B56E5: xor     ecx, esp
0x7B56E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B56EC: add     esp, 10h
0x7B56EF: retn
0x7B56F0: mov     eax, offset aBssm_adts_sh; jumptable 007B493D case 180
0x7B56F5: mov     ecx, [esp+10h+var_4]
0x7B56F9: xor     ecx, esp
0x7B56FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5700: add     esp, 10h
0x7B5703: retn
0x7B5704: mov     eax, offset aBssm_adts_sfg; jumptable 007B493D case 181
0x7B5709: mov     ecx, [esp+10h+var_4]
0x7B570D: xor     ecx, esp
0x7B570F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5714: add     esp, 10h
0x7B5717: retn
0x7B5718: mov     eax, offset aBssm_adts_spx; jumptable 007B493D case 182
0x7B571D: mov     ecx, [esp+10h+var_4]
0x7B5721: xor     ecx, esp
0x7B5723: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5728: add     esp, 10h
0x7B572B: retn
0x7B572C: mov     eax, offset aBssm_adts_sgpx; jumptable 007B493D case 183
0x7B5731: mov     ecx, [esp+10h+var_4]
0x7B5735: xor     ecx, esp
0x7B5737: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B573C: add     esp, 10h
0x7B573F: retn
0x7B5740: mov     eax, offset aBssm_adts_sb; jumptable 007B493D case 184
0x7B5745: mov     ecx, [esp+10h+var_4]
0x7B5749: xor     ecx, esp
0x7B574B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5750: add     esp, 10h
0x7B5753: retn
0x7B5754: mov     eax, offset aBssm_adts_shp; jumptable 007B493D case 185
0x7B5759: mov     ecx, [esp+10h+var_4]
0x7B575D: xor     ecx, esp
0x7B575F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5764: add     esp, 10h
0x7B5767: retn
0x7B5768: mov     eax, offset aBssm_adts_gshp; jumptable 007B493D case 186
0x7B576D: mov     ecx, [esp+10h+var_4]
0x7B5771: xor     ecx, esp
0x7B5773: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5778: add     esp, 10h
0x7B577B: retn
0x7B577C: mov     eax, offset aBssm_adts_hshp; jumptable 007B493D case 187
0x7B5781: mov     ecx, [esp+10h+var_4]
0x7B5785: xor     ecx, esp
0x7B5787: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B578C: add     esp, 10h
0x7B578F: retn
0x7B5790: mov     eax, offset aBssm_adts_fgsh; jumptable 007B493D case 188
0x7B5795: mov     ecx, [esp+10h+var_4]
0x7B5799: xor     ecx, esp
0x7B579B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B57A0: add     esp, 10h
0x7B57A3: retn
0x7B57A4: mov     eax, offset aBssm_adts_pxsh; jumptable 007B493D case 189
0x7B57A9: mov     ecx, [esp+10h+var_4]
0x7B57AD: xor     ecx, esp
0x7B57AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B57B4: add     esp, 10h
0x7B57B7: retn
0x7B57B8: mov     eax, offset aBssm_adts_gpxs; jumptable 007B493D case 190
0x7B57BD: mov     ecx, [esp+10h+var_4]
0x7B57C1: xor     ecx, esp
0x7B57C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B57C8: add     esp, 10h
0x7B57CB: retn
0x7B57CC: mov     eax, offset aBssm_adts_sshp; jumptable 007B493D case 191
0x7B57D1: mov     ecx, [esp+10h+var_4]
0x7B57D5: xor     ecx, esp
0x7B57D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B57DC: add     esp, 10h
0x7B57DF: retn
0x7B57E0: mov     eax, offset aBssm_adts_sgsh; jumptable 007B493D case 192
0x7B57E5: mov     ecx, [esp+10h+var_4]
0x7B57E9: xor     ecx, esp
0x7B57EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B57F0: add     esp, 10h
0x7B57F3: retn
0x7B57F4: mov     eax, offset aBssm_adts_shsh; jumptable 007B493D case 193
0x7B57F9: mov     ecx, [esp+10h+var_4]
0x7B57FD: xor     ecx, esp
0x7B57FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5804: add     esp, 10h
0x7B5807: retn
0x7B5808: mov     eax, offset aBssm_adts_sfgs; jumptable 007B493D case 194
0x7B580D: mov     ecx, [esp+10h+var_4]
0x7B5811: xor     ecx, esp
0x7B5813: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5818: add     esp, 10h
0x7B581B: retn
0x7B581C: mov     eax, offset aBssm_adts_spxs; jumptable 007B493D case 195
0x7B5821: mov     ecx, [esp+10h+var_4]
0x7B5825: xor     ecx, esp
0x7B5827: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B582C: add     esp, 10h
0x7B582F: retn
0x7B5830: mov     eax, offset aBssm_adts_sg_0; jumptable 007B493D case 196
0x7B5835: mov     ecx, [esp+10h+var_4]
0x7B5839: xor     ecx, esp
0x7B583B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5840: add     esp, 10h
0x7B5843: retn
0x7B5844: mov     eax, offset aBssm_adts_sbsh; jumptable 007B493D case 197
0x7B5849: mov     ecx, [esp+10h+var_4]
0x7B584D: xor     ecx, esp
0x7B584F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5854: add     esp, 10h
0x7B5857: retn
0x7B5858: mov     eax, offset aBssm_adts2; jumptable 007B493D case 198
0x7B585D: mov     ecx, [esp+10h+var_4]
0x7B5861: xor     ecx, esp
0x7B5863: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5868: add     esp, 10h
0x7B586B: retn
0x7B586C: mov     eax, offset aBssm_adts2_g; jumptable 007B493D case 199
0x7B5871: mov     ecx, [esp+10h+var_4]
0x7B5875: xor     ecx, esp
0x7B5877: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B587C: add     esp, 10h
0x7B587F: retn
0x7B5880: mov     eax, offset aBssm_adts2_h; jumptable 007B493D case 200
0x7B5885: mov     ecx, [esp+10h+var_4]
0x7B5889: xor     ecx, esp
0x7B588B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5890: add     esp, 10h
0x7B5893: retn
0x7B5894: mov     eax, offset aBssm_adts2_fg; jumptable 007B493D case 201
0x7B5899: mov     ecx, [esp+10h+var_4]
0x7B589D: xor     ecx, esp
0x7B589F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B58A4: add     esp, 10h
0x7B58A7: retn
0x7B58A8: mov     eax, offset aBssm_adts2_px; jumptable 007B493D case 202
0x7B58AD: mov     ecx, [esp+10h+var_4]
0x7B58B1: xor     ecx, esp
0x7B58B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B58B8: add     esp, 10h
0x7B58BB: retn
0x7B58BC: mov     eax, offset aBssm_adts2_gpx; jumptable 007B493D case 203
0x7B58C1: mov     ecx, [esp+10h+var_4]
0x7B58C5: xor     ecx, esp
0x7B58C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B58CC: add     esp, 10h
0x7B58CF: retn
0x7B58D0: mov     eax, offset aBssm_adts2_s; jumptable 007B493D case 204
0x7B58D5: mov     ecx, [esp+10h+var_4]
0x7B58D9: xor     ecx, esp
0x7B58DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B58E0: add     esp, 10h
0x7B58E3: retn
0x7B58E4: mov     eax, offset aBssm_adts2_sg; jumptable 007B493D case 205
0x7B58E9: mov     ecx, [esp+10h+var_4]
0x7B58ED: xor     ecx, esp
0x7B58EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B58F4: add     esp, 10h
0x7B58F7: retn
0x7B58F8: mov     eax, offset aBssm_adts2_sh; jumptable 007B493D case 206
0x7B58FD: mov     ecx, [esp+10h+var_4]
0x7B5901: xor     ecx, esp
0x7B5903: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5908: add     esp, 10h
0x7B590B: retn
0x7B590C: mov     eax, offset aBssm_adts2_sfg; jumptable 007B493D case 207
0x7B5911: mov     ecx, [esp+10h+var_4]
0x7B5915: xor     ecx, esp
0x7B5917: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B591C: add     esp, 10h
0x7B591F: retn
0x7B5920: mov     eax, offset aBssm_adts2_spx; jumptable 007B493D case 208
0x7B5925: mov     ecx, [esp+10h+var_4]
0x7B5929: xor     ecx, esp
0x7B592B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5930: add     esp, 10h
0x7B5933: retn
0x7B5934: mov     eax, offset aBssm_adts2_sgp; jumptable 007B493D case 209
0x7B5939: mov     ecx, [esp+10h+var_4]
0x7B593D: xor     ecx, esp
0x7B593F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5944: add     esp, 10h
0x7B5947: retn
0x7B5948: mov     eax, offset aBssm_adts2_sb; jumptable 007B493D case 210
0x7B594D: mov     ecx, [esp+10h+var_4]
0x7B5951: xor     ecx, esp
0x7B5953: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5958: add     esp, 10h
0x7B595B: retn
0x7B595C: mov     eax, offset aBssm_adts2_shp; jumptable 007B493D case 211
0x7B5961: mov     ecx, [esp+10h+var_4]
0x7B5965: xor     ecx, esp
0x7B5967: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B596C: add     esp, 10h
0x7B596F: retn
0x7B5970: mov     eax, offset aBssm_adts2_gsh; jumptable 007B493D case 212
0x7B5975: mov     ecx, [esp+10h+var_4]
0x7B5979: xor     ecx, esp
0x7B597B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5980: add     esp, 10h
0x7B5983: retn
0x7B5984: mov     eax, offset aBssm_adts2_hsh; jumptable 007B493D case 213
0x7B5989: mov     ecx, [esp+10h+var_4]
0x7B598D: xor     ecx, esp
0x7B598F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5994: add     esp, 10h
0x7B5997: retn
0x7B5998: mov     eax, offset aBssm_adts2_fgs; jumptable 007B493D case 214
0x7B599D: mov     ecx, [esp+10h+var_4]
0x7B59A1: xor     ecx, esp
0x7B59A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B59A8: add     esp, 10h
0x7B59AB: retn
0x7B59AC: mov     eax, offset aBssm_adts2_pxs; jumptable 007B493D case 215
0x7B59B1: mov     ecx, [esp+10h+var_4]
0x7B59B5: xor     ecx, esp
0x7B59B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B59BC: add     esp, 10h
0x7B59BF: retn
0x7B59C0: mov     eax, offset aBssm_adts2_g_0; jumptable 007B493D case 216
0x7B59C5: mov     ecx, [esp+10h+var_4]
0x7B59C9: xor     ecx, esp
0x7B59CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B59D0: add     esp, 10h
0x7B59D3: retn
0x7B59D4: mov     eax, offset aBssm_adts2_ssh; jumptable 007B493D case 217
0x7B59D9: mov     ecx, [esp+10h+var_4]
0x7B59DD: xor     ecx, esp
0x7B59DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B59E4: add     esp, 10h
0x7B59E7: retn
0x7B59E8: mov     eax, offset aBssm_adts2_sgs; jumptable 007B493D case 218
0x7B59ED: mov     ecx, [esp+10h+var_4]
0x7B59F1: xor     ecx, esp
0x7B59F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B59F8: add     esp, 10h
0x7B59FB: retn
0x7B59FC: mov     eax, offset aBssm_adts2_shs; jumptable 007B493D case 219
0x7B5A01: mov     ecx, [esp+10h+var_4]
0x7B5A05: xor     ecx, esp
0x7B5A07: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A0C: add     esp, 10h
0x7B5A0F: retn
0x7B5A10: mov     eax, offset aBssm_adts2_s_0; jumptable 007B493D case 220
0x7B5A15: mov     ecx, [esp+10h+var_4]
0x7B5A19: xor     ecx, esp
0x7B5A1B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A20: add     esp, 10h
0x7B5A23: retn
0x7B5A24: mov     eax, offset aBssm_adts2_s_1; jumptable 007B493D case 221
0x7B5A29: mov     ecx, [esp+10h+var_4]
0x7B5A2D: xor     ecx, esp
0x7B5A2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A34: add     esp, 10h
0x7B5A37: retn
0x7B5A38: mov     eax, offset aBssm_adts2_s_2; jumptable 007B493D case 222
0x7B5A3D: mov     ecx, [esp+10h+var_4]
0x7B5A41: xor     ecx, esp
0x7B5A43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A48: add     esp, 10h
0x7B5A4B: retn
0x7B5A4C: mov     eax, offset aBssm_adts2_sbs; jumptable 007B493D case 223
0x7B5A51: mov     ecx, [esp+10h+var_4]
0x7B5A55: xor     ecx, esp
0x7B5A57: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A5C: add     esp, 10h
0x7B5A5F: retn
0x7B5A60: mov     eax, offset aBssm_adts_onel; jumptable 007B493D case 224
0x7B5A65: mov     ecx, [esp+10h+var_4]
0x7B5A69: xor     ecx, esp
0x7B5A6B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A70: add     esp, 10h
0x7B5A73: retn
0x7B5A74: mov     eax, offset aBssm_adts_dira; jumptable 007B493D case 225
0x7B5A79: mov     ecx, [esp+10h+var_4]
0x7B5A7D: xor     ecx, esp
0x7B5A7F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A84: add     esp, 10h
0x7B5A87: retn
0x7B5A88: mov     eax, offset aBssm_diffusedi; jumptable 007B493D case 226
0x7B5A8D: mov     ecx, [esp+10h+var_4]
0x7B5A91: xor     ecx, esp
0x7B5A93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5A98: add     esp, 10h
0x7B5A9B: retn
0x7B5A9C: mov     eax, offset aBssm_diffusept; jumptable 007B493D case 227
0x7B5AA1: mov     ecx, [esp+10h+var_4]
0x7B5AA5: xor     ecx, esp
0x7B5AA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5AAC: add     esp, 10h
0x7B5AAF: retn
0x7B5AB0: mov     eax, offset aBssm_diffuse_0; jumptable 007B493D case 228
0x7B5AB5: mov     ecx, [esp+10h+var_4]
0x7B5AB9: xor     ecx, esp
0x7B5ABB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5AC0: add     esp, 10h
0x7B5AC3: retn
0x7B5AC4: mov     eax, offset aBssm_diffuse_1; jumptable 007B493D case 229
0x7B5AC9: mov     ecx, [esp+10h+var_4]
0x7B5ACD: xor     ecx, esp
0x7B5ACF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5AD4: add     esp, 10h
0x7B5AD7: retn
0x7B5AD8: mov     eax, offset aBssm_diffuse_2; jumptable 007B493D case 230
0x7B5ADD: mov     ecx, [esp+10h+var_4]
0x7B5AE1: xor     ecx, esp
0x7B5AE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5AE8: add     esp, 10h
0x7B5AEB: retn
0x7B5AEC: mov     eax, offset aBssm_diffuse_3; jumptable 007B493D case 231
0x7B5AF1: mov     ecx, [esp+10h+var_4]
0x7B5AF5: xor     ecx, esp
0x7B5AF7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5AFC: add     esp, 10h
0x7B5AFF: retn
0x7B5B00: mov     eax, offset aBssm_diffuse_4; jumptable 007B493D case 232
0x7B5B05: mov     ecx, [esp+10h+var_4]
0x7B5B09: xor     ecx, esp
0x7B5B0B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B10: add     esp, 10h
0x7B5B13: retn
0x7B5B14: mov     eax, offset aBssm_diffuse_5; jumptable 007B493D case 233
0x7B5B19: mov     ecx, [esp+10h+var_4]
0x7B5B1D: xor     ecx, esp
0x7B5B1F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B24: add     esp, 10h
0x7B5B27: retn
0x7B5B28: mov     eax, offset aBssm_diffuse_6; jumptable 007B493D case 234
0x7B5B2D: mov     ecx, [esp+10h+var_4]
0x7B5B31: xor     ecx, esp
0x7B5B33: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B38: add     esp, 10h
0x7B5B3B: retn
0x7B5B3C: mov     eax, offset aBssm_diffuse_7; jumptable 007B493D case 235
0x7B5B41: mov     ecx, [esp+10h+var_4]
0x7B5B45: xor     ecx, esp
0x7B5B47: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B4C: add     esp, 10h
0x7B5B4F: retn
0x7B5B50: mov     eax, offset aBssm_diffuse_8; jumptable 007B493D case 236
0x7B5B55: mov     ecx, [esp+10h+var_4]
0x7B5B59: xor     ecx, esp
0x7B5B5B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B60: add     esp, 10h
0x7B5B63: retn
0x7B5B64: mov     eax, offset aBssm_diffuse_9; jumptable 007B493D case 237
0x7B5B69: mov     ecx, [esp+10h+var_4]
0x7B5B6D: xor     ecx, esp
0x7B5B6F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B74: add     esp, 10h
0x7B5B77: retn
0x7B5B78: mov     eax, offset aBssm_diffus_10; jumptable 007B493D case 238
0x7B5B7D: mov     ecx, [esp+10h+var_4]
0x7B5B81: xor     ecx, esp
0x7B5B83: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B88: add     esp, 10h
0x7B5B8B: retn
0x7B5B8C: mov     eax, offset aBssm_diffus_11; jumptable 007B493D case 239
0x7B5B91: mov     ecx, [esp+10h+var_4]
0x7B5B95: xor     ecx, esp
0x7B5B97: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5B9C: add     esp, 10h
0x7B5B9F: retn
0x7B5BA0: mov     eax, offset aBssm_diffus_12; jumptable 007B493D case 240
0x7B5BA5: mov     ecx, [esp+10h+var_4]
0x7B5BA9: xor     ecx, esp
0x7B5BAB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5BB0: add     esp, 10h
0x7B5BB3: retn
0x7B5BB4: mov     eax, offset aBssm_diffus_13; jumptable 007B493D case 241
0x7B5BB9: mov     ecx, [esp+10h+var_4]
0x7B5BBD: xor     ecx, esp
0x7B5BBF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5BC4: add     esp, 10h
0x7B5BC7: retn
0x7B5BC8: mov     eax, offset aBssm_diffus_14; jumptable 007B493D case 242
0x7B5BCD: mov     ecx, [esp+10h+var_4]
0x7B5BD1: xor     ecx, esp
0x7B5BD3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5BD8: add     esp, 10h
0x7B5BDB: retn
0x7B5BDC: mov     eax, offset aBssm_diffus_15; jumptable 007B493D case 243
0x7B5BE1: mov     ecx, [esp+10h+var_4]
0x7B5BE5: xor     ecx, esp
0x7B5BE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5BEC: add     esp, 10h
0x7B5BEF: retn
0x7B5BF0: mov     eax, offset aBssm_diffus_16; jumptable 007B493D case 244
0x7B5BF5: mov     ecx, [esp+10h+var_4]
0x7B5BF9: xor     ecx, esp
0x7B5BFB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C00: add     esp, 10h
0x7B5C03: retn
0x7B5C04: mov     eax, offset aBssm_diffus_17; jumptable 007B493D case 245
0x7B5C09: mov     ecx, [esp+10h+var_4]
0x7B5C0D: xor     ecx, esp
0x7B5C0F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C14: add     esp, 10h
0x7B5C17: retn
0x7B5C18: mov     eax, offset aBssm_diffus_18; jumptable 007B493D case 246
0x7B5C1D: mov     ecx, [esp+10h+var_4]
0x7B5C21: xor     ecx, esp
0x7B5C23: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C28: add     esp, 10h
0x7B5C2B: retn
0x7B5C2C: mov     eax, offset aBssm_diffus_19; jumptable 007B493D case 247
0x7B5C31: mov     ecx, [esp+10h+var_4]
0x7B5C35: xor     ecx, esp
0x7B5C37: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C3C: add     esp, 10h
0x7B5C3F: retn
0x7B5C40: mov     eax, offset aBssm_diffus_20; jumptable 007B493D case 248
0x7B5C45: mov     ecx, [esp+10h+var_4]
0x7B5C49: xor     ecx, esp
0x7B5C4B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C50: add     esp, 10h
0x7B5C53: retn
0x7B5C54: mov     eax, offset aBssm_diffus_21; jumptable 007B493D case 249
0x7B5C59: mov     ecx, [esp+10h+var_4]
0x7B5C5D: xor     ecx, esp
0x7B5C5F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C64: add     esp, 10h
0x7B5C67: retn
0x7B5C68: mov     eax, offset aBssm_diffus_22; jumptable 007B493D case 250
0x7B5C6D: mov     ecx, [esp+10h+var_4]
0x7B5C71: xor     ecx, esp
0x7B5C73: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C78: add     esp, 10h
0x7B5C7B: retn
0x7B5C7C: mov     eax, offset aBssm_diffus_23; jumptable 007B493D case 251
0x7B5C81: mov     ecx, [esp+10h+var_4]
0x7B5C85: xor     ecx, esp
0x7B5C87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5C8C: add     esp, 10h
0x7B5C8F: retn
0x7B5C90: mov     eax, offset aBssm_diffus_24; jumptable 007B493D case 252
0x7B5C95: mov     ecx, [esp+10h+var_4]
0x7B5C99: xor     ecx, esp
0x7B5C9B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5CA0: add     esp, 10h
0x7B5CA3: retn
0x7B5CA4: mov     eax, offset aBssm_diffus_25; jumptable 007B493D case 253
0x7B5CA9: mov     ecx, [esp+10h+var_4]
0x7B5CAD: xor     ecx, esp
0x7B5CAF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5CB4: add     esp, 10h
0x7B5CB7: retn
0x7B5CB8: mov     eax, offset aBssm_diffus_26; jumptable 007B493D case 254
0x7B5CBD: mov     ecx, [esp+10h+var_4]
0x7B5CC1: xor     ecx, esp
0x7B5CC3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5CC8: add     esp, 10h
0x7B5CCB: retn
0x7B5CCC: mov     eax, offset aBssm_diffus_27; jumptable 007B493D case 255
0x7B5CD1: mov     ecx, [esp+10h+var_4]
0x7B5CD5: xor     ecx, esp
0x7B5CD7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5CDC: add     esp, 10h
0x7B5CDF: retn
0x7B5CE0: mov     eax, offset aBssm_diffus_28; jumptable 007B493D case 256
0x7B5CE5: mov     ecx, [esp+10h+var_4]
0x7B5CE9: xor     ecx, esp
0x7B5CEB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5CF0: add     esp, 10h
0x7B5CF3: retn
0x7B5CF4: mov     eax, offset aBssm_diffus_29; jumptable 007B493D case 257
0x7B5CF9: mov     ecx, [esp+10h+var_4]
0x7B5CFD: xor     ecx, esp
0x7B5CFF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D04: add     esp, 10h
0x7B5D07: retn
0x7B5D08: mov     eax, offset aBssm_diffus_30; jumptable 007B493D case 258
0x7B5D0D: mov     ecx, [esp+10h+var_4]
0x7B5D11: xor     ecx, esp
0x7B5D13: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D18: add     esp, 10h
0x7B5D1B: retn
0x7B5D1C: mov     eax, offset aBssm_diffus_31; jumptable 007B493D case 259
0x7B5D21: mov     ecx, [esp+10h+var_4]
0x7B5D25: xor     ecx, esp
0x7B5D27: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D2C: add     esp, 10h
0x7B5D2F: retn
0x7B5D30: mov     eax, offset aBssm_texture; jumptable 007B493D case 260
0x7B5D35: mov     ecx, [esp+10h+var_4]
0x7B5D39: xor     ecx, esp
0x7B5D3B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D40: add     esp, 10h
0x7B5D43: retn
0x7B5D44: mov     eax, offset aBssm_texture_f; jumptable 007B493D case 261
0x7B5D49: mov     ecx, [esp+10h+var_4]
0x7B5D4D: xor     ecx, esp
0x7B5D4F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D54: add     esp, 10h
0x7B5D57: retn
0x7B5D58: mov     eax, offset aBssm_texture_h; jumptable 007B493D case 262
0x7B5D5D: mov     ecx, [esp+10h+var_4]
0x7B5D61: xor     ecx, esp
0x7B5D63: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D68: add     esp, 10h
0x7B5D6B: retn
0x7B5D6C: mov     eax, offset aBssm_texture_s; jumptable 007B493D case 263
0x7B5D71: mov     ecx, [esp+10h+var_4]
0x7B5D75: xor     ecx, esp
0x7B5D77: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D7C: add     esp, 10h
0x7B5D7F: retn
0x7B5D80: mov     eax, offset aBssm_texture_v; jumptable 007B493D case 264
0x7B5D85: mov     ecx, [esp+10h+var_4]
0x7B5D89: xor     ecx, esp
0x7B5D8B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5D90: add     esp, 10h
0x7B5D93: retn
0x7B5D94: mov     eax, offset aBssm_texture_0; jumptable 007B493D case 265
0x7B5D99: mov     ecx, [esp+10h+var_4]
0x7B5D9D: xor     ecx, esp
0x7B5D9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5DA4: add     esp, 10h
0x7B5DA7: retn
0x7B5DA8: mov     eax, offset aBssm_texture_1; jumptable 007B493D case 266
0x7B5DAD: mov     ecx, [esp+10h+var_4]
0x7B5DB1: xor     ecx, esp
0x7B5DB3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5DB8: add     esp, 10h
0x7B5DBB: retn
0x7B5DBC: mov     eax, offset aBssm_texture_2; jumptable 007B493D case 267
0x7B5DC1: mov     ecx, [esp+10h+var_4]
0x7B5DC5: xor     ecx, esp
0x7B5DC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5DCC: add     esp, 10h
0x7B5DCF: retn
0x7B5DD0: mov     eax, offset aBssm_texture_3; jumptable 007B493D case 268
0x7B5DD5: mov     ecx, [esp+10h+var_4]
0x7B5DD9: xor     ecx, esp
0x7B5DDB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5DE0: add     esp, 10h
0x7B5DE3: retn
0x7B5DE4: mov     eax, offset aBssm_texture_p; jumptable 007B493D case 269
0x7B5DE9: mov     ecx, [esp+10h+var_4]
0x7B5DED: xor     ecx, esp
0x7B5DEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5DF4: add     esp, 10h
0x7B5DF7: retn
0x7B5DF8: mov     eax, offset aBssm_texture_4; jumptable 007B493D case 270
0x7B5DFD: mov     ecx, [esp+10h+var_4]
0x7B5E01: xor     ecx, esp
0x7B5E03: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E08: add     esp, 10h
0x7B5E0B: retn
0x7B5E0C: mov     eax, offset aBssm_speculard; jumptable 007B493D case 271
0x7B5E11: mov     ecx, [esp+10h+var_4]
0x7B5E15: xor     ecx, esp
0x7B5E17: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E1C: add     esp, 10h
0x7B5E1F: retn
0x7B5E20: mov     eax, offset aBssm_specularp; jumptable 007B493D case 272
0x7B5E25: mov     ecx, [esp+10h+var_4]
0x7B5E29: xor     ecx, esp
0x7B5E2B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E30: add     esp, 10h
0x7B5E33: retn
0x7B5E34: mov     eax, offset aBssm_specula_0; jumptable 007B493D case 273
0x7B5E39: mov     ecx, [esp+10h+var_4]
0x7B5E3D: xor     ecx, esp
0x7B5E3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E44: add     esp, 10h
0x7B5E47: retn
0x7B5E48: mov     eax, offset aBssm_specula_1; jumptable 007B493D case 274
0x7B5E4D: mov     ecx, [esp+10h+var_4]
0x7B5E51: xor     ecx, esp
0x7B5E53: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E58: add     esp, 10h
0x7B5E5B: retn
0x7B5E5C: mov     eax, offset aBssm_2x_specul; jumptable 007B493D case 277
0x7B5E61: mov     ecx, [esp+10h+var_4]
0x7B5E65: xor     ecx, esp
0x7B5E67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E6C: add     esp, 10h
0x7B5E6F: retn
0x7B5E70: mov     eax, offset aBssm_2x_spec_0; jumptable 007B493D case 278
0x7B5E75: mov     ecx, [esp+10h+var_4]
0x7B5E79: xor     ecx, esp
0x7B5E7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E80: add     esp, 10h
0x7B5E83: retn
0x7B5E84: mov     eax, offset aBssm_2x_spec_1; jumptable 007B493D case 279
0x7B5E89: mov     ecx, [esp+10h+var_4]
0x7B5E8D: xor     ecx, esp
0x7B5E8F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5E94: add     esp, 10h
0x7B5E97: retn
0x7B5E98: mov     eax, offset aBssm_2x_spec_2; jumptable 007B493D case 280
0x7B5E9D: mov     ecx, [esp+10h+var_4]
0x7B5EA1: xor     ecx, esp
0x7B5EA3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5EA8: add     esp, 10h
0x7B5EAB: retn
0x7B5EAC: mov     eax, offset aBssm_2x_spec_3; jumptable 007B493D case 281
0x7B5EB1: mov     ecx, [esp+10h+var_4]
0x7B5EB5: xor     ecx, esp
0x7B5EB7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5EBC: add     esp, 10h
0x7B5EBF: retn
0x7B5EC0: mov     eax, offset aBssm_2x_spec_4; jumptable 007B493D case 282
0x7B5EC5: mov     ecx, [esp+10h+var_4]
0x7B5EC9: xor     ecx, esp
0x7B5ECB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5ED0: add     esp, 10h
0x7B5ED3: retn
0x7B5ED4: mov     eax, offset aBssm_2x_spec_5; jumptable 007B493D case 283
0x7B5ED9: mov     ecx, [esp+10h+var_4]
0x7B5EDD: xor     ecx, esp
0x7B5EDF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5EE4: add     esp, 10h
0x7B5EE7: retn
0x7B5EE8: mov     eax, offset aBssm_2x_spec_6; jumptable 007B493D case 284
0x7B5EED: mov     ecx, [esp+10h+var_4]
0x7B5EF1: xor     ecx, esp
0x7B5EF3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5EF8: add     esp, 10h
0x7B5EFB: retn
0x7B5EFC: mov     eax, offset aBssm_2x_spec_7; jumptable 007B493D case 285
0x7B5F01: mov     ecx, [esp+10h+var_4]
0x7B5F05: xor     ecx, esp
0x7B5F07: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F0C: add     esp, 10h
0x7B5F0F: retn
0x7B5F10: mov     eax, offset aBssm_2x_spec_8; jumptable 007B493D case 286
0x7B5F15: mov     ecx, [esp+10h+var_4]
0x7B5F19: xor     ecx, esp
0x7B5F1B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F20: add     esp, 10h
0x7B5F23: retn
0x7B5F24: mov     eax, offset aBssm_2x_spec_9; jumptable 007B493D case 287
0x7B5F29: mov     ecx, [esp+10h+var_4]
0x7B5F2D: xor     ecx, esp
0x7B5F2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F34: add     esp, 10h
0x7B5F37: retn
0x7B5F38: mov     eax, offset aBssm_2x_spe_10; jumptable 007B493D case 288
0x7B5F3D: mov     ecx, [esp+10h+var_4]
0x7B5F41: xor     ecx, esp
0x7B5F43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F48: add     esp, 10h
0x7B5F4B: retn
0x7B5F4C: mov     eax, offset aBssm_2x_spe_11; jumptable 007B493D case 289
0x7B5F51: mov     ecx, [esp+10h+var_4]
0x7B5F55: xor     ecx, esp
0x7B5F57: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F5C: add     esp, 10h
0x7B5F5F: retn
0x7B5F60: mov     eax, offset aBssm_2x_spe_12; jumptable 007B493D case 290
0x7B5F65: mov     ecx, [esp+10h+var_4]
0x7B5F69: xor     ecx, esp
0x7B5F6B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F70: add     esp, 10h
0x7B5F73: retn
0x7B5F74: mov     eax, offset aBssm_2x_spe_13; jumptable 007B493D case 291
0x7B5F79: mov     ecx, [esp+10h+var_4]
0x7B5F7D: xor     ecx, esp
0x7B5F7F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F84: add     esp, 10h
0x7B5F87: retn
0x7B5F88: mov     eax, offset aBssm_2x_spe_14; jumptable 007B493D case 292
0x7B5F8D: mov     ecx, [esp+10h+var_4]
0x7B5F91: xor     ecx, esp
0x7B5F93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5F98: add     esp, 10h
0x7B5F9B: retn
0x7B5F9C: mov     eax, offset aBssm_2x_spe_15; jumptable 007B493D case 293
0x7B5FA1: mov     ecx, [esp+10h+var_4]
0x7B5FA5: xor     ecx, esp
0x7B5FA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5FAC: add     esp, 10h
0x7B5FAF: retn
0x7B5FB0: mov     eax, offset aBssm_2x_spe_16; jumptable 007B493D case 294
0x7B5FB5: mov     ecx, [esp+10h+var_4]
0x7B5FB9: xor     ecx, esp
0x7B5FBB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5FC0: add     esp, 10h
0x7B5FC3: retn
0x7B5FC4: mov     eax, offset aBssm_2x_spe_17; jumptable 007B493D case 295
0x7B5FC9: mov     ecx, [esp+10h+var_4]
0x7B5FCD: xor     ecx, esp
0x7B5FCF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5FD4: add     esp, 10h
0x7B5FD7: retn
0x7B5FD8: mov     eax, offset aBssm_2x_spe_18; jumptable 007B493D case 296
0x7B5FDD: mov     ecx, [esp+10h+var_4]
0x7B5FE1: xor     ecx, esp
0x7B5FE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5FE8: add     esp, 10h
0x7B5FEB: retn
0x7B5FEC: mov     eax, offset aBssm_2x_spe_19; jumptable 007B493D case 297
0x7B5FF1: mov     ecx, [esp+10h+var_4]
0x7B5FF5: xor     ecx, esp
0x7B5FF7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B5FFC: add     esp, 10h
0x7B5FFF: retn
0x7B6000: mov     eax, offset aBssm_landad_sh; jumptable 007B493D case 73
0x7B6005: mov     ecx, [esp+10h+var_4]
0x7B6009: xor     ecx, esp
0x7B600B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6010: add     esp, 10h
0x7B6013: retn
0x7B6014: mov     eax, offset aBssm_landdiff; jumptable 007B493D case 360
0x7B6019: mov     ecx, [esp+10h+var_4]
0x7B601D: xor     ecx, esp
0x7B601F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6024: add     esp, 10h
0x7B6027: retn
0x7B6028: mov     eax, offset aBssm_land2xdif; jumptable 007B493D case 361
0x7B602D: mov     ecx, [esp+10h+var_4]
0x7B6031: xor     ecx, esp
0x7B6033: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6038: add     esp, 10h
0x7B603B: retn
0x7B603C: mov     eax, offset aBssm_land2xspe; jumptable 007B493D case 362
0x7B6041: mov     ecx, [esp+10h+var_4]
0x7B6045: xor     ecx, esp
0x7B6047: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B604C: add     esp, 10h
0x7B604F: retn
0x7B6050: mov     eax, offset aBssm_land2xs_0; jumptable 007B493D case 364
0x7B6055: mov     ecx, [esp+10h+var_4]
0x7B6059: xor     ecx, esp
0x7B605B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6060: add     esp, 10h
0x7B6063: retn
0x7B6064: mov     eax, offset aBssm_land_g; jumptable 007B493D case 365
0x7B6069: mov     ecx, [esp+10h+var_4]
0x7B606D: xor     ecx, esp
0x7B606F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6074: add     esp, 10h
0x7B6077: retn
0x7B6078: mov     eax, offset aBssm_landad_a; jumptable 007B493D case 366
0x7B607D: mov     ecx, [esp+10h+var_4]
0x7B6081: xor     ecx, esp
0x7B6083: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6088: add     esp, 10h
0x7B608B: retn
0x7B608C: mov     eax, offset aBssm_landad_as; jumptable 007B493D case 367
0x7B6091: mov     ecx, [esp+10h+var_4]
0x7B6095: xor     ecx, esp
0x7B6097: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B609C: add     esp, 10h
0x7B609F: retn
0x7B60A0: mov     eax, offset aBssm_landlo_a; jumptable 007B493D case 374
0x7B60A5: mov     ecx, [esp+10h+var_4]
0x7B60A9: xor     ecx, esp
0x7B60AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B60B0: add     esp, 10h
0x7B60B3: retn
0x7B60B4: mov     eax, offset aBssm_land_ga; jumptable 007B493D case 368
0x7B60B9: mov     ecx, [esp+10h+var_4]
0x7B60BD: xor     ecx, esp
0x7B60BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B60C4: add     esp, 10h
0x7B60C7: retn
0x7B60C8: mov     eax, offset aBssm_landdiff_; jumptable 007B493D case 369
0x7B60CD: mov     ecx, [esp+10h+var_4]
0x7B60D1: xor     ecx, esp
0x7B60D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B60D8: add     esp, 10h
0x7B60DB: retn
0x7B60DC: mov     eax, offset aBssm_land2xd_0; jumptable 007B493D case 370
0x7B60E1: mov     ecx, [esp+10h+var_4]
0x7B60E5: xor     ecx, esp
0x7B60E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B60EC: add     esp, 10h
0x7B60EF: retn
0x7B60F0: mov     eax, offset aBssm_land2xs_1; jumptable 007B493D case 371
0x7B60F5: mov     ecx, [esp+10h+var_4]
0x7B60F9: xor     ecx, esp
0x7B60FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6100: add     esp, 10h
0x7B6103: retn
0x7B6104: mov     eax, offset aBssm_land2xs_2; jumptable 007B493D case 372
0x7B6109: mov     ecx, [esp+10h+var_4]
0x7B610D: xor     ecx, esp
0x7B610F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6114: add     esp, 10h
0x7B6117: retn
0x7B6118: mov     eax, offset aBssm_land2xs_3; jumptable 007B493D case 363
0x7B611D: mov     ecx, [esp+10h+var_4]
0x7B6121: xor     ecx, esp
0x7B6123: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6128: add     esp, 10h
0x7B612B: retn
0x7B612C: mov     eax, offset aBssm_land2xs_4; jumptable 007B493D case 373
0x7B6131: mov     ecx, [esp+10h+var_4]
0x7B6135: xor     ecx, esp
0x7B6137: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B613C: add     esp, 10h
0x7B613F: retn
0x7B6140: mov     eax, offset aBssm_2x_simple; jumptable 007B493D case 375
0x7B6145: mov     ecx, [esp+10h+var_4]
0x7B6149: xor     ecx, esp
0x7B614B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6150: add     esp, 10h
0x7B6153: retn
0x7B6154: mov     eax, offset aBssm_2x_simp_0; jumptable 007B493D case 376
0x7B6159: mov     ecx, [esp+10h+var_4]
0x7B615D: xor     ecx, esp
0x7B615F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6164: add     esp, 10h
0x7B6167: retn
0x7B6168: mov     eax, offset aBssm_2x_simp_1; jumptable 007B493D case 377
0x7B616D: mov     ecx, [esp+10h+var_4]
0x7B6171: xor     ecx, esp
0x7B6173: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6178: add     esp, 10h
0x7B617B: retn
0x7B617C: mov     eax, offset aBssm_2x_simp_2; jumptable 007B493D case 378
0x7B6181: mov     ecx, [esp+10h+var_4]
0x7B6185: xor     ecx, esp
0x7B6187: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B618C: add     esp, 10h
0x7B618F: retn
0x7B6190: mov     eax, offset aBssm_adt_sbb; jumptable 007B493D case 379
0x7B6195: mov     ecx, [esp+10h+var_4]
0x7B6199: xor     ecx, esp
0x7B619B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B61A0: add     esp, 10h
0x7B61A3: retn
0x7B61A4: mov     eax, offset aBssm_3xocclusi; jumptable 007B493D case 298
0x7B61A9: mov     ecx, [esp+10h+var_4]
0x7B61AD: xor     ecx, esp
0x7B61AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B61B4: add     esp, 10h
0x7B61B7: retn
0x7B61B8: mov     eax, offset aBssm_3xzonly; jumptable 007B493D case 4
0x7B61BD: mov     ecx, [esp+10h+var_4]
0x7B61C1: xor     ecx, esp
0x7B61C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B61C8: add     esp, 10h
0x7B61CB: retn
0x7B61CC: mov     eax, offset aBssm_3xzonly_s; jumptable 007B493D case 5
0x7B61D1: mov     ecx, [esp+10h+var_4]
0x7B61D5: xor     ecx, esp
0x7B61D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B61DC: add     esp, 10h
0x7B61DF: retn
0x7B61E0: mov     eax, offset aBssm_3xlightin; jumptable 007B493D case 301
0x7B61E5: mov     ecx, [esp+10h+var_4]
0x7B61E9: xor     ecx, esp
0x7B61EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B61F0: add     esp, 10h
0x7B61F3: retn
0x7B61F4: mov     eax, offset aBssm_3xlight_0; jumptable 007B493D case 302
0x7B61F9: mov     ecx, [esp+10h+var_4]
0x7B61FD: xor     ecx, esp
0x7B61FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6204: add     esp, 10h
0x7B6207: retn
0x7B6208: mov     eax, offset aBssm_3xlight_1; jumptable 007B493D case 303
0x7B620D: mov     ecx, [esp+10h+var_4]
0x7B6211: xor     ecx, esp
0x7B6213: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6218: add     esp, 10h
0x7B621B: retn
0x7B621C: mov     eax, offset aBssm_3xlight_2; jumptable 007B493D case 304
0x7B6221: mov     ecx, [esp+10h+var_4]
0x7B6225: xor     ecx, esp
0x7B6227: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B622C: add     esp, 10h
0x7B622F: retn
0x7B6230: mov     eax, offset aBssm_3xlight_3; jumptable 007B493D case 305
0x7B6235: mov     ecx, [esp+10h+var_4]
0x7B6239: xor     ecx, esp
0x7B623B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6240: add     esp, 10h
0x7B6243: retn
0x7B6244: mov     eax, offset aBssm_3xlight_4; jumptable 007B493D case 306
0x7B6249: mov     ecx, [esp+10h+var_4]
0x7B624D: xor     ecx, esp
0x7B624F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6254: add     esp, 10h
0x7B6257: retn
0x7B6258: mov     eax, offset aBssm_3xlight_5; jumptable 007B493D case 307
0x7B625D: mov     ecx, [esp+10h+var_4]
0x7B6261: xor     ecx, esp
0x7B6263: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6268: add     esp, 10h
0x7B626B: retn
0x7B626C: mov     eax, offset aBssm_3xlight_6; jumptable 007B493D case 308
0x7B6271: mov     ecx, [esp+10h+var_4]
0x7B6275: xor     ecx, esp
0x7B6277: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B627C: add     esp, 10h
0x7B627F: retn
0x7B6280: mov     eax, offset aBssm_3xlight_7; jumptable 007B493D case 309
0x7B6285: mov     ecx, [esp+10h+var_4]
0x7B6289: xor     ecx, esp
0x7B628B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6290: add     esp, 10h
0x7B6293: retn
0x7B6294: mov     eax, offset aBssm_3xlight_8; jumptable 007B493D case 310
0x7B6299: mov     ecx, [esp+10h+var_4]
0x7B629D: xor     ecx, esp
0x7B629F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B62A4: add     esp, 10h
0x7B62A7: retn
0x7B62A8: mov     eax, offset aBssm_3xlight_9; jumptable 007B493D case 311
0x7B62AD: mov     ecx, [esp+10h+var_4]
0x7B62B1: xor     ecx, esp
0x7B62B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B62B8: add     esp, 10h
0x7B62BB: retn
0x7B62BC: mov     eax, offset aBssm_3xligh_10; jumptable 007B493D case 312
0x7B62C1: mov     ecx, [esp+10h+var_4]
0x7B62C5: xor     ecx, esp
0x7B62C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B62CC: add     esp, 10h
0x7B62CF: retn
0x7B62D0: mov     eax, offset aBssm_3xligh_11; jumptable 007B493D case 313
0x7B62D5: mov     ecx, [esp+10h+var_4]
0x7B62D9: xor     ecx, esp
0x7B62DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B62E0: add     esp, 10h
0x7B62E3: retn
0x7B62E4: mov     eax, offset aBssm_3xligh_12; jumptable 007B493D case 314
0x7B62E9: mov     ecx, [esp+10h+var_4]
0x7B62ED: xor     ecx, esp
0x7B62EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B62F4: add     esp, 10h
0x7B62F7: retn
0x7B62F8: mov     eax, offset aBssm_3xligh_13; jumptable 007B493D case 315
0x7B62FD: mov     ecx, [esp+10h+var_4]
0x7B6301: xor     ecx, esp
0x7B6303: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6308: add     esp, 10h
0x7B630B: retn
0x7B630C: mov     eax, offset aBssm_3xligh_14; jumptable 007B493D case 316
0x7B6311: mov     ecx, [esp+10h+var_4]
0x7B6315: xor     ecx, esp
0x7B6317: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B631C: add     esp, 10h
0x7B631F: retn
0x7B6320: mov     eax, offset aBssm_3xligh_15; jumptable 007B493D case 317
0x7B6325: mov     ecx, [esp+10h+var_4]
0x7B6329: xor     ecx, esp
0x7B632B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6330: add     esp, 10h
0x7B6333: retn
0x7B6334: mov     eax, offset aBssm_3xligh_16; jumptable 007B493D case 318
0x7B6339: mov     ecx, [esp+10h+var_4]
0x7B633D: xor     ecx, esp
0x7B633F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6344: add     esp, 10h
0x7B6347: retn
0x7B6348: mov     eax, offset aBssm_3xligh_17; jumptable 007B493D case 319
0x7B634D: mov     ecx, [esp+10h+var_4]
0x7B6351: xor     ecx, esp
0x7B6353: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6358: add     esp, 10h
0x7B635B: retn
0x7B635C: mov     eax, offset aBssm_3xligh_18; jumptable 007B493D case 320
0x7B6361: mov     ecx, [esp+10h+var_4]
0x7B6365: xor     ecx, esp
0x7B6367: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B636C: add     esp, 10h
0x7B636F: retn
0x7B6370: mov     eax, offset aBssm_3xligh_19; jumptable 007B493D case 321
0x7B6375: mov     ecx, [esp+10h+var_4]
0x7B6379: xor     ecx, esp
0x7B637B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6380: add     esp, 10h
0x7B6383: retn
0x7B6384: mov     eax, offset aBssm_3xligh_20; jumptable 007B493D case 322
0x7B6389: mov     ecx, [esp+10h+var_4]
0x7B638D: xor     ecx, esp
0x7B638F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6394: add     esp, 10h
0x7B6397: retn
0x7B6398: mov     eax, offset aBssm_3xligh_21; jumptable 007B493D case 323
0x7B639D: mov     ecx, [esp+10h+var_4]
0x7B63A1: xor     ecx, esp
0x7B63A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B63A8: add     esp, 10h
0x7B63AB: retn
0x7B63AC: mov     eax, offset aBssm_3xligh_22; jumptable 007B493D case 324
0x7B63B1: mov     ecx, [esp+10h+var_4]
0x7B63B5: xor     ecx, esp
0x7B63B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B63BC: add     esp, 10h
0x7B63BF: retn
0x7B63C0: mov     eax, offset aBssm_3xligh_23; jumptable 007B493D case 325
0x7B63C5: mov     ecx, [esp+10h+var_4]
0x7B63C9: xor     ecx, esp
0x7B63CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B63D0: add     esp, 10h
0x7B63D3: retn
0x7B63D4: mov     eax, offset aBssm_3xligh_24; jumptable 007B493D case 326
0x7B63D9: mov     ecx, [esp+10h+var_4]
0x7B63DD: xor     ecx, esp
0x7B63DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B63E4: add     esp, 10h
0x7B63E7: retn
0x7B63E8: mov     eax, offset aBssm_3xenvmap; jumptable 007B493D case 327
0x7B63ED: mov     ecx, [esp+10h+var_4]
0x7B63F1: xor     ecx, esp
0x7B63F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B63F8: add     esp, 10h
0x7B63FB: retn
0x7B63FC: mov     eax, offset aBssm_3xenvmap_; jumptable 007B493D case 328
0x7B6401: mov     ecx, [esp+10h+var_4]
0x7B6405: xor     ecx, esp
0x7B6407: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B640C: add     esp, 10h
0x7B640F: retn
0x7B6410: mov     eax, offset aBssm_3xenvma_0; jumptable 007B493D case 329
0x7B6415: mov     ecx, [esp+10h+var_4]
0x7B6419: xor     ecx, esp
0x7B641B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6420: add     esp, 10h
0x7B6423: retn
0x7B6424: mov     eax, offset aBssm_3xenvma_1; jumptable 007B493D case 330
0x7B6429: mov     ecx, [esp+10h+var_4]
0x7B642D: xor     ecx, esp
0x7B642F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6434: add     esp, 10h
0x7B6437: retn
0x7B6438: mov     eax, offset aBssm_3xenvma_2; jumptable 007B493D case 331
0x7B643D: mov     ecx, [esp+10h+var_4]
0x7B6441: xor     ecx, esp
0x7B6443: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6448: add     esp, 10h
0x7B644B: retn
0x7B644C: mov     eax, offset aBssm_3xenvma_3; jumptable 007B493D case 332
0x7B6451: mov     ecx, [esp+10h+var_4]
0x7B6455: xor     ecx, esp
0x7B6457: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B645C: add     esp, 10h
0x7B645F: retn
0x7B6460: mov     eax, offset aBssm_3xenvma_4; jumptable 007B493D case 333
0x7B6465: mov     ecx, [esp+10h+var_4]
0x7B6469: xor     ecx, esp
0x7B646B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6470: add     esp, 10h
0x7B6473: retn
0x7B6474: mov     eax, offset aBssm_3xligh_25; jumptable 007B493D case 334
0x7B6479: mov     ecx, [esp+10h+var_4]
0x7B647D: xor     ecx, esp
0x7B647F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6484: add     esp, 10h
0x7B6487: retn
0x7B6488: mov     eax, offset aBssm_3xligh_26; jumptable 007B493D case 335
0x7B648D: mov     ecx, [esp+10h+var_4]
0x7B6491: xor     ecx, esp
0x7B6493: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6498: add     esp, 10h
0x7B649B: retn
0x7B649C: mov     eax, offset aBssm_3xligh_27; jumptable 007B493D case 336
0x7B64A1: mov     ecx, [esp+10h+var_4]
0x7B64A5: xor     ecx, esp
0x7B64A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B64AC: add     esp, 10h
0x7B64AF: retn
0x7B64B0: mov     eax, offset aBssm_3xligh_28; jumptable 007B493D case 337
0x7B64B5: mov     ecx, [esp+10h+var_4]
0x7B64B9: xor     ecx, esp
0x7B64BB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B64C0: add     esp, 10h
0x7B64C3: retn
0x7B64C4: mov     eax, offset aBssm_3xdecal; jumptable 007B493D case 338
0x7B64C9: mov     ecx, [esp+10h+var_4]
0x7B64CD: xor     ecx, esp
0x7B64CF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B64D4: add     esp, 10h
0x7B64D7: retn
0x7B64D8: mov     eax, offset aBssm_3xdecal_a; jumptable 007B493D case 339
0x7B64DD: mov     ecx, [esp+10h+var_4]
0x7B64E1: xor     ecx, esp
0x7B64E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B64E8: add     esp, 10h
0x7B64EB: retn
0x7B64EC: mov     eax, offset aBssm_3xdepthma; jumptable 007B493D case 340
0x7B64F1: mov     ecx, [esp+10h+var_4]
0x7B64F5: xor     ecx, esp
0x7B64F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B64FC: add     esp, 10h
0x7B64FF: retn
0x7B6500: mov     eax, offset aBssm_3xdepth_0; jumptable 007B493D case 341
0x7B6505: mov     ecx, [esp+10h+var_4]
0x7B6509: xor     ecx, esp
0x7B650B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6510: add     esp, 10h
0x7B6513: retn
0x7B6514: mov     eax, offset aBssm_3xrendern; jumptable 007B493D case 342
0x7B6519: mov     ecx, [esp+10h+var_4]
0x7B651D: xor     ecx, esp
0x7B651F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6524: add     esp, 10h
0x7B6527: retn
0x7B6528: mov     eax, offset aBssm_3xrende_0; jumptable 007B493D case 343
0x7B652D: mov     ecx, [esp+10h+var_4]
0x7B6531: xor     ecx, esp
0x7B6533: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6538: add     esp, 10h
0x7B653B: retn
0x7B653C: mov     eax, offset aBssm_3xrende_1; jumptable 007B493D case 344
0x7B6541: mov     ecx, [esp+10h+var_4]
0x7B6545: xor     ecx, esp
0x7B6547: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B654C: add     esp, 10h
0x7B654F: retn
0x7B6550: mov     eax, offset aBssm_3xrende_2; jumptable 007B493D case 345
0x7B6555: mov     ecx, [esp+10h+var_4]
0x7B6559: xor     ecx, esp
0x7B655B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6560: add     esp, 10h
0x7B6563: retn
0x7B6564: mov     eax, offset aBssm_3xrende_3; jumptable 007B493D case 346
0x7B6569: mov     ecx, [esp+10h+var_4]
0x7B656D: xor     ecx, esp
0x7B656F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6574: add     esp, 10h
0x7B6577: retn
0x7B6578: mov     eax, offset aBssm_3xlocalma; jumptable 007B493D case 347
0x7B657D: mov     ecx, [esp+10h+var_4]
0x7B6581: xor     ecx, esp
0x7B6583: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6588: add     esp, 10h
0x7B658B: retn
0x7B658C: mov     eax, offset aBssm_3xlocal_0; jumptable 007B493D case 348
0x7B6591: mov     ecx, [esp+10h+var_4]
0x7B6595: xor     ecx, esp
0x7B6597: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B659C: add     esp, 10h
0x7B659F: retn
0x7B65A0: mov     eax, offset aBssm_3xlocal_1; jumptable 007B493D case 349
0x7B65A5: mov     ecx, [esp+10h+var_4]
0x7B65A9: xor     ecx, esp
0x7B65AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B65B0: add     esp, 10h
0x7B65B3: retn
0x7B65B4: mov     eax, offset aBssm_3xtexeffe; jumptable 007B493D case 350
0x7B65B9: mov     ecx, [esp+10h+var_4]
0x7B65BD: xor     ecx, esp
0x7B65BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B65C4: add     esp, 10h
0x7B65C7: retn
0x7B65C8: mov     eax, offset aBssm_3xtexef_0; jumptable 007B493D case 351
0x7B65CD: mov     ecx, [esp+10h+var_4]
0x7B65D1: xor     ecx, esp
0x7B65D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B65D8: add     esp, 10h
0x7B65DB: retn
0x7B65DC: mov     eax, offset aBssm_skybasepr; jumptable 007B493D case 381
0x7B65E1: mov     ecx, [esp+10h+var_4]
0x7B65E5: xor     ecx, esp
0x7B65E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B65EC: add     esp, 10h
0x7B65EF: retn
0x7B65F0: mov     eax, offset aBssm_water_wad; jumptable 007B493D case 408
0x7B65F5: mov     ecx, [esp+10h+var_4]
0x7B65F9: xor     ecx, esp
0x7B65FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6600: add     esp, 10h
0x7B6603: retn
0x7B6604: mov     eax, offset aBssm_water; jumptable 007B493D case 409
0x7B6609: mov     ecx, [esp+10h+var_4]
0x7B660D: xor     ecx, esp
0x7B660F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6614: add     esp, 10h
0x7B6617: retn
0x7B6618: mov     eax, offset aBssm_water_lav; jumptable 007B493D case 410
0x7B661D: mov     ecx, [esp+10h+var_4]
0x7B6621: xor     ecx, esp
0x7B6623: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6628: add     esp, 10h
0x7B662B: retn
0x7B662C: mov     eax, offset aBssm_water_lod; jumptable 007B493D case 380
0x7B6631: mov     ecx, [esp+10h+var_4]
0x7B6635: xor     ecx, esp
0x7B6637: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B663C: add     esp, 10h
0x7B663F: retn
0x7B6640: mov     eax, offset aBssm_precipita; jumptable 007B493D case 411
0x7B6645: mov     ecx, [esp+10h+var_4]
0x7B6649: xor     ecx, esp
0x7B664B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6650: add     esp, 10h
0x7B6653: retn
0x7B6654: mov     eax, offset aBssm_grass; jumptable 007B493D case 405
0x7B6659: mov     ecx, [esp+10h+var_4]
0x7B665D: xor     ecx, esp
0x7B665F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6664: add     esp, 10h
0x7B6667: retn
0x7B6668: mov     eax, offset aBssm_grasspt; jumptable 007B493D case 406
0x7B666D: mov     ecx, [esp+10h+var_4]
0x7B6671: xor     ecx, esp
0x7B6673: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6678: add     esp, 10h
0x7B667B: retn
0x7B667C: mov     eax, offset aBssm_grass_sim; jumptable 007B493D case 407
0x7B6681: mov     ecx, [esp+10h+var_4]
0x7B6685: xor     ecx, esp
0x7B6687: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B668C: add     esp, 10h
0x7B668F: retn
0x7B6690: mov     eax, offset aBssm_particle; jumptable 007B493D case 382
0x7B6695: mov     ecx, [esp+10h+var_4]
0x7B6699: xor     ecx, esp
0x7B669B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B66A0: add     esp, 10h
0x7B66A3: retn
0x7B66A4: mov     eax, offset aBssm_bolt; jumptable 007B493D case 383
0x7B66A9: mov     ecx, [esp+10h+var_4]
0x7B66AD: xor     ecx, esp
0x7B66AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B66B4: add     esp, 10h
0x7B66B7: retn
0x7B66B8: mov     eax, offset aBssm_envmap; jumptable 007B493D case 384
0x7B66BD: mov     ecx, [esp+10h+var_4]
0x7B66C1: xor     ecx, esp
0x7B66C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B66C8: add     esp, 10h
0x7B66CB: retn
0x7B66CC: mov     eax, offset aBssm_envmap_vc; jumptable 007B493D case 385
0x7B66D1: mov     ecx, [esp+10h+var_4]
0x7B66D5: xor     ecx, esp
0x7B66D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B66DC: add     esp, 10h
0x7B66DF: retn
0x7B66E0: mov     eax, offset aBssm_envmap_s; jumptable 007B493D case 386
0x7B66E5: mov     ecx, [esp+10h+var_4]
0x7B66E9: xor     ecx, esp
0x7B66EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B66F0: add     esp, 10h
0x7B66F3: retn
0x7B66F4: mov     eax, offset aBssm_envmap_sv; jumptable 007B493D case 387
0x7B66F9: mov     ecx, [esp+10h+var_4]
0x7B66FD: xor     ecx, esp
0x7B66FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6704: add     esp, 10h
0x7B6707: retn
0x7B6708: mov     eax, offset aBssm_2x_envmap; jumptable 007B493D case 388
0x7B670D: mov     ecx, [esp+10h+var_4]
0x7B6711: xor     ecx, esp
0x7B6713: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6718: add     esp, 10h
0x7B671B: retn
0x7B671C: mov     eax, offset aBssm_2x_envm_0; jumptable 007B493D case 389
0x7B6721: mov     ecx, [esp+10h+var_4]
0x7B6725: xor     ecx, esp
0x7B6727: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B672C: add     esp, 10h
0x7B672F: retn
0x7B6730: mov     eax, offset aBssm_2x_envm_1; jumptable 007B493D case 390
0x7B6735: mov     ecx, [esp+10h+var_4]
0x7B6739: xor     ecx, esp
0x7B673B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6740: add     esp, 10h
0x7B6743: retn
0x7B6744: mov     eax, offset aBssm_2x_envm_2; jumptable 007B493D case 391
0x7B6749: mov     ecx, [esp+10h+var_4]
0x7B674D: xor     ecx, esp
0x7B674F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6754: add     esp, 10h
0x7B6757: retn
0x7B6758: mov     eax, offset aBssm_texeffect; jumptable 007B493D case 396
0x7B675D: mov     ecx, [esp+10h+var_4]
0x7B6761: xor     ecx, esp
0x7B6763: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6768: add     esp, 10h
0x7B676B: retn
0x7B676C: mov     eax, offset aBssm_texeffe_0; jumptable 007B493D case 397
0x7B6771: mov     ecx, [esp+10h+var_4]
0x7B6775: xor     ecx, esp
0x7B6777: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B677C: add     esp, 10h
0x7B677F: retn
0x7B6780: mov     eax, offset aBssm_2x_texeff; jumptable 007B493D case 398
0x7B6785: mov     ecx, [esp+10h+var_4]
0x7B6789: xor     ecx, esp
0x7B678B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6790: add     esp, 10h
0x7B6793: retn
0x7B6794: mov     eax, offset aBssm_2x_texe_0; jumptable 007B493D case 399
0x7B6799: mov     ecx, [esp+10h+var_4]
0x7B679D: xor     ecx, esp
0x7B679F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B67A4: add     esp, 10h
0x7B67A7: retn
0x7B67A8: mov     eax, offset aBssm_geomdecal; jumptable 007B493D case 392
0x7B67AD: mov     ecx, [esp+10h+var_4]
0x7B67B1: xor     ecx, esp
0x7B67B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B67B8: add     esp, 10h
0x7B67BB: retn
0x7B67BC: mov     eax, offset aBssm_geomdec_0; jumptable 007B493D case 393
0x7B67C1: mov     ecx, [esp+10h+var_4]
0x7B67C5: xor     ecx, esp
0x7B67C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B67CC: add     esp, 10h
0x7B67CF: retn
0x7B67D0: mov     eax, offset aBssm_decal; jumptable 007B493D case 394
0x7B67D5: mov     ecx, [esp+10h+var_4]
0x7B67D9: xor     ecx, esp
0x7B67DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B67E0: add     esp, 10h
0x7B67E3: retn
0x7B67E4: mov     eax, offset aBssm_decal_a; jumptable 007B493D case 395
0x7B67E9: mov     ecx, [esp+10h+var_4]
0x7B67ED: xor     ecx, esp
0x7B67EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B67F4: add     esp, 10h
0x7B67F7: retn
0x7B67F8: mov     eax, offset aBssm_fog; jumptable 007B493D case 400
0x7B67FD: mov     ecx, [esp+10h+var_4]
0x7B6801: xor     ecx, esp
0x7B6803: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6808: add     esp, 10h
0x7B680B: retn
0x7B680C: mov     eax, offset aBssm_fog_a; jumptable 007B493D case 401
0x7B6811: mov     ecx, [esp+10h+var_4]
0x7B6815: xor     ecx, esp
0x7B6817: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B681C: add     esp, 10h
0x7B681F: retn
0x7B6820: mov     eax, offset aBssm_fog_s; jumptable 007B493D case 402
0x7B6825: mov     ecx, [esp+10h+var_4]
0x7B6829: xor     ecx, esp
0x7B682B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6830: add     esp, 10h
0x7B6833: retn
0x7B6834: mov     eax, offset aBssm_fog_sa; jumptable 007B493D case 403
0x7B6839: mov     ecx, [esp+10h+var_4]
0x7B683D: xor     ecx, esp
0x7B683F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6844: add     esp, 10h
0x7B6847: retn
0x7B6848: mov     eax, offset aBssm_fog_sb; jumptable 007B493D case 404
0x7B684D: mov     ecx, [esp+10h+var_4]
0x7B6851: xor     ecx, esp
0x7B6853: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6858: add     esp, 10h
0x7B685B: retn
0x7B685C: mov     eax, offset aBssm_skybasepo; jumptable 007B493D case 412
0x7B6861: mov     ecx, [esp+10h+var_4]
0x7B6865: xor     ecx, esp
0x7B6867: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B686C: add     esp, 10h
0x7B686F: retn
0x7B6870: mov     eax, offset aBssm_selfillum; jumptable 007B493D case 413
0x7B6875: mov     ecx, [esp+10h+var_4]
0x7B6879: xor     ecx, esp
0x7B687B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6880: add     esp, 10h
0x7B6883: retn
0x7B6884: mov     eax, offset aBssm_selfill_0; jumptable 007B493D case 414
0x7B6889: mov     ecx, [esp+10h+var_4]
0x7B688D: xor     ecx, esp
0x7B688F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6894: add     esp, 10h
0x7B6897: retn
0x7B6898: mov     eax, offset aBssm_selfill_1; jumptable 007B493D case 415
0x7B689D: mov     ecx, [esp+10h+var_4]
0x7B68A1: xor     ecx, esp
0x7B68A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B68A8: add     esp, 10h
0x7B68AB: retn
0x7B68AC: mov     eax, offset aBssm_selfill_2; jumptable 007B493D case 10
0x7B68B1: mov     ecx, [esp+10h+var_4]
0x7B68B5: xor     ecx, esp
0x7B68B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B68BC: add     esp, 10h
0x7B68BF: retn
0x7B68C0: mov     eax, offset aBssm_selfill_3; jumptable 007B493D case 11
0x7B68C5: mov     ecx, [esp+10h+var_4]
0x7B68C9: xor     ecx, esp
0x7B68CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B68D0: add     esp, 10h
0x7B68D3: retn
0x7B68D4: mov     eax, offset aBssm_shadowvol; jumptable 007B493D case 416
0x7B68D9: mov     ecx, [esp+10h+var_4]
0x7B68DD: xor     ecx, esp
0x7B68DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B68E4: add     esp, 10h
0x7B68E7: retn
0x7B68E8: mov     eax, offset aBssm_shadowv_0; jumptable 007B493D case 417
0x7B68ED: mov     ecx, [esp+10h+var_4]
0x7B68F1: xor     ecx, esp
0x7B68F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B68F8: add     esp, 10h
0x7B68FB: retn
0x7B68FC: mov     eax, offset aBssm_shadowv_1; jumptable 007B493D case 418
0x7B6901: mov     ecx, [esp+10h+var_4]
0x7B6905: xor     ecx, esp
0x7B6907: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B690C: add     esp, 10h
0x7B690F: retn
0x7B6910: mov     eax, offset aBssm_rendernor; jumptable 007B493D case 352
0x7B6915: mov     ecx, [esp+10h+var_4]
0x7B6919: xor     ecx, esp
0x7B691B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6920: add     esp, 10h
0x7B6923: retn
0x7B6924: mov     eax, offset aBssm_rendern_0; jumptable 007B493D case 353
0x7B6929: mov     ecx, [esp+10h+var_4]
0x7B692D: xor     ecx, esp
0x7B692F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6934: add     esp, 10h
0x7B6937: retn
0x7B6938: mov     eax, offset aBssm_rendern_1; jumptable 007B493D case 354
0x7B693D: mov     ecx, [esp+10h+var_4]
0x7B6941: xor     ecx, esp
0x7B6943: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6948: add     esp, 10h
0x7B694B: retn
0x7B694C: mov     eax, offset aBssm_rendern_2; jumptable 007B493D case 355
0x7B6951: mov     ecx, [esp+10h+var_4]
0x7B6955: xor     ecx, esp
0x7B6957: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B695C: add     esp, 10h
0x7B695F: retn
0x7B6960: mov     eax, offset aBssm_rendern_3; jumptable 007B493D case 356
0x7B6965: mov     ecx, [esp+10h+var_4]
0x7B6969: xor     ecx, esp
0x7B696B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6970: add     esp, 10h
0x7B6973: retn
0x7B6974: mov     eax, offset aBssm_localmap; jumptable 007B493D case 357
0x7B6979: mov     ecx, [esp+10h+var_4]
0x7B697D: xor     ecx, esp
0x7B697F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6984: add     esp, 10h
0x7B6987: retn
0x7B6988: mov     eax, offset aBssm_localmap_; jumptable 007B493D case 358
0x7B698D: mov     ecx, [esp+10h+var_4]
0x7B6991: xor     ecx, esp
0x7B6993: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B6998: add     esp, 10h
0x7B699B: retn
0x7B699C: mov     eax, offset aBssm_localma_0; jumptable 007B493D case 359
0x7B69A1: mov     ecx, [esp+10h+var_4]
0x7B69A5: xor     ecx, esp
0x7B69A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B69AC: add     esp, 10h
0x7B69AF: retn
0x7B69B0: push    eax; jumptable 007B493D default case, cases 275,276,299,300
0x7B69B1: lea     eax, [esp+14h+var_10]
0x7B69B5: push    offset a???D; "??? %d"
0x7B69BA: push    eax
0x7B69BB: call    __sprintf
0x7B69C0: mov     ecx, [esp+1Ch+var_4]
0x7B69C4: add     esp, 0Ch
0x7B69C7: xor     ecx, esp
0x7B69C9: mov     eax, offset asc_A8857C; "???"
0x7B69CE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B69D3: add     esp, 10h
0x7B69D6: retn
