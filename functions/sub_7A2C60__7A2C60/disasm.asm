0x7A2C60: push    0FFFFFFFFh
0x7A2C62: push    offset SEH_7A2C60
0x7A2C67: mov     eax, large fs:0
0x7A2C6D: push    eax
0x7A2C6E: sub     esp, 88h
0x7A2C74: push    ebx
0x7A2C75: push    ebp
0x7A2C76: push    esi
0x7A2C77: push    edi
0x7A2C78: mov     eax, ds:0B30AACh
0x7A2C7D: xor     eax, esp
0x7A2C7F: push    eax
0x7A2C80: lea     eax, [esp+0A8h+var_C]
0x7A2C87: mov     large fs:0, eax
0x7A2C8D: mov     edi, [esp+0A8h+arg_0]
0x7A2C94: xor     ebp, ebp
0x7A2C96: lea     esi, [ecx+60h]
0x7A2C99: lea     esp, [esp+0]
0x7A2CA0: mov     ecx, [esi+4]
0x7A2CA3: xor     ebx, ebx
0x7A2CA5: cmp     ecx, ebx
0x7A2CA7: jz      loc_7A31BA
0x7A2CAD: mov     eax, [esi+8]
0x7A2CB0: sub     eax, ecx
0x7A2CB2: sar     eax, 2
0x7A2CB5: cmp     ebp, eax
0x7A2CB7: jnb     loc_7A31BA
0x7A2CBD: mov     ecx, edi
0x7A2CBF: call    sub_78EB40
0x7A2CC4: cmp     eax, 3E82h
0x7A2CC9: jnz     loc_7A2EFF
0x7A2CCF: mov     ecx, [esi+4]
0x7A2CD2: cmp     ecx, ebx
0x7A2CD4: jz      short loc_7A2CE2
0x7A2CD6: mov     eax, [esi+8]
0x7A2CD9: sub     eax, ecx
0x7A2CDB: sar     eax, 2
0x7A2CDE: cmp     ebp, eax
0x7A2CE0: jb      short loc_7A2CE7
0x7A2CE2: call    __invalid_parameter_noinfo
0x7A2CE7: mov     ebx, [esi+4]
0x7A2CEA: lea     eax, ds:0[ebp*4]
0x7A2CF1: mov     ecx, edi
0x7A2CF3: add     ebx, eax
0x7A2CF5: call    sub_78EB10
0x7A2CFA: mov     eax, [ebx]
0x7A2CFC: mov     ecx, edi
0x7A2CFE: fstp    dword ptr [eax+24h]
0x7A2D01: call    sub_78EB40
0x7A2D06: cmp     eax, 3E83h
0x7A2D0B: jnz     loc_7A2F45
0x7A2D11: mov     ecx, [esi+4]
0x7A2D14: test    ecx, ecx
0x7A2D16: jz      short loc_7A2D24
0x7A2D18: mov     eax, [esi+8]
0x7A2D1B: sub     eax, ecx
0x7A2D1D: sar     eax, 2
0x7A2D20: cmp     ebp, eax
0x7A2D22: jb      short loc_7A2D29
0x7A2D24: call    __invalid_parameter_noinfo
0x7A2D29: mov     ebx, [esi+4]
0x7A2D2C: lea     eax, ds:0[ebp*4]
0x7A2D33: mov     ecx, edi
0x7A2D35: add     ebx, eax
0x7A2D37: call    sub_78EB40
0x7A2D3C: mov     ecx, [ebx]
0x7A2D3E: mov     [ecx+28h], eax
0x7A2D41: mov     ecx, edi
0x7A2D43: call    sub_78EB40
0x7A2D48: cmp     eax, 3E84h
0x7A2D4D: jnz     loc_7A2F94
0x7A2D53: mov     ecx, [esi+4]
0x7A2D56: test    ecx, ecx
0x7A2D58: jz      short loc_7A2D66
0x7A2D5A: mov     eax, [esi+8]
0x7A2D5D: sub     eax, ecx
0x7A2D5F: sar     eax, 2
0x7A2D62: cmp     ebp, eax
0x7A2D64: jb      short loc_7A2D6B
0x7A2D66: call    __invalid_parameter_noinfo
0x7A2D6B: mov     ebx, [esi+4]
0x7A2D6E: lea     eax, ds:0[ebp*4]
0x7A2D75: mov     ecx, edi
0x7A2D77: add     ebx, eax
0x7A2D79: call    sub_78EB10
0x7A2D7E: mov     edx, [ebx]
0x7A2D80: mov     ecx, edi
0x7A2D82: fstp    dword ptr [edx+2Ch]
0x7A2D85: call    sub_78EB40
0x7A2D8A: cmp     eax, 3E85h
0x7A2D8F: jnz     loc_7A2FE3
0x7A2D95: mov     ecx, [esi+4]
0x7A2D98: test    ecx, ecx
0x7A2D9A: jz      short loc_7A2DA8
0x7A2D9C: mov     eax, [esi+8]
0x7A2D9F: sub     eax, ecx
0x7A2DA1: sar     eax, 2
0x7A2DA4: cmp     ebp, eax
0x7A2DA6: jb      short loc_7A2DAD
0x7A2DA8: call    __invalid_parameter_noinfo
0x7A2DAD: mov     ebx, [esi+4]
0x7A2DB0: lea     eax, ds:0[ebp*4]
0x7A2DB7: mov     ecx, edi
0x7A2DB9: add     ebx, eax
0x7A2DBB: call    sub_78EB10
0x7A2DC0: mov     eax, [ebx]
0x7A2DC2: mov     ecx, edi
0x7A2DC4: fstp    dword ptr [eax+30h]
0x7A2DC7: call    sub_78EB40
0x7A2DCC: cmp     eax, 3E86h
0x7A2DD1: jnz     loc_7A3032
0x7A2DD7: mov     ecx, [esi+4]
0x7A2DDA: test    ecx, ecx
0x7A2DDC: jz      short loc_7A2DEA
0x7A2DDE: mov     eax, [esi+8]
0x7A2DE1: sub     eax, ecx
0x7A2DE3: sar     eax, 2
0x7A2DE6: cmp     ebp, eax
0x7A2DE8: jb      short loc_7A2DEF
0x7A2DEA: call    __invalid_parameter_noinfo
0x7A2DEF: mov     ebx, [esi+4]
0x7A2DF2: lea     eax, ds:0[ebp*4]
0x7A2DF9: mov     ecx, edi
0x7A2DFB: add     ebx, eax
0x7A2DFD: call    sub_78EB10
0x7A2E02: mov     ecx, [ebx]
0x7A2E04: fstp    dword ptr [ecx+34h]
0x7A2E07: mov     ecx, edi
0x7A2E09: call    sub_78EB40
0x7A2E0E: cmp     eax, 3E87h
0x7A2E13: jnz     loc_7A306A
0x7A2E19: push    ebp
0x7A2E1A: mov     ecx, esi
0x7A2E1C: call    sub_54F7A0
0x7A2E21: mov     ecx, edi
0x7A2E23: mov     ebx, eax
0x7A2E25: call    sub_78EB10
0x7A2E2A: mov     edx, [ebx]
0x7A2E2C: mov     ecx, edi
0x7A2E2E: fstp    dword ptr [edx+38h]
0x7A2E31: call    sub_78EB40
0x7A2E36: cmp     eax, 3E88h
0x7A2E3B: jnz     loc_7A30A2
0x7A2E41: push    ebp
0x7A2E42: mov     ecx, esi
0x7A2E44: call    sub_54F7A0
0x7A2E49: mov     ecx, edi
0x7A2E4B: mov     ebx, eax
0x7A2E4D: call    sub_78EB10
0x7A2E52: mov     eax, [ebx]
0x7A2E54: mov     ecx, edi
0x7A2E56: fstp    dword ptr [eax+3Ch]
0x7A2E59: call    sub_78EB40
0x7A2E5E: cmp     eax, 3E89h
0x7A2E63: jnz     loc_7A30DA
0x7A2E69: push    ebp
0x7A2E6A: mov     ecx, esi
0x7A2E6C: call    sub_54F7A0
0x7A2E71: mov     ecx, edi
0x7A2E73: mov     ebx, eax
0x7A2E75: call    sub_78EB10
0x7A2E7A: mov     ecx, [ebx]
0x7A2E7C: fstp    dword ptr [ecx+40h]
0x7A2E7F: mov     ecx, edi
0x7A2E81: call    sub_78EB40
0x7A2E86: cmp     eax, 3E8Ah
0x7A2E8B: jnz     loc_7A3112
0x7A2E91: push    ebp
0x7A2E92: mov     ecx, esi
0x7A2E94: call    sub_54F7A0
0x7A2E99: mov     ecx, edi
0x7A2E9B: mov     ebx, eax
0x7A2E9D: call    sub_78EB10
0x7A2EA2: mov     edx, [ebx]
0x7A2EA4: mov     ecx, edi
0x7A2EA6: fstp    dword ptr [edx+44h]
0x7A2EA9: call    sub_78EB40
0x7A2EAE: cmp     eax, 3E8Bh
0x7A2EB3: jnz     loc_7A314A
0x7A2EB9: push    ebp
0x7A2EBA: mov     ecx, esi
0x7A2EBC: call    sub_54F7A0
0x7A2EC1: mov     ecx, edi
0x7A2EC3: mov     ebx, eax
0x7A2EC5: call    sub_78EB10
0x7A2ECA: mov     eax, [ebx]
0x7A2ECC: mov     ecx, edi
0x7A2ECE: fstp    dword ptr [eax+48h]
0x7A2ED1: call    sub_78EB40
0x7A2ED6: cmp     eax, 3E8Ch
0x7A2EDB: jnz     loc_7A3182
0x7A2EE1: push    ebp
0x7A2EE2: mov     ecx, esi
0x7A2EE4: call    sub_54F7A0
0x7A2EE9: mov     ecx, edi
0x7A2EEB: mov     ebx, eax
0x7A2EED: call    sub_78EB10
0x7A2EF2: mov     ecx, [ebx]
0x7A2EF4: fstp    dword ptr [ecx+4Ch]
0x7A2EF7: add     ebp, 1
0x7A2EFA: jmp     loc_7A2CA0
0x7A2EFF: push    14h; MaxCount
0x7A2F01: push    offset aMalformedFlare; "malformed flare info"
0x7A2F06: lea     ecx, [esp+0B0h+var_94]
0x7A2F0A: mov     [esp+0B0h+var_7C], 0Fh
0x7A2F12: mov     [esp+0B0h+var_80], ebx
0x7A2F16: mov     [esp+0B0h+var_90], 0
0x7A2F1B: call    sub_414500
0x7A2F20: push    ebx
0x7A2F21: lea     edx, [esp+0ACh+var_94]
0x7A2F25: push    edx
0x7A2F26: lea     ecx, [esp+0B0h+var_78]
0x7A2F2A: mov     [esp+0B0h+var_4], ebx
0x7A2F31: call    sub_789190
0x7A2F36: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2F3B: lea     eax, [esp+0ACh+var_78]
0x7A2F3F: push    eax
0x7A2F40: call    ThrowException??
0x7A2F45: push    14h; MaxCount
0x7A2F47: push    offset aMalformedFlare; "malformed flare info"
0x7A2F4C: lea     ecx, [esp+0B0h+var_94]
0x7A2F50: mov     [esp+0B0h+var_7C], 0Fh
0x7A2F58: mov     [esp+0B0h+var_80], 0
0x7A2F60: mov     [esp+0B0h+var_90], 0
0x7A2F65: call    sub_414500
0x7A2F6A: push    0
0x7A2F6C: lea     ecx, [esp+0ACh+var_94]
0x7A2F70: push    ecx
0x7A2F71: lea     ecx, [esp+0B0h+var_78]
0x7A2F75: mov     [esp+0B0h+var_4], 1
0x7A2F80: call    sub_789190
0x7A2F85: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2F8A: lea     edx, [esp+0ACh+var_78]
0x7A2F8E: push    edx
0x7A2F8F: call    ThrowException??
0x7A2F94: push    14h; MaxCount
0x7A2F96: push    offset aMalformedFlare; "malformed flare info"
0x7A2F9B: lea     ecx, [esp+0B0h+var_94]
0x7A2F9F: mov     [esp+0B0h+var_7C], 0Fh
0x7A2FA7: mov     [esp+0B0h+var_80], 0
0x7A2FAF: mov     [esp+0B0h+var_90], 0
0x7A2FB4: call    sub_414500
0x7A2FB9: push    0
0x7A2FBB: lea     eax, [esp+0ACh+var_94]
0x7A2FBF: push    eax
0x7A2FC0: lea     ecx, [esp+0B0h+var_78]
0x7A2FC4: mov     [esp+0B0h+var_4], 2
0x7A2FCF: call    sub_789190
0x7A2FD4: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2FD9: lea     ecx, [esp+0ACh+var_78]
0x7A2FDD: push    ecx
0x7A2FDE: call    ThrowException??
0x7A2FE3: push    14h; MaxCount
0x7A2FE5: push    offset aMalformedFlare; "malformed flare info"
0x7A2FEA: lea     ecx, [esp+0B0h+var_94]
0x7A2FEE: mov     [esp+0B0h+var_7C], 0Fh
0x7A2FF6: mov     [esp+0B0h+var_80], 0
0x7A2FFE: mov     [esp+0B0h+var_90], 0
0x7A3003: call    sub_414500
0x7A3008: push    0
0x7A300A: lea     edx, [esp+0ACh+var_94]
0x7A300E: push    edx
0x7A300F: lea     ecx, [esp+0B0h+var_78]
0x7A3013: mov     [esp+0B0h+var_4], 3
0x7A301E: call    sub_789190
0x7A3023: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3028: lea     eax, [esp+0ACh+var_78]
0x7A302C: push    eax
0x7A302D: call    ThrowException??
0x7A3032: push    offset aMalformedFlare; "malformed flare info"
0x7A3037: lea     ecx, [esp+0ACh+var_94]
0x7A303B: call    sub_414750
0x7A3040: push    0
0x7A3042: lea     ecx, [esp+0ACh+var_94]
0x7A3046: push    ecx
0x7A3047: lea     ecx, [esp+0B0h+var_78]
0x7A304B: mov     [esp+0B0h+var_4], 4
0x7A3056: call    sub_789190
0x7A305B: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3060: lea     edx, [esp+0ACh+var_78]
0x7A3064: push    edx
0x7A3065: call    ThrowException??
0x7A306A: push    offset aMalformedFlare; "malformed flare info"
0x7A306F: lea     ecx, [esp+0ACh+var_94]
0x7A3073: call    sub_414750
0x7A3078: push    0
0x7A307A: lea     eax, [esp+0ACh+var_94]
0x7A307E: push    eax
0x7A307F: lea     ecx, [esp+0B0h+var_78]
0x7A3083: mov     [esp+0B0h+var_4], 5
0x7A308E: call    sub_789190
0x7A3093: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3098: lea     ecx, [esp+0ACh+var_78]
0x7A309C: push    ecx
0x7A309D: call    ThrowException??
0x7A30A2: push    offset aMalformedFlare; "malformed flare info"
0x7A30A7: lea     ecx, [esp+0ACh+var_94]
0x7A30AB: call    sub_414750
0x7A30B0: push    0
0x7A30B2: lea     edx, [esp+0ACh+var_94]
0x7A30B6: push    edx
0x7A30B7: lea     ecx, [esp+0B0h+var_78]
0x7A30BB: mov     [esp+0B0h+var_4], 6
0x7A30C6: call    sub_789190
0x7A30CB: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A30D0: lea     eax, [esp+0ACh+var_78]
0x7A30D4: push    eax
0x7A30D5: call    ThrowException??
0x7A30DA: push    offset aMalformedFlare; "malformed flare info"
0x7A30DF: lea     ecx, [esp+0ACh+var_94]
0x7A30E3: call    sub_414750
0x7A30E8: push    0
0x7A30EA: lea     ecx, [esp+0ACh+var_94]
0x7A30EE: push    ecx
0x7A30EF: lea     ecx, [esp+0B0h+var_78]
0x7A30F3: mov     [esp+0B0h+var_4], 7
0x7A30FE: call    sub_789190
0x7A3103: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3108: lea     edx, [esp+0ACh+var_78]
0x7A310C: push    edx
0x7A310D: call    ThrowException??
0x7A3112: push    offset aMalformedFlare; "malformed flare info"
0x7A3117: lea     ecx, [esp+0ACh+var_94]
0x7A311B: call    sub_414750
0x7A3120: push    0
0x7A3122: lea     eax, [esp+0ACh+var_94]
0x7A3126: push    eax
0x7A3127: lea     ecx, [esp+0B0h+var_78]
0x7A312B: mov     [esp+0B0h+var_4], 8
0x7A3136: call    sub_789190
0x7A313B: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3140: lea     ecx, [esp+0ACh+var_78]
0x7A3144: push    ecx
0x7A3145: call    ThrowException??
0x7A314A: push    offset aMalformedFlare; "malformed flare info"
0x7A314F: lea     ecx, [esp+0ACh+var_94]
0x7A3153: call    sub_414750
0x7A3158: push    0
0x7A315A: lea     edx, [esp+0ACh+var_94]
0x7A315E: push    edx
0x7A315F: lea     ecx, [esp+0B0h+var_78]
0x7A3163: mov     [esp+0B0h+var_4], 9
0x7A316E: call    sub_789190
0x7A3173: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3178: lea     eax, [esp+0ACh+var_78]
0x7A317C: push    eax
0x7A317D: call    ThrowException??
0x7A3182: push    offset aMalformedFlare; "malformed flare info"
0x7A3187: lea     ecx, [esp+0ACh+var_94]
0x7A318B: call    sub_414750
0x7A3190: push    0
0x7A3192: lea     ecx, [esp+0ACh+var_94]
0x7A3196: push    ecx
0x7A3197: lea     ecx, [esp+0B0h+var_78]
0x7A319B: mov     [esp+0B0h+var_4], 0Ah
0x7A31A6: call    sub_789190
0x7A31AB: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A31B0: lea     edx, [esp+0ACh+var_78]
0x7A31B4: push    edx
0x7A31B5: call    ThrowException??
0x7A31BA: mov     ecx, edi
0x7A31BC: call    sub_78EB40
0x7A31C1: cmp     eax, 3E81h
0x7A31C6: jz      short loc_7A3212
0x7A31C8: push    14h; MaxCount
0x7A31CA: push    offset aMalformedFlare; "malformed flare info"
0x7A31CF: lea     ecx, [esp+0B0h+var_50]
0x7A31D3: mov     [esp+0B0h+var_38], 0Fh
0x7A31DB: mov     [esp+0B0h+var_3C], ebx
0x7A31DF: mov     [esp+0B0h+var_4C], 0
0x7A31E4: call    sub_414500
0x7A31E9: push    ebx
0x7A31EA: lea     eax, [esp+0ACh+var_50]
0x7A31EE: push    eax
0x7A31EF: lea     ecx, [esp+0B0h+var_34]
0x7A31F3: mov     [esp+0B0h+var_4], 0Bh
0x7A31FE: call    sub_789190
0x7A3203: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A3208: lea     ecx, [esp+0ACh+var_34]
0x7A320C: push    ecx
0x7A320D: call    ThrowException??
0x7A3212: mov     ecx, [esp+0A8h+var_C]
0x7A3219: mov     large fs:0, ecx
0x7A3220: pop     ecx
0x7A3221: pop     edi
0x7A3222: pop     esi
0x7A3223: pop     ebp
0x7A3224: pop     ebx
0x7A3225: add     esp, 94h
0x7A322B: retn    4
