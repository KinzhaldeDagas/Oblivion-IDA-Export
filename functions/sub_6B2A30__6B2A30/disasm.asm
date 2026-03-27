0x6B2A30: sub     esp, 50h
0x6B2A33: push    ebx
0x6B2A34: mov     ebx, ecx
0x6B2A36: mov     eax, [ebx]
0x6B2A38: mov     edx, [eax+4]
0x6B2A3B: mov     eax, [esp+54h+arg_0]
0x6B2A3F: push    ebp
0x6B2A40: push    esi
0x6B2A41: lea     ecx, [eax+eax*8]
0x6B2A44: lea     esi, [edx+ecx*8+2Ch]
0x6B2A48: push    edi
0x6B2A49: mov     ecx, 12h
0x6B2A4E: lea     edi, [esp+60h+var_48]
0x6B2A52: rep movsd
0x6B2A54: cmp     [esp+60h+var_38], 0
0x6B2A59: mov     ecx, [esp+60h+var_3C]
0x6B2A5D: mov     esi, ds:0B16320h[ecx*4]
0x6B2A64: mov     edi, ds:0B16360h[ecx*4]
0x6B2A6B: lea     ebp, ds:0B16320h[ecx*4]
0x6B2A72: lea     ecx, ds:0B16360h[ecx*4]
0x6B2A79: mov     [esp+60h+var_4C], ecx
0x6B2A7D: jz      loc_6B2D92
0x6B2A83: cmp     [esp+60h+var_34], 2
0x6B2A88: jnz     loc_6B2D92
0x6B2A8E: cmp     [esp+60h+var_30], 0
0x6B2A93: jz      loc_6B2B58
0x6B2A99: lea     esi, [ebx+4028h]
0x6B2A9F: mov     edi, 8
0x6B2AA4: mov     edx, [ebp+0]
0x6B2AA7: mov     ecx, [ebx+4]
0x6B2AAA: push    edx
0x6B2AAB: call    sub_6AF6F0
0x6B2AB0: mov     [esi], eax
0x6B2AB2: add     esi, 4
0x6B2AB5: sub     edi, 1
0x6B2AB8: jnz     short loc_6B2AA4
0x6B2ABA: lea     eax, [ebx+4090h]
0x6B2AC0: mov     [esp+60h+arg_0], eax
0x6B2AC4: mov     [esp+60h+var_50], 3
0x6B2ACC: lea     esp, [esp+0]
0x6B2AD0: mov     esi, [esp+60h+arg_0]
0x6B2AD4: mov     edi, 3
0x6B2AD9: lea     esp, [esp+0]
0x6B2AE0: mov     ecx, [ebp+0]
0x6B2AE3: push    ecx
0x6B2AE4: mov     ecx, [ebx+4]
0x6B2AE7: call    sub_6AF6F0
0x6B2AEC: mov     [esi], eax
0x6B2AEE: add     esi, 34h ; '4'
0x6B2AF1: sub     edi, 1
0x6B2AF4: jnz     short loc_6B2AE0
0x6B2AF6: add     [esp+60h+arg_0], 4
0x6B2AFB: sub     [esp+60h+var_50], 1
0x6B2B00: jnz     short loc_6B2AD0
0x6B2B02: lea     ebp, [ebx+409Ch]
0x6B2B08: mov     [esp+60h+arg_0], 6
0x6B2B10: mov     esi, ebp
0x6B2B12: mov     edi, 3
0x6B2B17: mov     edx, [esp+60h+var_4C]
0x6B2B1B: mov     eax, [edx]
0x6B2B1D: mov     ecx, [ebx+4]
0x6B2B20: push    eax
0x6B2B21: call    sub_6AF6F0
0x6B2B26: mov     [esi], eax
0x6B2B28: add     esi, 34h ; '4'
0x6B2B2B: sub     edi, 1
0x6B2B2E: jnz     short loc_6B2B17
0x6B2B30: add     ebp, 4
0x6B2B33: sub     [esp+60h+arg_0], 1
0x6B2B38: jnz     short loc_6B2B10
0x6B2B3A: pop     edi
0x6B2B3B: xor     eax, eax
0x6B2B3D: pop     esi
0x6B2B3E: pop     ebp
0x6B2B3F: mov     [ebx+40B4h], eax
0x6B2B45: mov     [ebx+40E8h], eax
0x6B2B4B: mov     [ebx+411Ch], eax
0x6B2B51: pop     ebx
0x6B2B52: add     esp, 50h
0x6B2B55: retn    4
0x6B2B58: mov     ecx, [ebx+4]
0x6B2B5B: push    esi
0x6B2B5C: call    sub_6AF6F0
0x6B2B61: mov     ecx, [ebx+4]
0x6B2B64: push    esi
0x6B2B65: mov     [ebx+4084h], eax
0x6B2B6B: call    sub_6AF6F0
0x6B2B70: mov     ecx, [ebx+4]
0x6B2B73: push    esi
0x6B2B74: mov     [ebx+40B8h], eax
0x6B2B7A: call    sub_6AF6F0
0x6B2B7F: mov     ecx, [ebx+4]
0x6B2B82: push    esi
0x6B2B83: mov     [ebx+40ECh], eax
0x6B2B89: call    sub_6AF6F0
0x6B2B8E: mov     ecx, [ebx+4]
0x6B2B91: push    esi
0x6B2B92: mov     [ebx+4088h], eax
0x6B2B98: call    sub_6AF6F0
0x6B2B9D: mov     ecx, [ebx+4]
0x6B2BA0: push    esi
0x6B2BA1: mov     [ebx+40BCh], eax
0x6B2BA7: call    sub_6AF6F0
0x6B2BAC: mov     ecx, [ebx+4]
0x6B2BAF: push    esi
0x6B2BB0: mov     [ebx+40F0h], eax
0x6B2BB6: call    sub_6AF6F0
0x6B2BBB: mov     ecx, [ebx+4]
0x6B2BBE: push    esi
0x6B2BBF: mov     [ebx+408Ch], eax
0x6B2BC5: call    sub_6AF6F0
0x6B2BCA: mov     ecx, [ebx+4]
0x6B2BCD: push    esi
0x6B2BCE: mov     [ebx+40C0h], eax
0x6B2BD4: call    sub_6AF6F0
0x6B2BD9: mov     ecx, [ebx+4]
0x6B2BDC: push    esi
0x6B2BDD: mov     [ebx+40F4h], eax
0x6B2BE3: call    sub_6AF6F0
0x6B2BE8: mov     ecx, [ebx+4]
0x6B2BEB: push    esi
0x6B2BEC: mov     [ebx+4090h], eax
0x6B2BF2: call    sub_6AF6F0
0x6B2BF7: mov     ecx, [ebx+4]
0x6B2BFA: push    esi
0x6B2BFB: mov     [ebx+40C4h], eax
0x6B2C01: call    sub_6AF6F0
0x6B2C06: mov     ecx, [ebx+4]
0x6B2C09: push    esi
0x6B2C0A: mov     [ebx+40F8h], eax
0x6B2C10: call    sub_6AF6F0
0x6B2C15: mov     ecx, [ebx+4]
0x6B2C18: push    esi
0x6B2C19: mov     [ebx+4094h], eax
0x6B2C1F: call    sub_6AF6F0
0x6B2C24: mov     ecx, [ebx+4]
0x6B2C27: push    esi
0x6B2C28: mov     [ebx+40C8h], eax
0x6B2C2E: call    sub_6AF6F0
0x6B2C33: mov     ecx, [ebx+4]
0x6B2C36: push    esi
0x6B2C37: mov     [ebx+40FCh], eax
0x6B2C3D: call    sub_6AF6F0
0x6B2C42: mov     ecx, [ebx+4]
0x6B2C45: push    esi
0x6B2C46: mov     [ebx+4098h], eax
0x6B2C4C: call    sub_6AF6F0
0x6B2C51: mov     ecx, [ebx+4]
0x6B2C54: push    esi
0x6B2C55: mov     [ebx+40CCh], eax
0x6B2C5B: call    sub_6AF6F0
0x6B2C60: mov     ecx, [ebx+4]
0x6B2C63: push    edi
0x6B2C64: mov     [ebx+4100h], eax
0x6B2C6A: call    sub_6AF6F0
0x6B2C6F: mov     ecx, [ebx+4]
0x6B2C72: push    edi
0x6B2C73: mov     [ebx+409Ch], eax
0x6B2C79: call    sub_6AF6F0
0x6B2C7E: mov     [ebx+40D0h], eax
0x6B2C84: push    edi
0x6B2C85: mov     ecx, [ebx+4]
0x6B2C88: call    sub_6AF6F0
0x6B2C8D: mov     ecx, [ebx+4]
0x6B2C90: push    edi
0x6B2C91: mov     [ebx+4104h], eax
0x6B2C97: call    sub_6AF6F0
0x6B2C9C: mov     ecx, [ebx+4]
0x6B2C9F: push    edi
0x6B2CA0: mov     [ebx+40A0h], eax
0x6B2CA6: call    sub_6AF6F0
0x6B2CAB: mov     ecx, [ebx+4]
0x6B2CAE: push    edi
0x6B2CAF: mov     [ebx+40D4h], eax
0x6B2CB5: call    sub_6AF6F0
0x6B2CBA: mov     ecx, [ebx+4]
0x6B2CBD: push    edi
0x6B2CBE: mov     [ebx+4108h], eax
0x6B2CC4: call    sub_6AF6F0
0x6B2CC9: mov     ecx, [ebx+4]
0x6B2CCC: push    edi
0x6B2CCD: mov     [ebx+40A4h], eax
0x6B2CD3: call    sub_6AF6F0
0x6B2CD8: mov     ecx, [ebx+4]
0x6B2CDB: push    edi
0x6B2CDC: mov     [ebx+40D8h], eax
0x6B2CE2: call    sub_6AF6F0
0x6B2CE7: mov     ecx, [ebx+4]
0x6B2CEA: push    edi
0x6B2CEB: mov     [ebx+410Ch], eax
0x6B2CF1: call    sub_6AF6F0
0x6B2CF6: mov     ecx, [ebx+4]
0x6B2CF9: push    edi
0x6B2CFA: mov     [ebx+40A8h], eax
0x6B2D00: call    sub_6AF6F0
0x6B2D05: mov     ecx, [ebx+4]
0x6B2D08: push    edi
0x6B2D09: mov     [ebx+40DCh], eax
0x6B2D0F: call    sub_6AF6F0
0x6B2D14: mov     ecx, [ebx+4]
0x6B2D17: push    edi
0x6B2D18: mov     [ebx+4110h], eax
0x6B2D1E: call    sub_6AF6F0
0x6B2D23: mov     ecx, [ebx+4]
0x6B2D26: push    edi
0x6B2D27: mov     [ebx+40ACh], eax
0x6B2D2D: call    sub_6AF6F0
0x6B2D32: mov     ecx, [ebx+4]
0x6B2D35: push    edi
0x6B2D36: mov     [ebx+40E0h], eax
0x6B2D3C: call    sub_6AF6F0
0x6B2D41: mov     ecx, [ebx+4]
0x6B2D44: push    edi
0x6B2D45: mov     [ebx+4114h], eax
0x6B2D4B: call    sub_6AF6F0
0x6B2D50: mov     ecx, [ebx+4]
0x6B2D53: push    edi
0x6B2D54: mov     [ebx+40B0h], eax
0x6B2D5A: call    sub_6AF6F0
0x6B2D5F: mov     ecx, [ebx+4]
0x6B2D62: push    edi
0x6B2D63: mov     [ebx+40E4h], eax
0x6B2D69: call    sub_6AF6F0
0x6B2D6E: pop     edi
0x6B2D6F: mov     [ebx+4118h], eax
0x6B2D75: xor     eax, eax
0x6B2D77: pop     esi
0x6B2D78: pop     ebp
0x6B2D79: mov     [ebx+40B4h], eax
0x6B2D7F: mov     [ebx+40E8h], eax
0x6B2D85: mov     [ebx+411Ch], eax
0x6B2D8B: pop     ebx
0x6B2D8C: add     esp, 50h
0x6B2D8F: retn    4
0x6B2D92: cmp     dword ptr [edx+1Ch], 0
0x6B2D96: jz      short loc_6B2D9C
0x6B2D98: test    eax, eax
0x6B2D9A: jnz     short loc_6B2DFA
0x6B2D9C: mov     ecx, [ebx+4]
0x6B2D9F: push    esi
0x6B2DA0: call    sub_6AF6F0
0x6B2DA5: mov     ecx, [ebx+4]
0x6B2DA8: push    esi
0x6B2DA9: mov     [ebx+4028h], eax
0x6B2DAF: call    sub_6AF6F0
0x6B2DB4: mov     ecx, [ebx+4]
0x6B2DB7: push    esi
0x6B2DB8: mov     [ebx+402Ch], eax
0x6B2DBE: call    sub_6AF6F0
0x6B2DC3: mov     ecx, [ebx+4]
0x6B2DC6: push    esi
0x6B2DC7: mov     [ebx+4030h], eax
0x6B2DCD: call    sub_6AF6F0
0x6B2DD2: mov     ecx, [ebx+4]
0x6B2DD5: push    esi
0x6B2DD6: mov     [ebx+4034h], eax
0x6B2DDC: call    sub_6AF6F0
0x6B2DE1: mov     ecx, [ebx+4]
0x6B2DE4: push    esi
0x6B2DE5: mov     [ebx+4038h], eax
0x6B2DEB: call    sub_6AF6F0
0x6B2DF0: mov     [ebx+403Ch], eax
0x6B2DF6: mov     eax, [esp+60h+arg_0]
0x6B2DFA: mov     ecx, [ebx]
0x6B2DFC: mov     edx, [ecx+4]
0x6B2DFF: cmp     dword ptr [edx+20h], 0
0x6B2E03: jz      short loc_6B2E09
0x6B2E05: test    eax, eax
0x6B2E07: jnz     short loc_6B2E58
0x6B2E09: mov     ecx, [ebx+4]
0x6B2E0C: push    esi
0x6B2E0D: call    sub_6AF6F0
0x6B2E12: mov     ecx, [ebx+4]
0x6B2E15: push    esi
0x6B2E16: mov     [ebx+4040h], eax
0x6B2E1C: call    sub_6AF6F0
0x6B2E21: mov     ecx, [ebx+4]
0x6B2E24: push    esi
0x6B2E25: mov     [ebx+4044h], eax
0x6B2E2B: call    sub_6AF6F0
0x6B2E30: mov     ecx, [ebx+4]
0x6B2E33: push    esi
0x6B2E34: mov     [ebx+4048h], eax
0x6B2E3A: call    sub_6AF6F0
0x6B2E3F: mov     ecx, [ebx+4]
0x6B2E42: push    esi
0x6B2E43: mov     [ebx+404Ch], eax
0x6B2E49: call    sub_6AF6F0
0x6B2E4E: mov     [ebx+4050h], eax
0x6B2E54: mov     eax, [esp+60h+arg_0]
0x6B2E58: mov     ecx, [ebx]
0x6B2E5A: mov     edx, [ecx+4]
0x6B2E5D: cmp     dword ptr [edx+24h], 0
0x6B2E61: jz      short loc_6B2E67
0x6B2E63: test    eax, eax
0x6B2E65: jnz     short loc_6B2EB6
0x6B2E67: mov     ecx, [ebx+4]
0x6B2E6A: push    edi
0x6B2E6B: call    sub_6AF6F0
0x6B2E70: mov     ecx, [ebx+4]
0x6B2E73: push    edi
0x6B2E74: mov     [ebx+4054h], eax
0x6B2E7A: call    sub_6AF6F0
0x6B2E7F: mov     ecx, [ebx+4]
0x6B2E82: push    edi
0x6B2E83: mov     [ebx+4058h], eax
0x6B2E89: call    sub_6AF6F0
0x6B2E8E: mov     ecx, [ebx+4]
0x6B2E91: push    edi
0x6B2E92: mov     [ebx+405Ch], eax
0x6B2E98: call    sub_6AF6F0
0x6B2E9D: mov     ecx, [ebx+4]
0x6B2EA0: push    edi
0x6B2EA1: mov     [ebx+4060h], eax
0x6B2EA7: call    sub_6AF6F0
0x6B2EAC: mov     [ebx+4064h], eax
0x6B2EB2: mov     eax, [esp+60h+arg_0]
0x6B2EB6: mov     ecx, [ebx]
0x6B2EB8: mov     edx, [ecx+4]
0x6B2EBB: cmp     dword ptr [edx+28h], 0
0x6B2EBF: jz      short loc_6B2EC5
0x6B2EC1: test    eax, eax
0x6B2EC3: jnz     short loc_6B2F10
0x6B2EC5: mov     ecx, [ebx+4]
0x6B2EC8: push    edi
0x6B2EC9: call    sub_6AF6F0
0x6B2ECE: mov     ecx, [ebx+4]
0x6B2ED1: push    edi
0x6B2ED2: mov     [ebx+4068h], eax
0x6B2ED8: call    sub_6AF6F0
0x6B2EDD: mov     ecx, [ebx+4]
0x6B2EE0: push    edi
0x6B2EE1: mov     [ebx+406Ch], eax
0x6B2EE7: call    sub_6AF6F0
0x6B2EEC: mov     ecx, [ebx+4]
0x6B2EEF: push    edi
0x6B2EF0: mov     [ebx+4070h], eax
0x6B2EF6: call    sub_6AF6F0
0x6B2EFB: mov     ecx, [ebx+4]
0x6B2EFE: push    edi
0x6B2EFF: mov     [ebx+4074h], eax
0x6B2F05: call    sub_6AF6F0
0x6B2F0A: mov     [ebx+4078h], eax
0x6B2F10: pop     edi
0x6B2F11: pop     esi
0x6B2F12: xor     eax, eax
0x6B2F14: pop     ebp
0x6B2F15: mov     [ebx+407Ch], eax
0x6B2F1B: mov     [ebx+4080h], eax
0x6B2F21: pop     ebx
0x6B2F22: add     esp, 50h
0x6B2F25: retn    4
