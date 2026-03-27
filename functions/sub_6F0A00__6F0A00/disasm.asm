0x6F0A00: push    0FFFFFFFFh
0x6F0A02: push    offset SEH_6F0A00
0x6F0A07: mov     eax, large fs:0
0x6F0A0D: push    eax
0x6F0A0E: sub     esp, 0A0h
0x6F0A14: mov     eax, ds:0B30AACh
0x6F0A19: xor     eax, esp
0x6F0A1B: mov     [esp+0ACh+var_10], eax
0x6F0A22: push    ebx
0x6F0A23: push    ebp
0x6F0A24: push    esi
0x6F0A25: push    edi
0x6F0A26: mov     eax, ds:0B30AACh
0x6F0A2B: xor     eax, esp
0x6F0A2D: push    eax
0x6F0A2E: lea     eax, [esp+0C0h+var_C]
0x6F0A35: mov     large fs:0, eax
0x6F0A3B: mov     ebp, [esp+0C0h+arg_0]
0x6F0A42: mov     edi, [esp+0C0h+arg_4]
0x6F0A49: mov     esi, [esp+0C0h+arg_8]
0x6F0A50: mov     ebx, [esp+0C0h+arg_C]
0x6F0A57: sub     esp, 1Ch
0x6F0A5A: mov     [esp+0DCh+var_A0], esp
0x6F0A5E: mov     ecx, esp
0x6F0A60: push    8; MaxCount
0x6F0A62: mov     dword ptr [ecx+18h], 0Fh
0x6F0A69: mov     dword ptr [ecx+14h], 0
0x6F0A70: push    offset aFregm002; "FREGM002"
0x6F0A75: mov     byte ptr [ecx+4], 0
0x6F0A79: call    sub_414500
0x6F0A7E: lea     ecx, [esp+0DCh+var_94]; this
0x6F0A82: call    sub_6F6110
0x6F0A87: xor     eax, eax
0x6F0A89: push    eax
0x6F0A8A: sub     esp, 1Ch
0x6F0A8D: mov     ecx, esp
0x6F0A8F: mov     [esp+0E0h+var_AC], esp
0x6F0A93: push    0FFFFFFFFh
0x6F0A95: push    eax
0x6F0A96: mov     dword ptr [ecx+18h], 0Fh
0x6F0A9D: mov     [ecx+14h], eax
0x6F0AA0: push    ebp
0x6F0AA1: mov     [esp+0ECh+var_4], eax
0x6F0AA8: mov     [ecx+4], al
0x6F0AAB: call    sub_414420
0x6F0AB0: lea     ecx, [esp+0E0h+var_94]
0x6F0AB4: call    sub_6F66E0
0x6F0AB9: test    al, al
0x6F0ABB: lea     ecx, [esp+0C0h+var_94]; this
0x6F0ABF: jnz     short loc_6F0AD8
0x6F0AC1: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6F0ACC: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6F0AD1: xor     al, al
0x6F0AD3: jmp     loc_6F1011
0x6F0AD8: push    38h ; '8'
0x6F0ADA: push    1
0x6F0ADC: lea     eax, [esp+0C8h+var_50]
0x6F0AE0: push    eax
0x6F0AE1: call    sub_6F5E50
0x6F0AE6: test    al, al
0x6F0AE8: jnz     short loc_6F0B05
0x6F0AEA: lea     ecx, [esp+0C0h+var_94]; this
0x6F0AEE: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6F0AF9: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6F0AFE: xor     al, al
0x6F0B00: jmp     loc_6F1011
0x6F0B05: mov     ecx, [esp+0C0h+var_44]
0x6F0B09: mov     [edi], ecx
0x6F0B0B: mov     ecx, esi
0x6F0B0D: call    sub_5598F0
0x6F0B12: mov     ecx, ebx
0x6F0B14: call    sub_5598F0
0x6F0B19: mov     ecx, [esp+0C0h+var_4C]
0x6F0B1D: sub     esp, 14h
0x6F0B20: mov     eax, esp
0x6F0B22: mov     [esp+0D4h+var_AC], esp
0x6F0B26: xor     edi, edi
0x6F0B28: push    ecx
0x6F0B29: mov     ecx, esi
0x6F0B2B: mov     [eax+8], edi
0x6F0B2E: mov     [eax+0Ch], edi
0x6F0B31: mov     [eax+10h], edi
0x6F0B34: call    sub_6F08E0
0x6F0B39: mov     ecx, [esp+0C0h+var_48]
0x6F0B3D: sub     esp, 14h
0x6F0B40: mov     eax, esp
0x6F0B42: mov     [esp+0D4h+var_AC], esp
0x6F0B46: push    ecx
0x6F0B47: mov     ecx, ebx
0x6F0B49: mov     [eax+8], edi
0x6F0B4C: mov     [eax+0Ch], edi
0x6F0B4F: mov     [eax+10h], edi
0x6F0B52: call    sub_6F08E0
0x6F0B57: cmp     [esp+0C0h+var_4C], edi
0x6F0B5B: mov     [esp+0C0h+var_A8], edi
0x6F0B5F: jbe     loc_6F0D9C
0x6F0B65: xor     ebp, ebp
0x6F0B67: mov     word ptr [esp+0C0h+var_9A], di
0x6F0B6C: mov     word ptr [esp+0C0h+var_9A+2], di
0x6F0B71: mov     [esp+0C0h+var_A4], ebp
0x6F0B75: jmp     short loc_6F0B7B
0x6F0B77: mov     ebp, [esp+0C0h+var_A4]
0x6F0B7B: mov     eax, [esi+4]
0x6F0B7E: test    eax, eax
0x6F0B80: jz      short loc_6F0B9C
0x6F0B82: mov     ecx, [esi+8]
0x6F0B85: sub     ecx, eax
0x6F0B87: mov     eax, 66666667h
0x6F0B8C: imul    ecx
0x6F0B8E: sar     edx, 3
0x6F0B91: mov     eax, edx
0x6F0B93: shr     eax, 1Fh
0x6F0B96: add     eax, edx
0x6F0B98: cmp     edi, eax
0x6F0B9A: jb      short loc_6F0BA1
0x6F0B9C: call    __invalid_parameter_noinfo
0x6F0BA1: mov     edx, [esi+4]
0x6F0BA4: sub     esp, 8
0x6F0BA7: mov     eax, esp
0x6F0BA9: lea     ecx, [edx+ebp+4]
0x6F0BAD: mov     edx, [esp+0C8h+var_9A]
0x6F0BB1: mov     [eax], edx
0x6F0BB3: xor     dx, dx
0x6F0BB6: mov     [eax+4], dx
0x6F0BBA: mov     eax, [esp+0C8h+var_50]
0x6F0BBE: push    eax
0x6F0BBF: call    sub_6F0400
0x6F0BC4: push    1
0x6F0BC6: push    4
0x6F0BC8: lea     ecx, [esp+0C8h+var_A0]
0x6F0BCC: push    ecx
0x6F0BCD: lea     ecx, [esp+0CCh+var_94]
0x6F0BD1: call    sub_6F5D40
0x6F0BD6: test    al, al
0x6F0BD8: jz      loc_6F0AEA
0x6F0BDE: mov     eax, [esi+4]
0x6F0BE1: test    eax, eax
0x6F0BE3: jz      short loc_6F0BFF
0x6F0BE5: mov     ecx, [esi+8]
0x6F0BE8: sub     ecx, eax
0x6F0BEA: mov     eax, 66666667h
0x6F0BEF: imul    ecx
0x6F0BF1: sar     edx, 3
0x6F0BF4: mov     eax, edx
0x6F0BF6: shr     eax, 1Fh
0x6F0BF9: add     eax, edx
0x6F0BFB: cmp     edi, eax
0x6F0BFD: jb      short loc_6F0C04
0x6F0BFF: call    __invalid_parameter_noinfo
0x6F0C04: mov     edx, [esi+4]
0x6F0C07: fld     [esp+0C0h+var_A0]
0x6F0C0B: fstp    dword ptr [edx+ebp]
0x6F0C0E: xor     ebp, ebp
0x6F0C10: cmp     [esp+0C0h+var_50], ebp
0x6F0C14: jbe     loc_6F0D84
0x6F0C1A: mov     [esp+0C0h+var_AC], ebp
0x6F0C1E: mov     edi, edi
0x6F0C20: push    3
0x6F0C22: push    2
0x6F0C24: lea     eax, [esp+0C8h+var_18]
0x6F0C2B: push    eax
0x6F0C2C: lea     ecx, [esp+0CCh+var_94]
0x6F0C30: call    sub_6F5D40
0x6F0C35: test    al, al
0x6F0C37: jz      loc_6F0AEA
0x6F0C3D: mov     eax, [esi+4]
0x6F0C40: test    eax, eax
0x6F0C42: jz      short loc_6F0C5E
0x6F0C44: mov     ecx, [esi+8]
0x6F0C47: sub     ecx, eax
0x6F0C49: mov     eax, 66666667h
0x6F0C4E: imul    ecx
0x6F0C50: sar     edx, 3
0x6F0C53: mov     eax, edx
0x6F0C55: shr     eax, 1Fh
0x6F0C58: add     eax, edx
0x6F0C5A: cmp     edi, eax
0x6F0C5C: jb      short loc_6F0C63
0x6F0C5E: call    __invalid_parameter_noinfo
0x6F0C63: mov     edi, [esi+4]
0x6F0C66: add     edi, [esp+0C0h+var_A4]
0x6F0C6A: mov     eax, [edi+8]
0x6F0C6D: test    eax, eax
0x6F0C6F: jz      short loc_6F0C88
0x6F0C71: mov     ecx, [edi+0Ch]
0x6F0C74: sub     ecx, eax
0x6F0C76: mov     eax, 2AAAAAABh
0x6F0C7B: imul    ecx
0x6F0C7D: mov     eax, edx
0x6F0C7F: shr     eax, 1Fh
0x6F0C82: add     eax, edx
0x6F0C84: cmp     ebp, eax
0x6F0C86: jb      short loc_6F0C8D
0x6F0C88: call    __invalid_parameter_noinfo
0x6F0C8D: mov     eax, [esp+0C0h+var_AC]
0x6F0C91: mov     ecx, [edi+8]
0x6F0C94: mov     dx, [esp+0C0h+var_18]
0x6F0C9C: mov     [eax+ecx], dx
0x6F0CA0: mov     eax, [esi+4]
0x6F0CA3: test    eax, eax
0x6F0CA5: jz      short loc_6F0CC3
0x6F0CA7: mov     ecx, [esi+8]
0x6F0CAA: sub     ecx, eax
0x6F0CAC: mov     eax, 66666667h
0x6F0CB1: imul    ecx
0x6F0CB3: sar     edx, 3
0x6F0CB6: mov     eax, edx
0x6F0CB8: shr     eax, 1Fh
0x6F0CBB: add     eax, edx
0x6F0CBD: cmp     [esp+0C0h+var_A8], eax
0x6F0CC1: jb      short loc_6F0CC8
0x6F0CC3: call    __invalid_parameter_noinfo
0x6F0CC8: mov     edi, [esi+4]
0x6F0CCB: add     edi, [esp+0C0h+var_A4]
0x6F0CCF: mov     eax, [edi+8]
0x6F0CD2: test    eax, eax
0x6F0CD4: jz      short loc_6F0CED
0x6F0CD6: mov     ecx, [edi+0Ch]
0x6F0CD9: sub     ecx, eax
0x6F0CDB: mov     eax, 2AAAAAABh
0x6F0CE0: imul    ecx
0x6F0CE2: mov     eax, edx
0x6F0CE4: shr     eax, 1Fh
0x6F0CE7: add     eax, edx
0x6F0CE9: cmp     ebp, eax
0x6F0CEB: jb      short loc_6F0CF2
0x6F0CED: call    __invalid_parameter_noinfo
0x6F0CF2: mov     eax, [esp+0C0h+var_AC]
0x6F0CF6: mov     ecx, [edi+8]
0x6F0CF9: mov     dx, [esp+0C0h+var_16]
0x6F0D01: mov     [ecx+eax+2], dx
0x6F0D06: mov     eax, [esi+4]
0x6F0D09: test    eax, eax
0x6F0D0B: jz      short loc_6F0D29
0x6F0D0D: mov     ecx, [esi+8]
0x6F0D10: sub     ecx, eax
0x6F0D12: mov     eax, 66666667h
0x6F0D17: imul    ecx
0x6F0D19: sar     edx, 3
0x6F0D1C: mov     eax, edx
0x6F0D1E: shr     eax, 1Fh
0x6F0D21: add     eax, edx
0x6F0D23: cmp     [esp+0C0h+var_A8], eax
0x6F0D27: jb      short loc_6F0D2E
0x6F0D29: call    __invalid_parameter_noinfo
0x6F0D2E: mov     edi, [esi+4]
0x6F0D31: add     edi, [esp+0C0h+var_A4]
0x6F0D35: mov     eax, [edi+8]
0x6F0D38: test    eax, eax
0x6F0D3A: jz      short loc_6F0D53
0x6F0D3C: mov     ecx, [edi+0Ch]
0x6F0D3F: sub     ecx, eax
0x6F0D41: mov     eax, 2AAAAAABh
0x6F0D46: imul    ecx
0x6F0D48: mov     eax, edx
0x6F0D4A: shr     eax, 1Fh
0x6F0D4D: add     eax, edx
0x6F0D4F: cmp     ebp, eax
0x6F0D51: jb      short loc_6F0D58
0x6F0D53: call    __invalid_parameter_noinfo
0x6F0D58: mov     eax, [esp+0C0h+var_AC]
0x6F0D5C: mov     ecx, [edi+8]
0x6F0D5F: mov     dx, word ptr [esp+0C0h+var_14]
0x6F0D67: mov     edi, [esp+0C0h+var_A8]
0x6F0D6B: mov     [eax+ecx+4], dx
0x6F0D70: add     ebp, 1
0x6F0D73: add     eax, 6
0x6F0D76: cmp     ebp, [esp+0C0h+var_50]
0x6F0D7A: mov     [esp+0C0h+var_AC], eax
0x6F0D7E: jb      loc_6F0C20
0x6F0D84: add     [esp+0C0h+var_A4], 14h
0x6F0D89: add     edi, 1
0x6F0D8C: cmp     edi, [esp+0C0h+var_4C]
0x6F0D90: mov     [esp+0C0h+var_A8], edi
0x6F0D94: jb      loc_6F0B77
0x6F0D9A: xor     edi, edi
0x6F0D9C: xor     ebp, ebp
0x6F0D9E: cmp     [esp+0C0h+var_48], edi
0x6F0DA2: jbe     loc_6F0FD4
0x6F0DA8: xor     esi, esi
0x6F0DAA: mov     word ptr [esp+0C0h+var_9A], di
0x6F0DAF: mov     word ptr [esp+0C0h+var_9A+2], di
0x6F0DB4: mov     [esp+0C0h+var_A8], esi
0x6F0DB8: mov     eax, [ebx+4]
0x6F0DBB: cmp     eax, edi
0x6F0DBD: jz      short loc_6F0DD9
0x6F0DBF: mov     ecx, [ebx+8]
0x6F0DC2: sub     ecx, eax
0x6F0DC4: mov     eax, 66666667h
0x6F0DC9: imul    ecx
0x6F0DCB: sar     edx, 3
0x6F0DCE: mov     eax, edx
0x6F0DD0: shr     eax, 1Fh
0x6F0DD3: add     eax, edx
0x6F0DD5: cmp     ebp, eax
0x6F0DD7: jb      short loc_6F0DDE
0x6F0DD9: call    __invalid_parameter_noinfo
0x6F0DDE: mov     eax, [ebx+4]
0x6F0DE1: mov     edx, [esp+0C0h+var_9A]
0x6F0DE5: sub     esp, 8
0x6F0DE8: lea     ecx, [eax+esi+4]
0x6F0DEC: mov     eax, esp
0x6F0DEE: mov     [eax], edx
0x6F0DF0: xor     dx, dx
0x6F0DF3: mov     [eax+4], dx
0x6F0DF7: mov     eax, [esp+0C8h+var_50]
0x6F0DFB: push    eax
0x6F0DFC: call    sub_6F0400
0x6F0E01: push    1
0x6F0E03: push    4
0x6F0E05: lea     ecx, [esp+0C8h+var_A0]
0x6F0E09: push    ecx
0x6F0E0A: lea     ecx, [esp+0CCh+var_94]
0x6F0E0E: call    sub_6F5D40
0x6F0E13: test    al, al
0x6F0E15: jz      loc_6F0AEA
0x6F0E1B: mov     eax, [ebx+4]
0x6F0E1E: cmp     eax, edi
0x6F0E20: jz      short loc_6F0E3C
0x6F0E22: mov     ecx, [ebx+8]
0x6F0E25: sub     ecx, eax
0x6F0E27: mov     eax, 66666667h
0x6F0E2C: imul    ecx
0x6F0E2E: sar     edx, 3
0x6F0E31: mov     eax, edx
0x6F0E33: shr     eax, 1Fh
0x6F0E36: add     eax, edx
0x6F0E38: cmp     ebp, eax
0x6F0E3A: jb      short loc_6F0E41
0x6F0E3C: call    __invalid_parameter_noinfo
0x6F0E41: mov     edx, [ebx+4]
0x6F0E44: fld     [esp+0C0h+var_A0]
0x6F0E48: fstp    dword ptr [esi+edx]
0x6F0E4B: cmp     [esp+0C0h+var_50], 0
0x6F0E50: jbe     loc_6F0FBE
0x6F0E56: mov     [esp+0C0h+var_AC], 0
0x6F0E5E: push    3
0x6F0E60: push    2
0x6F0E62: lea     eax, [esp+0C8h+var_18]
0x6F0E69: push    eax
0x6F0E6A: lea     ecx, [esp+0CCh+var_94]
0x6F0E6E: call    sub_6F5D40
0x6F0E73: test    al, al
0x6F0E75: jz      loc_6F1039
0x6F0E7B: mov     eax, [ebx+4]
0x6F0E7E: test    eax, eax
0x6F0E80: jz      short loc_6F0E9C
0x6F0E82: mov     ecx, [ebx+8]
0x6F0E85: sub     ecx, eax
0x6F0E87: mov     eax, 66666667h
0x6F0E8C: imul    ecx
0x6F0E8E: sar     edx, 3
0x6F0E91: mov     eax, edx
0x6F0E93: shr     eax, 1Fh
0x6F0E96: add     eax, edx
0x6F0E98: cmp     ebp, eax
0x6F0E9A: jb      short loc_6F0EA1
0x6F0E9C: call    __invalid_parameter_noinfo
0x6F0EA1: mov     esi, [ebx+4]
0x6F0EA4: add     esi, [esp+0C0h+var_A8]
0x6F0EA8: mov     eax, [esi+8]
0x6F0EAB: test    eax, eax
0x6F0EAD: jz      short loc_6F0EC6
0x6F0EAF: mov     ecx, [esi+0Ch]
0x6F0EB2: sub     ecx, eax
0x6F0EB4: mov     eax, 2AAAAAABh
0x6F0EB9: imul    ecx
0x6F0EBB: mov     eax, edx
0x6F0EBD: shr     eax, 1Fh
0x6F0EC0: add     eax, edx
0x6F0EC2: cmp     edi, eax
0x6F0EC4: jb      short loc_6F0ECB
0x6F0EC6: call    __invalid_parameter_noinfo
0x6F0ECB: mov     eax, [esp+0C0h+var_AC]
0x6F0ECF: mov     ecx, [esi+8]
0x6F0ED2: mov     dx, [esp+0C0h+var_18]
0x6F0EDA: mov     [eax+ecx], dx
0x6F0EDE: mov     eax, [ebx+4]
0x6F0EE1: test    eax, eax
0x6F0EE3: jz      short loc_6F0EFF
0x6F0EE5: mov     ecx, [ebx+8]
0x6F0EE8: sub     ecx, eax
0x6F0EEA: mov     eax, 66666667h
0x6F0EEF: imul    ecx
0x6F0EF1: sar     edx, 3
0x6F0EF4: mov     eax, edx
0x6F0EF6: shr     eax, 1Fh
0x6F0EF9: add     eax, edx
0x6F0EFB: cmp     ebp, eax
0x6F0EFD: jb      short loc_6F0F04
0x6F0EFF: call    __invalid_parameter_noinfo
0x6F0F04: mov     esi, [ebx+4]
0x6F0F07: add     esi, [esp+0C0h+var_A8]
0x6F0F0B: mov     eax, [esi+8]
0x6F0F0E: test    eax, eax
0x6F0F10: jz      short loc_6F0F29
0x6F0F12: mov     ecx, [esi+0Ch]
0x6F0F15: sub     ecx, eax
0x6F0F17: mov     eax, 2AAAAAABh
0x6F0F1C: imul    ecx
0x6F0F1E: mov     eax, edx
0x6F0F20: shr     eax, 1Fh
0x6F0F23: add     eax, edx
0x6F0F25: cmp     edi, eax
0x6F0F27: jb      short loc_6F0F2E
0x6F0F29: call    __invalid_parameter_noinfo
0x6F0F2E: mov     eax, [esp+0C0h+var_AC]
0x6F0F32: mov     ecx, [esi+8]
0x6F0F35: mov     dx, [esp+0C0h+var_16]
0x6F0F3D: mov     [eax+ecx+2], dx
0x6F0F42: mov     eax, [ebx+4]
0x6F0F45: test    eax, eax
0x6F0F47: jz      short loc_6F0F63
0x6F0F49: mov     ecx, [ebx+8]
0x6F0F4C: sub     ecx, eax
0x6F0F4E: mov     eax, 66666667h
0x6F0F53: imul    ecx
0x6F0F55: sar     edx, 3
0x6F0F58: mov     eax, edx
0x6F0F5A: shr     eax, 1Fh
0x6F0F5D: add     eax, edx
0x6F0F5F: cmp     ebp, eax
0x6F0F61: jb      short loc_6F0F68
0x6F0F63: call    __invalid_parameter_noinfo
0x6F0F68: mov     esi, [ebx+4]
0x6F0F6B: add     esi, [esp+0C0h+var_A8]
0x6F0F6F: mov     eax, [esi+8]
0x6F0F72: test    eax, eax
0x6F0F74: jz      short loc_6F0F8D
0x6F0F76: mov     ecx, [esi+0Ch]
0x6F0F79: sub     ecx, eax
0x6F0F7B: mov     eax, 2AAAAAABh
0x6F0F80: imul    ecx
0x6F0F82: mov     eax, edx
0x6F0F84: shr     eax, 1Fh
0x6F0F87: add     eax, edx
0x6F0F89: cmp     edi, eax
0x6F0F8B: jb      short loc_6F0F92
0x6F0F8D: call    __invalid_parameter_noinfo
0x6F0F92: mov     eax, [esp+0C0h+var_AC]
0x6F0F96: mov     ecx, [esi+8]
0x6F0F99: mov     dx, word ptr [esp+0C0h+var_14]
0x6F0FA1: mov     [ecx+eax+4], dx
0x6F0FA6: add     edi, 1
0x6F0FA9: add     eax, 6
0x6F0FAC: cmp     edi, [esp+0C0h+var_50]
0x6F0FB0: mov     [esp+0C0h+var_AC], eax
0x6F0FB4: jb      loc_6F0E5E
0x6F0FBA: mov     esi, [esp+0C0h+var_A8]
0x6F0FBE: add     ebp, 1
0x6F0FC1: add     esi, 14h
0x6F0FC4: xor     edi, edi
0x6F0FC6: cmp     ebp, [esp+0C0h+var_48]
0x6F0FCA: mov     [esp+0C0h+var_A8], esi
0x6F0FCE: jb      loc_6F0DB8
0x6F0FD4: mov     [esp+0C0h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F0FDC: mov     ecx, [esp+0C0h+var_54]
0x6F0FE0: cmp     ecx, edi
0x6F0FE2: mov     [esp+0C0h+var_4], 2
0x6F0FED: jz      short loc_6F0FF7
0x6F0FEF: mov     eax, [ecx]
0x6F0FF1: mov     edx, [eax]
0x6F0FF3: push    1
0x6F0FF5: call    edx
0x6F0FF7: lea     ecx, [esp+0C0h+var_94]; this
0x6F0FFB: mov     [esp+0C0h+var_54], edi
0x6F0FFF: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6F100A: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6F100F: mov     al, 1
0x6F1011: mov     ecx, dword ptr [esp+0C0h+var_C]
0x6F1018: mov     large fs:0, ecx
0x6F101F: pop     ecx
0x6F1020: pop     edi
0x6F1021: pop     esi
0x6F1022: pop     ebp
0x6F1023: pop     ebx
0x6F1024: mov     ecx, [esp+0ACh+var_10]
0x6F102B: xor     ecx, esp
0x6F102D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F1032: add     esp, 0ACh
0x6F1038: retn
0x6F1039: mov     [esp+0C0h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F1041: mov     ecx, [esp+0C0h+var_54]
0x6F1045: test    ecx, ecx
0x6F1047: mov     [esp+0C0h+var_4], 1
0x6F1052: jz      short loc_6F105C
0x6F1054: mov     eax, [ecx]
0x6F1056: mov     edx, [eax]
0x6F1058: push    1
0x6F105A: call    edx
0x6F105C: lea     ecx, [esp+0C0h+var_94]; this
0x6F1060: mov     [esp+0C0h+var_54], 0
0x6F1068: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6F1073: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6F1078: xor     al, al
0x6F107A: jmp     short loc_6F1011
