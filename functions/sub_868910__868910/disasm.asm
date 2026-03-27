0x868910: push    0FFFFFFFFh
0x868912: push    offset SEH_868910
0x868917: mov     eax, large fs:0
0x86891D: push    eax
0x86891E: sub     esp, 10h
0x868921: push    ebx
0x868922: push    ebp
0x868923: push    esi
0x868924: push    edi
0x868925: mov     eax, ds:0B30AACh
0x86892A: xor     eax, esp
0x86892C: push    eax
0x86892D: lea     eax, [esp+30h+var_C]
0x868931: mov     large fs:0, eax
0x868937: mov     [esp+30h+var_18], ecx
0x86893B: xor     esi, esi
0x86893D: xor     edi, edi
0x86893F: mov     [esp+30h+var_14], esi
0x868943: mov     [esp+30h+var_4], edi
0x868947: mov     [esp+30h+a3], edi
0x86894B: mov     eax, ds:0B47660h
0x868950: cmp     eax, edi
0x868952: mov     ebx, 1
0x868957: mov     byte ptr [esp+30h+var_4], bl
0x86895B: jz      short loc_86896A
0x86895D: mov     esi, eax
0x86895F: cmp     esi, edi
0x868961: mov     [esp+30h+var_14], esi
0x868965: jz      short loc_86896A
0x868967: add     [esi+60h], ebx
0x86896A: mov     eax, [esi+18h]
0x86896D: or      ebp, 0FFFFFFFFh
0x868970: cmp     eax, 8
0x868973: jnb     loc_868CDC
0x868979: lea     eax, [esp+30h+var_10]
0x86897D: push    eax
0x86897E: call    sub_772630
0x868983: add     esp, 4
0x868986: mov     eax, [eax]
0x868988: test    eax, eax
0x86898A: jz      short loc_868995
0x86898C: mov     edi, eax
0x86898E: add     [edi+5Ch], ebx
0x868991: mov     [esp+30h+a3], edi
0x868995: mov     eax, [esp+30h+var_10]
0x868999: test    eax, eax
0x86899B: mov     byte ptr [esp+30h+var_4], 1
0x8689A0: jz      short loc_8689B4
0x8689A2: add     [eax+5Ch], ebp
0x8689A5: mov     ecx, eax
0x8689A7: add     eax, 5Ch ; '\'
0x8689AA: cmp     dword ptr [eax], 0
0x8689AD: jnz     short loc_8689B4
0x8689AF: call    sub_772560
0x8689B4: push    2
0x8689B6: push    1
0x8689B8: push    0
0x8689BA: push    edi
0x8689BB: call    sub_801110
0x8689C0: add     esp, 10h
0x8689C3: push    edi; a3
0x8689C4: push    0; a2
0x8689C6: mov     ecx, esi; this
0x8689C8: call    sub_760010
0x8689CD: lea     ecx, [esp+30h+var_10]
0x8689D1: push    ecx
0x8689D2: call    sub_772630
0x8689D7: add     esp, 4
0x8689DA: mov     ebx, eax
0x8689DC: cmp     edi, [ebx]
0x8689DE: mov     byte ptr [esp+30h+var_4], 3
0x8689E3: jz      short loc_868A03
0x8689E5: test    edi, edi
0x8689E7: jz      short loc_8689F5
0x8689E9: add     [edi+5Ch], ebp
0x8689EC: jnz     short loc_8689F5
0x8689EE: mov     ecx, edi
0x8689F0: call    sub_772560
0x8689F5: mov     edi, [ebx]
0x8689F7: test    edi, edi
0x8689F9: mov     [esp+30h+a3], edi
0x8689FD: jz      short loc_868A03
0x8689FF: add     dword ptr [edi+5Ch], 1
0x868A03: mov     eax, [esp+30h+var_10]
0x868A07: test    eax, eax
0x868A09: mov     byte ptr [esp+30h+var_4], 1
0x868A0E: jz      short loc_868A22
0x868A10: add     [eax+5Ch], ebp
0x868A13: mov     ecx, eax
0x868A15: add     eax, 5Ch ; '\'
0x868A18: cmp     dword ptr [eax], 0
0x868A1B: jnz     short loc_868A22
0x868A1D: call    sub_772560
0x868A22: push    2
0x868A24: push    1
0x868A26: push    1
0x868A28: push    edi
0x868A29: call    sub_801110
0x868A2E: add     esp, 10h
0x868A31: push    edi; a3
0x868A32: push    1; a2
0x868A34: mov     ecx, esi; this
0x868A36: call    sub_760010
0x868A3B: lea     edx, [esp+30h+var_10]
0x868A3F: push    edx
0x868A40: call    sub_772630
0x868A45: add     esp, 4
0x868A48: mov     ebx, eax
0x868A4A: cmp     edi, [ebx]
0x868A4C: mov     byte ptr [esp+30h+var_4], 4
0x868A51: jz      short loc_868A71
0x868A53: test    edi, edi
0x868A55: jz      short loc_868A63
0x868A57: add     [edi+5Ch], ebp
0x868A5A: jnz     short loc_868A63
0x868A5C: mov     ecx, edi
0x868A5E: call    sub_772560
0x868A63: mov     edi, [ebx]
0x868A65: test    edi, edi
0x868A67: mov     [esp+30h+a3], edi
0x868A6B: jz      short loc_868A71
0x868A6D: add     dword ptr [edi+5Ch], 1
0x868A71: mov     eax, [esp+30h+var_10]
0x868A75: test    eax, eax
0x868A77: mov     byte ptr [esp+30h+var_4], 1
0x868A7C: jz      short loc_868A90
0x868A7E: add     [eax+5Ch], ebp
0x868A81: mov     ecx, eax
0x868A83: add     eax, 5Ch ; '\'
0x868A86: cmp     dword ptr [eax], 0
0x868A89: jnz     short loc_868A90
0x868A8B: call    sub_772560
0x868A90: push    2
0x868A92: push    1
0x868A94: push    2
0x868A96: push    edi
0x868A97: call    sub_801110
0x868A9C: add     esp, 10h
0x868A9F: push    edi; a3
0x868AA0: push    2; a2
0x868AA2: mov     ecx, esi; this
0x868AA4: call    sub_760010
0x868AA9: lea     eax, [esp+30h+var_10]
0x868AAD: push    eax
0x868AAE: call    sub_772630
0x868AB3: add     esp, 4
0x868AB6: mov     ebx, eax
0x868AB8: cmp     edi, [ebx]
0x868ABA: mov     byte ptr [esp+30h+var_4], 5
0x868ABF: jz      short loc_868ADF
0x868AC1: test    edi, edi
0x868AC3: jz      short loc_868AD1
0x868AC5: add     [edi+5Ch], ebp
0x868AC8: jnz     short loc_868AD1
0x868ACA: mov     ecx, edi
0x868ACC: call    sub_772560
0x868AD1: mov     edi, [ebx]
0x868AD3: test    edi, edi
0x868AD5: mov     [esp+30h+a3], edi
0x868AD9: jz      short loc_868ADF
0x868ADB: add     dword ptr [edi+5Ch], 1
0x868ADF: mov     eax, [esp+30h+var_10]
0x868AE3: test    eax, eax
0x868AE5: mov     byte ptr [esp+30h+var_4], 1
0x868AEA: jz      short loc_868AFE
0x868AEC: add     [eax+5Ch], ebp
0x868AEF: mov     ecx, eax
0x868AF1: add     eax, 5Ch ; '\'
0x868AF4: cmp     dword ptr [eax], 0
0x868AF7: jnz     short loc_868AFE
0x868AF9: call    sub_772560
0x868AFE: push    2
0x868B00: push    1
0x868B02: push    3
0x868B04: push    edi
0x868B05: call    sub_801110
0x868B0A: add     esp, 10h
0x868B0D: push    edi; a3
0x868B0E: push    3; a2
0x868B10: mov     ecx, esi; this
0x868B12: call    sub_760010
0x868B17: lea     ecx, [esp+30h+var_10]
0x868B1B: push    ecx
0x868B1C: call    sub_772630
0x868B21: add     esp, 4
0x868B24: mov     ebx, eax
0x868B26: cmp     edi, [ebx]
0x868B28: mov     byte ptr [esp+30h+var_4], 6
0x868B2D: jz      short loc_868B4D
0x868B2F: test    edi, edi
0x868B31: jz      short loc_868B3F
0x868B33: add     [edi+5Ch], ebp
0x868B36: jnz     short loc_868B3F
0x868B38: mov     ecx, edi
0x868B3A: call    sub_772560
0x868B3F: mov     edi, [ebx]
0x868B41: test    edi, edi
0x868B43: mov     [esp+30h+a3], edi
0x868B47: jz      short loc_868B4D
0x868B49: add     dword ptr [edi+5Ch], 1
0x868B4D: mov     eax, [esp+30h+var_10]
0x868B51: test    eax, eax
0x868B53: mov     byte ptr [esp+30h+var_4], 1
0x868B58: jz      short loc_868B6C
0x868B5A: add     [eax+5Ch], ebp
0x868B5D: mov     ecx, eax
0x868B5F: add     eax, 5Ch ; '\'
0x868B62: cmp     dword ptr [eax], 0
0x868B65: jnz     short loc_868B6C
0x868B67: call    sub_772560
0x868B6C: push    2
0x868B6E: push    1
0x868B70: push    4
0x868B72: push    edi
0x868B73: call    sub_801110
0x868B78: add     esp, 10h
0x868B7B: push    edi; a3
0x868B7C: push    4; a2
0x868B7E: mov     ecx, esi; this
0x868B80: call    sub_760010
0x868B85: lea     edx, [esp+30h+var_10]
0x868B89: push    edx
0x868B8A: call    sub_772630
0x868B8F: add     esp, 4
0x868B92: mov     ebx, eax
0x868B94: cmp     edi, [ebx]
0x868B96: mov     byte ptr [esp+30h+var_4], 7
0x868B9B: jz      short loc_868BBB
0x868B9D: test    edi, edi
0x868B9F: jz      short loc_868BAD
0x868BA1: add     [edi+5Ch], ebp
0x868BA4: jnz     short loc_868BAD
0x868BA6: mov     ecx, edi
0x868BA8: call    sub_772560
0x868BAD: mov     edi, [ebx]
0x868BAF: test    edi, edi
0x868BB1: mov     [esp+30h+a3], edi
0x868BB5: jz      short loc_868BBB
0x868BB7: add     dword ptr [edi+5Ch], 1
0x868BBB: mov     eax, [esp+30h+var_10]
0x868BBF: test    eax, eax
0x868BC1: mov     byte ptr [esp+30h+var_4], 1
0x868BC6: jz      short loc_868BDA
0x868BC8: add     [eax+5Ch], ebp
0x868BCB: mov     ecx, eax
0x868BCD: add     eax, 5Ch ; '\'
0x868BD0: cmp     dword ptr [eax], 0
0x868BD3: jnz     short loc_868BDA
0x868BD5: call    sub_772560
0x868BDA: push    0
0x868BDC: push    3
0x868BDE: push    5
0x868BE0: push    edi
0x868BE1: call    sub_801110
0x868BE6: mov     eax, ds:0B43110h
0x868BEB: add     esp, 10h
0x868BEE: push    eax; a2
0x868BEF: mov     ecx, edi; this
0x868BF1: call    sub_76C910
0x868BF6: push    edi; a3
0x868BF7: push    5; a2
0x868BF9: mov     ecx, esi; this
0x868BFB: call    sub_760010
0x868C00: lea     ecx, [esp+30h+var_10]
0x868C04: push    ecx
0x868C05: call    sub_772630
0x868C0A: add     esp, 4
0x868C0D: mov     ebx, eax
0x868C0F: cmp     edi, [ebx]
0x868C11: mov     byte ptr [esp+30h+var_4], 8
0x868C16: jz      short loc_868C36
0x868C18: test    edi, edi
0x868C1A: jz      short loc_868C28
0x868C1C: add     [edi+5Ch], ebp
0x868C1F: jnz     short loc_868C28
0x868C21: mov     ecx, edi
0x868C23: call    sub_772560
0x868C28: mov     edi, [ebx]
0x868C2A: test    edi, edi
0x868C2C: mov     [esp+30h+a3], edi
0x868C30: jz      short loc_868C36
0x868C32: add     dword ptr [edi+5Ch], 1
0x868C36: mov     eax, [esp+30h+var_10]
0x868C3A: test    eax, eax
0x868C3C: mov     byte ptr [esp+30h+var_4], 1
0x868C41: jz      short loc_868C55
0x868C43: add     [eax+5Ch], ebp
0x868C46: mov     ecx, eax
0x868C48: add     eax, 5Ch ; '\'
0x868C4B: cmp     dword ptr [eax], 0
0x868C4E: jnz     short loc_868C55
0x868C50: call    sub_772560
0x868C55: push    2
0x868C57: push    1
0x868C59: push    6
0x868C5B: push    edi
0x868C5C: call    sub_801110
0x868C61: add     esp, 10h
0x868C64: push    edi; a3
0x868C65: push    6; a2
0x868C67: mov     ecx, esi; this
0x868C69: call    sub_760010
0x868C6E: lea     edx, [esp+30h+var_10]
0x868C72: push    edx
0x868C73: call    sub_772630
0x868C78: add     esp, 4
0x868C7B: mov     ebx, eax
0x868C7D: cmp     edi, [ebx]
0x868C7F: mov     byte ptr [esp+30h+var_4], 9
0x868C84: jz      short loc_868CA4
0x868C86: test    edi, edi
0x868C88: jz      short loc_868C96
0x868C8A: add     [edi+5Ch], ebp
0x868C8D: jnz     short loc_868C96
0x868C8F: mov     ecx, edi
0x868C91: call    sub_772560
0x868C96: mov     edi, [ebx]
0x868C98: test    edi, edi
0x868C9A: mov     [esp+30h+a3], edi
0x868C9E: jz      short loc_868CA4
0x868CA0: add     dword ptr [edi+5Ch], 1
0x868CA4: mov     eax, [esp+30h+var_10]
0x868CA8: test    eax, eax
0x868CAA: mov     byte ptr [esp+30h+var_4], 1
0x868CAF: jz      short loc_868CC3
0x868CB1: add     [eax+5Ch], ebp
0x868CB4: mov     ecx, eax
0x868CB6: add     eax, 5Ch ; '\'
0x868CB9: cmp     dword ptr [eax], 0
0x868CBC: jnz     short loc_868CC3
0x868CBE: call    sub_772560
0x868CC3: push    0
0x868CC5: push    3
0x868CC7: push    7
0x868CC9: push    edi
0x868CCA: call    sub_801110
0x868CCF: add     esp, 10h
0x868CD2: push    edi; a3
0x868CD3: push    7; a2
0x868CD5: mov     ecx, esi; this
0x868CD7: call    sub_760010
0x868CDC: mov     eax, [esp+30h+var_18]
0x868CE0: mov     ebx, [eax+9Ch]
0x868CE6: mov     ebp, [esi+58h]
0x868CE9: cmp     ebp, ebx
0x868CEB: jz      short loc_868D1F
0x868CED: test    ebp, ebp
0x868CEF: jz      short loc_868D0E
0x868CF1: lea     ecx, [ebp+4]
0x868CF4: push    ecx; lpAddend
0x868CF5: call    dword ptr ds:0A2807Ch
0x868CFB: test    eax, eax
0x868CFD: jnz     short loc_868D0E
0x868CFF: test    ebp, ebp
0x868D01: jz      short loc_868D0E
0x868D03: mov     edx, [ebp+0]
0x868D06: mov     eax, [edx]
0x868D08: push    1
0x868D0A: mov     ecx, ebp
0x868D0C: call    eax
0x868D0E: test    ebx, ebx
0x868D10: mov     [esi+58h], ebx
0x868D13: jz      short loc_868D1F
0x868D15: add     ebx, 4
0x868D18: push    ebx; lpAddend
0x868D19: call    dword ptr ds:0A28078h
0x868D1F: mov     ecx, [esp+30h+var_18]
0x868D23: mov     ebx, [ecx+12Ch]
0x868D29: mov     ebp, [esi+44h]
0x868D2C: cmp     ebp, ebx
0x868D2E: jz      short loc_868D62
0x868D30: test    ebp, ebp
0x868D32: jz      short loc_868D51
0x868D34: lea     edx, [ebp+4]
0x868D37: push    edx; lpAddend
0x868D38: call    dword ptr ds:0A2807Ch
0x868D3E: test    eax, eax
0x868D40: jnz     short loc_868D51
0x868D42: test    ebp, ebp
0x868D44: jz      short loc_868D51
0x868D46: mov     eax, [ebp+0]
0x868D49: mov     edx, [eax]
0x868D4B: push    1
0x868D4D: mov     ecx, ebp
0x868D4F: call    edx
0x868D51: test    ebx, ebx
0x868D53: mov     [esi+44h], ebx
0x868D56: jz      short loc_868D62
0x868D58: add     ebx, 4
0x868D5B: push    ebx; lpAddend
0x868D5C: call    dword ptr ds:0A28078h
0x868D62: cmp     dword ptr [esi+30h], 0
0x868D66: jnz     short loc_868D70
0x868D68: call    sub_772DF0
0x868D6D: mov     [esi+30h], eax
0x868D70: mov     ecx, [esi+30h]
0x868D73: push    0
0x868D75: push    0
0x868D77: push    1Bh
0x868D79: call    sub_772CD0
0x868D7E: cmp     dword ptr [esi+30h], 0
0x868D82: jnz     short loc_868D8C
0x868D84: call    sub_772DF0
0x868D89: mov     [esi+30h], eax
0x868D8C: mov     ecx, [esi+30h]
0x868D8F: push    0
0x868D91: push    0
0x868D93: push    0Fh
0x868D95: call    sub_772CD0
0x868D9A: cmp     dword ptr [esi+30h], 0
0x868D9E: jnz     short loc_868DA8
0x868DA0: call    sub_772DF0
0x868DA5: mov     [esi+30h], eax
0x868DA8: mov     ecx, [esi+30h]
0x868DAB: push    0
0x868DAD: push    1
0x868DAF: push    7
0x868DB1: call    sub_772CD0
0x868DB6: cmp     dword ptr [esi+30h], 0
0x868DBA: jnz     short loc_868DC4
0x868DBC: call    sub_772DF0
0x868DC1: mov     [esi+30h], eax
0x868DC4: mov     ecx, [esi+30h]
0x868DC7: push    0
0x868DC9: push    4
0x868DCB: push    17h
0x868DCD: call    sub_772CD0
0x868DD2: cmp     dword ptr [esi+30h], 0
0x868DD6: jnz     short loc_868DE0
0x868DD8: call    sub_772DF0
0x868DDD: mov     [esi+30h], eax
0x868DE0: mov     ecx, [esi+30h]
0x868DE3: push    0
0x868DE5: push    1
0x868DE7: push    0Eh
0x868DE9: call    sub_772CD0
0x868DEE: cmp     dword ptr [esi+30h], 0
0x868DF2: jnz     short loc_868DFC
0x868DF4: call    sub_772DF0
0x868DF9: mov     [esi+30h], eax
0x868DFC: mov     ecx, [esi+30h]
0x868DFF: push    0
0x868E01: push    0
0x868E03: push    34h ; '4'
0x868E05: call    sub_772CD0
0x868E0A: or      ebx, 0FFFFFFFFh
0x868E0D: cmp     esi, ds:0B47664h
0x868E13: mov     dword ptr ds:0B43D08h, 38082h
0x868E1D: mov     dword ptr ds:0B44398h, 10Ch
0x868E27: jz      short loc_868E47
0x868E29: add     [esi+60h], ebx
0x868E2C: jnz     short loc_868E35
0x868E2E: mov     ecx, esi
0x868E30: call    sub_7604D0
0x868E35: mov     esi, ds:0B47664h
0x868E3B: test    esi, esi
0x868E3D: mov     [esp+30h+var_14], esi
0x868E41: jz      short loc_868E47
0x868E43: add     dword ptr [esi+60h], 1
0x868E47: cmp     dword ptr [esi+18h], 8
0x868E4B: jnb     loc_8691DE
0x868E51: lea     eax, [esp+30h+var_10]
0x868E55: push    eax
0x868E56: call    sub_772630
0x868E5B: add     esp, 4
0x868E5E: mov     ebp, eax
0x868E60: cmp     edi, [ebp+0]
0x868E63: mov     byte ptr [esp+30h+var_4], 0Ah
0x868E68: jz      short loc_868E89
0x868E6A: test    edi, edi
0x868E6C: jz      short loc_868E7A
0x868E6E: add     [edi+5Ch], ebx
0x868E71: jnz     short loc_868E7A
0x868E73: mov     ecx, edi
0x868E75: call    sub_772560
0x868E7A: mov     edi, [ebp+0]
0x868E7D: test    edi, edi
0x868E7F: mov     [esp+30h+a3], edi
0x868E83: jz      short loc_868E89
0x868E85: add     dword ptr [edi+5Ch], 1
0x868E89: mov     eax, [esp+30h+var_10]
0x868E8D: test    eax, eax
0x868E8F: mov     byte ptr [esp+30h+var_4], 1
0x868E94: jz      short loc_868EA8
0x868E96: add     [eax+5Ch], ebx
0x868E99: mov     ecx, eax
0x868E9B: add     eax, 5Ch ; '\'
0x868E9E: cmp     dword ptr [eax], 0
0x868EA1: jnz     short loc_868EA8
0x868EA3: call    sub_772560
0x868EA8: push    2
0x868EAA: push    1
0x868EAC: push    0
0x868EAE: push    edi
0x868EAF: call    sub_801110
0x868EB4: add     esp, 10h
0x868EB7: push    edi; a3
0x868EB8: push    0; a2
0x868EBA: mov     ecx, esi; this
0x868EBC: call    sub_760010
0x868EC1: lea     ecx, [esp+30h+var_10]
0x868EC5: push    ecx
0x868EC6: call    sub_772630
0x868ECB: add     esp, 4
0x868ECE: mov     ebp, eax
0x868ED0: cmp     edi, [ebp+0]
0x868ED3: mov     byte ptr [esp+30h+var_4], 0Bh
0x868ED8: jz      short loc_868EF9
0x868EDA: test    edi, edi
0x868EDC: jz      short loc_868EEA
0x868EDE: add     [edi+5Ch], ebx
0x868EE1: jnz     short loc_868EEA
0x868EE3: mov     ecx, edi
0x868EE5: call    sub_772560
0x868EEA: mov     edi, [ebp+0]
0x868EED: test    edi, edi
0x868EEF: mov     [esp+30h+a3], edi
0x868EF3: jz      short loc_868EF9
0x868EF5: add     dword ptr [edi+5Ch], 1
0x868EF9: mov     eax, [esp+30h+var_10]
0x868EFD: test    eax, eax
0x868EFF: mov     byte ptr [esp+30h+var_4], 1
0x868F04: jz      short loc_868F18
0x868F06: add     [eax+5Ch], ebx
0x868F09: mov     ecx, eax
0x868F0B: add     eax, 5Ch ; '\'
0x868F0E: cmp     dword ptr [eax], 0
0x868F11: jnz     short loc_868F18
0x868F13: call    sub_772560
0x868F18: push    2
0x868F1A: push    1
0x868F1C: push    1
0x868F1E: push    edi
0x868F1F: call    sub_801110
0x868F24: add     esp, 10h
0x868F27: push    edi; a3
0x868F28: push    1; a2
0x868F2A: mov     ecx, esi; this
0x868F2C: call    sub_760010
0x868F31: lea     edx, [esp+30h+var_10]
0x868F35: push    edx
0x868F36: call    sub_772630
0x868F3B: add     esp, 4
0x868F3E: mov     ebp, eax
0x868F40: cmp     edi, [ebp+0]
0x868F43: mov     byte ptr [esp+30h+var_4], 0Ch
0x868F48: jz      short loc_868F69
0x868F4A: test    edi, edi
0x868F4C: jz      short loc_868F5A
0x868F4E: add     [edi+5Ch], ebx
0x868F51: jnz     short loc_868F5A
0x868F53: mov     ecx, edi
0x868F55: call    sub_772560
0x868F5A: mov     edi, [ebp+0]
0x868F5D: test    edi, edi
0x868F5F: mov     [esp+30h+a3], edi
0x868F63: jz      short loc_868F69
0x868F65: add     dword ptr [edi+5Ch], 1
0x868F69: mov     eax, [esp+30h+var_10]
0x868F6D: test    eax, eax
0x868F6F: mov     byte ptr [esp+30h+var_4], 1
0x868F74: jz      short loc_868F88
0x868F76: add     [eax+5Ch], ebx
0x868F79: mov     ecx, eax
0x868F7B: add     eax, 5Ch ; '\'
0x868F7E: cmp     dword ptr [eax], 0
0x868F81: jnz     short loc_868F88
0x868F83: call    sub_772560
0x868F88: push    2
0x868F8A: push    1
0x868F8C: push    2
0x868F8E: push    edi
0x868F8F: call    sub_801110
0x868F94: add     esp, 10h
0x868F97: push    edi; a3
0x868F98: push    2; a2
0x868F9A: mov     ecx, esi; this
0x868F9C: call    sub_760010
0x868FA1: lea     eax, [esp+30h+var_10]
0x868FA5: push    eax
0x868FA6: call    sub_772630
0x868FAB: add     esp, 4
0x868FAE: mov     ebp, eax
0x868FB0: cmp     edi, [ebp+0]
0x868FB3: mov     byte ptr [esp+30h+var_4], 0Dh
0x868FB8: jz      short loc_868FD9
0x868FBA: test    edi, edi
0x868FBC: jz      short loc_868FCA
0x868FBE: add     [edi+5Ch], ebx
0x868FC1: jnz     short loc_868FCA
0x868FC3: mov     ecx, edi
0x868FC5: call    sub_772560
0x868FCA: mov     edi, [ebp+0]
0x868FCD: test    edi, edi
0x868FCF: mov     [esp+30h+a3], edi
0x868FD3: jz      short loc_868FD9
0x868FD5: add     dword ptr [edi+5Ch], 1
0x868FD9: mov     eax, [esp+30h+var_10]
0x868FDD: test    eax, eax
0x868FDF: mov     byte ptr [esp+30h+var_4], 1
0x868FE4: jz      short loc_868FF8
0x868FE6: add     [eax+5Ch], ebx
0x868FE9: mov     ecx, eax
0x868FEB: add     eax, 5Ch ; '\'
0x868FEE: cmp     dword ptr [eax], 0
0x868FF1: jnz     short loc_868FF8
0x868FF3: call    sub_772560
0x868FF8: push    2
0x868FFA: push    1
0x868FFC: push    3
0x868FFE: push    edi
0x868FFF: call    sub_801110
0x869004: add     esp, 10h
0x869007: push    edi; a3
0x869008: push    3; a2
0x86900A: mov     ecx, esi; this
0x86900C: call    sub_760010
0x869011: lea     ecx, [esp+30h+var_10]
0x869015: push    ecx
0x869016: call    sub_772630
0x86901B: add     esp, 4
0x86901E: mov     ebp, eax
0x869020: cmp     edi, [ebp+0]
0x869023: mov     byte ptr [esp+30h+var_4], 0Eh
0x869028: jz      short loc_869049
0x86902A: test    edi, edi
0x86902C: jz      short loc_86903A
0x86902E: add     [edi+5Ch], ebx
0x869031: jnz     short loc_86903A
0x869033: mov     ecx, edi
0x869035: call    sub_772560
0x86903A: mov     edi, [ebp+0]
0x86903D: test    edi, edi
0x86903F: mov     [esp+30h+a3], edi
0x869043: jz      short loc_869049
0x869045: add     dword ptr [edi+5Ch], 1
0x869049: mov     eax, [esp+30h+var_10]
0x86904D: test    eax, eax
0x86904F: mov     byte ptr [esp+30h+var_4], 1
0x869054: jz      short loc_869068
0x869056: add     [eax+5Ch], ebx
0x869059: mov     ecx, eax
0x86905B: add     eax, 5Ch ; '\'
0x86905E: cmp     dword ptr [eax], 0
0x869061: jnz     short loc_869068
0x869063: call    sub_772560
0x869068: push    2
0x86906A: push    1
0x86906C: push    4
0x86906E: push    edi
0x86906F: call    sub_801110
0x869074: add     esp, 10h
0x869077: push    edi; a3
0x869078: push    4; a2
0x86907A: mov     ecx, esi; this
0x86907C: call    sub_760010
0x869081: lea     edx, [esp+30h+var_10]
0x869085: push    edx
0x869086: call    sub_772630
0x86908B: add     esp, 4
0x86908E: mov     ebp, eax
0x869090: cmp     edi, [ebp+0]
0x869093: mov     byte ptr [esp+30h+var_4], 0Fh
0x869098: jz      short loc_8690B9
0x86909A: test    edi, edi
0x86909C: jz      short loc_8690AA
0x86909E: add     [edi+5Ch], ebx
0x8690A1: jnz     short loc_8690AA
0x8690A3: mov     ecx, edi
0x8690A5: call    sub_772560
0x8690AA: mov     edi, [ebp+0]
0x8690AD: test    edi, edi
0x8690AF: mov     [esp+30h+a3], edi
0x8690B3: jz      short loc_8690B9
0x8690B5: add     dword ptr [edi+5Ch], 1
0x8690B9: mov     eax, [esp+30h+var_10]
0x8690BD: test    eax, eax
0x8690BF: mov     byte ptr [esp+30h+var_4], 1
0x8690C4: jz      short loc_8690D8
0x8690C6: add     [eax+5Ch], ebx
0x8690C9: mov     ecx, eax
0x8690CB: add     eax, 5Ch ; '\'
0x8690CE: cmp     dword ptr [eax], 0
0x8690D1: jnz     short loc_8690D8
0x8690D3: call    sub_772560
0x8690D8: push    0
0x8690DA: push    3
0x8690DC: push    5
0x8690DE: push    edi
0x8690DF: call    sub_801110
0x8690E4: mov     eax, ds:0B43110h
0x8690E9: add     esp, 10h
0x8690EC: push    eax; a2
0x8690ED: mov     ecx, edi; this
0x8690EF: call    sub_76C910
0x8690F4: push    edi; a3
0x8690F5: push    5; a2
0x8690F7: mov     ecx, esi; this
0x8690F9: call    sub_760010
0x8690FE: lea     ecx, [esp+30h+var_10]
0x869102: push    ecx
0x869103: call    sub_772630
0x869108: add     esp, 4
0x86910B: mov     ebp, eax
0x86910D: cmp     edi, [ebp+0]
0x869110: mov     byte ptr [esp+30h+var_4], 10h
0x869115: jz      short loc_869136
0x869117: test    edi, edi
0x869119: jz      short loc_869127
0x86911B: add     [edi+5Ch], ebx
0x86911E: jnz     short loc_869127
0x869120: mov     ecx, edi
0x869122: call    sub_772560
0x869127: mov     edi, [ebp+0]
0x86912A: test    edi, edi
0x86912C: mov     [esp+30h+a3], edi
0x869130: jz      short loc_869136
0x869132: add     dword ptr [edi+5Ch], 1
0x869136: mov     eax, [esp+30h+var_10]
0x86913A: test    eax, eax
0x86913C: mov     byte ptr [esp+30h+var_4], 1
0x869141: jz      short loc_869155
0x869143: add     [eax+5Ch], ebx
0x869146: mov     ecx, eax
0x869148: add     eax, 5Ch ; '\'
0x86914B: cmp     dword ptr [eax], 0
0x86914E: jnz     short loc_869155
0x869150: call    sub_772560
0x869155: push    2
0x869157: push    1
0x869159: push    6
0x86915B: push    edi
0x86915C: call    sub_801110
0x869161: add     esp, 10h
0x869164: push    edi; a3
0x869165: push    6; a2
0x869167: mov     ecx, esi; this
0x869169: call    sub_760010
0x86916E: lea     edx, [esp+30h+var_10]
0x869172: push    edx
0x869173: call    sub_772630
0x869178: add     esp, 4
0x86917B: mov     ebp, eax
0x86917D: cmp     edi, [ebp+0]
0x869180: mov     byte ptr [esp+30h+var_4], 11h
0x869185: jz      short loc_8691A6
0x869187: test    edi, edi
0x869189: jz      short loc_869197
0x86918B: add     [edi+5Ch], ebx
0x86918E: jnz     short loc_869197
0x869190: mov     ecx, edi
0x869192: call    sub_772560
0x869197: mov     edi, [ebp+0]
0x86919A: test    edi, edi
0x86919C: mov     [esp+30h+a3], edi
0x8691A0: jz      short loc_8691A6
0x8691A2: add     dword ptr [edi+5Ch], 1
0x8691A6: mov     eax, [esp+30h+var_10]
0x8691AA: test    eax, eax
0x8691AC: mov     byte ptr [esp+30h+var_4], 1
0x8691B1: jz      short loc_8691C5
0x8691B3: add     [eax+5Ch], ebx
0x8691B6: mov     ecx, eax
0x8691B8: add     eax, 5Ch ; '\'
0x8691BB: cmp     dword ptr [eax], 0
0x8691BE: jnz     short loc_8691C5
0x8691C0: call    sub_772560
0x8691C5: push    0
0x8691C7: push    3
0x8691C9: push    7
0x8691CB: push    edi
0x8691CC: call    sub_801110
0x8691D1: add     esp, 10h
0x8691D4: push    edi; a3
0x8691D5: push    7; a2
0x8691D7: mov     ecx, esi; this
0x8691D9: call    sub_760010
0x8691DE: mov     eax, [esp+30h+var_18]
0x8691E2: mov     ebx, [eax+9Ch]
0x8691E8: mov     ebp, [esi+58h]
0x8691EB: cmp     ebp, ebx
0x8691ED: jz      short loc_869221
0x8691EF: test    ebp, ebp
0x8691F1: jz      short loc_869210
0x8691F3: lea     ecx, [ebp+4]
0x8691F6: push    ecx; lpAddend
0x8691F7: call    dword ptr ds:0A2807Ch
0x8691FD: test    eax, eax
0x8691FF: jnz     short loc_869210
0x869201: test    ebp, ebp
0x869203: jz      short loc_869210
0x869205: mov     edx, [ebp+0]
0x869208: mov     eax, [edx]
0x86920A: push    1
0x86920C: mov     ecx, ebp
0x86920E: call    eax
0x869210: test    ebx, ebx
0x869212: mov     [esi+58h], ebx
0x869215: jz      short loc_869221
0x869217: add     ebx, 4
0x86921A: push    ebx; lpAddend
0x86921B: call    dword ptr ds:0A28078h
0x869221: mov     ecx, [esp+30h+var_18]
0x869225: mov     ebx, [ecx+130h]
0x86922B: mov     ebp, [esi+44h]
0x86922E: cmp     ebp, ebx
0x869230: jz      short loc_869264
0x869232: test    ebp, ebp
0x869234: jz      short loc_869253
0x869236: lea     edx, [ebp+4]
0x869239: push    edx; lpAddend
0x86923A: call    dword ptr ds:0A2807Ch
0x869240: test    eax, eax
0x869242: jnz     short loc_869253
0x869244: test    ebp, ebp
0x869246: jz      short loc_869253
0x869248: mov     eax, [ebp+0]
0x86924B: mov     edx, [eax]
0x86924D: push    1
0x86924F: mov     ecx, ebp
0x869251: call    edx
0x869253: test    ebx, ebx
0x869255: mov     [esi+44h], ebx
0x869258: jz      short loc_869264
0x86925A: add     ebx, 4
0x86925D: push    ebx; lpAddend
0x86925E: call    dword ptr ds:0A28078h
0x869264: cmp     dword ptr [esi+30h], 0
0x869268: jnz     short loc_869272
0x86926A: call    sub_772DF0
0x86926F: mov     [esi+30h], eax
0x869272: mov     ecx, [esi+30h]
0x869275: push    0
0x869277: push    0
0x869279: push    1Bh
0x86927B: call    sub_772CD0
0x869280: cmp     dword ptr [esi+30h], 0
0x869284: jnz     short loc_86928E
0x869286: call    sub_772DF0
0x86928B: mov     [esi+30h], eax
0x86928E: mov     ecx, [esi+30h]
0x869291: push    0
0x869293: push    0
0x869295: push    0Fh
0x869297: call    sub_772CD0
0x86929C: cmp     dword ptr [esi+30h], 0
0x8692A0: jnz     short loc_8692AA
0x8692A2: call    sub_772DF0
0x8692A7: mov     [esi+30h], eax
0x8692AA: mov     ecx, [esi+30h]
0x8692AD: push    0
0x8692AF: push    1
0x8692B1: push    7
0x8692B3: call    sub_772CD0
0x8692B8: cmp     dword ptr [esi+30h], 0
0x8692BC: jnz     short loc_8692C6
0x8692BE: call    sub_772DF0
0x8692C3: mov     [esi+30h], eax
0x8692C6: mov     ecx, [esi+30h]
0x8692C9: push    0
0x8692CB: push    4
0x8692CD: push    17h
0x8692CF: call    sub_772CD0
0x8692D4: cmp     dword ptr [esi+30h], 0
0x8692D8: jnz     short loc_8692E2
0x8692DA: call    sub_772DF0
0x8692DF: mov     [esi+30h], eax
0x8692E2: mov     ecx, [esi+30h]
0x8692E5: push    0
0x8692E7: push    1
0x8692E9: push    0Eh
0x8692EB: call    sub_772CD0
0x8692F0: cmp     dword ptr [esi+30h], 0
0x8692F4: jnz     short loc_8692FE
0x8692F6: call    sub_772DF0
0x8692FB: mov     [esi+30h], eax
0x8692FE: mov     ecx, [esi+30h]
0x869301: push    0
0x869303: push    0
0x869305: push    34h ; '4'
0x869307: call    sub_772CD0
0x86930C: or      ebx, 0FFFFFFFFh
0x86930F: cmp     esi, ds:0B47668h
0x869315: mov     dword ptr ds:0B43D0Ch, 38082h
0x86931F: mov     dword ptr ds:0B4439Ch, 18Ch
0x869329: jz      short loc_869349
0x86932B: add     [esi+60h], ebx
0x86932E: jnz     short loc_869337
0x869330: mov     ecx, esi
0x869332: call    sub_7604D0
0x869337: mov     esi, ds:0B47668h
0x86933D: test    esi, esi
0x86933F: mov     [esp+30h+var_14], esi
0x869343: jz      short loc_869349
0x869345: add     dword ptr [esi+60h], 1
0x869349: cmp     dword ptr [esi+18h], 8
0x86934D: jnb     loc_8696E0
0x869353: lea     eax, [esp+30h+var_10]
0x869357: push    eax
0x869358: call    sub_772630
0x86935D: add     esp, 4
0x869360: mov     ebp, eax
0x869362: cmp     edi, [ebp+0]
0x869365: mov     byte ptr [esp+30h+var_4], 12h
0x86936A: jz      short loc_86938B
0x86936C: test    edi, edi
0x86936E: jz      short loc_86937C
0x869370: add     [edi+5Ch], ebx
0x869373: jnz     short loc_86937C
0x869375: mov     ecx, edi
0x869377: call    sub_772560
0x86937C: mov     edi, [ebp+0]
0x86937F: test    edi, edi
0x869381: mov     [esp+30h+a3], edi
0x869385: jz      short loc_86938B
0x869387: add     dword ptr [edi+5Ch], 1
0x86938B: mov     eax, [esp+30h+var_10]
0x86938F: test    eax, eax
0x869391: mov     byte ptr [esp+30h+var_4], 1
0x869396: jz      short loc_8693AA
0x869398: add     [eax+5Ch], ebx
0x86939B: mov     ecx, eax
0x86939D: add     eax, 5Ch ; '\'
0x8693A0: cmp     dword ptr [eax], 0
0x8693A3: jnz     short loc_8693AA
0x8693A5: call    sub_772560
0x8693AA: push    2
0x8693AC: push    1
0x8693AE: push    0
0x8693B0: push    edi
0x8693B1: call    sub_801110
0x8693B6: add     esp, 10h
0x8693B9: push    edi; a3
0x8693BA: push    0; a2
0x8693BC: mov     ecx, esi; this
0x8693BE: call    sub_760010
0x8693C3: lea     ecx, [esp+30h+var_10]
0x8693C7: push    ecx
0x8693C8: call    sub_772630
0x8693CD: add     esp, 4
0x8693D0: mov     ebp, eax
0x8693D2: cmp     edi, [ebp+0]
0x8693D5: mov     byte ptr [esp+30h+var_4], 13h
0x8693DA: jz      short loc_8693FB
0x8693DC: test    edi, edi
0x8693DE: jz      short loc_8693EC
0x8693E0: add     [edi+5Ch], ebx
0x8693E3: jnz     short loc_8693EC
0x8693E5: mov     ecx, edi
0x8693E7: call    sub_772560
0x8693EC: mov     edi, [ebp+0]
0x8693EF: test    edi, edi
0x8693F1: mov     [esp+30h+a3], edi
0x8693F5: jz      short loc_8693FB
0x8693F7: add     dword ptr [edi+5Ch], 1
0x8693FB: mov     eax, [esp+30h+var_10]
0x8693FF: test    eax, eax
0x869401: mov     byte ptr [esp+30h+var_4], 1
0x869406: jz      short loc_86941A
0x869408: add     [eax+5Ch], ebx
0x86940B: mov     ecx, eax
0x86940D: add     eax, 5Ch ; '\'
0x869410: cmp     dword ptr [eax], 0
0x869413: jnz     short loc_86941A
0x869415: call    sub_772560
0x86941A: push    2
0x86941C: push    1
0x86941E: push    1
0x869420: push    edi
0x869421: call    sub_801110
0x869426: add     esp, 10h
0x869429: push    edi; a3
0x86942A: push    1; a2
0x86942C: mov     ecx, esi; this
0x86942E: call    sub_760010
0x869433: lea     edx, [esp+30h+var_10]
0x869437: push    edx
0x869438: call    sub_772630
0x86943D: add     esp, 4
0x869440: mov     ebp, eax
0x869442: cmp     edi, [ebp+0]
0x869445: mov     byte ptr [esp+30h+var_4], 14h
0x86944A: jz      short loc_86946B
0x86944C: test    edi, edi
0x86944E: jz      short loc_86945C
0x869450: add     [edi+5Ch], ebx
0x869453: jnz     short loc_86945C
0x869455: mov     ecx, edi
0x869457: call    sub_772560
0x86945C: mov     edi, [ebp+0]
0x86945F: test    edi, edi
0x869461: mov     [esp+30h+a3], edi
0x869465: jz      short loc_86946B
0x869467: add     dword ptr [edi+5Ch], 1
0x86946B: mov     eax, [esp+30h+var_10]
0x86946F: test    eax, eax
0x869471: mov     byte ptr [esp+30h+var_4], 1
0x869476: jz      short loc_86948A
0x869478: add     [eax+5Ch], ebx
0x86947B: mov     ecx, eax
0x86947D: add     eax, 5Ch ; '\'
0x869480: cmp     dword ptr [eax], 0
0x869483: jnz     short loc_86948A
0x869485: call    sub_772560
0x86948A: push    2
0x86948C: push    1
0x86948E: push    2
0x869490: push    edi
0x869491: call    sub_801110
0x869496: add     esp, 10h
0x869499: push    edi; a3
0x86949A: push    2; a2
0x86949C: mov     ecx, esi; this
0x86949E: call    sub_760010
0x8694A3: lea     eax, [esp+30h+var_10]
0x8694A7: push    eax
0x8694A8: call    sub_772630
0x8694AD: add     esp, 4
0x8694B0: mov     ebp, eax
0x8694B2: cmp     edi, [ebp+0]
0x8694B5: mov     byte ptr [esp+30h+var_4], 15h
0x8694BA: jz      short loc_8694DB
0x8694BC: test    edi, edi
0x8694BE: jz      short loc_8694CC
0x8694C0: add     [edi+5Ch], ebx
0x8694C3: jnz     short loc_8694CC
0x8694C5: mov     ecx, edi
0x8694C7: call    sub_772560
0x8694CC: mov     edi, [ebp+0]
0x8694CF: test    edi, edi
0x8694D1: mov     [esp+30h+a3], edi
0x8694D5: jz      short loc_8694DB
0x8694D7: add     dword ptr [edi+5Ch], 1
0x8694DB: mov     eax, [esp+30h+var_10]
0x8694DF: test    eax, eax
0x8694E1: mov     byte ptr [esp+30h+var_4], 1
0x8694E6: jz      short loc_8694FA
0x8694E8: add     [eax+5Ch], ebx
0x8694EB: mov     ecx, eax
0x8694ED: add     eax, 5Ch ; '\'
0x8694F0: cmp     dword ptr [eax], 0
0x8694F3: jnz     short loc_8694FA
0x8694F5: call    sub_772560
0x8694FA: push    2
0x8694FC: push    1
0x8694FE: push    3
0x869500: push    edi
0x869501: call    sub_801110
0x869506: add     esp, 10h
0x869509: push    edi; a3
0x86950A: push    3; a2
0x86950C: mov     ecx, esi; this
0x86950E: call    sub_760010
0x869513: lea     ecx, [esp+30h+var_10]
0x869517: push    ecx
0x869518: call    sub_772630
0x86951D: add     esp, 4
0x869520: mov     ebp, eax
0x869522: cmp     edi, [ebp+0]
0x869525: mov     byte ptr [esp+30h+var_4], 16h
0x86952A: jz      short loc_86954B
0x86952C: test    edi, edi
0x86952E: jz      short loc_86953C
0x869530: add     [edi+5Ch], ebx
0x869533: jnz     short loc_86953C
0x869535: mov     ecx, edi
0x869537: call    sub_772560
0x86953C: mov     edi, [ebp+0]
0x86953F: test    edi, edi
0x869541: mov     [esp+30h+a3], edi
0x869545: jz      short loc_86954B
0x869547: add     dword ptr [edi+5Ch], 1
0x86954B: mov     eax, [esp+30h+var_10]
0x86954F: test    eax, eax
0x869551: mov     byte ptr [esp+30h+var_4], 1
0x869556: jz      short loc_86956A
0x869558: add     [eax+5Ch], ebx
0x86955B: mov     ecx, eax
0x86955D: add     eax, 5Ch ; '\'
0x869560: cmp     dword ptr [eax], 0
0x869563: jnz     short loc_86956A
0x869565: call    sub_772560
0x86956A: push    2
0x86956C: push    1
0x86956E: push    4
0x869570: push    edi
0x869571: call    sub_801110
0x869576: add     esp, 10h
0x869579: push    edi; a3
0x86957A: push    4; a2
0x86957C: mov     ecx, esi; this
0x86957E: call    sub_760010
0x869583: lea     edx, [esp+30h+var_10]
0x869587: push    edx
0x869588: call    sub_772630
0x86958D: add     esp, 4
0x869590: mov     ebp, eax
0x869592: cmp     edi, [ebp+0]
0x869595: mov     byte ptr [esp+30h+var_4], 17h
0x86959A: jz      short loc_8695BB
0x86959C: test    edi, edi
0x86959E: jz      short loc_8695AC
0x8695A0: add     [edi+5Ch], ebx
0x8695A3: jnz     short loc_8695AC
0x8695A5: mov     ecx, edi
0x8695A7: call    sub_772560
0x8695AC: mov     edi, [ebp+0]
0x8695AF: test    edi, edi
0x8695B1: mov     [esp+30h+a3], edi
0x8695B5: jz      short loc_8695BB
0x8695B7: add     dword ptr [edi+5Ch], 1
0x8695BB: mov     eax, [esp+30h+var_10]
0x8695BF: test    eax, eax
0x8695C1: mov     byte ptr [esp+30h+var_4], 1
0x8695C6: jz      short loc_8695DA
0x8695C8: add     [eax+5Ch], ebx
0x8695CB: mov     ecx, eax
0x8695CD: add     eax, 5Ch ; '\'
0x8695D0: cmp     dword ptr [eax], 0
0x8695D3: jnz     short loc_8695DA
0x8695D5: call    sub_772560
0x8695DA: push    0
0x8695DC: push    3
0x8695DE: push    5
0x8695E0: push    edi
0x8695E1: call    sub_801110
0x8695E6: mov     eax, ds:0B43110h
0x8695EB: add     esp, 10h
0x8695EE: push    eax; a2
0x8695EF: mov     ecx, edi; this
0x8695F1: call    sub_76C910
0x8695F6: push    edi; a3
0x8695F7: push    5; a2
0x8695F9: mov     ecx, esi; this
0x8695FB: call    sub_760010
0x869600: lea     ecx, [esp+30h+var_10]
0x869604: push    ecx
0x869605: call    sub_772630
0x86960A: add     esp, 4
0x86960D: mov     ebp, eax
0x86960F: cmp     edi, [ebp+0]
0x869612: mov     byte ptr [esp+30h+var_4], 18h
0x869617: jz      short loc_869638
0x869619: test    edi, edi
0x86961B: jz      short loc_869629
0x86961D: add     [edi+5Ch], ebx
0x869620: jnz     short loc_869629
0x869622: mov     ecx, edi
0x869624: call    sub_772560
0x869629: mov     edi, [ebp+0]
0x86962C: test    edi, edi
0x86962E: mov     [esp+30h+a3], edi
0x869632: jz      short loc_869638
0x869634: add     dword ptr [edi+5Ch], 1
0x869638: mov     eax, [esp+30h+var_10]
0x86963C: test    eax, eax
0x86963E: mov     byte ptr [esp+30h+var_4], 1
0x869643: jz      short loc_869657
0x869645: add     [eax+5Ch], ebx
0x869648: mov     ecx, eax
0x86964A: add     eax, 5Ch ; '\'
0x86964D: cmp     dword ptr [eax], 0
0x869650: jnz     short loc_869657
0x869652: call    sub_772560
0x869657: push    2
0x869659: push    1
0x86965B: push    6
0x86965D: push    edi
0x86965E: call    sub_801110
0x869663: add     esp, 10h
0x869666: push    edi; a3
0x869667: push    6; a2
0x869669: mov     ecx, esi; this
0x86966B: call    sub_760010
0x869670: lea     edx, [esp+30h+var_10]
0x869674: push    edx
0x869675: call    sub_772630
0x86967A: add     esp, 4
0x86967D: mov     ebp, eax
0x86967F: cmp     edi, [ebp+0]
0x869682: mov     byte ptr [esp+30h+var_4], 19h
0x869687: jz      short loc_8696A8
0x869689: test    edi, edi
0x86968B: jz      short loc_869699
0x86968D: add     [edi+5Ch], ebx
0x869690: jnz     short loc_869699
0x869692: mov     ecx, edi
0x869694: call    sub_772560
0x869699: mov     edi, [ebp+0]
0x86969C: test    edi, edi
0x86969E: mov     [esp+30h+a3], edi
0x8696A2: jz      short loc_8696A8
0x8696A4: add     dword ptr [edi+5Ch], 1
0x8696A8: mov     eax, [esp+30h+var_10]
0x8696AC: test    eax, eax
0x8696AE: mov     byte ptr [esp+30h+var_4], 1
0x8696B3: jz      short loc_8696C7
0x8696B5: add     [eax+5Ch], ebx
0x8696B8: mov     ecx, eax
0x8696BA: add     eax, 5Ch ; '\'
0x8696BD: cmp     dword ptr [eax], 0
0x8696C0: jnz     short loc_8696C7
0x8696C2: call    sub_772560
0x8696C7: push    0
0x8696C9: push    3
0x8696CB: push    7
0x8696CD: push    edi
0x8696CE: call    sub_801110
0x8696D3: add     esp, 10h
0x8696D6: push    edi; a3
0x8696D7: push    7; a2
0x8696D9: mov     ecx, esi; this
0x8696DB: call    sub_760010
0x8696E0: mov     eax, [esp+30h+var_18]
0x8696E4: mov     ebx, [eax+0A0h]
0x8696EA: mov     ebp, [esi+58h]
0x8696ED: cmp     ebp, ebx
0x8696EF: jz      short loc_869723
0x8696F1: test    ebp, ebp
0x8696F3: jz      short loc_869712
0x8696F5: lea     ecx, [ebp+4]
0x8696F8: push    ecx; lpAddend
0x8696F9: call    dword ptr ds:0A2807Ch
0x8696FF: test    eax, eax
0x869701: jnz     short loc_869712
0x869703: test    ebp, ebp
0x869705: jz      short loc_869712
0x869707: mov     edx, [ebp+0]
0x86970A: mov     eax, [edx]
0x86970C: push    1
0x86970E: mov     ecx, ebp
0x869710: call    eax
0x869712: test    ebx, ebx
0x869714: mov     [esi+58h], ebx
0x869717: jz      short loc_869723
0x869719: add     ebx, 4
0x86971C: push    ebx; lpAddend
0x86971D: call    dword ptr ds:0A28078h
0x869723: mov     ecx, [esp+30h+var_18]
0x869727: mov     ebx, [ecx+12Ch]
0x86972D: mov     ebp, [esi+44h]
0x869730: cmp     ebp, ebx
0x869732: jz      short loc_869766
0x869734: test    ebp, ebp
0x869736: jz      short loc_869755
0x869738: lea     edx, [ebp+4]
0x86973B: push    edx; lpAddend
0x86973C: call    dword ptr ds:0A2807Ch
0x869742: test    eax, eax
0x869744: jnz     short loc_869755
0x869746: test    ebp, ebp
0x869748: jz      short loc_869755
0x86974A: mov     eax, [ebp+0]
0x86974D: mov     edx, [eax]
0x86974F: push    1
0x869751: mov     ecx, ebp
0x869753: call    edx
0x869755: test    ebx, ebx
0x869757: mov     [esi+44h], ebx
0x86975A: jz      short loc_869766
0x86975C: add     ebx, 4
0x86975F: push    ebx; lpAddend
0x869760: call    dword ptr ds:0A28078h
0x869766: cmp     dword ptr [esi+30h], 0
0x86976A: jnz     short loc_869774
0x86976C: call    sub_772DF0
0x869771: mov     [esi+30h], eax
0x869774: mov     ecx, [esi+30h]
0x869777: push    0
0x869779: push    0
0x86977B: push    1Bh
0x86977D: call    sub_772CD0
0x869782: cmp     dword ptr [esi+30h], 0
0x869786: jnz     short loc_869790
0x869788: call    sub_772DF0
0x86978D: mov     [esi+30h], eax
0x869790: mov     ecx, [esi+30h]
0x869793: push    0
0x869795: push    0
0x869797: push    0Fh
0x869799: call    sub_772CD0
0x86979E: cmp     dword ptr [esi+30h], 0
0x8697A2: jnz     short loc_8697AC
0x8697A4: call    sub_772DF0
0x8697A9: mov     [esi+30h], eax
0x8697AC: mov     ecx, [esi+30h]
0x8697AF: push    0
0x8697B1: push    1
0x8697B3: push    7
0x8697B5: call    sub_772CD0
0x8697BA: cmp     dword ptr [esi+30h], 0
0x8697BE: jnz     short loc_8697C8
0x8697C0: call    sub_772DF0
0x8697C5: mov     [esi+30h], eax
0x8697C8: mov     ecx, [esi+30h]
0x8697CB: push    0
0x8697CD: push    4
0x8697CF: push    17h
0x8697D1: call    sub_772CD0
0x8697D6: cmp     dword ptr [esi+30h], 0
0x8697DA: jnz     short loc_8697E4
0x8697DC: call    sub_772DF0
0x8697E1: mov     [esi+30h], eax
0x8697E4: mov     ecx, [esi+30h]
0x8697E7: push    0
0x8697E9: push    1
0x8697EB: push    0Eh
0x8697ED: call    sub_772CD0
0x8697F2: cmp     dword ptr [esi+30h], 0
0x8697F6: jnz     short loc_869800
0x8697F8: call    sub_772DF0
0x8697FD: mov     [esi+30h], eax
0x869800: mov     ecx, [esi+30h]
0x869803: push    0
0x869805: push    0
0x869807: push    34h ; '4'
0x869809: call    sub_772CD0
0x86980E: or      ebx, 0FFFFFFFFh
0x869811: cmp     esi, ds:0B4766Ch
0x869817: mov     dword ptr ds:0B43D20h, 78088h
0x869821: mov     dword ptr ds:0B443B0h, 10Ch
0x86982B: jz      short loc_86984B
0x86982D: add     [esi+60h], ebx
0x869830: jnz     short loc_869839
0x869832: mov     ecx, esi
0x869834: call    sub_7604D0
0x869839: mov     esi, ds:0B4766Ch
0x86983F: test    esi, esi
0x869841: mov     [esp+30h+var_14], esi
0x869845: jz      short loc_86984B
0x869847: add     dword ptr [esi+60h], 1
0x86984B: cmp     dword ptr [esi+18h], 8
0x86984F: jnb     loc_869BE2
0x869855: lea     eax, [esp+30h+var_10]
0x869859: push    eax
0x86985A: call    sub_772630
0x86985F: add     esp, 4
0x869862: mov     ebp, eax
0x869864: cmp     edi, [ebp+0]
0x869867: mov     byte ptr [esp+30h+var_4], 1Ah
0x86986C: jz      short loc_86988D
0x86986E: test    edi, edi
0x869870: jz      short loc_86987E
0x869872: add     [edi+5Ch], ebx
0x869875: jnz     short loc_86987E
0x869877: mov     ecx, edi
0x869879: call    sub_772560
0x86987E: mov     edi, [ebp+0]
0x869881: test    edi, edi
0x869883: mov     [esp+30h+a3], edi
0x869887: jz      short loc_86988D
0x869889: add     dword ptr [edi+5Ch], 1
0x86988D: mov     eax, [esp+30h+var_10]
0x869891: test    eax, eax
0x869893: mov     byte ptr [esp+30h+var_4], 1
0x869898: jz      short loc_8698AC
0x86989A: add     [eax+5Ch], ebx
0x86989D: mov     ecx, eax
0x86989F: add     eax, 5Ch ; '\'
0x8698A2: cmp     dword ptr [eax], 0
0x8698A5: jnz     short loc_8698AC
0x8698A7: call    sub_772560
0x8698AC: push    2
0x8698AE: push    1
0x8698B0: push    0
0x8698B2: push    edi
0x8698B3: call    sub_801110
0x8698B8: add     esp, 10h
0x8698BB: push    edi; a3
0x8698BC: push    0; a2
0x8698BE: mov     ecx, esi; this
0x8698C0: call    sub_760010
0x8698C5: lea     ecx, [esp+30h+var_10]
0x8698C9: push    ecx
0x8698CA: call    sub_772630
0x8698CF: add     esp, 4
0x8698D2: mov     ebp, eax
0x8698D4: cmp     edi, [ebp+0]
0x8698D7: mov     byte ptr [esp+30h+var_4], 1Bh
0x8698DC: jz      short loc_8698FD
0x8698DE: test    edi, edi
0x8698E0: jz      short loc_8698EE
0x8698E2: add     [edi+5Ch], ebx
0x8698E5: jnz     short loc_8698EE
0x8698E7: mov     ecx, edi
0x8698E9: call    sub_772560
0x8698EE: mov     edi, [ebp+0]
0x8698F1: test    edi, edi
0x8698F3: mov     [esp+30h+a3], edi
0x8698F7: jz      short loc_8698FD
0x8698F9: add     dword ptr [edi+5Ch], 1
0x8698FD: mov     eax, [esp+30h+var_10]
0x869901: test    eax, eax
0x869903: mov     byte ptr [esp+30h+var_4], 1
0x869908: jz      short loc_86991C
0x86990A: add     [eax+5Ch], ebx
0x86990D: mov     ecx, eax
0x86990F: add     eax, 5Ch ; '\'
0x869912: cmp     dword ptr [eax], 0
0x869915: jnz     short loc_86991C
0x869917: call    sub_772560
0x86991C: push    2
0x86991E: push    1
0x869920: push    1
0x869922: push    edi
0x869923: call    sub_801110
0x869928: add     esp, 10h
0x86992B: push    edi; a3
0x86992C: push    1; a2
0x86992E: mov     ecx, esi; this
0x869930: call    sub_760010
0x869935: lea     edx, [esp+30h+var_10]
0x869939: push    edx
0x86993A: call    sub_772630
0x86993F: add     esp, 4
0x869942: mov     ebp, eax
0x869944: cmp     edi, [ebp+0]
0x869947: mov     byte ptr [esp+30h+var_4], 1Ch
0x86994C: jz      short loc_86996D
0x86994E: test    edi, edi
0x869950: jz      short loc_86995E
0x869952: add     [edi+5Ch], ebx
0x869955: jnz     short loc_86995E
0x869957: mov     ecx, edi
0x869959: call    sub_772560
0x86995E: mov     edi, [ebp+0]
0x869961: test    edi, edi
0x869963: mov     [esp+30h+a3], edi
0x869967: jz      short loc_86996D
0x869969: add     dword ptr [edi+5Ch], 1
0x86996D: mov     eax, [esp+30h+var_10]
0x869971: test    eax, eax
0x869973: mov     byte ptr [esp+30h+var_4], 1
0x869978: jz      short loc_86998C
0x86997A: add     [eax+5Ch], ebx
0x86997D: mov     ecx, eax
0x86997F: add     eax, 5Ch ; '\'
0x869982: cmp     dword ptr [eax], 0
0x869985: jnz     short loc_86998C
0x869987: call    sub_772560
0x86998C: push    2
0x86998E: push    1
0x869990: push    2
0x869992: push    edi
0x869993: call    sub_801110
0x869998: add     esp, 10h
0x86999B: push    edi; a3
0x86999C: push    2; a2
0x86999E: mov     ecx, esi; this
0x8699A0: call    sub_760010
0x8699A5: lea     eax, [esp+30h+var_10]
0x8699A9: push    eax
0x8699AA: call    sub_772630
0x8699AF: add     esp, 4
0x8699B2: mov     ebp, eax
0x8699B4: cmp     edi, [ebp+0]
0x8699B7: mov     byte ptr [esp+30h+var_4], 1Dh
0x8699BC: jz      short loc_8699DD
0x8699BE: test    edi, edi
0x8699C0: jz      short loc_8699CE
0x8699C2: add     [edi+5Ch], ebx
0x8699C5: jnz     short loc_8699CE
0x8699C7: mov     ecx, edi
0x8699C9: call    sub_772560
0x8699CE: mov     edi, [ebp+0]
0x8699D1: test    edi, edi
0x8699D3: mov     [esp+30h+a3], edi
0x8699D7: jz      short loc_8699DD
0x8699D9: add     dword ptr [edi+5Ch], 1
0x8699DD: mov     eax, [esp+30h+var_10]
0x8699E1: test    eax, eax
0x8699E3: mov     byte ptr [esp+30h+var_4], 1
0x8699E8: jz      short loc_8699FC
0x8699EA: add     [eax+5Ch], ebx
0x8699ED: mov     ecx, eax
0x8699EF: add     eax, 5Ch ; '\'
0x8699F2: cmp     dword ptr [eax], 0
0x8699F5: jnz     short loc_8699FC
0x8699F7: call    sub_772560
0x8699FC: push    2
0x8699FE: push    1
0x869A00: push    3
0x869A02: push    edi
0x869A03: call    sub_801110
0x869A08: add     esp, 10h
0x869A0B: push    edi; a3
0x869A0C: push    3; a2
0x869A0E: mov     ecx, esi; this
0x869A10: call    sub_760010
0x869A15: lea     ecx, [esp+30h+var_10]
0x869A19: push    ecx
0x869A1A: call    sub_772630
0x869A1F: add     esp, 4
0x869A22: mov     ebp, eax
0x869A24: cmp     edi, [ebp+0]
0x869A27: mov     byte ptr [esp+30h+var_4], 1Eh
0x869A2C: jz      short loc_869A4D
0x869A2E: test    edi, edi
0x869A30: jz      short loc_869A3E
0x869A32: add     [edi+5Ch], ebx
0x869A35: jnz     short loc_869A3E
0x869A37: mov     ecx, edi
0x869A39: call    sub_772560
0x869A3E: mov     edi, [ebp+0]
0x869A41: test    edi, edi
0x869A43: mov     [esp+30h+a3], edi
0x869A47: jz      short loc_869A4D
0x869A49: add     dword ptr [edi+5Ch], 1
0x869A4D: mov     eax, [esp+30h+var_10]
0x869A51: test    eax, eax
0x869A53: mov     byte ptr [esp+30h+var_4], 1
0x869A58: jz      short loc_869A6C
0x869A5A: add     [eax+5Ch], ebx
0x869A5D: mov     ecx, eax
0x869A5F: add     eax, 5Ch ; '\'
0x869A62: cmp     dword ptr [eax], 0
0x869A65: jnz     short loc_869A6C
0x869A67: call    sub_772560
0x869A6C: push    2
0x869A6E: push    1
0x869A70: push    4
0x869A72: push    edi
0x869A73: call    sub_801110
0x869A78: add     esp, 10h
0x869A7B: push    edi; a3
0x869A7C: push    4; a2
0x869A7E: mov     ecx, esi; this
0x869A80: call    sub_760010
0x869A85: lea     edx, [esp+30h+var_10]
0x869A89: push    edx
0x869A8A: call    sub_772630
0x869A8F: add     esp, 4
0x869A92: mov     ebp, eax
0x869A94: cmp     edi, [ebp+0]
0x869A97: mov     byte ptr [esp+30h+var_4], 1Fh
0x869A9C: jz      short loc_869ABD
0x869A9E: test    edi, edi
0x869AA0: jz      short loc_869AAE
0x869AA2: add     [edi+5Ch], ebx
0x869AA5: jnz     short loc_869AAE
0x869AA7: mov     ecx, edi
0x869AA9: call    sub_772560
0x869AAE: mov     edi, [ebp+0]
0x869AB1: test    edi, edi
0x869AB3: mov     [esp+30h+a3], edi
0x869AB7: jz      short loc_869ABD
0x869AB9: add     dword ptr [edi+5Ch], 1
0x869ABD: mov     eax, [esp+30h+var_10]
0x869AC1: test    eax, eax
0x869AC3: mov     byte ptr [esp+30h+var_4], 1
0x869AC8: jz      short loc_869ADC
0x869ACA: add     [eax+5Ch], ebx
0x869ACD: mov     ecx, eax
0x869ACF: add     eax, 5Ch ; '\'
0x869AD2: cmp     dword ptr [eax], 0
0x869AD5: jnz     short loc_869ADC
0x869AD7: call    sub_772560
0x869ADC: push    0
0x869ADE: push    3
0x869AE0: push    5
0x869AE2: push    edi
0x869AE3: call    sub_801110
0x869AE8: mov     eax, ds:0B43110h
0x869AED: add     esp, 10h
0x869AF0: push    eax; a2
0x869AF1: mov     ecx, edi; this
0x869AF3: call    sub_76C910
0x869AF8: push    edi; a3
0x869AF9: push    5; a2
0x869AFB: mov     ecx, esi; this
0x869AFD: call    sub_760010
0x869B02: lea     ecx, [esp+30h+var_10]
0x869B06: push    ecx
0x869B07: call    sub_772630
0x869B0C: add     esp, 4
0x869B0F: mov     ebp, eax
0x869B11: cmp     edi, [ebp+0]
0x869B14: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x869B19: jz      short loc_869B3A
0x869B1B: test    edi, edi
0x869B1D: jz      short loc_869B2B
0x869B1F: add     [edi+5Ch], ebx
0x869B22: jnz     short loc_869B2B
0x869B24: mov     ecx, edi
0x869B26: call    sub_772560
0x869B2B: mov     edi, [ebp+0]
0x869B2E: test    edi, edi
0x869B30: mov     [esp+30h+a3], edi
0x869B34: jz      short loc_869B3A
0x869B36: add     dword ptr [edi+5Ch], 1
0x869B3A: mov     eax, [esp+30h+var_10]
0x869B3E: test    eax, eax
0x869B40: mov     byte ptr [esp+30h+var_4], 1
0x869B45: jz      short loc_869B59
0x869B47: add     [eax+5Ch], ebx
0x869B4A: mov     ecx, eax
0x869B4C: add     eax, 5Ch ; '\'
0x869B4F: cmp     dword ptr [eax], 0
0x869B52: jnz     short loc_869B59
0x869B54: call    sub_772560
0x869B59: push    2
0x869B5B: push    1
0x869B5D: push    6
0x869B5F: push    edi
0x869B60: call    sub_801110
0x869B65: add     esp, 10h
0x869B68: push    edi; a3
0x869B69: push    6; a2
0x869B6B: mov     ecx, esi; this
0x869B6D: call    sub_760010
0x869B72: lea     edx, [esp+30h+var_10]
0x869B76: push    edx
0x869B77: call    sub_772630
0x869B7C: add     esp, 4
0x869B7F: mov     ebp, eax
0x869B81: cmp     edi, [ebp+0]
0x869B84: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x869B89: jz      short loc_869BAA
0x869B8B: test    edi, edi
0x869B8D: jz      short loc_869B9B
0x869B8F: add     [edi+5Ch], ebx
0x869B92: jnz     short loc_869B9B
0x869B94: mov     ecx, edi
0x869B96: call    sub_772560
0x869B9B: mov     edi, [ebp+0]
0x869B9E: test    edi, edi
0x869BA0: mov     [esp+30h+a3], edi
0x869BA4: jz      short loc_869BAA
0x869BA6: add     dword ptr [edi+5Ch], 1
0x869BAA: mov     eax, [esp+30h+var_10]
0x869BAE: test    eax, eax
0x869BB0: mov     byte ptr [esp+30h+var_4], 1
0x869BB5: jz      short loc_869BC9
0x869BB7: add     [eax+5Ch], ebx
0x869BBA: mov     ecx, eax
0x869BBC: add     eax, 5Ch ; '\'
0x869BBF: cmp     dword ptr [eax], 0
0x869BC2: jnz     short loc_869BC9
0x869BC4: call    sub_772560
0x869BC9: push    0
0x869BCB: push    3
0x869BCD: push    7
0x869BCF: push    edi
0x869BD0: call    sub_801110
0x869BD5: add     esp, 10h
0x869BD8: push    edi; a3
0x869BD9: push    7; a2
0x869BDB: mov     ecx, esi; this
0x869BDD: call    sub_760010
0x869BE2: mov     eax, [esp+30h+var_18]
0x869BE6: mov     ebx, [eax+0A0h]
0x869BEC: mov     ebp, [esi+58h]
0x869BEF: cmp     ebp, ebx
0x869BF1: jz      short loc_869C25
0x869BF3: test    ebp, ebp
0x869BF5: jz      short loc_869C14
0x869BF7: lea     ecx, [ebp+4]
0x869BFA: push    ecx; lpAddend
0x869BFB: call    dword ptr ds:0A2807Ch
0x869C01: test    eax, eax
0x869C03: jnz     short loc_869C14
0x869C05: test    ebp, ebp
0x869C07: jz      short loc_869C14
0x869C09: mov     edx, [ebp+0]
0x869C0C: mov     eax, [edx]
0x869C0E: push    1
0x869C10: mov     ecx, ebp
0x869C12: call    eax
0x869C14: test    ebx, ebx
0x869C16: mov     [esi+58h], ebx
0x869C19: jz      short loc_869C25
0x869C1B: add     ebx, 4
0x869C1E: push    ebx; lpAddend
0x869C1F: call    dword ptr ds:0A28078h
0x869C25: mov     ecx, [esp+30h+var_18]
0x869C29: mov     ebx, [ecx+130h]
0x869C2F: mov     ebp, [esi+44h]
0x869C32: cmp     ebp, ebx
0x869C34: jz      short loc_869C68
0x869C36: test    ebp, ebp
0x869C38: jz      short loc_869C57
0x869C3A: lea     edx, [ebp+4]
0x869C3D: push    edx; lpAddend
0x869C3E: call    dword ptr ds:0A2807Ch
0x869C44: test    eax, eax
0x869C46: jnz     short loc_869C57
0x869C48: test    ebp, ebp
0x869C4A: jz      short loc_869C57
0x869C4C: mov     eax, [ebp+0]
0x869C4F: mov     edx, [eax]
0x869C51: push    1
0x869C53: mov     ecx, ebp
0x869C55: call    edx
0x869C57: test    ebx, ebx
0x869C59: mov     [esi+44h], ebx
0x869C5C: jz      short loc_869C68
0x869C5E: add     ebx, 4
0x869C61: push    ebx; lpAddend
0x869C62: call    dword ptr ds:0A28078h
0x869C68: cmp     dword ptr [esi+30h], 0
0x869C6C: jnz     short loc_869C76
0x869C6E: call    sub_772DF0
0x869C73: mov     [esi+30h], eax
0x869C76: mov     ecx, [esi+30h]
0x869C79: push    0
0x869C7B: push    0
0x869C7D: push    1Bh
0x869C7F: call    sub_772CD0
0x869C84: cmp     dword ptr [esi+30h], 0
0x869C88: jnz     short loc_869C92
0x869C8A: call    sub_772DF0
0x869C8F: mov     [esi+30h], eax
0x869C92: mov     ecx, [esi+30h]
0x869C95: push    0
0x869C97: push    0
0x869C99: push    0Fh
0x869C9B: call    sub_772CD0
0x869CA0: cmp     dword ptr [esi+30h], 0
0x869CA4: jnz     short loc_869CAE
0x869CA6: call    sub_772DF0
0x869CAB: mov     [esi+30h], eax
0x869CAE: mov     ecx, [esi+30h]
0x869CB1: push    0
0x869CB3: push    1
0x869CB5: push    7
0x869CB7: call    sub_772CD0
0x869CBC: cmp     dword ptr [esi+30h], 0
0x869CC0: jnz     short loc_869CCA
0x869CC2: call    sub_772DF0
0x869CC7: mov     [esi+30h], eax
0x869CCA: mov     ecx, [esi+30h]
0x869CCD: push    0
0x869CCF: push    4
0x869CD1: push    17h
0x869CD3: call    sub_772CD0
0x869CD8: cmp     dword ptr [esi+30h], 0
0x869CDC: jnz     short loc_869CE6
0x869CDE: call    sub_772DF0
0x869CE3: mov     [esi+30h], eax
0x869CE6: mov     ecx, [esi+30h]
0x869CE9: push    0
0x869CEB: push    1
0x869CED: push    0Eh
0x869CEF: call    sub_772CD0
0x869CF4: cmp     dword ptr [esi+30h], 0
0x869CF8: jnz     short loc_869D02
0x869CFA: call    sub_772DF0
0x869CFF: mov     [esi+30h], eax
0x869D02: mov     ecx, [esi+30h]
0x869D05: push    0
0x869D07: push    0
0x869D09: push    34h ; '4'
0x869D0B: call    sub_772CD0
0x869D10: or      ebx, 0FFFFFFFFh
0x869D13: cmp     esi, ds:0B47670h
0x869D19: mov     dword ptr ds:0B43D24h, 78088h
0x869D23: mov     dword ptr ds:0B443B4h, 18Ch
0x869D2D: jz      short loc_869D4D
0x869D2F: add     [esi+60h], ebx
0x869D32: jnz     short loc_869D3B
0x869D34: mov     ecx, esi
0x869D36: call    sub_7604D0
0x869D3B: mov     esi, ds:0B47670h
0x869D41: test    esi, esi
0x869D43: mov     [esp+30h+var_14], esi
0x869D47: jz      short loc_869D4D
0x869D49: add     dword ptr [esi+60h], 1
0x869D4D: cmp     dword ptr [esi+18h], 8
0x869D51: jnb     loc_86A0E4
0x869D57: lea     eax, [esp+30h+var_10]
0x869D5B: push    eax
0x869D5C: call    sub_772630
0x869D61: add     esp, 4
0x869D64: mov     ebp, eax
0x869D66: cmp     edi, [ebp+0]
0x869D69: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x869D6E: jz      short loc_869D8F
0x869D70: test    edi, edi
0x869D72: jz      short loc_869D80
0x869D74: add     [edi+5Ch], ebx
0x869D77: jnz     short loc_869D80
0x869D79: mov     ecx, edi
0x869D7B: call    sub_772560
0x869D80: mov     edi, [ebp+0]
0x869D83: test    edi, edi
0x869D85: mov     [esp+30h+a3], edi
0x869D89: jz      short loc_869D8F
0x869D8B: add     dword ptr [edi+5Ch], 1
0x869D8F: mov     eax, [esp+30h+var_10]
0x869D93: test    eax, eax
0x869D95: mov     byte ptr [esp+30h+var_4], 1
0x869D9A: jz      short loc_869DAE
0x869D9C: add     [eax+5Ch], ebx
0x869D9F: mov     ecx, eax
0x869DA1: add     eax, 5Ch ; '\'
0x869DA4: cmp     dword ptr [eax], 0
0x869DA7: jnz     short loc_869DAE
0x869DA9: call    sub_772560
0x869DAE: push    2
0x869DB0: push    1
0x869DB2: push    0
0x869DB4: push    edi
0x869DB5: call    sub_801110
0x869DBA: add     esp, 10h
0x869DBD: push    edi; a3
0x869DBE: push    0; a2
0x869DC0: mov     ecx, esi; this
0x869DC2: call    sub_760010
0x869DC7: lea     ecx, [esp+30h+var_10]
0x869DCB: push    ecx
0x869DCC: call    sub_772630
0x869DD1: add     esp, 4
0x869DD4: mov     ebp, eax
0x869DD6: cmp     edi, [ebp+0]
0x869DD9: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x869DDE: jz      short loc_869DFF
0x869DE0: test    edi, edi
0x869DE2: jz      short loc_869DF0
0x869DE4: add     [edi+5Ch], ebx
0x869DE7: jnz     short loc_869DF0
0x869DE9: mov     ecx, edi
0x869DEB: call    sub_772560
0x869DF0: mov     edi, [ebp+0]
0x869DF3: test    edi, edi
0x869DF5: mov     [esp+30h+a3], edi
0x869DF9: jz      short loc_869DFF
0x869DFB: add     dword ptr [edi+5Ch], 1
0x869DFF: mov     eax, [esp+30h+var_10]
0x869E03: test    eax, eax
0x869E05: mov     byte ptr [esp+30h+var_4], 1
0x869E0A: jz      short loc_869E1E
0x869E0C: add     [eax+5Ch], ebx
0x869E0F: mov     ecx, eax
0x869E11: add     eax, 5Ch ; '\'
0x869E14: cmp     dword ptr [eax], 0
0x869E17: jnz     short loc_869E1E
0x869E19: call    sub_772560
0x869E1E: push    2
0x869E20: push    1
0x869E22: push    1
0x869E24: push    edi
0x869E25: call    sub_801110
0x869E2A: add     esp, 10h
0x869E2D: push    edi; a3
0x869E2E: push    1; a2
0x869E30: mov     ecx, esi; this
0x869E32: call    sub_760010
0x869E37: lea     edx, [esp+30h+var_10]
0x869E3B: push    edx
0x869E3C: call    sub_772630
0x869E41: add     esp, 4
0x869E44: mov     ebp, eax
0x869E46: cmp     edi, [ebp+0]
0x869E49: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x869E4E: jz      short loc_869E6F
0x869E50: test    edi, edi
0x869E52: jz      short loc_869E60
0x869E54: add     [edi+5Ch], ebx
0x869E57: jnz     short loc_869E60
0x869E59: mov     ecx, edi
0x869E5B: call    sub_772560
0x869E60: mov     edi, [ebp+0]
0x869E63: test    edi, edi
0x869E65: mov     [esp+30h+a3], edi
0x869E69: jz      short loc_869E6F
0x869E6B: add     dword ptr [edi+5Ch], 1
0x869E6F: mov     eax, [esp+30h+var_10]
0x869E73: test    eax, eax
0x869E75: mov     byte ptr [esp+30h+var_4], 1
0x869E7A: jz      short loc_869E8E
0x869E7C: add     [eax+5Ch], ebx
0x869E7F: mov     ecx, eax
0x869E81: add     eax, 5Ch ; '\'
0x869E84: cmp     dword ptr [eax], 0
0x869E87: jnz     short loc_869E8E
0x869E89: call    sub_772560
0x869E8E: push    2
0x869E90: push    1
0x869E92: push    2
0x869E94: push    edi
0x869E95: call    sub_801110
0x869E9A: add     esp, 10h
0x869E9D: push    edi; a3
0x869E9E: push    2; a2
0x869EA0: mov     ecx, esi; this
0x869EA2: call    sub_760010
0x869EA7: lea     eax, [esp+30h+var_10]
0x869EAB: push    eax
0x869EAC: call    sub_772630
0x869EB1: add     esp, 4
0x869EB4: mov     ebp, eax
0x869EB6: cmp     edi, [ebp+0]
0x869EB9: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x869EBE: jz      short loc_869EDF
0x869EC0: test    edi, edi
0x869EC2: jz      short loc_869ED0
0x869EC4: add     [edi+5Ch], ebx
0x869EC7: jnz     short loc_869ED0
0x869EC9: mov     ecx, edi
0x869ECB: call    sub_772560
0x869ED0: mov     edi, [ebp+0]
0x869ED3: test    edi, edi
0x869ED5: mov     [esp+30h+a3], edi
0x869ED9: jz      short loc_869EDF
0x869EDB: add     dword ptr [edi+5Ch], 1
0x869EDF: mov     eax, [esp+30h+var_10]
0x869EE3: test    eax, eax
0x869EE5: mov     byte ptr [esp+30h+var_4], 1
0x869EEA: jz      short loc_869EFE
0x869EEC: add     [eax+5Ch], ebx
0x869EEF: mov     ecx, eax
0x869EF1: add     eax, 5Ch ; '\'
0x869EF4: cmp     dword ptr [eax], 0
0x869EF7: jnz     short loc_869EFE
0x869EF9: call    sub_772560
0x869EFE: push    2
0x869F00: push    1
0x869F02: push    3
0x869F04: push    edi
0x869F05: call    sub_801110
0x869F0A: add     esp, 10h
0x869F0D: push    edi; a3
0x869F0E: push    3; a2
0x869F10: mov     ecx, esi; this
0x869F12: call    sub_760010
0x869F17: lea     ecx, [esp+30h+var_10]
0x869F1B: push    ecx
0x869F1C: call    sub_772630
0x869F21: add     esp, 4
0x869F24: mov     ebp, eax
0x869F26: cmp     edi, [ebp+0]
0x869F29: mov     byte ptr [esp+30h+var_4], 26h ; '&'
0x869F2E: jz      short loc_869F4F
0x869F30: test    edi, edi
0x869F32: jz      short loc_869F40
0x869F34: add     [edi+5Ch], ebx
0x869F37: jnz     short loc_869F40
0x869F39: mov     ecx, edi
0x869F3B: call    sub_772560
0x869F40: mov     edi, [ebp+0]
0x869F43: test    edi, edi
0x869F45: mov     [esp+30h+a3], edi
0x869F49: jz      short loc_869F4F
0x869F4B: add     dword ptr [edi+5Ch], 1
0x869F4F: mov     eax, [esp+30h+var_10]
0x869F53: test    eax, eax
0x869F55: mov     byte ptr [esp+30h+var_4], 1
0x869F5A: jz      short loc_869F6E
0x869F5C: add     [eax+5Ch], ebx
0x869F5F: mov     ecx, eax
0x869F61: add     eax, 5Ch ; '\'
0x869F64: cmp     dword ptr [eax], 0
0x869F67: jnz     short loc_869F6E
0x869F69: call    sub_772560
0x869F6E: push    2
0x869F70: push    1
0x869F72: push    4
0x869F74: push    edi
0x869F75: call    sub_801110
0x869F7A: add     esp, 10h
0x869F7D: push    edi; a3
0x869F7E: push    4; a2
0x869F80: mov     ecx, esi; this
0x869F82: call    sub_760010
0x869F87: lea     edx, [esp+30h+var_10]
0x869F8B: push    edx
0x869F8C: call    sub_772630
0x869F91: add     esp, 4
0x869F94: mov     ebp, eax
0x869F96: cmp     edi, [ebp+0]
0x869F99: mov     byte ptr [esp+30h+var_4], 27h ; '''
0x869F9E: jz      short loc_869FBF
0x869FA0: test    edi, edi
0x869FA2: jz      short loc_869FB0
0x869FA4: add     [edi+5Ch], ebx
0x869FA7: jnz     short loc_869FB0
0x869FA9: mov     ecx, edi
0x869FAB: call    sub_772560
0x869FB0: mov     edi, [ebp+0]
0x869FB3: test    edi, edi
0x869FB5: mov     [esp+30h+a3], edi
0x869FB9: jz      short loc_869FBF
0x869FBB: add     dword ptr [edi+5Ch], 1
0x869FBF: mov     eax, [esp+30h+var_10]
0x869FC3: test    eax, eax
0x869FC5: mov     byte ptr [esp+30h+var_4], 1
0x869FCA: jz      short loc_869FDE
0x869FCC: add     [eax+5Ch], ebx
0x869FCF: mov     ecx, eax
0x869FD1: add     eax, 5Ch ; '\'
0x869FD4: cmp     dword ptr [eax], 0
0x869FD7: jnz     short loc_869FDE
0x869FD9: call    sub_772560
0x869FDE: push    0
0x869FE0: push    3
0x869FE2: push    5
0x869FE4: push    edi
0x869FE5: call    sub_801110
0x869FEA: mov     eax, ds:0B43110h
0x869FEF: add     esp, 10h
0x869FF2: push    eax; a2
0x869FF3: mov     ecx, edi; this
0x869FF5: call    sub_76C910
0x869FFA: push    edi; a3
0x869FFB: push    5; a2
0x869FFD: mov     ecx, esi; this
0x869FFF: call    sub_760010
0x86A004: lea     ecx, [esp+30h+var_10]
0x86A008: push    ecx
0x86A009: call    sub_772630
0x86A00E: add     esp, 4
0x86A011: mov     ebp, eax
0x86A013: cmp     edi, [ebp+0]
0x86A016: mov     byte ptr [esp+30h+var_4], 28h ; '('
0x86A01B: jz      short loc_86A03C
0x86A01D: test    edi, edi
0x86A01F: jz      short loc_86A02D
0x86A021: add     [edi+5Ch], ebx
0x86A024: jnz     short loc_86A02D
0x86A026: mov     ecx, edi
0x86A028: call    sub_772560
0x86A02D: mov     edi, [ebp+0]
0x86A030: test    edi, edi
0x86A032: mov     [esp+30h+a3], edi
0x86A036: jz      short loc_86A03C
0x86A038: add     dword ptr [edi+5Ch], 1
0x86A03C: mov     eax, [esp+30h+var_10]
0x86A040: test    eax, eax
0x86A042: mov     byte ptr [esp+30h+var_4], 1
0x86A047: jz      short loc_86A05B
0x86A049: add     [eax+5Ch], ebx
0x86A04C: mov     ecx, eax
0x86A04E: add     eax, 5Ch ; '\'
0x86A051: cmp     dword ptr [eax], 0
0x86A054: jnz     short loc_86A05B
0x86A056: call    sub_772560
0x86A05B: push    2
0x86A05D: push    1
0x86A05F: push    6
0x86A061: push    edi
0x86A062: call    sub_801110
0x86A067: add     esp, 10h
0x86A06A: push    edi; a3
0x86A06B: push    6; a2
0x86A06D: mov     ecx, esi; this
0x86A06F: call    sub_760010
0x86A074: lea     edx, [esp+30h+var_10]
0x86A078: push    edx
0x86A079: call    sub_772630
0x86A07E: add     esp, 4
0x86A081: mov     ebp, eax
0x86A083: cmp     edi, [ebp+0]
0x86A086: mov     byte ptr [esp+30h+var_4], 29h ; ')'
0x86A08B: jz      short loc_86A0AC
0x86A08D: test    edi, edi
0x86A08F: jz      short loc_86A09D
0x86A091: add     [edi+5Ch], ebx
0x86A094: jnz     short loc_86A09D
0x86A096: mov     ecx, edi
0x86A098: call    sub_772560
0x86A09D: mov     edi, [ebp+0]
0x86A0A0: test    edi, edi
0x86A0A2: mov     [esp+30h+a3], edi
0x86A0A6: jz      short loc_86A0AC
0x86A0A8: add     dword ptr [edi+5Ch], 1
0x86A0AC: mov     eax, [esp+30h+var_10]
0x86A0B0: test    eax, eax
0x86A0B2: mov     byte ptr [esp+30h+var_4], 1
0x86A0B7: jz      short loc_86A0CB
0x86A0B9: add     [eax+5Ch], ebx
0x86A0BC: mov     ecx, eax
0x86A0BE: add     eax, 5Ch ; '\'
0x86A0C1: cmp     dword ptr [eax], 0
0x86A0C4: jnz     short loc_86A0CB
0x86A0C6: call    sub_772560
0x86A0CB: push    0
0x86A0CD: push    3
0x86A0CF: push    7
0x86A0D1: push    edi
0x86A0D2: call    sub_801110
0x86A0D7: add     esp, 10h
0x86A0DA: push    edi; a3
0x86A0DB: push    7; a2
0x86A0DD: mov     ecx, esi; this
0x86A0DF: call    sub_760010
0x86A0E4: mov     ebp, [esp+30h+var_18]
0x86A0E8: mov     eax, [ebp+0A4h]
0x86A0EE: push    eax; a2
0x86A0EF: mov     ecx, esi; this
0x86A0F1: call    sub_7AECB0
0x86A0F6: mov     eax, [ebp+134h]
0x86A0FC: push    eax; a2
0x86A0FD: mov     ecx, esi; this
0x86A0FF: call    sub_7AEC60
0x86A104: cmp     dword ptr [esi+30h], 0
0x86A108: jnz     short loc_86A112
0x86A10A: call    sub_772DF0
0x86A10F: mov     [esi+30h], eax
0x86A112: mov     ecx, [esi+30h]
0x86A115: push    0
0x86A117: push    0
0x86A119: push    1Bh
0x86A11B: call    sub_772CD0
0x86A120: cmp     dword ptr [esi+30h], 0
0x86A124: jnz     short loc_86A12E
0x86A126: call    sub_772DF0
0x86A12B: mov     [esi+30h], eax
0x86A12E: mov     ecx, [esi+30h]
0x86A131: push    0
0x86A133: push    0
0x86A135: push    0Fh
0x86A137: call    sub_772CD0
0x86A13C: cmp     dword ptr [esi+30h], 0
0x86A140: jnz     short loc_86A14A
0x86A142: call    sub_772DF0
0x86A147: mov     [esi+30h], eax
0x86A14A: mov     ecx, [esi+30h]
0x86A14D: push    0
0x86A14F: push    1
0x86A151: push    7
0x86A153: call    sub_772CD0
0x86A158: cmp     dword ptr [esi+30h], 0
0x86A15C: jnz     short loc_86A166
0x86A15E: call    sub_772DF0
0x86A163: mov     [esi+30h], eax
0x86A166: mov     ecx, [esi+30h]
0x86A169: push    0
0x86A16B: push    4
0x86A16D: push    17h
0x86A16F: call    sub_772CD0
0x86A174: cmp     dword ptr [esi+30h], 0
0x86A178: jnz     short loc_86A182
0x86A17A: call    sub_772DF0
0x86A17F: mov     [esi+30h], eax
0x86A182: mov     ecx, [esi+30h]
0x86A185: push    0
0x86A187: push    1
0x86A189: push    0Eh
0x86A18B: call    sub_772CD0
0x86A190: cmp     dword ptr [esi+30h], 0
0x86A194: jnz     short loc_86A19E
0x86A196: call    sub_772DF0
0x86A19B: mov     [esi+30h], eax
0x86A19E: mov     ecx, [esi+30h]
0x86A1A1: push    0
0x86A1A3: push    0
0x86A1A5: push    34h ; '4'
0x86A1A7: call    sub_772CD0
0x86A1AC: cmp     esi, ds:0B47674h
0x86A1B2: mov     ebx, 380F2h
0x86A1B7: mov     ds:0B43D40h, ebx
0x86A1BD: mov     dword ptr ds:0B443D0h, 10Ch
0x86A1C7: jz      short loc_86A1E8
0x86A1C9: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86A1CD: jnz     short loc_86A1D6
0x86A1CF: mov     ecx, esi
0x86A1D1: call    sub_7604D0
0x86A1D6: mov     esi, ds:0B47674h
0x86A1DC: test    esi, esi
0x86A1DE: mov     [esp+30h+var_14], esi
0x86A1E2: jz      short loc_86A1E8
0x86A1E4: add     dword ptr [esi+60h], 1
0x86A1E8: cmp     dword ptr [esi+18h], 8
0x86A1EC: jnb     loc_86A512
0x86A1F2: lea     eax, [esp+30h+var_10]
0x86A1F6: push    eax
0x86A1F7: call    sub_772630
0x86A1FC: add     esp, 4
0x86A1FF: mov     ebp, eax
0x86A201: cmp     edi, [ebp+0]
0x86A204: mov     byte ptr [esp+30h+var_4], 2Ah ; '*'
0x86A209: jz      short loc_86A22B
0x86A20B: test    edi, edi
0x86A20D: jz      short loc_86A21C
0x86A20F: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86A213: jnz     short loc_86A21C
0x86A215: mov     ecx, edi
0x86A217: call    sub_772560
0x86A21C: mov     edi, [ebp+0]
0x86A21F: test    edi, edi
0x86A221: mov     [esp+30h+a3], edi
0x86A225: jz      short loc_86A22B
0x86A227: add     dword ptr [edi+5Ch], 1
0x86A22B: mov     eax, [esp+30h+var_10]
0x86A22F: test    eax, eax
0x86A231: mov     byte ptr [esp+30h+var_4], 1
0x86A236: jz      short loc_86A24B
0x86A238: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A23C: mov     ecx, eax
0x86A23E: add     eax, 5Ch ; '\'
0x86A241: cmp     dword ptr [eax], 0
0x86A244: jnz     short loc_86A24B
0x86A246: call    sub_772560
0x86A24B: push    2
0x86A24D: push    1
0x86A24F: push    0
0x86A251: push    edi
0x86A252: call    sub_801110
0x86A257: add     esp, 10h
0x86A25A: push    edi; a3
0x86A25B: push    0; a2
0x86A25D: mov     ecx, esi; this
0x86A25F: call    sub_760010
0x86A264: lea     ecx, [esp+30h+var_10]
0x86A268: push    ecx
0x86A269: call    sub_772630
0x86A26E: add     esp, 4
0x86A271: mov     ebp, eax
0x86A273: cmp     edi, [ebp+0]
0x86A276: mov     byte ptr [esp+30h+var_4], 2Bh ; '+'
0x86A27B: jz      short loc_86A29D
0x86A27D: test    edi, edi
0x86A27F: jz      short loc_86A28E
0x86A281: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86A285: jnz     short loc_86A28E
0x86A287: mov     ecx, edi
0x86A289: call    sub_772560
0x86A28E: mov     edi, [ebp+0]
0x86A291: test    edi, edi
0x86A293: mov     [esp+30h+a3], edi
0x86A297: jz      short loc_86A29D
0x86A299: add     dword ptr [edi+5Ch], 1
0x86A29D: mov     eax, [esp+30h+var_10]
0x86A2A1: test    eax, eax
0x86A2A3: mov     byte ptr [esp+30h+var_4], 1
0x86A2A8: jz      short loc_86A2BD
0x86A2AA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A2AE: mov     ecx, eax
0x86A2B0: add     eax, 5Ch ; '\'
0x86A2B3: cmp     dword ptr [eax], 0
0x86A2B6: jnz     short loc_86A2BD
0x86A2B8: call    sub_772560
0x86A2BD: push    2
0x86A2BF: push    1
0x86A2C1: push    1
0x86A2C3: push    edi
0x86A2C4: call    sub_801110
0x86A2C9: add     esp, 10h
0x86A2CC: push    edi; a3
0x86A2CD: push    1; a2
0x86A2CF: mov     ecx, esi; this
0x86A2D1: call    sub_760010
0x86A2D6: lea     edx, [esp+30h+var_10]
0x86A2DA: push    edx
0x86A2DB: call    sub_772630
0x86A2E0: add     esp, 4
0x86A2E3: mov     ebp, eax
0x86A2E5: cmp     edi, [ebp+0]
0x86A2E8: mov     byte ptr [esp+30h+var_4], 2Ch ; ','
0x86A2ED: jz      short loc_86A30F
0x86A2EF: test    edi, edi
0x86A2F1: jz      short loc_86A300
0x86A2F3: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86A2F7: jnz     short loc_86A300
0x86A2F9: mov     ecx, edi
0x86A2FB: call    sub_772560
0x86A300: mov     edi, [ebp+0]
0x86A303: test    edi, edi
0x86A305: mov     [esp+30h+a3], edi
0x86A309: jz      short loc_86A30F
0x86A30B: add     dword ptr [edi+5Ch], 1
0x86A30F: mov     eax, [esp+30h+var_10]
0x86A313: test    eax, eax
0x86A315: mov     byte ptr [esp+30h+var_4], 1
0x86A31A: jz      short loc_86A32F
0x86A31C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A320: mov     ecx, eax
0x86A322: add     eax, 5Ch ; '\'
0x86A325: cmp     dword ptr [eax], 0
0x86A328: jnz     short loc_86A32F
0x86A32A: call    sub_772560
0x86A32F: push    2
0x86A331: push    1
0x86A333: push    2
0x86A335: push    edi
0x86A336: call    sub_801110
0x86A33B: add     esp, 10h
0x86A33E: push    edi; a3
0x86A33F: push    2; a2
0x86A341: mov     ecx, esi; this
0x86A343: call    sub_760010
0x86A348: lea     eax, [esp+30h+var_10]
0x86A34C: push    eax
0x86A34D: call    sub_772630
0x86A352: add     esp, 4
0x86A355: push    eax
0x86A356: lea     ecx, [esp+34h+a3]
0x86A35A: mov     byte ptr [esp+34h+var_4], 2Dh ; '-'
0x86A35F: call    sub_75FAE0
0x86A364: mov     eax, [esp+30h+var_10]
0x86A368: test    eax, eax
0x86A36A: mov     byte ptr [esp+30h+var_4], 1
0x86A36F: jz      short loc_86A384
0x86A371: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A375: mov     ecx, eax
0x86A377: add     eax, 5Ch ; '\'
0x86A37A: cmp     dword ptr [eax], 0
0x86A37D: jnz     short loc_86A384
0x86A37F: call    sub_772560
0x86A384: mov     edi, [esp+30h+a3]
0x86A388: push    2
0x86A38A: push    1
0x86A38C: push    3
0x86A38E: push    edi
0x86A38F: call    sub_801110
0x86A394: add     esp, 10h
0x86A397: push    edi; a3
0x86A398: push    3; a2
0x86A39A: mov     ecx, esi; this
0x86A39C: call    sub_760010
0x86A3A1: lea     ecx, [esp+30h+var_10]
0x86A3A5: push    ecx
0x86A3A6: call    sub_772630
0x86A3AB: add     esp, 4
0x86A3AE: push    eax
0x86A3AF: lea     ecx, [esp+34h+a3]
0x86A3B3: mov     byte ptr [esp+34h+var_4], 2Eh ; '.'
0x86A3B8: call    sub_75FAE0
0x86A3BD: mov     eax, [esp+30h+var_10]
0x86A3C1: test    eax, eax
0x86A3C3: mov     byte ptr [esp+30h+var_4], 1
0x86A3C8: jz      short loc_86A3DD
0x86A3CA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A3CE: mov     ecx, eax
0x86A3D0: add     eax, 5Ch ; '\'
0x86A3D3: cmp     dword ptr [eax], 0
0x86A3D6: jnz     short loc_86A3DD
0x86A3D8: call    sub_772560
0x86A3DD: mov     edi, [esp+30h+a3]
0x86A3E1: push    2
0x86A3E3: push    1
0x86A3E5: push    4
0x86A3E7: push    edi
0x86A3E8: call    sub_801110
0x86A3ED: add     esp, 10h
0x86A3F0: push    edi; a3
0x86A3F1: push    4; a2
0x86A3F3: mov     ecx, esi; this
0x86A3F5: call    sub_760010
0x86A3FA: lea     edx, [esp+30h+var_10]
0x86A3FE: push    edx
0x86A3FF: call    sub_772630
0x86A404: add     esp, 4
0x86A407: push    eax
0x86A408: lea     ecx, [esp+34h+a3]
0x86A40C: mov     byte ptr [esp+34h+var_4], 2Fh ; '/'
0x86A411: call    sub_75FAE0
0x86A416: mov     eax, [esp+30h+var_10]
0x86A41A: test    eax, eax
0x86A41C: mov     byte ptr [esp+30h+var_4], 1
0x86A421: jz      short loc_86A436
0x86A423: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A427: mov     ecx, eax
0x86A429: add     eax, 5Ch ; '\'
0x86A42C: cmp     dword ptr [eax], 0
0x86A42F: jnz     short loc_86A436
0x86A431: call    sub_772560
0x86A436: mov     edi, [esp+30h+a3]
0x86A43A: push    0
0x86A43C: push    3
0x86A43E: push    5
0x86A440: push    edi
0x86A441: call    sub_801110
0x86A446: mov     eax, ds:0B43110h
0x86A44B: add     esp, 10h
0x86A44E: push    eax; a2
0x86A44F: mov     ecx, edi; this
0x86A451: call    sub_76C910
0x86A456: push    edi; a3
0x86A457: push    5; a2
0x86A459: mov     ecx, esi; this
0x86A45B: call    sub_760010
0x86A460: lea     ecx, [esp+30h+var_10]
0x86A464: push    ecx
0x86A465: call    sub_772630
0x86A46A: add     esp, 4
0x86A46D: push    eax
0x86A46E: lea     ecx, [esp+34h+a3]
0x86A472: mov     byte ptr [esp+34h+var_4], 30h ; '0'
0x86A477: call    sub_75FAE0
0x86A47C: mov     eax, [esp+30h+var_10]
0x86A480: test    eax, eax
0x86A482: mov     byte ptr [esp+30h+var_4], 1
0x86A487: jz      short loc_86A49C
0x86A489: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A48D: mov     ecx, eax
0x86A48F: add     eax, 5Ch ; '\'
0x86A492: cmp     dword ptr [eax], 0
0x86A495: jnz     short loc_86A49C
0x86A497: call    sub_772560
0x86A49C: mov     edi, [esp+30h+a3]
0x86A4A0: push    2
0x86A4A2: push    1
0x86A4A4: push    6
0x86A4A6: push    edi
0x86A4A7: call    sub_801110
0x86A4AC: add     esp, 10h
0x86A4AF: push    edi; a3
0x86A4B0: push    6; a2
0x86A4B2: mov     ecx, esi; this
0x86A4B4: call    sub_760010
0x86A4B9: lea     edx, [esp+30h+var_10]
0x86A4BD: push    edx
0x86A4BE: call    sub_772630
0x86A4C3: add     esp, 4
0x86A4C6: push    eax
0x86A4C7: lea     ecx, [esp+34h+a3]
0x86A4CB: mov     byte ptr [esp+34h+var_4], 31h ; '1'
0x86A4D0: call    sub_75FAE0
0x86A4D5: mov     eax, [esp+30h+var_10]
0x86A4D9: test    eax, eax
0x86A4DB: mov     byte ptr [esp+30h+var_4], 1
0x86A4E0: jz      short loc_86A4F5
0x86A4E2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A4E6: mov     ecx, eax
0x86A4E8: add     eax, 5Ch ; '\'
0x86A4EB: cmp     dword ptr [eax], 0
0x86A4EE: jnz     short loc_86A4F5
0x86A4F0: call    sub_772560
0x86A4F5: mov     edi, [esp+30h+a3]
0x86A4F9: push    0
0x86A4FB: push    3
0x86A4FD: push    7
0x86A4FF: push    edi
0x86A500: call    sub_801110
0x86A505: add     esp, 10h
0x86A508: push    edi; a3
0x86A509: push    7; a2
0x86A50B: mov     ecx, esi; this
0x86A50D: call    sub_760010
0x86A512: mov     ebp, [esp+30h+var_18]
0x86A516: mov     eax, [ebp+0A4h]
0x86A51C: push    eax; a2
0x86A51D: mov     ecx, esi; this
0x86A51F: call    sub_7AECB0
0x86A524: mov     eax, [ebp+138h]
0x86A52A: push    eax; a2
0x86A52B: mov     ecx, esi; this
0x86A52D: call    sub_7AEC60
0x86A532: cmp     dword ptr [esi+30h], 0
0x86A536: jnz     short loc_86A540
0x86A538: call    sub_772DF0
0x86A53D: mov     [esi+30h], eax
0x86A540: mov     ecx, [esi+30h]
0x86A543: push    0
0x86A545: push    0
0x86A547: push    1Bh
0x86A549: call    sub_772CD0
0x86A54E: cmp     dword ptr [esi+30h], 0
0x86A552: jnz     short loc_86A55C
0x86A554: call    sub_772DF0
0x86A559: mov     [esi+30h], eax
0x86A55C: mov     ecx, [esi+30h]
0x86A55F: push    0
0x86A561: push    0
0x86A563: push    0Fh
0x86A565: call    sub_772CD0
0x86A56A: cmp     dword ptr [esi+30h], 0
0x86A56E: jnz     short loc_86A578
0x86A570: call    sub_772DF0
0x86A575: mov     [esi+30h], eax
0x86A578: mov     ecx, [esi+30h]
0x86A57B: push    0
0x86A57D: push    1
0x86A57F: push    7
0x86A581: call    sub_772CD0
0x86A586: cmp     dword ptr [esi+30h], 0
0x86A58A: jnz     short loc_86A594
0x86A58C: call    sub_772DF0
0x86A591: mov     [esi+30h], eax
0x86A594: mov     ecx, [esi+30h]
0x86A597: push    0
0x86A599: push    4
0x86A59B: push    17h
0x86A59D: call    sub_772CD0
0x86A5A2: cmp     dword ptr [esi+30h], 0
0x86A5A6: jnz     short loc_86A5B0
0x86A5A8: call    sub_772DF0
0x86A5AD: mov     [esi+30h], eax
0x86A5B0: mov     ecx, [esi+30h]
0x86A5B3: push    0
0x86A5B5: push    1
0x86A5B7: push    0Eh
0x86A5B9: call    sub_772CD0
0x86A5BE: cmp     dword ptr [esi+30h], 0
0x86A5C2: jnz     short loc_86A5CC
0x86A5C4: call    sub_772DF0
0x86A5C9: mov     [esi+30h], eax
0x86A5CC: mov     ecx, [esi+30h]
0x86A5CF: push    0
0x86A5D1: push    0
0x86A5D3: push    34h ; '4'
0x86A5D5: call    sub_772CD0
0x86A5DA: cmp     esi, ds:0B47678h
0x86A5E0: mov     ds:0B43D44h, ebx
0x86A5E6: mov     dword ptr ds:0B443D4h, 18Ch
0x86A5F0: jz      short loc_86A611
0x86A5F2: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86A5F6: jnz     short loc_86A5FF
0x86A5F8: mov     ecx, esi
0x86A5FA: call    sub_7604D0
0x86A5FF: mov     esi, ds:0B47678h
0x86A605: test    esi, esi
0x86A607: mov     [esp+30h+var_14], esi
0x86A60B: jz      short loc_86A611
0x86A60D: add     dword ptr [esi+60h], 1
0x86A611: cmp     dword ptr [esi+18h], 8
0x86A615: jnb     loc_86A8F0
0x86A61B: lea     eax, [esp+30h+var_10]
0x86A61F: push    eax
0x86A620: call    sub_772630
0x86A625: add     esp, 4
0x86A628: push    eax
0x86A629: lea     ecx, [esp+34h+a3]
0x86A62D: mov     byte ptr [esp+34h+var_4], 32h ; '2'
0x86A632: call    sub_75FAE0
0x86A637: mov     eax, [esp+30h+var_10]
0x86A63B: test    eax, eax
0x86A63D: mov     byte ptr [esp+30h+var_4], 1
0x86A642: jz      short loc_86A657
0x86A644: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A648: mov     ecx, eax
0x86A64A: add     eax, 5Ch ; '\'
0x86A64D: cmp     dword ptr [eax], 0
0x86A650: jnz     short loc_86A657
0x86A652: call    sub_772560
0x86A657: mov     edi, [esp+30h+a3]
0x86A65B: push    2
0x86A65D: push    1
0x86A65F: push    0
0x86A661: push    edi
0x86A662: call    sub_801110
0x86A667: add     esp, 10h
0x86A66A: push    edi; a3
0x86A66B: push    0; a2
0x86A66D: mov     ecx, esi; this
0x86A66F: call    sub_760010
0x86A674: lea     ecx, [esp+30h+var_10]
0x86A678: push    ecx
0x86A679: call    sub_772630
0x86A67E: add     esp, 4
0x86A681: push    eax
0x86A682: lea     ecx, [esp+34h+a3]
0x86A686: mov     byte ptr [esp+34h+var_4], 33h ; '3'
0x86A68B: call    sub_75FAE0
0x86A690: mov     eax, [esp+30h+var_10]
0x86A694: test    eax, eax
0x86A696: mov     byte ptr [esp+30h+var_4], 1
0x86A69B: jz      short loc_86A6B0
0x86A69D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A6A1: mov     ecx, eax
0x86A6A3: add     eax, 5Ch ; '\'
0x86A6A6: cmp     dword ptr [eax], 0
0x86A6A9: jnz     short loc_86A6B0
0x86A6AB: call    sub_772560
0x86A6B0: mov     edi, [esp+30h+a3]
0x86A6B4: push    2
0x86A6B6: push    1
0x86A6B8: push    1
0x86A6BA: push    edi
0x86A6BB: call    sub_801110
0x86A6C0: add     esp, 10h
0x86A6C3: push    edi; a3
0x86A6C4: push    1; a2
0x86A6C6: mov     ecx, esi; this
0x86A6C8: call    sub_760010
0x86A6CD: lea     edx, [esp+30h+var_10]
0x86A6D1: push    edx
0x86A6D2: call    sub_772630
0x86A6D7: add     esp, 4
0x86A6DA: push    eax
0x86A6DB: lea     ecx, [esp+34h+a3]
0x86A6DF: mov     byte ptr [esp+34h+var_4], 34h ; '4'
0x86A6E4: call    sub_75FAE0
0x86A6E9: mov     eax, [esp+30h+var_10]
0x86A6ED: test    eax, eax
0x86A6EF: mov     byte ptr [esp+30h+var_4], 1
0x86A6F4: jz      short loc_86A709
0x86A6F6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A6FA: mov     ecx, eax
0x86A6FC: add     eax, 5Ch ; '\'
0x86A6FF: cmp     dword ptr [eax], 0
0x86A702: jnz     short loc_86A709
0x86A704: call    sub_772560
0x86A709: mov     edi, [esp+30h+a3]
0x86A70D: push    2
0x86A70F: push    1
0x86A711: push    2
0x86A713: push    edi
0x86A714: call    sub_801110
0x86A719: add     esp, 10h
0x86A71C: push    edi; a3
0x86A71D: push    2; a2
0x86A71F: mov     ecx, esi; this
0x86A721: call    sub_760010
0x86A726: lea     eax, [esp+30h+var_10]
0x86A72A: push    eax
0x86A72B: call    sub_772630
0x86A730: add     esp, 4
0x86A733: push    eax
0x86A734: lea     ecx, [esp+34h+a3]
0x86A738: mov     byte ptr [esp+34h+var_4], 35h ; '5'
0x86A73D: call    sub_75FAE0
0x86A742: mov     eax, [esp+30h+var_10]
0x86A746: test    eax, eax
0x86A748: mov     byte ptr [esp+30h+var_4], 1
0x86A74D: jz      short loc_86A762
0x86A74F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A753: mov     ecx, eax
0x86A755: add     eax, 5Ch ; '\'
0x86A758: cmp     dword ptr [eax], 0
0x86A75B: jnz     short loc_86A762
0x86A75D: call    sub_772560
0x86A762: mov     edi, [esp+30h+a3]
0x86A766: push    2
0x86A768: push    1
0x86A76A: push    3
0x86A76C: push    edi
0x86A76D: call    sub_801110
0x86A772: add     esp, 10h
0x86A775: push    edi; a3
0x86A776: push    3; a2
0x86A778: mov     ecx, esi; this
0x86A77A: call    sub_760010
0x86A77F: lea     ecx, [esp+30h+var_10]
0x86A783: push    ecx
0x86A784: call    sub_772630
0x86A789: add     esp, 4
0x86A78C: push    eax
0x86A78D: lea     ecx, [esp+34h+a3]
0x86A791: mov     byte ptr [esp+34h+var_4], 36h ; '6'
0x86A796: call    sub_75FAE0
0x86A79B: mov     eax, [esp+30h+var_10]
0x86A79F: test    eax, eax
0x86A7A1: mov     byte ptr [esp+30h+var_4], 1
0x86A7A6: jz      short loc_86A7BB
0x86A7A8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A7AC: mov     ecx, eax
0x86A7AE: add     eax, 5Ch ; '\'
0x86A7B1: cmp     dword ptr [eax], 0
0x86A7B4: jnz     short loc_86A7BB
0x86A7B6: call    sub_772560
0x86A7BB: mov     edi, [esp+30h+a3]
0x86A7BF: push    2
0x86A7C1: push    1
0x86A7C3: push    4
0x86A7C5: push    edi
0x86A7C6: call    sub_801110
0x86A7CB: add     esp, 10h
0x86A7CE: push    edi; a3
0x86A7CF: push    4; a2
0x86A7D1: mov     ecx, esi; this
0x86A7D3: call    sub_760010
0x86A7D8: lea     edx, [esp+30h+var_10]
0x86A7DC: push    edx
0x86A7DD: call    sub_772630
0x86A7E2: add     esp, 4
0x86A7E5: push    eax
0x86A7E6: lea     ecx, [esp+34h+a3]
0x86A7EA: mov     byte ptr [esp+34h+var_4], 37h ; '7'
0x86A7EF: call    sub_75FAE0
0x86A7F4: mov     eax, [esp+30h+var_10]
0x86A7F8: test    eax, eax
0x86A7FA: mov     byte ptr [esp+30h+var_4], 1
0x86A7FF: jz      short loc_86A814
0x86A801: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A805: mov     ecx, eax
0x86A807: add     eax, 5Ch ; '\'
0x86A80A: cmp     dword ptr [eax], 0
0x86A80D: jnz     short loc_86A814
0x86A80F: call    sub_772560
0x86A814: mov     edi, [esp+30h+a3]
0x86A818: push    0
0x86A81A: push    3
0x86A81C: push    5
0x86A81E: push    edi
0x86A81F: call    sub_801110
0x86A824: mov     eax, ds:0B43110h
0x86A829: add     esp, 10h
0x86A82C: push    eax; a2
0x86A82D: mov     ecx, edi; this
0x86A82F: call    sub_76C910
0x86A834: push    edi; a3
0x86A835: push    5; a2
0x86A837: mov     ecx, esi; this
0x86A839: call    sub_760010
0x86A83E: lea     ecx, [esp+30h+var_10]
0x86A842: push    ecx
0x86A843: call    sub_772630
0x86A848: add     esp, 4
0x86A84B: push    eax
0x86A84C: lea     ecx, [esp+34h+a3]
0x86A850: mov     byte ptr [esp+34h+var_4], 38h ; '8'
0x86A855: call    sub_75FAE0
0x86A85A: mov     eax, [esp+30h+var_10]
0x86A85E: test    eax, eax
0x86A860: mov     byte ptr [esp+30h+var_4], 1
0x86A865: jz      short loc_86A87A
0x86A867: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A86B: mov     ecx, eax
0x86A86D: add     eax, 5Ch ; '\'
0x86A870: cmp     dword ptr [eax], 0
0x86A873: jnz     short loc_86A87A
0x86A875: call    sub_772560
0x86A87A: mov     edi, [esp+30h+a3]
0x86A87E: push    2
0x86A880: push    1
0x86A882: push    6
0x86A884: push    edi
0x86A885: call    sub_801110
0x86A88A: add     esp, 10h
0x86A88D: push    edi; a3
0x86A88E: push    6; a2
0x86A890: mov     ecx, esi; this
0x86A892: call    sub_760010
0x86A897: lea     edx, [esp+30h+var_10]
0x86A89B: push    edx
0x86A89C: call    sub_772630
0x86A8A1: add     esp, 4
0x86A8A4: push    eax
0x86A8A5: lea     ecx, [esp+34h+a3]
0x86A8A9: mov     byte ptr [esp+34h+var_4], 39h ; '9'
0x86A8AE: call    sub_75FAE0
0x86A8B3: mov     eax, [esp+30h+var_10]
0x86A8B7: test    eax, eax
0x86A8B9: mov     byte ptr [esp+30h+var_4], 1
0x86A8BE: jz      short loc_86A8D3
0x86A8C0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86A8C4: mov     ecx, eax
0x86A8C6: add     eax, 5Ch ; '\'
0x86A8C9: cmp     dword ptr [eax], 0
0x86A8CC: jnz     short loc_86A8D3
0x86A8CE: call    sub_772560
0x86A8D3: mov     edi, [esp+30h+a3]
0x86A8D7: push    0
0x86A8D9: push    3
0x86A8DB: push    7
0x86A8DD: push    edi
0x86A8DE: call    sub_801110
0x86A8E3: add     esp, 10h
0x86A8E6: push    edi; a3
0x86A8E7: push    7; a2
0x86A8E9: mov     ecx, esi; this
0x86A8EB: call    sub_760010
0x86A8F0: mov     eax, [ebp+0A8h]
0x86A8F6: push    eax; a2
0x86A8F7: mov     ecx, esi; this
0x86A8F9: call    sub_7AECB0
0x86A8FE: mov     eax, [ebp+134h]
0x86A904: push    eax; a2
0x86A905: mov     ecx, esi; this
0x86A907: call    sub_7AEC60
0x86A90C: cmp     dword ptr [esi+30h], 0
0x86A910: jnz     short loc_86A91A
0x86A912: call    sub_772DF0
0x86A917: mov     [esi+30h], eax
0x86A91A: mov     ecx, [esi+30h]
0x86A91D: push    0
0x86A91F: push    0
0x86A921: push    1Bh
0x86A923: call    sub_772CD0
0x86A928: cmp     dword ptr [esi+30h], 0
0x86A92C: jnz     short loc_86A936
0x86A92E: call    sub_772DF0
0x86A933: mov     [esi+30h], eax
0x86A936: mov     ecx, [esi+30h]
0x86A939: push    0
0x86A93B: push    0
0x86A93D: push    0Fh
0x86A93F: call    sub_772CD0
0x86A944: cmp     dword ptr [esi+30h], 0
0x86A948: jnz     short loc_86A952
0x86A94A: call    sub_772DF0
0x86A94F: mov     [esi+30h], eax
0x86A952: mov     ecx, [esi+30h]
0x86A955: push    0
0x86A957: push    1
0x86A959: push    7
0x86A95B: call    sub_772CD0
0x86A960: cmp     dword ptr [esi+30h], 0
0x86A964: jnz     short loc_86A96E
0x86A966: call    sub_772DF0
0x86A96B: mov     [esi+30h], eax
0x86A96E: mov     ecx, [esi+30h]
0x86A971: push    0
0x86A973: push    4
0x86A975: push    17h
0x86A977: call    sub_772CD0
0x86A97C: cmp     dword ptr [esi+30h], 0
0x86A980: jnz     short loc_86A98A
0x86A982: call    sub_772DF0
0x86A987: mov     [esi+30h], eax
0x86A98A: mov     ecx, [esi+30h]
0x86A98D: push    0
0x86A98F: push    1
0x86A991: push    0Eh
0x86A993: call    sub_772CD0
0x86A998: cmp     dword ptr [esi+30h], 0
0x86A99C: jnz     short loc_86A9A6
0x86A99E: call    sub_772DF0
0x86A9A3: mov     [esi+30h], eax
0x86A9A6: mov     ecx, [esi+30h]
0x86A9A9: push    0
0x86A9AB: push    0
0x86A9AD: push    34h ; '4'
0x86A9AF: call    sub_772CD0
0x86A9B4: cmp     esi, ds:0B4767Ch
0x86A9BA: mov     ebp, 780F8h
0x86A9BF: mov     ds:0B43D44h, ebp
0x86A9C5: mov     dword ptr ds:0B443D4h, 10Ch
0x86A9CF: jz      short loc_86A9F6
0x86A9D1: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86A9D5: jnz     short loc_86A9DE
0x86A9D7: mov     ecx, esi
0x86A9D9: call    sub_7604D0
0x86A9DE: mov     esi, ds:0B4767Ch
0x86A9E4: test    esi, esi
0x86A9E6: mov     [esp+30h+var_14], esi
0x86A9EA: mov     ebx, 1
0x86A9EF: jz      short loc_86A9FB
0x86A9F1: add     [esi+60h], ebx
0x86A9F4: jmp     short loc_86A9FB
0x86A9F6: mov     ebx, 1
0x86A9FB: cmp     dword ptr [esi+18h], 8
0x86A9FF: jnb     loc_86ACD2
0x86AA05: lea     eax, [esp+30h+var_10]
0x86AA09: push    eax
0x86AA0A: call    sub_772630
0x86AA0F: add     esp, 4
0x86AA12: push    eax
0x86AA13: lea     ecx, [esp+34h+a3]
0x86AA17: mov     byte ptr [esp+34h+var_4], 3Ah ; ':'
0x86AA1C: call    sub_75FAE0
0x86AA21: mov     eax, [esp+30h+var_10]
0x86AA25: test    eax, eax
0x86AA27: mov     byte ptr [esp+30h+var_4], 1
0x86AA2C: jz      short loc_86AA41
0x86AA2E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AA32: mov     ecx, eax
0x86AA34: add     eax, 5Ch ; '\'
0x86AA37: cmp     dword ptr [eax], 0
0x86AA3A: jnz     short loc_86AA41
0x86AA3C: call    sub_772560
0x86AA41: mov     edi, [esp+30h+a3]
0x86AA45: push    2
0x86AA47: push    ebx
0x86AA48: push    0
0x86AA4A: push    edi
0x86AA4B: call    sub_801110
0x86AA50: add     esp, 10h
0x86AA53: push    edi; a3
0x86AA54: push    0; a2
0x86AA56: mov     ecx, esi; this
0x86AA58: call    sub_760010
0x86AA5D: lea     ecx, [esp+30h+var_10]
0x86AA61: push    ecx
0x86AA62: call    sub_772630
0x86AA67: add     esp, 4
0x86AA6A: push    eax
0x86AA6B: lea     ecx, [esp+34h+a3]
0x86AA6F: mov     byte ptr [esp+34h+var_4], 3Bh ; ';'
0x86AA74: call    sub_75FAE0
0x86AA79: mov     eax, [esp+30h+var_10]
0x86AA7D: test    eax, eax
0x86AA7F: mov     byte ptr [esp+30h+var_4], 1
0x86AA84: jz      short loc_86AA99
0x86AA86: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AA8A: mov     ecx, eax
0x86AA8C: add     eax, 5Ch ; '\'
0x86AA8F: cmp     dword ptr [eax], 0
0x86AA92: jnz     short loc_86AA99
0x86AA94: call    sub_772560
0x86AA99: mov     edi, [esp+30h+a3]
0x86AA9D: push    2
0x86AA9F: push    ebx
0x86AAA0: push    ebx
0x86AAA1: push    edi
0x86AAA2: call    sub_801110
0x86AAA7: add     esp, 10h
0x86AAAA: push    edi; a3
0x86AAAB: push    ebx; a2
0x86AAAC: mov     ecx, esi; this
0x86AAAE: call    sub_760010
0x86AAB3: lea     edx, [esp+30h+var_10]
0x86AAB7: push    edx
0x86AAB8: call    sub_772630
0x86AABD: add     esp, 4
0x86AAC0: push    eax
0x86AAC1: lea     ecx, [esp+34h+a3]
0x86AAC5: mov     byte ptr [esp+34h+var_4], 3Ch ; '<'
0x86AACA: call    sub_75FAE0
0x86AACF: mov     eax, [esp+30h+var_10]
0x86AAD3: test    eax, eax
0x86AAD5: mov     byte ptr [esp+30h+var_4], 1
0x86AADA: jz      short loc_86AAEF
0x86AADC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AAE0: mov     ecx, eax
0x86AAE2: add     eax, 5Ch ; '\'
0x86AAE5: cmp     dword ptr [eax], 0
0x86AAE8: jnz     short loc_86AAEF
0x86AAEA: call    sub_772560
0x86AAEF: mov     edi, [esp+30h+a3]
0x86AAF3: push    2
0x86AAF5: push    ebx
0x86AAF6: push    2
0x86AAF8: push    edi
0x86AAF9: call    sub_801110
0x86AAFE: add     esp, 10h
0x86AB01: push    edi; a3
0x86AB02: push    2; a2
0x86AB04: mov     ecx, esi; this
0x86AB06: call    sub_760010
0x86AB0B: lea     eax, [esp+30h+var_10]
0x86AB0F: push    eax
0x86AB10: call    sub_772630
0x86AB15: add     esp, 4
0x86AB18: push    eax
0x86AB19: lea     ecx, [esp+34h+a3]
0x86AB1D: mov     byte ptr [esp+34h+var_4], 3Dh ; '='
0x86AB22: call    sub_75FAE0
0x86AB27: mov     eax, [esp+30h+var_10]
0x86AB2B: test    eax, eax
0x86AB2D: mov     byte ptr [esp+30h+var_4], 1
0x86AB32: jz      short loc_86AB47
0x86AB34: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AB38: mov     ecx, eax
0x86AB3A: add     eax, 5Ch ; '\'
0x86AB3D: cmp     dword ptr [eax], 0
0x86AB40: jnz     short loc_86AB47
0x86AB42: call    sub_772560
0x86AB47: mov     edi, [esp+30h+a3]
0x86AB4B: push    2
0x86AB4D: push    ebx
0x86AB4E: push    3
0x86AB50: push    edi
0x86AB51: call    sub_801110
0x86AB56: add     esp, 10h
0x86AB59: push    edi; a3
0x86AB5A: push    3; a2
0x86AB5C: mov     ecx, esi; this
0x86AB5E: call    sub_760010
0x86AB63: lea     ecx, [esp+30h+var_10]
0x86AB67: push    ecx
0x86AB68: call    sub_772630
0x86AB6D: add     esp, 4
0x86AB70: push    eax
0x86AB71: lea     ecx, [esp+34h+a3]
0x86AB75: mov     byte ptr [esp+34h+var_4], 3Eh ; '>'
0x86AB7A: call    sub_75FAE0
0x86AB7F: mov     eax, [esp+30h+var_10]
0x86AB83: test    eax, eax
0x86AB85: mov     byte ptr [esp+30h+var_4], 1
0x86AB8A: jz      short loc_86AB9F
0x86AB8C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AB90: mov     ecx, eax
0x86AB92: add     eax, 5Ch ; '\'
0x86AB95: cmp     dword ptr [eax], 0
0x86AB98: jnz     short loc_86AB9F
0x86AB9A: call    sub_772560
0x86AB9F: mov     edi, [esp+30h+a3]
0x86ABA3: push    2
0x86ABA5: push    ebx
0x86ABA6: push    4
0x86ABA8: push    edi
0x86ABA9: call    sub_801110
0x86ABAE: add     esp, 10h
0x86ABB1: push    edi; a3
0x86ABB2: push    4; a2
0x86ABB4: mov     ecx, esi; this
0x86ABB6: call    sub_760010
0x86ABBB: lea     edx, [esp+30h+var_10]
0x86ABBF: push    edx
0x86ABC0: call    sub_772630
0x86ABC5: add     esp, 4
0x86ABC8: push    eax
0x86ABC9: lea     ecx, [esp+34h+a3]
0x86ABCD: mov     byte ptr [esp+34h+var_4], 3Fh ; '?'
0x86ABD2: call    sub_75FAE0
0x86ABD7: mov     eax, [esp+30h+var_10]
0x86ABDB: test    eax, eax
0x86ABDD: mov     byte ptr [esp+30h+var_4], 1
0x86ABE2: jz      short loc_86ABF7
0x86ABE4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86ABE8: mov     ecx, eax
0x86ABEA: add     eax, 5Ch ; '\'
0x86ABED: cmp     dword ptr [eax], 0
0x86ABF0: jnz     short loc_86ABF7
0x86ABF2: call    sub_772560
0x86ABF7: mov     edi, [esp+30h+a3]
0x86ABFB: push    0
0x86ABFD: push    3
0x86ABFF: push    5
0x86AC01: push    edi
0x86AC02: call    sub_801110
0x86AC07: mov     eax, ds:0B43110h
0x86AC0C: add     esp, 10h
0x86AC0F: push    eax; a2
0x86AC10: mov     ecx, edi; this
0x86AC12: call    sub_76C910
0x86AC17: push    edi; a3
0x86AC18: push    5; a2
0x86AC1A: mov     ecx, esi; this
0x86AC1C: call    sub_760010
0x86AC21: lea     ecx, [esp+30h+var_10]
0x86AC25: push    ecx
0x86AC26: call    sub_772630
0x86AC2B: add     esp, 4
0x86AC2E: push    eax
0x86AC2F: lea     ecx, [esp+34h+a3]
0x86AC33: mov     byte ptr [esp+34h+var_4], 40h ; '@'
0x86AC38: call    sub_75FAE0
0x86AC3D: mov     eax, [esp+30h+var_10]
0x86AC41: test    eax, eax
0x86AC43: mov     byte ptr [esp+30h+var_4], 1
0x86AC48: jz      short loc_86AC5D
0x86AC4A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AC4E: mov     ecx, eax
0x86AC50: add     eax, 5Ch ; '\'
0x86AC53: cmp     dword ptr [eax], 0
0x86AC56: jnz     short loc_86AC5D
0x86AC58: call    sub_772560
0x86AC5D: mov     edi, [esp+30h+a3]
0x86AC61: push    2
0x86AC63: push    ebx
0x86AC64: push    6
0x86AC66: push    edi
0x86AC67: call    sub_801110
0x86AC6C: add     esp, 10h
0x86AC6F: push    edi; a3
0x86AC70: push    6; a2
0x86AC72: mov     ecx, esi; this
0x86AC74: call    sub_760010
0x86AC79: lea     edx, [esp+30h+var_10]
0x86AC7D: push    edx
0x86AC7E: call    sub_772630
0x86AC83: add     esp, 4
0x86AC86: push    eax
0x86AC87: lea     ecx, [esp+34h+a3]
0x86AC8B: mov     byte ptr [esp+34h+var_4], 41h ; 'A'
0x86AC90: call    sub_75FAE0
0x86AC95: mov     eax, [esp+30h+var_10]
0x86AC99: test    eax, eax
0x86AC9B: mov     byte ptr [esp+30h+var_4], 1
0x86ACA0: jz      short loc_86ACB5
0x86ACA2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86ACA6: mov     ecx, eax
0x86ACA8: add     eax, 5Ch ; '\'
0x86ACAB: cmp     dword ptr [eax], 0
0x86ACAE: jnz     short loc_86ACB5
0x86ACB0: call    sub_772560
0x86ACB5: mov     edi, [esp+30h+a3]
0x86ACB9: push    0
0x86ACBB: push    3
0x86ACBD: push    7
0x86ACBF: push    edi
0x86ACC0: call    sub_801110
0x86ACC5: add     esp, 10h
0x86ACC8: push    edi; a3
0x86ACC9: push    7; a2
0x86ACCB: mov     ecx, esi; this
0x86ACCD: call    sub_760010
0x86ACD2: mov     eax, [esp+30h+var_18]
0x86ACD6: mov     eax, [eax+0A8h]
0x86ACDC: push    eax; a2
0x86ACDD: mov     ecx, esi; this
0x86ACDF: call    sub_7AECB0
0x86ACE4: mov     ecx, [esp+30h+var_18]
0x86ACE8: mov     eax, [ecx+138h]
0x86ACEE: push    eax; a2
0x86ACEF: mov     ecx, esi; this
0x86ACF1: call    sub_7AEC60
0x86ACF6: cmp     dword ptr [esi+30h], 0
0x86ACFA: jnz     short loc_86AD04
0x86ACFC: call    sub_772DF0
0x86AD01: mov     [esi+30h], eax
0x86AD04: mov     ecx, [esi+30h]
0x86AD07: push    0
0x86AD09: push    0
0x86AD0B: push    1Bh
0x86AD0D: call    sub_772CD0
0x86AD12: cmp     dword ptr [esi+30h], 0
0x86AD16: jnz     short loc_86AD20
0x86AD18: call    sub_772DF0
0x86AD1D: mov     [esi+30h], eax
0x86AD20: mov     ecx, [esi+30h]
0x86AD23: push    0
0x86AD25: push    0
0x86AD27: push    0Fh
0x86AD29: call    sub_772CD0
0x86AD2E: cmp     dword ptr [esi+30h], 0
0x86AD32: jnz     short loc_86AD3C
0x86AD34: call    sub_772DF0
0x86AD39: mov     [esi+30h], eax
0x86AD3C: mov     ecx, [esi+30h]
0x86AD3F: push    0
0x86AD41: push    ebx
0x86AD42: push    7
0x86AD44: call    sub_772CD0
0x86AD49: cmp     dword ptr [esi+30h], 0
0x86AD4D: jnz     short loc_86AD57
0x86AD4F: call    sub_772DF0
0x86AD54: mov     [esi+30h], eax
0x86AD57: mov     ecx, [esi+30h]
0x86AD5A: push    0
0x86AD5C: push    4
0x86AD5E: push    17h
0x86AD60: call    sub_772CD0
0x86AD65: cmp     dword ptr [esi+30h], 0
0x86AD69: jnz     short loc_86AD73
0x86AD6B: call    sub_772DF0
0x86AD70: mov     [esi+30h], eax
0x86AD73: mov     ecx, [esi+30h]
0x86AD76: push    0
0x86AD78: push    ebx
0x86AD79: push    0Eh
0x86AD7B: call    sub_772CD0
0x86AD80: cmp     dword ptr [esi+30h], 0
0x86AD84: jnz     short loc_86AD8E
0x86AD86: call    sub_772DF0
0x86AD8B: mov     [esi+30h], eax
0x86AD8E: mov     ecx, [esi+30h]
0x86AD91: push    0
0x86AD93: push    0
0x86AD95: push    34h ; '4'
0x86AD97: call    sub_772CD0
0x86AD9C: cmp     esi, ds:0B47680h
0x86ADA2: mov     ds:0B43D5Ch, ebp
0x86ADA8: mov     dword ptr ds:0B443ECh, 18Ch
0x86ADB2: jz      short loc_86ADD2
0x86ADB4: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86ADB8: jnz     short loc_86ADC1
0x86ADBA: mov     ecx, esi
0x86ADBC: call    sub_7604D0
0x86ADC1: mov     esi, ds:0B47680h
0x86ADC7: test    esi, esi
0x86ADC9: mov     [esp+30h+var_14], esi
0x86ADCD: jz      short loc_86ADD2
0x86ADCF: add     [esi+60h], ebx
0x86ADD2: cmp     dword ptr [esi+18h], 8
0x86ADD6: jnb     loc_86B0AA
0x86ADDC: lea     edx, [esp+30h+var_10]
0x86ADE0: push    edx
0x86ADE1: call    sub_772630
0x86ADE6: add     esp, 4
0x86ADE9: push    eax
0x86ADEA: lea     ecx, [esp+34h+a3]
0x86ADEE: mov     byte ptr [esp+34h+var_4], 42h ; 'B'
0x86ADF3: call    sub_75FAE0
0x86ADF8: mov     eax, [esp+30h+var_10]
0x86ADFC: test    eax, eax
0x86ADFE: mov     byte ptr [esp+30h+var_4], 1
0x86AE03: jz      short loc_86AE18
0x86AE05: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AE09: mov     ecx, eax
0x86AE0B: add     eax, 5Ch ; '\'
0x86AE0E: cmp     dword ptr [eax], 0
0x86AE11: jnz     short loc_86AE18
0x86AE13: call    sub_772560
0x86AE18: mov     edi, [esp+30h+a3]
0x86AE1C: push    2
0x86AE1E: push    ebx
0x86AE1F: push    0
0x86AE21: push    edi
0x86AE22: call    sub_801110
0x86AE27: add     esp, 10h
0x86AE2A: push    edi; a3
0x86AE2B: push    0; a2
0x86AE2D: mov     ecx, esi; this
0x86AE2F: call    sub_760010
0x86AE34: lea     eax, [esp+30h+var_10]
0x86AE38: push    eax
0x86AE39: call    sub_772630
0x86AE3E: add     esp, 4
0x86AE41: push    eax
0x86AE42: lea     ecx, [esp+34h+a3]
0x86AE46: mov     byte ptr [esp+34h+var_4], 43h ; 'C'
0x86AE4B: call    sub_75FAE0
0x86AE50: mov     eax, [esp+30h+var_10]
0x86AE54: test    eax, eax
0x86AE56: mov     byte ptr [esp+30h+var_4], 1
0x86AE5B: jz      short loc_86AE70
0x86AE5D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AE61: mov     ecx, eax
0x86AE63: add     eax, 5Ch ; '\'
0x86AE66: cmp     dword ptr [eax], 0
0x86AE69: jnz     short loc_86AE70
0x86AE6B: call    sub_772560
0x86AE70: mov     edi, [esp+30h+a3]
0x86AE74: push    2
0x86AE76: push    ebx
0x86AE77: push    ebx
0x86AE78: push    edi
0x86AE79: call    sub_801110
0x86AE7E: add     esp, 10h
0x86AE81: push    edi; a3
0x86AE82: push    ebx; a2
0x86AE83: mov     ecx, esi; this
0x86AE85: call    sub_760010
0x86AE8A: lea     ecx, [esp+30h+var_10]
0x86AE8E: push    ecx
0x86AE8F: call    sub_772630
0x86AE94: add     esp, 4
0x86AE97: push    eax
0x86AE98: lea     ecx, [esp+34h+a3]
0x86AE9C: mov     byte ptr [esp+34h+var_4], 44h ; 'D'
0x86AEA1: call    sub_75FAE0
0x86AEA6: mov     eax, [esp+30h+var_10]
0x86AEAA: test    eax, eax
0x86AEAC: mov     byte ptr [esp+30h+var_4], 1
0x86AEB1: jz      short loc_86AEC6
0x86AEB3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AEB7: mov     ecx, eax
0x86AEB9: add     eax, 5Ch ; '\'
0x86AEBC: cmp     dword ptr [eax], 0
0x86AEBF: jnz     short loc_86AEC6
0x86AEC1: call    sub_772560
0x86AEC6: mov     edi, [esp+30h+a3]
0x86AECA: push    2
0x86AECC: push    ebx
0x86AECD: push    2
0x86AECF: push    edi
0x86AED0: call    sub_801110
0x86AED5: add     esp, 10h
0x86AED8: push    edi; a3
0x86AED9: push    2; a2
0x86AEDB: mov     ecx, esi; this
0x86AEDD: call    sub_760010
0x86AEE2: lea     edx, [esp+30h+var_10]
0x86AEE6: push    edx
0x86AEE7: call    sub_772630
0x86AEEC: add     esp, 4
0x86AEEF: push    eax
0x86AEF0: lea     ecx, [esp+34h+a3]
0x86AEF4: mov     byte ptr [esp+34h+var_4], 45h ; 'E'
0x86AEF9: call    sub_75FAE0
0x86AEFE: mov     eax, [esp+30h+var_10]
0x86AF02: test    eax, eax
0x86AF04: mov     byte ptr [esp+30h+var_4], 1
0x86AF09: jz      short loc_86AF1E
0x86AF0B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AF0F: mov     ecx, eax
0x86AF11: add     eax, 5Ch ; '\'
0x86AF14: cmp     dword ptr [eax], 0
0x86AF17: jnz     short loc_86AF1E
0x86AF19: call    sub_772560
0x86AF1E: mov     edi, [esp+30h+a3]
0x86AF22: push    2
0x86AF24: push    ebx
0x86AF25: push    3
0x86AF27: push    edi
0x86AF28: call    sub_801110
0x86AF2D: add     esp, 10h
0x86AF30: push    edi; a3
0x86AF31: push    3; a2
0x86AF33: mov     ecx, esi; this
0x86AF35: call    sub_760010
0x86AF3A: lea     eax, [esp+30h+var_10]
0x86AF3E: push    eax
0x86AF3F: call    sub_772630
0x86AF44: add     esp, 4
0x86AF47: push    eax
0x86AF48: lea     ecx, [esp+34h+a3]
0x86AF4C: mov     byte ptr [esp+34h+var_4], 46h ; 'F'
0x86AF51: call    sub_75FAE0
0x86AF56: mov     eax, [esp+30h+var_10]
0x86AF5A: test    eax, eax
0x86AF5C: mov     byte ptr [esp+30h+var_4], 1
0x86AF61: jz      short loc_86AF76
0x86AF63: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AF67: mov     ecx, eax
0x86AF69: add     eax, 5Ch ; '\'
0x86AF6C: cmp     dword ptr [eax], 0
0x86AF6F: jnz     short loc_86AF76
0x86AF71: call    sub_772560
0x86AF76: mov     edi, [esp+30h+a3]
0x86AF7A: push    2
0x86AF7C: push    ebx
0x86AF7D: push    4
0x86AF7F: push    edi
0x86AF80: call    sub_801110
0x86AF85: add     esp, 10h
0x86AF88: push    edi; a3
0x86AF89: push    4; a2
0x86AF8B: mov     ecx, esi; this
0x86AF8D: call    sub_760010
0x86AF92: lea     ecx, [esp+30h+var_10]
0x86AF96: push    ecx
0x86AF97: call    sub_772630
0x86AF9C: add     esp, 4
0x86AF9F: push    eax
0x86AFA0: lea     ecx, [esp+34h+a3]
0x86AFA4: mov     byte ptr [esp+34h+var_4], 47h ; 'G'
0x86AFA9: call    sub_75FAE0
0x86AFAE: mov     eax, [esp+30h+var_10]
0x86AFB2: test    eax, eax
0x86AFB4: mov     byte ptr [esp+30h+var_4], 1
0x86AFB9: jz      short loc_86AFCE
0x86AFBB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86AFBF: mov     ecx, eax
0x86AFC1: add     eax, 5Ch ; '\'
0x86AFC4: cmp     dword ptr [eax], 0
0x86AFC7: jnz     short loc_86AFCE
0x86AFC9: call    sub_772560
0x86AFCE: mov     edi, [esp+30h+a3]
0x86AFD2: push    0
0x86AFD4: push    3
0x86AFD6: push    5
0x86AFD8: push    edi
0x86AFD9: call    sub_801110
0x86AFDE: mov     edx, ds:0B43110h
0x86AFE4: add     esp, 10h
0x86AFE7: push    edx; a2
0x86AFE8: mov     ecx, edi; this
0x86AFEA: call    sub_76C910
0x86AFEF: push    edi; a3
0x86AFF0: push    5; a2
0x86AFF2: mov     ecx, esi; this
0x86AFF4: call    sub_760010
0x86AFF9: lea     eax, [esp+30h+var_10]
0x86AFFD: push    eax
0x86AFFE: call    sub_772630
0x86B003: add     esp, 4
0x86B006: push    eax
0x86B007: lea     ecx, [esp+34h+a3]
0x86B00B: mov     byte ptr [esp+34h+var_4], 48h ; 'H'
0x86B010: call    sub_75FAE0
0x86B015: mov     eax, [esp+30h+var_10]
0x86B019: test    eax, eax
0x86B01B: mov     byte ptr [esp+30h+var_4], 1
0x86B020: jz      short loc_86B035
0x86B022: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B026: mov     ecx, eax
0x86B028: add     eax, 5Ch ; '\'
0x86B02B: cmp     dword ptr [eax], 0
0x86B02E: jnz     short loc_86B035
0x86B030: call    sub_772560
0x86B035: mov     edi, [esp+30h+a3]
0x86B039: push    2
0x86B03B: push    ebx
0x86B03C: push    6
0x86B03E: push    edi
0x86B03F: call    sub_801110
0x86B044: add     esp, 10h
0x86B047: push    edi; a3
0x86B048: push    6; a2
0x86B04A: mov     ecx, esi; this
0x86B04C: call    sub_760010
0x86B051: lea     ecx, [esp+30h+var_10]
0x86B055: push    ecx
0x86B056: call    sub_772630
0x86B05B: add     esp, 4
0x86B05E: push    eax
0x86B05F: lea     ecx, [esp+34h+a3]
0x86B063: mov     byte ptr [esp+34h+var_4], 49h ; 'I'
0x86B068: call    sub_75FAE0
0x86B06D: mov     eax, [esp+30h+var_10]
0x86B071: test    eax, eax
0x86B073: mov     byte ptr [esp+30h+var_4], 1
0x86B078: jz      short loc_86B08D
0x86B07A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B07E: mov     ecx, eax
0x86B080: add     eax, 5Ch ; '\'
0x86B083: cmp     dword ptr [eax], 0
0x86B086: jnz     short loc_86B08D
0x86B088: call    sub_772560
0x86B08D: mov     edi, [esp+30h+a3]
0x86B091: push    0
0x86B093: push    3
0x86B095: push    7
0x86B097: push    edi
0x86B098: call    sub_801110
0x86B09D: add     esp, 10h
0x86B0A0: push    edi; a3
0x86B0A1: push    7; a2
0x86B0A3: mov     ecx, esi; this
0x86B0A5: call    sub_760010
0x86B0AA: mov     ebp, [esp+30h+var_18]
0x86B0AE: mov     eax, [ebp+0ACh]
0x86B0B4: push    eax; a2
0x86B0B5: mov     ecx, esi; this
0x86B0B7: call    sub_7AECB0
0x86B0BC: mov     eax, [ebp+13Ch]
0x86B0C2: push    eax; a2
0x86B0C3: mov     ecx, esi; this
0x86B0C5: call    sub_7AEC60
0x86B0CA: cmp     dword ptr [esi+30h], 0
0x86B0CE: jnz     short loc_86B0D8
0x86B0D0: call    sub_772DF0
0x86B0D5: mov     [esi+30h], eax
0x86B0D8: mov     ecx, [esi+30h]
0x86B0DB: push    0
0x86B0DD: push    0
0x86B0DF: push    1Bh
0x86B0E1: call    sub_772CD0
0x86B0E6: cmp     dword ptr [esi+30h], 0
0x86B0EA: jnz     short loc_86B0F4
0x86B0EC: call    sub_772DF0
0x86B0F1: mov     [esi+30h], eax
0x86B0F4: mov     ecx, [esi+30h]
0x86B0F7: push    0
0x86B0F9: push    0
0x86B0FB: push    0Fh
0x86B0FD: call    sub_772CD0
0x86B102: cmp     dword ptr [esi+30h], 0
0x86B106: jnz     short loc_86B110
0x86B108: call    sub_772DF0
0x86B10D: mov     [esi+30h], eax
0x86B110: mov     ecx, [esi+30h]
0x86B113: push    0
0x86B115: push    ebx
0x86B116: push    7
0x86B118: call    sub_772CD0
0x86B11D: cmp     dword ptr [esi+30h], 0
0x86B121: jnz     short loc_86B12B
0x86B123: call    sub_772DF0
0x86B128: mov     [esi+30h], eax
0x86B12B: mov     ecx, [esi+30h]
0x86B12E: push    0
0x86B130: push    4
0x86B132: push    17h
0x86B134: call    sub_772CD0
0x86B139: cmp     dword ptr [esi+30h], 0
0x86B13D: jnz     short loc_86B147
0x86B13F: call    sub_772DF0
0x86B144: mov     [esi+30h], eax
0x86B147: mov     ecx, [esi+30h]
0x86B14A: push    0
0x86B14C: push    ebx
0x86B14D: push    0Eh
0x86B14F: call    sub_772CD0
0x86B154: cmp     dword ptr [esi+30h], 0
0x86B158: jnz     short loc_86B162
0x86B15A: call    sub_772DF0
0x86B15F: mov     [esi+30h], eax
0x86B162: mov     ecx, [esi+30h]
0x86B165: push    0
0x86B167: push    0
0x86B169: push    34h ; '4'
0x86B16B: call    sub_772CD0
0x86B170: cmp     esi, ds:0B47684h
0x86B176: mov     ebp, 39082h
0x86B17B: mov     ds:0B43D74h, ebp
0x86B181: mov     dword ptr ds:0B44404h, 11Ch
0x86B18B: jz      short loc_86B1AB
0x86B18D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86B191: jnz     short loc_86B19A
0x86B193: mov     ecx, esi
0x86B195: call    sub_7604D0
0x86B19A: mov     esi, ds:0B47684h
0x86B1A0: test    esi, esi
0x86B1A2: mov     [esp+30h+var_14], esi
0x86B1A6: jz      short loc_86B1AB
0x86B1A8: add     [esi+60h], ebx
0x86B1AB: cmp     dword ptr [esi+18h], 8
0x86B1AF: jnb     loc_86B483
0x86B1B5: lea     edx, [esp+30h+var_10]
0x86B1B9: push    edx
0x86B1BA: call    sub_772630
0x86B1BF: add     esp, 4
0x86B1C2: push    eax
0x86B1C3: lea     ecx, [esp+34h+a3]
0x86B1C7: mov     byte ptr [esp+34h+var_4], 4Ah ; 'J'
0x86B1CC: call    sub_75FAE0
0x86B1D1: mov     eax, [esp+30h+var_10]
0x86B1D5: test    eax, eax
0x86B1D7: mov     byte ptr [esp+30h+var_4], 1
0x86B1DC: jz      short loc_86B1F1
0x86B1DE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B1E2: mov     ecx, eax
0x86B1E4: add     eax, 5Ch ; '\'
0x86B1E7: cmp     dword ptr [eax], 0
0x86B1EA: jnz     short loc_86B1F1
0x86B1EC: call    sub_772560
0x86B1F1: mov     edi, [esp+30h+a3]
0x86B1F5: push    2
0x86B1F7: push    ebx
0x86B1F8: push    0
0x86B1FA: push    edi
0x86B1FB: call    sub_801110
0x86B200: add     esp, 10h
0x86B203: push    edi; a3
0x86B204: push    0; a2
0x86B206: mov     ecx, esi; this
0x86B208: call    sub_760010
0x86B20D: lea     eax, [esp+30h+var_10]
0x86B211: push    eax
0x86B212: call    sub_772630
0x86B217: add     esp, 4
0x86B21A: push    eax
0x86B21B: lea     ecx, [esp+34h+a3]
0x86B21F: mov     byte ptr [esp+34h+var_4], 4Bh ; 'K'
0x86B224: call    sub_75FAE0
0x86B229: mov     eax, [esp+30h+var_10]
0x86B22D: test    eax, eax
0x86B22F: mov     byte ptr [esp+30h+var_4], 1
0x86B234: jz      short loc_86B249
0x86B236: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B23A: mov     ecx, eax
0x86B23C: add     eax, 5Ch ; '\'
0x86B23F: cmp     dword ptr [eax], 0
0x86B242: jnz     short loc_86B249
0x86B244: call    sub_772560
0x86B249: mov     edi, [esp+30h+a3]
0x86B24D: push    2
0x86B24F: push    ebx
0x86B250: push    ebx
0x86B251: push    edi
0x86B252: call    sub_801110
0x86B257: add     esp, 10h
0x86B25A: push    edi; a3
0x86B25B: push    ebx; a2
0x86B25C: mov     ecx, esi; this
0x86B25E: call    sub_760010
0x86B263: lea     ecx, [esp+30h+var_10]
0x86B267: push    ecx
0x86B268: call    sub_772630
0x86B26D: add     esp, 4
0x86B270: push    eax
0x86B271: lea     ecx, [esp+34h+a3]
0x86B275: mov     byte ptr [esp+34h+var_4], 4Ch ; 'L'
0x86B27A: call    sub_75FAE0
0x86B27F: mov     eax, [esp+30h+var_10]
0x86B283: test    eax, eax
0x86B285: mov     byte ptr [esp+30h+var_4], 1
0x86B28A: jz      short loc_86B29F
0x86B28C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B290: mov     ecx, eax
0x86B292: add     eax, 5Ch ; '\'
0x86B295: cmp     dword ptr [eax], 0
0x86B298: jnz     short loc_86B29F
0x86B29A: call    sub_772560
0x86B29F: mov     edi, [esp+30h+a3]
0x86B2A3: push    2
0x86B2A5: push    ebx
0x86B2A6: push    2
0x86B2A8: push    edi
0x86B2A9: call    sub_801110
0x86B2AE: add     esp, 10h
0x86B2B1: push    edi; a3
0x86B2B2: push    2; a2
0x86B2B4: mov     ecx, esi; this
0x86B2B6: call    sub_760010
0x86B2BB: lea     edx, [esp+30h+var_10]
0x86B2BF: push    edx
0x86B2C0: call    sub_772630
0x86B2C5: add     esp, 4
0x86B2C8: push    eax
0x86B2C9: lea     ecx, [esp+34h+a3]
0x86B2CD: mov     byte ptr [esp+34h+var_4], 4Dh ; 'M'
0x86B2D2: call    sub_75FAE0
0x86B2D7: mov     eax, [esp+30h+var_10]
0x86B2DB: test    eax, eax
0x86B2DD: mov     byte ptr [esp+30h+var_4], 1
0x86B2E2: jz      short loc_86B2F7
0x86B2E4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B2E8: mov     ecx, eax
0x86B2EA: add     eax, 5Ch ; '\'
0x86B2ED: cmp     dword ptr [eax], 0
0x86B2F0: jnz     short loc_86B2F7
0x86B2F2: call    sub_772560
0x86B2F7: mov     edi, [esp+30h+a3]
0x86B2FB: push    2
0x86B2FD: push    ebx
0x86B2FE: push    3
0x86B300: push    edi
0x86B301: call    sub_801110
0x86B306: add     esp, 10h
0x86B309: push    edi; a3
0x86B30A: push    3; a2
0x86B30C: mov     ecx, esi; this
0x86B30E: call    sub_760010
0x86B313: lea     eax, [esp+30h+var_10]
0x86B317: push    eax
0x86B318: call    sub_772630
0x86B31D: add     esp, 4
0x86B320: push    eax
0x86B321: lea     ecx, [esp+34h+a3]
0x86B325: mov     byte ptr [esp+34h+var_4], 4Eh ; 'N'
0x86B32A: call    sub_75FAE0
0x86B32F: mov     eax, [esp+30h+var_10]
0x86B333: test    eax, eax
0x86B335: mov     byte ptr [esp+30h+var_4], 1
0x86B33A: jz      short loc_86B34F
0x86B33C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B340: mov     ecx, eax
0x86B342: add     eax, 5Ch ; '\'
0x86B345: cmp     dword ptr [eax], 0
0x86B348: jnz     short loc_86B34F
0x86B34A: call    sub_772560
0x86B34F: mov     edi, [esp+30h+a3]
0x86B353: push    2
0x86B355: push    ebx
0x86B356: push    4
0x86B358: push    edi
0x86B359: call    sub_801110
0x86B35E: add     esp, 10h
0x86B361: push    edi; a3
0x86B362: push    4; a2
0x86B364: mov     ecx, esi; this
0x86B366: call    sub_760010
0x86B36B: lea     ecx, [esp+30h+var_10]
0x86B36F: push    ecx
0x86B370: call    sub_772630
0x86B375: add     esp, 4
0x86B378: push    eax
0x86B379: lea     ecx, [esp+34h+a3]
0x86B37D: mov     byte ptr [esp+34h+var_4], 4Fh ; 'O'
0x86B382: call    sub_75FAE0
0x86B387: mov     eax, [esp+30h+var_10]
0x86B38B: test    eax, eax
0x86B38D: mov     byte ptr [esp+30h+var_4], 1
0x86B392: jz      short loc_86B3A7
0x86B394: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B398: mov     ecx, eax
0x86B39A: add     eax, 5Ch ; '\'
0x86B39D: cmp     dword ptr [eax], 0
0x86B3A0: jnz     short loc_86B3A7
0x86B3A2: call    sub_772560
0x86B3A7: mov     edi, [esp+30h+a3]
0x86B3AB: push    0
0x86B3AD: push    3
0x86B3AF: push    5
0x86B3B1: push    edi
0x86B3B2: call    sub_801110
0x86B3B7: mov     edx, ds:0B43110h
0x86B3BD: add     esp, 10h
0x86B3C0: push    edx; a2
0x86B3C1: mov     ecx, edi; this
0x86B3C3: call    sub_76C910
0x86B3C8: push    edi; a3
0x86B3C9: push    5; a2
0x86B3CB: mov     ecx, esi; this
0x86B3CD: call    sub_760010
0x86B3D2: lea     eax, [esp+30h+var_10]
0x86B3D6: push    eax
0x86B3D7: call    sub_772630
0x86B3DC: add     esp, 4
0x86B3DF: push    eax
0x86B3E0: lea     ecx, [esp+34h+a3]
0x86B3E4: mov     byte ptr [esp+34h+var_4], 50h ; 'P'
0x86B3E9: call    sub_75FAE0
0x86B3EE: mov     eax, [esp+30h+var_10]
0x86B3F2: test    eax, eax
0x86B3F4: mov     byte ptr [esp+30h+var_4], 1
0x86B3F9: jz      short loc_86B40E
0x86B3FB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B3FF: mov     ecx, eax
0x86B401: add     eax, 5Ch ; '\'
0x86B404: cmp     dword ptr [eax], 0
0x86B407: jnz     short loc_86B40E
0x86B409: call    sub_772560
0x86B40E: mov     edi, [esp+30h+a3]
0x86B412: push    2
0x86B414: push    ebx
0x86B415: push    6
0x86B417: push    edi
0x86B418: call    sub_801110
0x86B41D: add     esp, 10h
0x86B420: push    edi; a3
0x86B421: push    6; a2
0x86B423: mov     ecx, esi; this
0x86B425: call    sub_760010
0x86B42A: lea     ecx, [esp+30h+var_10]
0x86B42E: push    ecx
0x86B42F: call    sub_772630
0x86B434: add     esp, 4
0x86B437: push    eax
0x86B438: lea     ecx, [esp+34h+a3]
0x86B43C: mov     byte ptr [esp+34h+var_4], 51h ; 'Q'
0x86B441: call    sub_75FAE0
0x86B446: mov     eax, [esp+30h+var_10]
0x86B44A: test    eax, eax
0x86B44C: mov     byte ptr [esp+30h+var_4], 1
0x86B451: jz      short loc_86B466
0x86B453: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B457: mov     ecx, eax
0x86B459: add     eax, 5Ch ; '\'
0x86B45C: cmp     dword ptr [eax], 0
0x86B45F: jnz     short loc_86B466
0x86B461: call    sub_772560
0x86B466: mov     edi, [esp+30h+a3]
0x86B46A: push    0
0x86B46C: push    3
0x86B46E: push    7
0x86B470: push    edi
0x86B471: call    sub_801110
0x86B476: add     esp, 10h
0x86B479: push    edi; a3
0x86B47A: push    7; a2
0x86B47C: mov     ecx, esi; this
0x86B47E: call    sub_760010
0x86B483: mov     edx, [esp+30h+var_18]
0x86B487: mov     eax, [edx+0ACh]
0x86B48D: push    eax; a2
0x86B48E: mov     ecx, esi; this
0x86B490: call    sub_7AECB0
0x86B495: mov     eax, [esp+30h+var_18]
0x86B499: mov     eax, [eax+140h]
0x86B49F: push    eax; a2
0x86B4A0: mov     ecx, esi; this
0x86B4A2: call    sub_7AEC60
0x86B4A7: cmp     dword ptr [esi+30h], 0
0x86B4AB: jnz     short loc_86B4B5
0x86B4AD: call    sub_772DF0
0x86B4B2: mov     [esi+30h], eax
0x86B4B5: mov     ecx, [esi+30h]
0x86B4B8: push    0
0x86B4BA: push    0
0x86B4BC: push    1Bh
0x86B4BE: call    sub_772CD0
0x86B4C3: cmp     dword ptr [esi+30h], 0
0x86B4C7: jnz     short loc_86B4D1
0x86B4C9: call    sub_772DF0
0x86B4CE: mov     [esi+30h], eax
0x86B4D1: mov     ecx, [esi+30h]
0x86B4D4: push    0
0x86B4D6: push    0
0x86B4D8: push    0Fh
0x86B4DA: call    sub_772CD0
0x86B4DF: cmp     dword ptr [esi+30h], 0
0x86B4E3: jnz     short loc_86B4ED
0x86B4E5: call    sub_772DF0
0x86B4EA: mov     [esi+30h], eax
0x86B4ED: mov     ecx, [esi+30h]
0x86B4F0: push    0
0x86B4F2: push    ebx
0x86B4F3: push    7
0x86B4F5: call    sub_772CD0
0x86B4FA: cmp     dword ptr [esi+30h], 0
0x86B4FE: jnz     short loc_86B508
0x86B500: call    sub_772DF0
0x86B505: mov     [esi+30h], eax
0x86B508: mov     ecx, [esi+30h]
0x86B50B: push    0
0x86B50D: push    4
0x86B50F: push    17h
0x86B511: call    sub_772CD0
0x86B516: cmp     dword ptr [esi+30h], 0
0x86B51A: jnz     short loc_86B524
0x86B51C: call    sub_772DF0
0x86B521: mov     [esi+30h], eax
0x86B524: mov     ecx, [esi+30h]
0x86B527: push    0
0x86B529: push    ebx
0x86B52A: push    0Eh
0x86B52C: call    sub_772CD0
0x86B531: cmp     dword ptr [esi+30h], 0
0x86B535: jnz     short loc_86B53F
0x86B537: call    sub_772DF0
0x86B53C: mov     [esi+30h], eax
0x86B53F: mov     ecx, [esi+30h]
0x86B542: push    0
0x86B544: push    0
0x86B546: push    34h ; '4'
0x86B548: call    sub_772CD0
0x86B54D: cmp     esi, ds:0B47688h
0x86B553: mov     ds:0B43D78h, ebp
0x86B559: mov     dword ptr ds:0B44408h, 19Ch
0x86B563: jz      short loc_86B583
0x86B565: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86B569: jnz     short loc_86B572
0x86B56B: mov     ecx, esi
0x86B56D: call    sub_7604D0
0x86B572: mov     esi, ds:0B47688h
0x86B578: test    esi, esi
0x86B57A: mov     [esp+30h+var_14], esi
0x86B57E: jz      short loc_86B583
0x86B580: add     [esi+60h], ebx
0x86B583: cmp     dword ptr [esi+18h], 8
0x86B587: jnb     loc_86B85B
0x86B58D: lea     ecx, [esp+30h+var_10]
0x86B591: push    ecx
0x86B592: call    sub_772630
0x86B597: add     esp, 4
0x86B59A: push    eax
0x86B59B: lea     ecx, [esp+34h+a3]
0x86B59F: mov     byte ptr [esp+34h+var_4], 52h ; 'R'
0x86B5A4: call    sub_75FAE0
0x86B5A9: mov     eax, [esp+30h+var_10]
0x86B5AD: test    eax, eax
0x86B5AF: mov     byte ptr [esp+30h+var_4], 1
0x86B5B4: jz      short loc_86B5C9
0x86B5B6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B5BA: mov     ecx, eax
0x86B5BC: add     eax, 5Ch ; '\'
0x86B5BF: cmp     dword ptr [eax], 0
0x86B5C2: jnz     short loc_86B5C9
0x86B5C4: call    sub_772560
0x86B5C9: mov     edi, [esp+30h+a3]
0x86B5CD: push    2
0x86B5CF: push    ebx
0x86B5D0: push    0
0x86B5D2: push    edi
0x86B5D3: call    sub_801110
0x86B5D8: add     esp, 10h
0x86B5DB: push    edi; a3
0x86B5DC: push    0; a2
0x86B5DE: mov     ecx, esi; this
0x86B5E0: call    sub_760010
0x86B5E5: lea     edx, [esp+30h+var_10]
0x86B5E9: push    edx
0x86B5EA: call    sub_772630
0x86B5EF: add     esp, 4
0x86B5F2: push    eax
0x86B5F3: lea     ecx, [esp+34h+a3]
0x86B5F7: mov     byte ptr [esp+34h+var_4], 53h ; 'S'
0x86B5FC: call    sub_75FAE0
0x86B601: mov     eax, [esp+30h+var_10]
0x86B605: test    eax, eax
0x86B607: mov     byte ptr [esp+30h+var_4], 1
0x86B60C: jz      short loc_86B621
0x86B60E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B612: mov     ecx, eax
0x86B614: add     eax, 5Ch ; '\'
0x86B617: cmp     dword ptr [eax], 0
0x86B61A: jnz     short loc_86B621
0x86B61C: call    sub_772560
0x86B621: mov     edi, [esp+30h+a3]
0x86B625: push    2
0x86B627: push    ebx
0x86B628: push    ebx
0x86B629: push    edi
0x86B62A: call    sub_801110
0x86B62F: add     esp, 10h
0x86B632: push    edi; a3
0x86B633: push    ebx; a2
0x86B634: mov     ecx, esi; this
0x86B636: call    sub_760010
0x86B63B: lea     eax, [esp+30h+var_10]
0x86B63F: push    eax
0x86B640: call    sub_772630
0x86B645: add     esp, 4
0x86B648: push    eax
0x86B649: lea     ecx, [esp+34h+a3]
0x86B64D: mov     byte ptr [esp+34h+var_4], 54h ; 'T'
0x86B652: call    sub_75FAE0
0x86B657: mov     eax, [esp+30h+var_10]
0x86B65B: test    eax, eax
0x86B65D: mov     byte ptr [esp+30h+var_4], 1
0x86B662: jz      short loc_86B677
0x86B664: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B668: mov     ecx, eax
0x86B66A: add     eax, 5Ch ; '\'
0x86B66D: cmp     dword ptr [eax], 0
0x86B670: jnz     short loc_86B677
0x86B672: call    sub_772560
0x86B677: mov     edi, [esp+30h+a3]
0x86B67B: push    2
0x86B67D: push    ebx
0x86B67E: push    2
0x86B680: push    edi
0x86B681: call    sub_801110
0x86B686: add     esp, 10h
0x86B689: push    edi; a3
0x86B68A: push    2; a2
0x86B68C: mov     ecx, esi; this
0x86B68E: call    sub_760010
0x86B693: lea     ecx, [esp+30h+var_10]
0x86B697: push    ecx
0x86B698: call    sub_772630
0x86B69D: add     esp, 4
0x86B6A0: push    eax
0x86B6A1: lea     ecx, [esp+34h+a3]
0x86B6A5: mov     byte ptr [esp+34h+var_4], 55h ; 'U'
0x86B6AA: call    sub_75FAE0
0x86B6AF: mov     eax, [esp+30h+var_10]
0x86B6B3: test    eax, eax
0x86B6B5: mov     byte ptr [esp+30h+var_4], 1
0x86B6BA: jz      short loc_86B6CF
0x86B6BC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B6C0: mov     ecx, eax
0x86B6C2: add     eax, 5Ch ; '\'
0x86B6C5: cmp     dword ptr [eax], 0
0x86B6C8: jnz     short loc_86B6CF
0x86B6CA: call    sub_772560
0x86B6CF: mov     edi, [esp+30h+a3]
0x86B6D3: push    2
0x86B6D5: push    ebx
0x86B6D6: push    3
0x86B6D8: push    edi
0x86B6D9: call    sub_801110
0x86B6DE: add     esp, 10h
0x86B6E1: push    edi; a3
0x86B6E2: push    3; a2
0x86B6E4: mov     ecx, esi; this
0x86B6E6: call    sub_760010
0x86B6EB: lea     edx, [esp+30h+var_10]
0x86B6EF: push    edx
0x86B6F0: call    sub_772630
0x86B6F5: add     esp, 4
0x86B6F8: push    eax
0x86B6F9: lea     ecx, [esp+34h+a3]
0x86B6FD: mov     byte ptr [esp+34h+var_4], 56h ; 'V'
0x86B702: call    sub_75FAE0
0x86B707: mov     eax, [esp+30h+var_10]
0x86B70B: test    eax, eax
0x86B70D: mov     byte ptr [esp+30h+var_4], 1
0x86B712: jz      short loc_86B727
0x86B714: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B718: mov     ecx, eax
0x86B71A: add     eax, 5Ch ; '\'
0x86B71D: cmp     dword ptr [eax], 0
0x86B720: jnz     short loc_86B727
0x86B722: call    sub_772560
0x86B727: mov     edi, [esp+30h+a3]
0x86B72B: push    2
0x86B72D: push    ebx
0x86B72E: push    4
0x86B730: push    edi
0x86B731: call    sub_801110
0x86B736: add     esp, 10h
0x86B739: push    edi; a3
0x86B73A: push    4; a2
0x86B73C: mov     ecx, esi; this
0x86B73E: call    sub_760010
0x86B743: lea     eax, [esp+30h+var_10]
0x86B747: push    eax
0x86B748: call    sub_772630
0x86B74D: add     esp, 4
0x86B750: push    eax
0x86B751: lea     ecx, [esp+34h+a3]
0x86B755: mov     byte ptr [esp+34h+var_4], 57h ; 'W'
0x86B75A: call    sub_75FAE0
0x86B75F: mov     eax, [esp+30h+var_10]
0x86B763: test    eax, eax
0x86B765: mov     byte ptr [esp+30h+var_4], 1
0x86B76A: jz      short loc_86B77F
0x86B76C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B770: mov     ecx, eax
0x86B772: add     eax, 5Ch ; '\'
0x86B775: cmp     dword ptr [eax], 0
0x86B778: jnz     short loc_86B77F
0x86B77A: call    sub_772560
0x86B77F: mov     edi, [esp+30h+a3]
0x86B783: push    0
0x86B785: push    3
0x86B787: push    5
0x86B789: push    edi
0x86B78A: call    sub_801110
0x86B78F: mov     ecx, ds:0B43110h
0x86B795: add     esp, 10h
0x86B798: push    ecx; a2
0x86B799: mov     ecx, edi; this
0x86B79B: call    sub_76C910
0x86B7A0: push    edi; a3
0x86B7A1: push    5; a2
0x86B7A3: mov     ecx, esi; this
0x86B7A5: call    sub_760010
0x86B7AA: lea     edx, [esp+30h+var_10]
0x86B7AE: push    edx
0x86B7AF: call    sub_772630
0x86B7B4: add     esp, 4
0x86B7B7: push    eax
0x86B7B8: lea     ecx, [esp+34h+a3]
0x86B7BC: mov     byte ptr [esp+34h+var_4], 58h ; 'X'
0x86B7C1: call    sub_75FAE0
0x86B7C6: mov     eax, [esp+30h+var_10]
0x86B7CA: test    eax, eax
0x86B7CC: mov     byte ptr [esp+30h+var_4], 1
0x86B7D1: jz      short loc_86B7E6
0x86B7D3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B7D7: mov     ecx, eax
0x86B7D9: add     eax, 5Ch ; '\'
0x86B7DC: cmp     dword ptr [eax], 0
0x86B7DF: jnz     short loc_86B7E6
0x86B7E1: call    sub_772560
0x86B7E6: mov     edi, [esp+30h+a3]
0x86B7EA: push    2
0x86B7EC: push    ebx
0x86B7ED: push    6
0x86B7EF: push    edi
0x86B7F0: call    sub_801110
0x86B7F5: add     esp, 10h
0x86B7F8: push    edi; a3
0x86B7F9: push    6; a2
0x86B7FB: mov     ecx, esi; this
0x86B7FD: call    sub_760010
0x86B802: lea     eax, [esp+30h+var_10]
0x86B806: push    eax
0x86B807: call    sub_772630
0x86B80C: add     esp, 4
0x86B80F: push    eax
0x86B810: lea     ecx, [esp+34h+a3]
0x86B814: mov     byte ptr [esp+34h+var_4], 59h ; 'Y'
0x86B819: call    sub_75FAE0
0x86B81E: mov     eax, [esp+30h+var_10]
0x86B822: test    eax, eax
0x86B824: mov     byte ptr [esp+30h+var_4], 1
0x86B829: jz      short loc_86B83E
0x86B82B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B82F: mov     ecx, eax
0x86B831: add     eax, 5Ch ; '\'
0x86B834: cmp     dword ptr [eax], 0
0x86B837: jnz     short loc_86B83E
0x86B839: call    sub_772560
0x86B83E: mov     edi, [esp+30h+a3]
0x86B842: push    0
0x86B844: push    3
0x86B846: push    7
0x86B848: push    edi
0x86B849: call    sub_801110
0x86B84E: add     esp, 10h
0x86B851: push    edi; a3
0x86B852: push    7; a2
0x86B854: mov     ecx, esi; this
0x86B856: call    sub_760010
0x86B85B: mov     ebp, [esp+30h+var_18]
0x86B85F: mov     eax, [ebp+0B0h]
0x86B865: push    eax; a2
0x86B866: mov     ecx, esi; this
0x86B868: call    sub_7AECB0
0x86B86D: mov     eax, [ebp+13Ch]
0x86B873: push    eax; a2
0x86B874: mov     ecx, esi; this
0x86B876: call    sub_7AEC60
0x86B87B: cmp     dword ptr [esi+30h], 0
0x86B87F: jnz     short loc_86B889
0x86B881: call    sub_772DF0
0x86B886: mov     [esi+30h], eax
0x86B889: mov     ecx, [esi+30h]
0x86B88C: push    0
0x86B88E: push    0
0x86B890: push    1Bh
0x86B892: call    sub_772CD0
0x86B897: cmp     dword ptr [esi+30h], 0
0x86B89B: jnz     short loc_86B8A5
0x86B89D: call    sub_772DF0
0x86B8A2: mov     [esi+30h], eax
0x86B8A5: mov     ecx, [esi+30h]
0x86B8A8: push    0
0x86B8AA: push    0
0x86B8AC: push    0Fh
0x86B8AE: call    sub_772CD0
0x86B8B3: cmp     dword ptr [esi+30h], 0
0x86B8B7: jnz     short loc_86B8C1
0x86B8B9: call    sub_772DF0
0x86B8BE: mov     [esi+30h], eax
0x86B8C1: mov     ecx, [esi+30h]
0x86B8C4: push    0
0x86B8C6: push    ebx
0x86B8C7: push    7
0x86B8C9: call    sub_772CD0
0x86B8CE: cmp     dword ptr [esi+30h], 0
0x86B8D2: jnz     short loc_86B8DC
0x86B8D4: call    sub_772DF0
0x86B8D9: mov     [esi+30h], eax
0x86B8DC: mov     ecx, [esi+30h]
0x86B8DF: push    0
0x86B8E1: push    4
0x86B8E3: push    17h
0x86B8E5: call    sub_772CD0
0x86B8EA: cmp     dword ptr [esi+30h], 0
0x86B8EE: jnz     short loc_86B8F8
0x86B8F0: call    sub_772DF0
0x86B8F5: mov     [esi+30h], eax
0x86B8F8: mov     ecx, [esi+30h]
0x86B8FB: push    0
0x86B8FD: push    ebx
0x86B8FE: push    0Eh
0x86B900: call    sub_772CD0
0x86B905: cmp     dword ptr [esi+30h], 0
0x86B909: jnz     short loc_86B913
0x86B90B: call    sub_772DF0
0x86B910: mov     [esi+30h], eax
0x86B913: mov     ecx, [esi+30h]
0x86B916: push    0
0x86B918: push    0
0x86B91A: push    34h ; '4'
0x86B91C: call    sub_772CD0
0x86B921: cmp     esi, ds:0B4768Ch
0x86B927: mov     ebp, 79088h
0x86B92C: mov     ds:0B43D8Ch, ebp
0x86B932: mov     dword ptr ds:0B4441Ch, 11Ch
0x86B93C: jz      short loc_86B95C
0x86B93E: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86B942: jnz     short loc_86B94B
0x86B944: mov     ecx, esi
0x86B946: call    sub_7604D0
0x86B94B: mov     esi, ds:0B4768Ch
0x86B951: test    esi, esi
0x86B953: mov     [esp+30h+var_14], esi
0x86B957: jz      short loc_86B95C
0x86B959: add     [esi+60h], ebx
0x86B95C: cmp     dword ptr [esi+18h], 8
0x86B960: jnb     loc_86BC34
0x86B966: lea     ecx, [esp+30h+var_10]
0x86B96A: push    ecx
0x86B96B: call    sub_772630
0x86B970: add     esp, 4
0x86B973: push    eax
0x86B974: lea     ecx, [esp+34h+a3]
0x86B978: mov     byte ptr [esp+34h+var_4], 5Ah ; 'Z'
0x86B97D: call    sub_75FAE0
0x86B982: mov     eax, [esp+30h+var_10]
0x86B986: test    eax, eax
0x86B988: mov     byte ptr [esp+30h+var_4], 1
0x86B98D: jz      short loc_86B9A2
0x86B98F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B993: mov     ecx, eax
0x86B995: add     eax, 5Ch ; '\'
0x86B998: cmp     dword ptr [eax], 0
0x86B99B: jnz     short loc_86B9A2
0x86B99D: call    sub_772560
0x86B9A2: mov     edi, [esp+30h+a3]
0x86B9A6: push    2
0x86B9A8: push    ebx
0x86B9A9: push    0
0x86B9AB: push    edi
0x86B9AC: call    sub_801110
0x86B9B1: add     esp, 10h
0x86B9B4: push    edi; a3
0x86B9B5: push    0; a2
0x86B9B7: mov     ecx, esi; this
0x86B9B9: call    sub_760010
0x86B9BE: lea     edx, [esp+30h+var_10]
0x86B9C2: push    edx
0x86B9C3: call    sub_772630
0x86B9C8: add     esp, 4
0x86B9CB: push    eax
0x86B9CC: lea     ecx, [esp+34h+a3]
0x86B9D0: mov     byte ptr [esp+34h+var_4], 5Bh ; '['
0x86B9D5: call    sub_75FAE0
0x86B9DA: mov     eax, [esp+30h+var_10]
0x86B9DE: test    eax, eax
0x86B9E0: mov     byte ptr [esp+30h+var_4], 1
0x86B9E5: jz      short loc_86B9FA
0x86B9E7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86B9EB: mov     ecx, eax
0x86B9ED: add     eax, 5Ch ; '\'
0x86B9F0: cmp     dword ptr [eax], 0
0x86B9F3: jnz     short loc_86B9FA
0x86B9F5: call    sub_772560
0x86B9FA: mov     edi, [esp+30h+a3]
0x86B9FE: push    2
0x86BA00: push    ebx
0x86BA01: push    ebx
0x86BA02: push    edi
0x86BA03: call    sub_801110
0x86BA08: add     esp, 10h
0x86BA0B: push    edi; a3
0x86BA0C: push    ebx; a2
0x86BA0D: mov     ecx, esi; this
0x86BA0F: call    sub_760010
0x86BA14: lea     eax, [esp+30h+var_10]
0x86BA18: push    eax
0x86BA19: call    sub_772630
0x86BA1E: add     esp, 4
0x86BA21: push    eax
0x86BA22: lea     ecx, [esp+34h+a3]
0x86BA26: mov     byte ptr [esp+34h+var_4], 5Ch ; '\'
0x86BA2B: call    sub_75FAE0
0x86BA30: mov     eax, [esp+30h+var_10]
0x86BA34: test    eax, eax
0x86BA36: mov     byte ptr [esp+30h+var_4], 1
0x86BA3B: jz      short loc_86BA50
0x86BA3D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BA41: mov     ecx, eax
0x86BA43: add     eax, 5Ch ; '\'
0x86BA46: cmp     dword ptr [eax], 0
0x86BA49: jnz     short loc_86BA50
0x86BA4B: call    sub_772560
0x86BA50: mov     edi, [esp+30h+a3]
0x86BA54: push    2
0x86BA56: push    ebx
0x86BA57: push    2
0x86BA59: push    edi
0x86BA5A: call    sub_801110
0x86BA5F: add     esp, 10h
0x86BA62: push    edi; a3
0x86BA63: push    2; a2
0x86BA65: mov     ecx, esi; this
0x86BA67: call    sub_760010
0x86BA6C: lea     ecx, [esp+30h+var_10]
0x86BA70: push    ecx
0x86BA71: call    sub_772630
0x86BA76: add     esp, 4
0x86BA79: push    eax
0x86BA7A: lea     ecx, [esp+34h+a3]
0x86BA7E: mov     byte ptr [esp+34h+var_4], 5Dh ; ']'
0x86BA83: call    sub_75FAE0
0x86BA88: mov     eax, [esp+30h+var_10]
0x86BA8C: test    eax, eax
0x86BA8E: mov     byte ptr [esp+30h+var_4], 1
0x86BA93: jz      short loc_86BAA8
0x86BA95: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BA99: mov     ecx, eax
0x86BA9B: add     eax, 5Ch ; '\'
0x86BA9E: cmp     dword ptr [eax], 0
0x86BAA1: jnz     short loc_86BAA8
0x86BAA3: call    sub_772560
0x86BAA8: mov     edi, [esp+30h+a3]
0x86BAAC: push    2
0x86BAAE: push    ebx
0x86BAAF: push    3
0x86BAB1: push    edi
0x86BAB2: call    sub_801110
0x86BAB7: add     esp, 10h
0x86BABA: push    edi; a3
0x86BABB: push    3; a2
0x86BABD: mov     ecx, esi; this
0x86BABF: call    sub_760010
0x86BAC4: lea     edx, [esp+30h+var_10]
0x86BAC8: push    edx
0x86BAC9: call    sub_772630
0x86BACE: add     esp, 4
0x86BAD1: push    eax
0x86BAD2: lea     ecx, [esp+34h+a3]
0x86BAD6: mov     byte ptr [esp+34h+var_4], 5Eh ; '^'
0x86BADB: call    sub_75FAE0
0x86BAE0: mov     eax, [esp+30h+var_10]
0x86BAE4: test    eax, eax
0x86BAE6: mov     byte ptr [esp+30h+var_4], 1
0x86BAEB: jz      short loc_86BB00
0x86BAED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BAF1: mov     ecx, eax
0x86BAF3: add     eax, 5Ch ; '\'
0x86BAF6: cmp     dword ptr [eax], 0
0x86BAF9: jnz     short loc_86BB00
0x86BAFB: call    sub_772560
0x86BB00: mov     edi, [esp+30h+a3]
0x86BB04: push    2
0x86BB06: push    ebx
0x86BB07: push    4
0x86BB09: push    edi
0x86BB0A: call    sub_801110
0x86BB0F: add     esp, 10h
0x86BB12: push    edi; a3
0x86BB13: push    4; a2
0x86BB15: mov     ecx, esi; this
0x86BB17: call    sub_760010
0x86BB1C: lea     eax, [esp+30h+var_10]
0x86BB20: push    eax
0x86BB21: call    sub_772630
0x86BB26: add     esp, 4
0x86BB29: push    eax
0x86BB2A: lea     ecx, [esp+34h+a3]
0x86BB2E: mov     byte ptr [esp+34h+var_4], 5Fh ; '_'
0x86BB33: call    sub_75FAE0
0x86BB38: mov     eax, [esp+30h+var_10]
0x86BB3C: test    eax, eax
0x86BB3E: mov     byte ptr [esp+30h+var_4], 1
0x86BB43: jz      short loc_86BB58
0x86BB45: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BB49: mov     ecx, eax
0x86BB4B: add     eax, 5Ch ; '\'
0x86BB4E: cmp     dword ptr [eax], 0
0x86BB51: jnz     short loc_86BB58
0x86BB53: call    sub_772560
0x86BB58: mov     edi, [esp+30h+a3]
0x86BB5C: push    0
0x86BB5E: push    3
0x86BB60: push    5
0x86BB62: push    edi
0x86BB63: call    sub_801110
0x86BB68: mov     ecx, ds:0B43110h
0x86BB6E: add     esp, 10h
0x86BB71: push    ecx; a2
0x86BB72: mov     ecx, edi; this
0x86BB74: call    sub_76C910
0x86BB79: push    edi; a3
0x86BB7A: push    5; a2
0x86BB7C: mov     ecx, esi; this
0x86BB7E: call    sub_760010
0x86BB83: lea     edx, [esp+30h+var_10]
0x86BB87: push    edx
0x86BB88: call    sub_772630
0x86BB8D: add     esp, 4
0x86BB90: push    eax
0x86BB91: lea     ecx, [esp+34h+a3]
0x86BB95: mov     byte ptr [esp+34h+var_4], 60h ; '`'
0x86BB9A: call    sub_75FAE0
0x86BB9F: mov     eax, [esp+30h+var_10]
0x86BBA3: test    eax, eax
0x86BBA5: mov     byte ptr [esp+30h+var_4], 1
0x86BBAA: jz      short loc_86BBBF
0x86BBAC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BBB0: mov     ecx, eax
0x86BBB2: add     eax, 5Ch ; '\'
0x86BBB5: cmp     dword ptr [eax], 0
0x86BBB8: jnz     short loc_86BBBF
0x86BBBA: call    sub_772560
0x86BBBF: mov     edi, [esp+30h+a3]
0x86BBC3: push    2
0x86BBC5: push    ebx
0x86BBC6: push    6
0x86BBC8: push    edi
0x86BBC9: call    sub_801110
0x86BBCE: add     esp, 10h
0x86BBD1: push    edi; a3
0x86BBD2: push    6; a2
0x86BBD4: mov     ecx, esi; this
0x86BBD6: call    sub_760010
0x86BBDB: lea     eax, [esp+30h+var_10]
0x86BBDF: push    eax
0x86BBE0: call    sub_772630
0x86BBE5: add     esp, 4
0x86BBE8: push    eax
0x86BBE9: lea     ecx, [esp+34h+a3]
0x86BBED: mov     byte ptr [esp+34h+var_4], 61h ; 'a'
0x86BBF2: call    sub_75FAE0
0x86BBF7: mov     eax, [esp+30h+var_10]
0x86BBFB: test    eax, eax
0x86BBFD: mov     byte ptr [esp+30h+var_4], 1
0x86BC02: jz      short loc_86BC17
0x86BC04: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BC08: mov     ecx, eax
0x86BC0A: add     eax, 5Ch ; '\'
0x86BC0D: cmp     dword ptr [eax], 0
0x86BC10: jnz     short loc_86BC17
0x86BC12: call    sub_772560
0x86BC17: mov     edi, [esp+30h+a3]
0x86BC1B: push    0
0x86BC1D: push    3
0x86BC1F: push    7
0x86BC21: push    edi
0x86BC22: call    sub_801110
0x86BC27: add     esp, 10h
0x86BC2A: push    edi; a3
0x86BC2B: push    7; a2
0x86BC2D: mov     ecx, esi; this
0x86BC2F: call    sub_760010
0x86BC34: mov     ecx, [esp+30h+var_18]
0x86BC38: mov     eax, [ecx+0B0h]
0x86BC3E: push    eax; a2
0x86BC3F: mov     ecx, esi; this
0x86BC41: call    sub_7AECB0
0x86BC46: mov     edx, [esp+30h+var_18]
0x86BC4A: mov     eax, [edx+140h]
0x86BC50: push    eax; a2
0x86BC51: mov     ecx, esi; this
0x86BC53: call    sub_7AEC60
0x86BC58: cmp     dword ptr [esi+30h], 0
0x86BC5C: jnz     short loc_86BC66
0x86BC5E: call    sub_772DF0
0x86BC63: mov     [esi+30h], eax
0x86BC66: mov     ecx, [esi+30h]
0x86BC69: push    0
0x86BC6B: push    0
0x86BC6D: push    1Bh
0x86BC6F: call    sub_772CD0
0x86BC74: cmp     dword ptr [esi+30h], 0
0x86BC78: jnz     short loc_86BC82
0x86BC7A: call    sub_772DF0
0x86BC7F: mov     [esi+30h], eax
0x86BC82: mov     ecx, [esi+30h]
0x86BC85: push    0
0x86BC87: push    0
0x86BC89: push    0Fh
0x86BC8B: call    sub_772CD0
0x86BC90: cmp     dword ptr [esi+30h], 0
0x86BC94: jnz     short loc_86BC9E
0x86BC96: call    sub_772DF0
0x86BC9B: mov     [esi+30h], eax
0x86BC9E: mov     ecx, [esi+30h]
0x86BCA1: push    0
0x86BCA3: push    ebx
0x86BCA4: push    7
0x86BCA6: call    sub_772CD0
0x86BCAB: cmp     dword ptr [esi+30h], 0
0x86BCAF: jnz     short loc_86BCB9
0x86BCB1: call    sub_772DF0
0x86BCB6: mov     [esi+30h], eax
0x86BCB9: mov     ecx, [esi+30h]
0x86BCBC: push    0
0x86BCBE: push    4
0x86BCC0: push    17h
0x86BCC2: call    sub_772CD0
0x86BCC7: cmp     dword ptr [esi+30h], 0
0x86BCCB: jnz     short loc_86BCD5
0x86BCCD: call    sub_772DF0
0x86BCD2: mov     [esi+30h], eax
0x86BCD5: mov     ecx, [esi+30h]
0x86BCD8: push    0
0x86BCDA: push    ebx
0x86BCDB: push    0Eh
0x86BCDD: call    sub_772CD0
0x86BCE2: cmp     dword ptr [esi+30h], 0
0x86BCE6: jnz     short loc_86BCF0
0x86BCE8: call    sub_772DF0
0x86BCED: mov     [esi+30h], eax
0x86BCF0: mov     ecx, [esi+30h]
0x86BCF3: push    0
0x86BCF5: push    0
0x86BCF7: push    34h ; '4'
0x86BCF9: call    sub_772CD0
0x86BCFE: cmp     esi, ds:0B47690h
0x86BD04: mov     ds:0B43D90h, ebp
0x86BD0A: mov     dword ptr ds:0B44420h, 19Ch
0x86BD14: jz      short loc_86BD34
0x86BD16: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86BD1A: jnz     short loc_86BD23
0x86BD1C: mov     ecx, esi
0x86BD1E: call    sub_7604D0
0x86BD23: mov     esi, ds:0B47690h
0x86BD29: test    esi, esi
0x86BD2B: mov     [esp+30h+var_14], esi
0x86BD2F: jz      short loc_86BD34
0x86BD31: add     [esi+60h], ebx
0x86BD34: cmp     dword ptr [esi+18h], 8
0x86BD38: jnb     loc_86C00B
0x86BD3E: lea     eax, [esp+30h+var_10]
0x86BD42: push    eax
0x86BD43: call    sub_772630
0x86BD48: add     esp, 4
0x86BD4B: push    eax
0x86BD4C: lea     ecx, [esp+34h+a3]
0x86BD50: mov     byte ptr [esp+34h+var_4], 62h ; 'b'
0x86BD55: call    sub_75FAE0
0x86BD5A: mov     eax, [esp+30h+var_10]
0x86BD5E: test    eax, eax
0x86BD60: mov     byte ptr [esp+30h+var_4], 1
0x86BD65: jz      short loc_86BD7A
0x86BD67: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BD6B: mov     ecx, eax
0x86BD6D: add     eax, 5Ch ; '\'
0x86BD70: cmp     dword ptr [eax], 0
0x86BD73: jnz     short loc_86BD7A
0x86BD75: call    sub_772560
0x86BD7A: mov     edi, [esp+30h+a3]
0x86BD7E: push    2
0x86BD80: push    ebx
0x86BD81: push    0
0x86BD83: push    edi
0x86BD84: call    sub_801110
0x86BD89: add     esp, 10h
0x86BD8C: push    edi; a3
0x86BD8D: push    0; a2
0x86BD8F: mov     ecx, esi; this
0x86BD91: call    sub_760010
0x86BD96: lea     ecx, [esp+30h+var_10]
0x86BD9A: push    ecx
0x86BD9B: call    sub_772630
0x86BDA0: add     esp, 4
0x86BDA3: push    eax
0x86BDA4: lea     ecx, [esp+34h+a3]
0x86BDA8: mov     byte ptr [esp+34h+var_4], 63h ; 'c'
0x86BDAD: call    sub_75FAE0
0x86BDB2: mov     eax, [esp+30h+var_10]
0x86BDB6: test    eax, eax
0x86BDB8: mov     byte ptr [esp+30h+var_4], 1
0x86BDBD: jz      short loc_86BDD2
0x86BDBF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BDC3: mov     ecx, eax
0x86BDC5: add     eax, 5Ch ; '\'
0x86BDC8: cmp     dword ptr [eax], 0
0x86BDCB: jnz     short loc_86BDD2
0x86BDCD: call    sub_772560
0x86BDD2: mov     edi, [esp+30h+a3]
0x86BDD6: push    2
0x86BDD8: push    ebx
0x86BDD9: push    ebx
0x86BDDA: push    edi
0x86BDDB: call    sub_801110
0x86BDE0: add     esp, 10h
0x86BDE3: push    edi; a3
0x86BDE4: push    ebx; a2
0x86BDE5: mov     ecx, esi; this
0x86BDE7: call    sub_760010
0x86BDEC: lea     edx, [esp+30h+var_10]
0x86BDF0: push    edx
0x86BDF1: call    sub_772630
0x86BDF6: add     esp, 4
0x86BDF9: push    eax
0x86BDFA: lea     ecx, [esp+34h+a3]
0x86BDFE: mov     byte ptr [esp+34h+var_4], 64h ; 'd'
0x86BE03: call    sub_75FAE0
0x86BE08: mov     eax, [esp+30h+var_10]
0x86BE0C: test    eax, eax
0x86BE0E: mov     byte ptr [esp+30h+var_4], 1
0x86BE13: jz      short loc_86BE28
0x86BE15: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BE19: mov     ecx, eax
0x86BE1B: add     eax, 5Ch ; '\'
0x86BE1E: cmp     dword ptr [eax], 0
0x86BE21: jnz     short loc_86BE28
0x86BE23: call    sub_772560
0x86BE28: mov     edi, [esp+30h+a3]
0x86BE2C: push    2
0x86BE2E: push    ebx
0x86BE2F: push    2
0x86BE31: push    edi
0x86BE32: call    sub_801110
0x86BE37: add     esp, 10h
0x86BE3A: push    edi; a3
0x86BE3B: push    2; a2
0x86BE3D: mov     ecx, esi; this
0x86BE3F: call    sub_760010
0x86BE44: lea     eax, [esp+30h+var_10]
0x86BE48: push    eax
0x86BE49: call    sub_772630
0x86BE4E: add     esp, 4
0x86BE51: push    eax
0x86BE52: lea     ecx, [esp+34h+a3]
0x86BE56: mov     byte ptr [esp+34h+var_4], 65h ; 'e'
0x86BE5B: call    sub_75FAE0
0x86BE60: mov     eax, [esp+30h+var_10]
0x86BE64: test    eax, eax
0x86BE66: mov     byte ptr [esp+30h+var_4], 1
0x86BE6B: jz      short loc_86BE80
0x86BE6D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BE71: mov     ecx, eax
0x86BE73: add     eax, 5Ch ; '\'
0x86BE76: cmp     dword ptr [eax], 0
0x86BE79: jnz     short loc_86BE80
0x86BE7B: call    sub_772560
0x86BE80: mov     edi, [esp+30h+a3]
0x86BE84: push    2
0x86BE86: push    ebx
0x86BE87: push    3
0x86BE89: push    edi
0x86BE8A: call    sub_801110
0x86BE8F: add     esp, 10h
0x86BE92: push    edi; a3
0x86BE93: push    3; a2
0x86BE95: mov     ecx, esi; this
0x86BE97: call    sub_760010
0x86BE9C: lea     ecx, [esp+30h+var_10]
0x86BEA0: push    ecx
0x86BEA1: call    sub_772630
0x86BEA6: add     esp, 4
0x86BEA9: push    eax
0x86BEAA: lea     ecx, [esp+34h+a3]
0x86BEAE: mov     byte ptr [esp+34h+var_4], 66h ; 'f'
0x86BEB3: call    sub_75FAE0
0x86BEB8: mov     eax, [esp+30h+var_10]
0x86BEBC: test    eax, eax
0x86BEBE: mov     byte ptr [esp+30h+var_4], 1
0x86BEC3: jz      short loc_86BED8
0x86BEC5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BEC9: mov     ecx, eax
0x86BECB: add     eax, 5Ch ; '\'
0x86BECE: cmp     dword ptr [eax], 0
0x86BED1: jnz     short loc_86BED8
0x86BED3: call    sub_772560
0x86BED8: mov     edi, [esp+30h+a3]
0x86BEDC: push    2
0x86BEDE: push    ebx
0x86BEDF: push    4
0x86BEE1: push    edi
0x86BEE2: call    sub_801110
0x86BEE7: add     esp, 10h
0x86BEEA: push    edi; a3
0x86BEEB: push    4; a2
0x86BEED: mov     ecx, esi; this
0x86BEEF: call    sub_760010
0x86BEF4: lea     edx, [esp+30h+var_10]
0x86BEF8: push    edx
0x86BEF9: call    sub_772630
0x86BEFE: add     esp, 4
0x86BF01: push    eax
0x86BF02: lea     ecx, [esp+34h+a3]
0x86BF06: mov     byte ptr [esp+34h+var_4], 67h ; 'g'
0x86BF0B: call    sub_75FAE0
0x86BF10: mov     eax, [esp+30h+var_10]
0x86BF14: test    eax, eax
0x86BF16: mov     byte ptr [esp+30h+var_4], 1
0x86BF1B: jz      short loc_86BF30
0x86BF1D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BF21: mov     ecx, eax
0x86BF23: add     eax, 5Ch ; '\'
0x86BF26: cmp     dword ptr [eax], 0
0x86BF29: jnz     short loc_86BF30
0x86BF2B: call    sub_772560
0x86BF30: mov     edi, [esp+30h+a3]
0x86BF34: push    0
0x86BF36: push    3
0x86BF38: push    5
0x86BF3A: push    edi
0x86BF3B: call    sub_801110
0x86BF40: mov     eax, ds:0B43110h
0x86BF45: add     esp, 10h
0x86BF48: push    eax; a2
0x86BF49: mov     ecx, edi; this
0x86BF4B: call    sub_76C910
0x86BF50: push    edi; a3
0x86BF51: push    5; a2
0x86BF53: mov     ecx, esi; this
0x86BF55: call    sub_760010
0x86BF5A: lea     ecx, [esp+30h+var_10]
0x86BF5E: push    ecx
0x86BF5F: call    sub_772630
0x86BF64: add     esp, 4
0x86BF67: push    eax
0x86BF68: lea     ecx, [esp+34h+a3]
0x86BF6C: mov     byte ptr [esp+34h+var_4], 68h ; 'h'
0x86BF71: call    sub_75FAE0
0x86BF76: mov     eax, [esp+30h+var_10]
0x86BF7A: test    eax, eax
0x86BF7C: mov     byte ptr [esp+30h+var_4], 1
0x86BF81: jz      short loc_86BF96
0x86BF83: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BF87: mov     ecx, eax
0x86BF89: add     eax, 5Ch ; '\'
0x86BF8C: cmp     dword ptr [eax], 0
0x86BF8F: jnz     short loc_86BF96
0x86BF91: call    sub_772560
0x86BF96: mov     edi, [esp+30h+a3]
0x86BF9A: push    2
0x86BF9C: push    ebx
0x86BF9D: push    6
0x86BF9F: push    edi
0x86BFA0: call    sub_801110
0x86BFA5: add     esp, 10h
0x86BFA8: push    edi; a3
0x86BFA9: push    6; a2
0x86BFAB: mov     ecx, esi; this
0x86BFAD: call    sub_760010
0x86BFB2: lea     edx, [esp+30h+var_10]
0x86BFB6: push    edx
0x86BFB7: call    sub_772630
0x86BFBC: add     esp, 4
0x86BFBF: push    eax
0x86BFC0: lea     ecx, [esp+34h+a3]
0x86BFC4: mov     byte ptr [esp+34h+var_4], 69h ; 'i'
0x86BFC9: call    sub_75FAE0
0x86BFCE: mov     eax, [esp+30h+var_10]
0x86BFD2: test    eax, eax
0x86BFD4: mov     byte ptr [esp+30h+var_4], 1
0x86BFD9: jz      short loc_86BFEE
0x86BFDB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86BFDF: mov     ecx, eax
0x86BFE1: add     eax, 5Ch ; '\'
0x86BFE4: cmp     dword ptr [eax], 0
0x86BFE7: jnz     short loc_86BFEE
0x86BFE9: call    sub_772560
0x86BFEE: mov     edi, [esp+30h+a3]
0x86BFF2: push    0
0x86BFF4: push    3
0x86BFF6: push    7
0x86BFF8: push    edi
0x86BFF9: call    sub_801110
0x86BFFE: add     esp, 10h
0x86C001: push    edi; a3
0x86C002: push    7; a2
0x86C004: mov     ecx, esi; this
0x86C006: call    sub_760010
0x86C00B: mov     ebp, [esp+30h+var_18]
0x86C00F: mov     eax, [ebp+0B4h]
0x86C015: push    eax; a2
0x86C016: mov     ecx, esi; this
0x86C018: call    sub_7AECB0
0x86C01D: mov     eax, [ebp+144h]
0x86C023: push    eax; a2
0x86C024: mov     ecx, esi; this
0x86C026: call    sub_7AEC60
0x86C02B: cmp     dword ptr [esi+30h], 0
0x86C02F: jnz     short loc_86C039
0x86C031: call    sub_772DF0
0x86C036: mov     [esi+30h], eax
0x86C039: mov     ecx, [esi+30h]
0x86C03C: push    0
0x86C03E: push    0
0x86C040: push    1Bh
0x86C042: call    sub_772CD0
0x86C047: cmp     dword ptr [esi+30h], 0
0x86C04B: jnz     short loc_86C055
0x86C04D: call    sub_772DF0
0x86C052: mov     [esi+30h], eax
0x86C055: mov     ecx, [esi+30h]
0x86C058: push    0
0x86C05A: push    0
0x86C05C: push    0Fh
0x86C05E: call    sub_772CD0
0x86C063: cmp     dword ptr [esi+30h], 0
0x86C067: jnz     short loc_86C071
0x86C069: call    sub_772DF0
0x86C06E: mov     [esi+30h], eax
0x86C071: mov     ecx, [esi+30h]
0x86C074: push    0
0x86C076: push    ebx
0x86C077: push    7
0x86C079: call    sub_772CD0
0x86C07E: cmp     dword ptr [esi+30h], 0
0x86C082: jnz     short loc_86C08C
0x86C084: call    sub_772DF0
0x86C089: mov     [esi+30h], eax
0x86C08C: mov     ecx, [esi+30h]
0x86C08F: push    0
0x86C091: push    4
0x86C093: push    17h
0x86C095: call    sub_772CD0
0x86C09A: cmp     dword ptr [esi+30h], 0
0x86C09E: jnz     short loc_86C0A8
0x86C0A0: call    sub_772DF0
0x86C0A5: mov     [esi+30h], eax
0x86C0A8: mov     ecx, [esi+30h]
0x86C0AB: push    0
0x86C0AD: push    ebx
0x86C0AE: push    0Eh
0x86C0B0: call    sub_772CD0
0x86C0B5: cmp     dword ptr [esi+30h], 0
0x86C0B9: jnz     short loc_86C0C3
0x86C0BB: call    sub_772DF0
0x86C0C0: mov     [esi+30h], eax
0x86C0C3: mov     ecx, [esi+30h]
0x86C0C6: push    0
0x86C0C8: push    0
0x86C0CA: push    34h ; '4'
0x86C0CC: call    sub_772CD0
0x86C0D1: cmp     esi, ds:0B47694h
0x86C0D7: mov     ebp, 390F2h
0x86C0DC: mov     ds:0B43DA8h, ebp
0x86C0E2: mov     dword ptr ds:0B44438h, 11Ch
0x86C0EC: jz      short loc_86C10C
0x86C0EE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86C0F2: jnz     short loc_86C0FB
0x86C0F4: mov     ecx, esi
0x86C0F6: call    sub_7604D0
0x86C0FB: mov     esi, ds:0B47694h
0x86C101: test    esi, esi
0x86C103: mov     [esp+30h+var_14], esi
0x86C107: jz      short loc_86C10C
0x86C109: add     [esi+60h], ebx
0x86C10C: cmp     dword ptr [esi+18h], 8
0x86C110: jnb     loc_86C3E3
0x86C116: lea     eax, [esp+30h+var_10]
0x86C11A: push    eax
0x86C11B: call    sub_772630
0x86C120: add     esp, 4
0x86C123: push    eax
0x86C124: lea     ecx, [esp+34h+a3]
0x86C128: mov     byte ptr [esp+34h+var_4], 6Ah ; 'j'
0x86C12D: call    sub_75FAE0
0x86C132: mov     eax, [esp+30h+var_10]
0x86C136: test    eax, eax
0x86C138: mov     byte ptr [esp+30h+var_4], 1
0x86C13D: jz      short loc_86C152
0x86C13F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C143: mov     ecx, eax
0x86C145: add     eax, 5Ch ; '\'
0x86C148: cmp     dword ptr [eax], 0
0x86C14B: jnz     short loc_86C152
0x86C14D: call    sub_772560
0x86C152: mov     edi, [esp+30h+a3]
0x86C156: push    2
0x86C158: push    ebx
0x86C159: push    0
0x86C15B: push    edi
0x86C15C: call    sub_801110
0x86C161: add     esp, 10h
0x86C164: push    edi; a3
0x86C165: push    0; a2
0x86C167: mov     ecx, esi; this
0x86C169: call    sub_760010
0x86C16E: lea     ecx, [esp+30h+var_10]
0x86C172: push    ecx
0x86C173: call    sub_772630
0x86C178: add     esp, 4
0x86C17B: push    eax
0x86C17C: lea     ecx, [esp+34h+a3]
0x86C180: mov     byte ptr [esp+34h+var_4], 6Bh ; 'k'
0x86C185: call    sub_75FAE0
0x86C18A: mov     eax, [esp+30h+var_10]
0x86C18E: test    eax, eax
0x86C190: mov     byte ptr [esp+30h+var_4], 1
0x86C195: jz      short loc_86C1AA
0x86C197: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C19B: mov     ecx, eax
0x86C19D: add     eax, 5Ch ; '\'
0x86C1A0: cmp     dword ptr [eax], 0
0x86C1A3: jnz     short loc_86C1AA
0x86C1A5: call    sub_772560
0x86C1AA: mov     edi, [esp+30h+a3]
0x86C1AE: push    2
0x86C1B0: push    ebx
0x86C1B1: push    ebx
0x86C1B2: push    edi
0x86C1B3: call    sub_801110
0x86C1B8: add     esp, 10h
0x86C1BB: push    edi; a3
0x86C1BC: push    ebx; a2
0x86C1BD: mov     ecx, esi; this
0x86C1BF: call    sub_760010
0x86C1C4: lea     edx, [esp+30h+var_10]
0x86C1C8: push    edx
0x86C1C9: call    sub_772630
0x86C1CE: add     esp, 4
0x86C1D1: push    eax
0x86C1D2: lea     ecx, [esp+34h+a3]
0x86C1D6: mov     byte ptr [esp+34h+var_4], 6Ch ; 'l'
0x86C1DB: call    sub_75FAE0
0x86C1E0: mov     eax, [esp+30h+var_10]
0x86C1E4: test    eax, eax
0x86C1E6: mov     byte ptr [esp+30h+var_4], 1
0x86C1EB: jz      short loc_86C200
0x86C1ED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C1F1: mov     ecx, eax
0x86C1F3: add     eax, 5Ch ; '\'
0x86C1F6: cmp     dword ptr [eax], 0
0x86C1F9: jnz     short loc_86C200
0x86C1FB: call    sub_772560
0x86C200: mov     edi, [esp+30h+a3]
0x86C204: push    2
0x86C206: push    ebx
0x86C207: push    2
0x86C209: push    edi
0x86C20A: call    sub_801110
0x86C20F: add     esp, 10h
0x86C212: push    edi; a3
0x86C213: push    2; a2
0x86C215: mov     ecx, esi; this
0x86C217: call    sub_760010
0x86C21C: lea     eax, [esp+30h+var_10]
0x86C220: push    eax
0x86C221: call    sub_772630
0x86C226: add     esp, 4
0x86C229: push    eax
0x86C22A: lea     ecx, [esp+34h+a3]
0x86C22E: mov     byte ptr [esp+34h+var_4], 6Dh ; 'm'
0x86C233: call    sub_75FAE0
0x86C238: mov     eax, [esp+30h+var_10]
0x86C23C: test    eax, eax
0x86C23E: mov     byte ptr [esp+30h+var_4], 1
0x86C243: jz      short loc_86C258
0x86C245: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C249: mov     ecx, eax
0x86C24B: add     eax, 5Ch ; '\'
0x86C24E: cmp     dword ptr [eax], 0
0x86C251: jnz     short loc_86C258
0x86C253: call    sub_772560
0x86C258: mov     edi, [esp+30h+a3]
0x86C25C: push    2
0x86C25E: push    ebx
0x86C25F: push    3
0x86C261: push    edi
0x86C262: call    sub_801110
0x86C267: add     esp, 10h
0x86C26A: push    edi; a3
0x86C26B: push    3; a2
0x86C26D: mov     ecx, esi; this
0x86C26F: call    sub_760010
0x86C274: lea     ecx, [esp+30h+var_10]
0x86C278: push    ecx
0x86C279: call    sub_772630
0x86C27E: add     esp, 4
0x86C281: push    eax
0x86C282: lea     ecx, [esp+34h+a3]
0x86C286: mov     byte ptr [esp+34h+var_4], 6Eh ; 'n'
0x86C28B: call    sub_75FAE0
0x86C290: mov     eax, [esp+30h+var_10]
0x86C294: test    eax, eax
0x86C296: mov     byte ptr [esp+30h+var_4], 1
0x86C29B: jz      short loc_86C2B0
0x86C29D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C2A1: mov     ecx, eax
0x86C2A3: add     eax, 5Ch ; '\'
0x86C2A6: cmp     dword ptr [eax], 0
0x86C2A9: jnz     short loc_86C2B0
0x86C2AB: call    sub_772560
0x86C2B0: mov     edi, [esp+30h+a3]
0x86C2B4: push    2
0x86C2B6: push    ebx
0x86C2B7: push    4
0x86C2B9: push    edi
0x86C2BA: call    sub_801110
0x86C2BF: add     esp, 10h
0x86C2C2: push    edi; a3
0x86C2C3: push    4; a2
0x86C2C5: mov     ecx, esi; this
0x86C2C7: call    sub_760010
0x86C2CC: lea     edx, [esp+30h+var_10]
0x86C2D0: push    edx
0x86C2D1: call    sub_772630
0x86C2D6: add     esp, 4
0x86C2D9: push    eax
0x86C2DA: lea     ecx, [esp+34h+a3]
0x86C2DE: mov     byte ptr [esp+34h+var_4], 6Fh ; 'o'
0x86C2E3: call    sub_75FAE0
0x86C2E8: mov     eax, [esp+30h+var_10]
0x86C2EC: test    eax, eax
0x86C2EE: mov     byte ptr [esp+30h+var_4], 1
0x86C2F3: jz      short loc_86C308
0x86C2F5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C2F9: mov     ecx, eax
0x86C2FB: add     eax, 5Ch ; '\'
0x86C2FE: cmp     dword ptr [eax], 0
0x86C301: jnz     short loc_86C308
0x86C303: call    sub_772560
0x86C308: mov     edi, [esp+30h+a3]
0x86C30C: push    0
0x86C30E: push    3
0x86C310: push    5
0x86C312: push    edi
0x86C313: call    sub_801110
0x86C318: mov     eax, ds:0B43110h
0x86C31D: add     esp, 10h
0x86C320: push    eax; a2
0x86C321: mov     ecx, edi; this
0x86C323: call    sub_76C910
0x86C328: push    edi; a3
0x86C329: push    5; a2
0x86C32B: mov     ecx, esi; this
0x86C32D: call    sub_760010
0x86C332: lea     ecx, [esp+30h+var_10]
0x86C336: push    ecx
0x86C337: call    sub_772630
0x86C33C: add     esp, 4
0x86C33F: push    eax
0x86C340: lea     ecx, [esp+34h+a3]
0x86C344: mov     byte ptr [esp+34h+var_4], 70h ; 'p'
0x86C349: call    sub_75FAE0
0x86C34E: mov     eax, [esp+30h+var_10]
0x86C352: test    eax, eax
0x86C354: mov     byte ptr [esp+30h+var_4], 1
0x86C359: jz      short loc_86C36E
0x86C35B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C35F: mov     ecx, eax
0x86C361: add     eax, 5Ch ; '\'
0x86C364: cmp     dword ptr [eax], 0
0x86C367: jnz     short loc_86C36E
0x86C369: call    sub_772560
0x86C36E: mov     edi, [esp+30h+a3]
0x86C372: push    2
0x86C374: push    ebx
0x86C375: push    6
0x86C377: push    edi
0x86C378: call    sub_801110
0x86C37D: add     esp, 10h
0x86C380: push    edi; a3
0x86C381: push    6; a2
0x86C383: mov     ecx, esi; this
0x86C385: call    sub_760010
0x86C38A: lea     edx, [esp+30h+var_10]
0x86C38E: push    edx
0x86C38F: call    sub_772630
0x86C394: add     esp, 4
0x86C397: push    eax
0x86C398: lea     ecx, [esp+34h+a3]
0x86C39C: mov     byte ptr [esp+34h+var_4], 71h ; 'q'
0x86C3A1: call    sub_75FAE0
0x86C3A6: mov     eax, [esp+30h+var_10]
0x86C3AA: test    eax, eax
0x86C3AC: mov     byte ptr [esp+30h+var_4], 1
0x86C3B1: jz      short loc_86C3C6
0x86C3B3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C3B7: mov     ecx, eax
0x86C3B9: add     eax, 5Ch ; '\'
0x86C3BC: cmp     dword ptr [eax], 0
0x86C3BF: jnz     short loc_86C3C6
0x86C3C1: call    sub_772560
0x86C3C6: mov     edi, [esp+30h+a3]
0x86C3CA: push    0
0x86C3CC: push    3
0x86C3CE: push    7
0x86C3D0: push    edi
0x86C3D1: call    sub_801110
0x86C3D6: add     esp, 10h
0x86C3D9: push    edi; a3
0x86C3DA: push    7; a2
0x86C3DC: mov     ecx, esi; this
0x86C3DE: call    sub_760010
0x86C3E3: mov     eax, [esp+30h+var_18]
0x86C3E7: mov     eax, [eax+0B4h]
0x86C3ED: push    eax; a2
0x86C3EE: mov     ecx, esi; this
0x86C3F0: call    sub_7AECB0
0x86C3F5: mov     ecx, [esp+30h+var_18]
0x86C3F9: mov     eax, [ecx+148h]
0x86C3FF: push    eax; a2
0x86C400: mov     ecx, esi; this
0x86C402: call    sub_7AEC60
0x86C407: cmp     dword ptr [esi+30h], 0
0x86C40B: jnz     short loc_86C415
0x86C40D: call    sub_772DF0
0x86C412: mov     [esi+30h], eax
0x86C415: mov     ecx, [esi+30h]
0x86C418: push    0
0x86C41A: push    0
0x86C41C: push    1Bh
0x86C41E: call    sub_772CD0
0x86C423: cmp     dword ptr [esi+30h], 0
0x86C427: jnz     short loc_86C431
0x86C429: call    sub_772DF0
0x86C42E: mov     [esi+30h], eax
0x86C431: mov     ecx, [esi+30h]
0x86C434: push    0
0x86C436: push    0
0x86C438: push    0Fh
0x86C43A: call    sub_772CD0
0x86C43F: cmp     dword ptr [esi+30h], 0
0x86C443: jnz     short loc_86C44D
0x86C445: call    sub_772DF0
0x86C44A: mov     [esi+30h], eax
0x86C44D: mov     ecx, [esi+30h]
0x86C450: push    0
0x86C452: push    ebx
0x86C453: push    7
0x86C455: call    sub_772CD0
0x86C45A: cmp     dword ptr [esi+30h], 0
0x86C45E: jnz     short loc_86C468
0x86C460: call    sub_772DF0
0x86C465: mov     [esi+30h], eax
0x86C468: mov     ecx, [esi+30h]
0x86C46B: push    0
0x86C46D: push    4
0x86C46F: push    17h
0x86C471: call    sub_772CD0
0x86C476: cmp     dword ptr [esi+30h], 0
0x86C47A: jnz     short loc_86C484
0x86C47C: call    sub_772DF0
0x86C481: mov     [esi+30h], eax
0x86C484: mov     ecx, [esi+30h]
0x86C487: push    0
0x86C489: push    ebx
0x86C48A: push    0Eh
0x86C48C: call    sub_772CD0
0x86C491: cmp     dword ptr [esi+30h], 0
0x86C495: jnz     short loc_86C49F
0x86C497: call    sub_772DF0
0x86C49C: mov     [esi+30h], eax
0x86C49F: mov     ecx, [esi+30h]
0x86C4A2: push    0
0x86C4A4: push    0
0x86C4A6: push    34h ; '4'
0x86C4A8: call    sub_772CD0
0x86C4AD: push    offset dword_B47698
0x86C4B2: lea     ecx, [esp+34h+var_14]
0x86C4B6: mov     ds:0B43DACh, ebp
0x86C4BC: mov     dword ptr ds:0B4443Ch, 19Ch
0x86C4C6: call    sub_76C890
0x86C4CB: mov     esi, [esp+30h+var_14]
0x86C4CF: cmp     dword ptr [esi+18h], 8
0x86C4D3: jnb     loc_86C7A7
0x86C4D9: lea     edx, [esp+30h+var_10]
0x86C4DD: push    edx
0x86C4DE: call    sub_772630
0x86C4E3: add     esp, 4
0x86C4E6: push    eax
0x86C4E7: lea     ecx, [esp+34h+a3]
0x86C4EB: mov     byte ptr [esp+34h+var_4], 72h ; 'r'
0x86C4F0: call    sub_75FAE0
0x86C4F5: mov     eax, [esp+30h+var_10]
0x86C4F9: test    eax, eax
0x86C4FB: mov     byte ptr [esp+30h+var_4], 1
0x86C500: jz      short loc_86C515
0x86C502: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C506: mov     ecx, eax
0x86C508: add     eax, 5Ch ; '\'
0x86C50B: cmp     dword ptr [eax], 0
0x86C50E: jnz     short loc_86C515
0x86C510: call    sub_772560
0x86C515: mov     edi, [esp+30h+a3]
0x86C519: push    2
0x86C51B: push    ebx
0x86C51C: push    0
0x86C51E: push    edi
0x86C51F: call    sub_801110
0x86C524: add     esp, 10h
0x86C527: push    edi; a3
0x86C528: push    0; a2
0x86C52A: mov     ecx, esi; this
0x86C52C: call    sub_760010
0x86C531: lea     eax, [esp+30h+var_10]
0x86C535: push    eax
0x86C536: call    sub_772630
0x86C53B: add     esp, 4
0x86C53E: push    eax
0x86C53F: lea     ecx, [esp+34h+a3]
0x86C543: mov     byte ptr [esp+34h+var_4], 73h ; 's'
0x86C548: call    sub_75FAE0
0x86C54D: mov     eax, [esp+30h+var_10]
0x86C551: test    eax, eax
0x86C553: mov     byte ptr [esp+30h+var_4], 1
0x86C558: jz      short loc_86C56D
0x86C55A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C55E: mov     ecx, eax
0x86C560: add     eax, 5Ch ; '\'
0x86C563: cmp     dword ptr [eax], 0
0x86C566: jnz     short loc_86C56D
0x86C568: call    sub_772560
0x86C56D: mov     edi, [esp+30h+a3]
0x86C571: push    2
0x86C573: push    ebx
0x86C574: push    ebx
0x86C575: push    edi
0x86C576: call    sub_801110
0x86C57B: add     esp, 10h
0x86C57E: push    edi; a3
0x86C57F: push    ebx; a2
0x86C580: mov     ecx, esi; this
0x86C582: call    sub_760010
0x86C587: lea     ecx, [esp+30h+var_10]
0x86C58B: push    ecx
0x86C58C: call    sub_772630
0x86C591: add     esp, 4
0x86C594: push    eax
0x86C595: lea     ecx, [esp+34h+a3]
0x86C599: mov     byte ptr [esp+34h+var_4], 74h ; 't'
0x86C59E: call    sub_75FAE0
0x86C5A3: mov     eax, [esp+30h+var_10]
0x86C5A7: test    eax, eax
0x86C5A9: mov     byte ptr [esp+30h+var_4], 1
0x86C5AE: jz      short loc_86C5C3
0x86C5B0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C5B4: mov     ecx, eax
0x86C5B6: add     eax, 5Ch ; '\'
0x86C5B9: cmp     dword ptr [eax], 0
0x86C5BC: jnz     short loc_86C5C3
0x86C5BE: call    sub_772560
0x86C5C3: mov     edi, [esp+30h+a3]
0x86C5C7: push    2
0x86C5C9: push    ebx
0x86C5CA: push    2
0x86C5CC: push    edi
0x86C5CD: call    sub_801110
0x86C5D2: add     esp, 10h
0x86C5D5: push    edi; a3
0x86C5D6: push    2; a2
0x86C5D8: mov     ecx, esi; this
0x86C5DA: call    sub_760010
0x86C5DF: lea     edx, [esp+30h+var_10]
0x86C5E3: push    edx
0x86C5E4: call    sub_772630
0x86C5E9: add     esp, 4
0x86C5EC: push    eax
0x86C5ED: lea     ecx, [esp+34h+a3]
0x86C5F1: mov     byte ptr [esp+34h+var_4], 75h ; 'u'
0x86C5F6: call    sub_75FAE0
0x86C5FB: mov     eax, [esp+30h+var_10]
0x86C5FF: test    eax, eax
0x86C601: mov     byte ptr [esp+30h+var_4], 1
0x86C606: jz      short loc_86C61B
0x86C608: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C60C: mov     ecx, eax
0x86C60E: add     eax, 5Ch ; '\'
0x86C611: cmp     dword ptr [eax], 0
0x86C614: jnz     short loc_86C61B
0x86C616: call    sub_772560
0x86C61B: mov     edi, [esp+30h+a3]
0x86C61F: push    2
0x86C621: push    ebx
0x86C622: push    3
0x86C624: push    edi
0x86C625: call    sub_801110
0x86C62A: add     esp, 10h
0x86C62D: push    edi; a3
0x86C62E: push    3; a2
0x86C630: mov     ecx, esi; this
0x86C632: call    sub_760010
0x86C637: lea     eax, [esp+30h+var_10]
0x86C63B: push    eax
0x86C63C: call    sub_772630
0x86C641: add     esp, 4
0x86C644: push    eax
0x86C645: lea     ecx, [esp+34h+a3]
0x86C649: mov     byte ptr [esp+34h+var_4], 76h ; 'v'
0x86C64E: call    sub_75FAE0
0x86C653: mov     eax, [esp+30h+var_10]
0x86C657: test    eax, eax
0x86C659: mov     byte ptr [esp+30h+var_4], 1
0x86C65E: jz      short loc_86C673
0x86C660: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C664: mov     ecx, eax
0x86C666: add     eax, 5Ch ; '\'
0x86C669: cmp     dword ptr [eax], 0
0x86C66C: jnz     short loc_86C673
0x86C66E: call    sub_772560
0x86C673: mov     edi, [esp+30h+a3]
0x86C677: push    2
0x86C679: push    ebx
0x86C67A: push    4
0x86C67C: push    edi
0x86C67D: call    sub_801110
0x86C682: add     esp, 10h
0x86C685: push    edi; a3
0x86C686: push    4; a2
0x86C688: mov     ecx, esi; this
0x86C68A: call    sub_760010
0x86C68F: lea     ecx, [esp+30h+var_10]
0x86C693: push    ecx
0x86C694: call    sub_772630
0x86C699: add     esp, 4
0x86C69C: push    eax
0x86C69D: lea     ecx, [esp+34h+a3]
0x86C6A1: mov     byte ptr [esp+34h+var_4], 77h ; 'w'
0x86C6A6: call    sub_75FAE0
0x86C6AB: mov     eax, [esp+30h+var_10]
0x86C6AF: test    eax, eax
0x86C6B1: mov     byte ptr [esp+30h+var_4], 1
0x86C6B6: jz      short loc_86C6CB
0x86C6B8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C6BC: mov     ecx, eax
0x86C6BE: add     eax, 5Ch ; '\'
0x86C6C1: cmp     dword ptr [eax], 0
0x86C6C4: jnz     short loc_86C6CB
0x86C6C6: call    sub_772560
0x86C6CB: mov     edi, [esp+30h+a3]
0x86C6CF: push    0
0x86C6D1: push    3
0x86C6D3: push    5
0x86C6D5: push    edi
0x86C6D6: call    sub_801110
0x86C6DB: mov     edx, ds:0B43110h
0x86C6E1: add     esp, 10h
0x86C6E4: push    edx; a2
0x86C6E5: mov     ecx, edi; this
0x86C6E7: call    sub_76C910
0x86C6EC: push    edi; a3
0x86C6ED: push    5; a2
0x86C6EF: mov     ecx, esi; this
0x86C6F1: call    sub_760010
0x86C6F6: lea     eax, [esp+30h+var_10]
0x86C6FA: push    eax
0x86C6FB: call    sub_772630
0x86C700: add     esp, 4
0x86C703: push    eax
0x86C704: lea     ecx, [esp+34h+a3]
0x86C708: mov     byte ptr [esp+34h+var_4], 78h ; 'x'
0x86C70D: call    sub_75FAE0
0x86C712: mov     eax, [esp+30h+var_10]
0x86C716: test    eax, eax
0x86C718: mov     byte ptr [esp+30h+var_4], 1
0x86C71D: jz      short loc_86C732
0x86C71F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C723: mov     ecx, eax
0x86C725: add     eax, 5Ch ; '\'
0x86C728: cmp     dword ptr [eax], 0
0x86C72B: jnz     short loc_86C732
0x86C72D: call    sub_772560
0x86C732: mov     edi, [esp+30h+a3]
0x86C736: push    2
0x86C738: push    ebx
0x86C739: push    6
0x86C73B: push    edi
0x86C73C: call    sub_801110
0x86C741: add     esp, 10h
0x86C744: push    edi; a3
0x86C745: push    6; a2
0x86C747: mov     ecx, esi; this
0x86C749: call    sub_760010
0x86C74E: lea     ecx, [esp+30h+var_10]
0x86C752: push    ecx
0x86C753: call    sub_772630
0x86C758: add     esp, 4
0x86C75B: push    eax
0x86C75C: lea     ecx, [esp+34h+a3]
0x86C760: mov     byte ptr [esp+34h+var_4], 79h ; 'y'
0x86C765: call    sub_75FAE0
0x86C76A: mov     eax, [esp+30h+var_10]
0x86C76E: test    eax, eax
0x86C770: mov     byte ptr [esp+30h+var_4], 1
0x86C775: jz      short loc_86C78A
0x86C777: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C77B: mov     ecx, eax
0x86C77D: add     eax, 5Ch ; '\'
0x86C780: cmp     dword ptr [eax], 0
0x86C783: jnz     short loc_86C78A
0x86C785: call    sub_772560
0x86C78A: mov     edi, [esp+30h+a3]
0x86C78E: push    0
0x86C790: push    3
0x86C792: push    7
0x86C794: push    edi
0x86C795: call    sub_801110
0x86C79A: add     esp, 10h
0x86C79D: push    edi; a3
0x86C79E: push    7; a2
0x86C7A0: mov     ecx, esi; this
0x86C7A2: call    sub_760010
0x86C7A7: mov     ebp, [esp+30h+var_18]
0x86C7AB: mov     eax, [ebp+0B8h]
0x86C7B1: push    eax; a2
0x86C7B2: mov     ecx, esi; this
0x86C7B4: call    sub_7AECB0
0x86C7B9: mov     eax, [ebp+144h]
0x86C7BF: push    eax; a2
0x86C7C0: mov     ecx, esi; this
0x86C7C2: call    sub_7AEC60
0x86C7C7: cmp     dword ptr [esi+30h], 0
0x86C7CB: jnz     short loc_86C7D5
0x86C7CD: call    sub_772DF0
0x86C7D2: mov     [esi+30h], eax
0x86C7D5: mov     ecx, [esi+30h]
0x86C7D8: push    0
0x86C7DA: push    0
0x86C7DC: push    1Bh
0x86C7DE: call    sub_772CD0
0x86C7E3: cmp     dword ptr [esi+30h], 0
0x86C7E7: jnz     short loc_86C7F1
0x86C7E9: call    sub_772DF0
0x86C7EE: mov     [esi+30h], eax
0x86C7F1: mov     ecx, [esi+30h]
0x86C7F4: push    0
0x86C7F6: push    0
0x86C7F8: push    0Fh
0x86C7FA: call    sub_772CD0
0x86C7FF: cmp     dword ptr [esi+30h], 0
0x86C803: jnz     short loc_86C80D
0x86C805: call    sub_772DF0
0x86C80A: mov     [esi+30h], eax
0x86C80D: mov     ecx, [esi+30h]
0x86C810: push    0
0x86C812: push    ebx
0x86C813: push    7
0x86C815: call    sub_772CD0
0x86C81A: cmp     dword ptr [esi+30h], 0
0x86C81E: jnz     short loc_86C828
0x86C820: call    sub_772DF0
0x86C825: mov     [esi+30h], eax
0x86C828: mov     ecx, [esi+30h]
0x86C82B: push    0
0x86C82D: push    4
0x86C82F: push    17h
0x86C831: call    sub_772CD0
0x86C836: cmp     dword ptr [esi+30h], 0
0x86C83A: jnz     short loc_86C844
0x86C83C: call    sub_772DF0
0x86C841: mov     [esi+30h], eax
0x86C844: mov     ecx, [esi+30h]
0x86C847: push    0
0x86C849: push    ebx
0x86C84A: push    0Eh
0x86C84C: call    sub_772CD0
0x86C851: cmp     dword ptr [esi+30h], 0
0x86C855: jnz     short loc_86C85F
0x86C857: call    sub_772DF0
0x86C85C: mov     [esi+30h], eax
0x86C85F: mov     ecx, [esi+30h]
0x86C862: push    0
0x86C864: push    0
0x86C866: push    34h ; '4'
0x86C868: call    sub_772CD0
0x86C86D: mov     ebp, 790F8h
0x86C872: push    offset dword_B4769C
0x86C877: lea     ecx, [esp+34h+var_14]
0x86C87B: mov     ds:0B43DC0h, ebp
0x86C881: mov     dword ptr ds:0B44450h, 11Ch
0x86C88B: call    sub_76C890
0x86C890: mov     esi, [esp+30h+var_14]
0x86C894: cmp     dword ptr [esi+18h], 8
0x86C898: jnb     loc_86CB6C
0x86C89E: lea     edx, [esp+30h+var_10]
0x86C8A2: push    edx
0x86C8A3: call    sub_772630
0x86C8A8: add     esp, 4
0x86C8AB: push    eax
0x86C8AC: lea     ecx, [esp+34h+a3]
0x86C8B0: mov     byte ptr [esp+34h+var_4], 7Ah ; 'z'
0x86C8B5: call    sub_75FAE0
0x86C8BA: mov     eax, [esp+30h+var_10]
0x86C8BE: test    eax, eax
0x86C8C0: mov     byte ptr [esp+30h+var_4], 1
0x86C8C5: jz      short loc_86C8DA
0x86C8C7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C8CB: mov     ecx, eax
0x86C8CD: add     eax, 5Ch ; '\'
0x86C8D0: cmp     dword ptr [eax], 0
0x86C8D3: jnz     short loc_86C8DA
0x86C8D5: call    sub_772560
0x86C8DA: mov     edi, [esp+30h+a3]
0x86C8DE: push    2
0x86C8E0: push    ebx
0x86C8E1: push    0
0x86C8E3: push    edi
0x86C8E4: call    sub_801110
0x86C8E9: add     esp, 10h
0x86C8EC: push    edi; a3
0x86C8ED: push    0; a2
0x86C8EF: mov     ecx, esi; this
0x86C8F1: call    sub_760010
0x86C8F6: lea     eax, [esp+30h+var_10]
0x86C8FA: push    eax
0x86C8FB: call    sub_772630
0x86C900: add     esp, 4
0x86C903: push    eax
0x86C904: lea     ecx, [esp+34h+a3]
0x86C908: mov     byte ptr [esp+34h+var_4], 7Bh ; '{'
0x86C90D: call    sub_75FAE0
0x86C912: mov     eax, [esp+30h+var_10]
0x86C916: test    eax, eax
0x86C918: mov     byte ptr [esp+30h+var_4], 1
0x86C91D: jz      short loc_86C932
0x86C91F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C923: mov     ecx, eax
0x86C925: add     eax, 5Ch ; '\'
0x86C928: cmp     dword ptr [eax], 0
0x86C92B: jnz     short loc_86C932
0x86C92D: call    sub_772560
0x86C932: mov     edi, [esp+30h+a3]
0x86C936: push    2
0x86C938: push    ebx
0x86C939: push    ebx
0x86C93A: push    edi
0x86C93B: call    sub_801110
0x86C940: add     esp, 10h
0x86C943: push    edi; a3
0x86C944: push    ebx; a2
0x86C945: mov     ecx, esi; this
0x86C947: call    sub_760010
0x86C94C: lea     ecx, [esp+30h+var_10]
0x86C950: push    ecx
0x86C951: call    sub_772630
0x86C956: add     esp, 4
0x86C959: push    eax
0x86C95A: lea     ecx, [esp+34h+a3]
0x86C95E: mov     byte ptr [esp+34h+var_4], 7Ch ; '|'
0x86C963: call    sub_75FAE0
0x86C968: mov     eax, [esp+30h+var_10]
0x86C96C: test    eax, eax
0x86C96E: mov     byte ptr [esp+30h+var_4], 1
0x86C973: jz      short loc_86C988
0x86C975: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C979: mov     ecx, eax
0x86C97B: add     eax, 5Ch ; '\'
0x86C97E: cmp     dword ptr [eax], 0
0x86C981: jnz     short loc_86C988
0x86C983: call    sub_772560
0x86C988: mov     edi, [esp+30h+a3]
0x86C98C: push    2
0x86C98E: push    ebx
0x86C98F: push    2
0x86C991: push    edi
0x86C992: call    sub_801110
0x86C997: add     esp, 10h
0x86C99A: push    edi; a3
0x86C99B: push    2; a2
0x86C99D: mov     ecx, esi; this
0x86C99F: call    sub_760010
0x86C9A4: lea     edx, [esp+30h+var_10]
0x86C9A8: push    edx
0x86C9A9: call    sub_772630
0x86C9AE: add     esp, 4
0x86C9B1: push    eax
0x86C9B2: lea     ecx, [esp+34h+a3]
0x86C9B6: mov     byte ptr [esp+34h+var_4], 7Dh ; '}'
0x86C9BB: call    sub_75FAE0
0x86C9C0: mov     eax, [esp+30h+var_10]
0x86C9C4: test    eax, eax
0x86C9C6: mov     byte ptr [esp+30h+var_4], 1
0x86C9CB: jz      short loc_86C9E0
0x86C9CD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86C9D1: mov     ecx, eax
0x86C9D3: add     eax, 5Ch ; '\'
0x86C9D6: cmp     dword ptr [eax], 0
0x86C9D9: jnz     short loc_86C9E0
0x86C9DB: call    sub_772560
0x86C9E0: mov     edi, [esp+30h+a3]
0x86C9E4: push    2
0x86C9E6: push    ebx
0x86C9E7: push    3
0x86C9E9: push    edi
0x86C9EA: call    sub_801110
0x86C9EF: add     esp, 10h
0x86C9F2: push    edi; a3
0x86C9F3: push    3; a2
0x86C9F5: mov     ecx, esi; this
0x86C9F7: call    sub_760010
0x86C9FC: lea     eax, [esp+30h+var_10]
0x86CA00: push    eax
0x86CA01: call    sub_772630
0x86CA06: add     esp, 4
0x86CA09: push    eax
0x86CA0A: lea     ecx, [esp+34h+a3]
0x86CA0E: mov     byte ptr [esp+34h+var_4], 7Eh ; '~'
0x86CA13: call    sub_75FAE0
0x86CA18: mov     eax, [esp+30h+var_10]
0x86CA1C: test    eax, eax
0x86CA1E: mov     byte ptr [esp+30h+var_4], 1
0x86CA23: jz      short loc_86CA38
0x86CA25: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86CA29: mov     ecx, eax
0x86CA2B: add     eax, 5Ch ; '\'
0x86CA2E: cmp     dword ptr [eax], 0
0x86CA31: jnz     short loc_86CA38
0x86CA33: call    sub_772560
0x86CA38: mov     edi, [esp+30h+a3]
0x86CA3C: push    2
0x86CA3E: push    ebx
0x86CA3F: push    4
0x86CA41: push    edi
0x86CA42: call    sub_801110
0x86CA47: add     esp, 10h
0x86CA4A: push    edi; a3
0x86CA4B: push    4; a2
0x86CA4D: mov     ecx, esi; this
0x86CA4F: call    sub_760010
0x86CA54: lea     ecx, [esp+30h+var_10]
0x86CA58: push    ecx
0x86CA59: call    sub_772630
0x86CA5E: add     esp, 4
0x86CA61: push    eax
0x86CA62: lea     ecx, [esp+34h+a3]
0x86CA66: mov     byte ptr [esp+34h+var_4], 7Fh
0x86CA6B: call    sub_75FAE0
0x86CA70: mov     eax, [esp+30h+var_10]
0x86CA74: test    eax, eax
0x86CA76: mov     byte ptr [esp+30h+var_4], 1
0x86CA7B: jz      short loc_86CA90
0x86CA7D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86CA81: mov     ecx, eax
0x86CA83: add     eax, 5Ch ; '\'
0x86CA86: cmp     dword ptr [eax], 0
0x86CA89: jnz     short loc_86CA90
0x86CA8B: call    sub_772560
0x86CA90: mov     edi, [esp+30h+a3]
0x86CA94: push    0
0x86CA96: push    3
0x86CA98: push    5
0x86CA9A: push    edi
0x86CA9B: call    sub_801110
0x86CAA0: mov     edx, ds:0B43110h
0x86CAA6: add     esp, 10h
0x86CAA9: push    edx; a2
0x86CAAA: mov     ecx, edi; this
0x86CAAC: call    sub_76C910
0x86CAB1: push    edi; a3
0x86CAB2: push    5; a2
0x86CAB4: mov     ecx, esi; this
0x86CAB6: call    sub_760010
0x86CABB: lea     eax, [esp+30h+var_10]
0x86CABF: push    eax
0x86CAC0: call    sub_772630
0x86CAC5: add     esp, 4
0x86CAC8: push    eax
0x86CAC9: lea     ecx, [esp+34h+a3]
0x86CACD: mov     byte ptr [esp+34h+var_4], 80h ; '€'
0x86CAD2: call    sub_75FAE0
0x86CAD7: mov     eax, [esp+30h+var_10]
0x86CADB: test    eax, eax
0x86CADD: mov     byte ptr [esp+30h+var_4], 1
0x86CAE2: jz      short loc_86CAF7
0x86CAE4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86CAE8: mov     ecx, eax
0x86CAEA: add     eax, 5Ch ; '\'
0x86CAED: cmp     dword ptr [eax], 0
0x86CAF0: jnz     short loc_86CAF7
0x86CAF2: call    sub_772560
0x86CAF7: mov     edi, [esp+30h+a3]
0x86CAFB: push    2
0x86CAFD: push    ebx
0x86CAFE: push    6
0x86CB00: push    edi
0x86CB01: call    sub_801110
0x86CB06: add     esp, 10h
0x86CB09: push    edi; a3
0x86CB0A: push    6; a2
0x86CB0C: mov     ecx, esi; this
0x86CB0E: call    sub_760010
0x86CB13: lea     ecx, [esp+30h+var_10]
0x86CB17: push    ecx
0x86CB18: call    sub_772630
0x86CB1D: add     esp, 4
0x86CB20: push    eax
0x86CB21: lea     ecx, [esp+34h+a3]
0x86CB25: mov     byte ptr [esp+34h+var_4], 81h
0x86CB2A: call    sub_75FAE0
0x86CB2F: mov     eax, [esp+30h+var_10]
0x86CB33: test    eax, eax
0x86CB35: mov     byte ptr [esp+30h+var_4], 1
0x86CB3A: jz      short loc_86CB4F
0x86CB3C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86CB40: mov     ecx, eax
0x86CB42: add     eax, 5Ch ; '\'
0x86CB45: cmp     dword ptr [eax], 0
0x86CB48: jnz     short loc_86CB4F
0x86CB4A: call    sub_772560
0x86CB4F: mov     edi, [esp+30h+a3]
0x86CB53: push    0
0x86CB55: push    3
0x86CB57: push    7
0x86CB59: push    edi
0x86CB5A: call    sub_801110
0x86CB5F: add     esp, 10h
0x86CB62: push    edi; a3
0x86CB63: push    7; a2
0x86CB65: mov     ecx, esi; this
0x86CB67: call    sub_760010
0x86CB6C: mov     edx, [esp+30h+var_18]
0x86CB70: mov     eax, [edx+0B8h]
0x86CB76: push    eax; a2
0x86CB77: mov     ecx, esi; this
0x86CB79: call    sub_7AECB0
0x86CB7E: mov     eax, [esp+30h+var_18]
0x86CB82: mov     eax, [eax+148h]
0x86CB88: push    eax; a2
0x86CB89: mov     ecx, esi; this
0x86CB8B: call    sub_7AEC60
0x86CB90: cmp     dword ptr [esi+30h], 0
0x86CB94: jnz     short loc_86CB9E
0x86CB96: call    sub_772DF0
0x86CB9B: mov     [esi+30h], eax
0x86CB9E: mov     ecx, [esi+30h]
0x86CBA1: push    0
0x86CBA3: push    0
0x86CBA5: push    1Bh
0x86CBA7: call    sub_772CD0
0x86CBAC: cmp     dword ptr [esi+30h], 0
0x86CBB0: jnz     short loc_86CBBA
0x86CBB2: call    sub_772DF0
0x86CBB7: mov     [esi+30h], eax
0x86CBBA: mov     ecx, [esi+30h]
0x86CBBD: push    0
0x86CBBF: push    0
0x86CBC1: push    0Fh
0x86CBC3: call    sub_772CD0
0x86CBC8: cmp     dword ptr [esi+30h], 0
0x86CBCC: jnz     short loc_86CBD6
0x86CBCE: call    sub_772DF0
0x86CBD3: mov     [esi+30h], eax
0x86CBD6: mov     ecx, [esi+30h]
0x86CBD9: push    0
0x86CBDB: push    ebx
0x86CBDC: push    7
0x86CBDE: call    sub_772CD0
0x86CBE3: cmp     dword ptr [esi+30h], 0
0x86CBE7: jnz     short loc_86CBF1
0x86CBE9: call    sub_772DF0
0x86CBEE: mov     [esi+30h], eax
0x86CBF1: mov     ecx, [esi+30h]
0x86CBF4: push    0
0x86CBF6: push    4
0x86CBF8: push    17h
0x86CBFA: call    sub_772CD0
0x86CBFF: cmp     dword ptr [esi+30h], 0
0x86CC03: jnz     short loc_86CC0D
0x86CC05: call    sub_772DF0
0x86CC0A: mov     [esi+30h], eax
0x86CC0D: mov     ecx, [esi+30h]
0x86CC10: push    0
0x86CC12: push    ebx
0x86CC13: push    0Eh
0x86CC15: call    sub_772CD0
0x86CC1A: cmp     dword ptr [esi+30h], 0
0x86CC1E: jnz     short loc_86CC28
0x86CC20: call    sub_772DF0
0x86CC25: mov     [esi+30h], eax
0x86CC28: mov     ecx, [esi+30h]
0x86CC2B: push    0
0x86CC2D: push    0
0x86CC2F: push    34h ; '4'
0x86CC31: call    sub_772CD0
0x86CC36: or      ebx, 0FFFFFFFFh
0x86CC39: test    edi, edi
0x86CC3B: mov     ds:0B43DC4h, ebp
0x86CC41: mov     dword ptr ds:0B44454h, 19Ch
0x86CC4B: mov     byte ptr [esp+30h+var_4], 0
0x86CC50: jz      short loc_86CC5E
0x86CC52: add     [edi+5Ch], ebx
0x86CC55: jnz     short loc_86CC5E
0x86CC57: mov     ecx, edi
0x86CC59: call    sub_772560
0x86CC5E: add     [esi+60h], ebx
0x86CC61: mov     [esp+30h+var_4], ebx
0x86CC65: jnz     short loc_86CC6E
0x86CC67: mov     ecx, esi
0x86CC69: call    sub_7604D0
0x86CC6E: mov     ecx, dword ptr [esp+30h+var_C]
0x86CC72: mov     large fs:0, ecx
0x86CC79: pop     ecx
0x86CC7A: pop     edi
0x86CC7B: pop     esi
0x86CC7C: pop     ebp
0x86CC7D: pop     ebx
0x86CC7E: add     esp, 1Ch
0x86CC81: retn
