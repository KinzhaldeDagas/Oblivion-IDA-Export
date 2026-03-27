0x8588E0: push    0FFFFFFFFh
0x8588E2: push    offset SEH_8588E0
0x8588E7: mov     eax, large fs:0
0x8588ED: push    eax
0x8588EE: push    esi
0x8588EF: mov     eax, ds:0B30AACh
0x8588F4: xor     eax, esp
0x8588F6: push    eax
0x8588F7: lea     eax, [esp+14h+var_C]
0x8588FB: mov     large fs:0, eax
0x858901: mov     esi, ecx
0x858903: cmp     [esp+14h+arg_18], 0
0x858908: jnz     loc_858D81
0x85890E: cmp     [esp+14h+arg_1C], 0
0x858913: jz      loc_858AA3
0x858919: cmp     [esp+14h+arg_20], 0
0x85891E: jz      short loc_85893E
0x858920: mov     eax, ds:0B42E8Ch
0x858925: test    eax, eax
0x858927: jz      loc_859143
0x85892D: push    0; _DWORD
0x85892F: push    offset aShaderError_32; "SHADER ERROR : no shader to handle ADTS"...
0x858934: call    eax ; dword_B42E8C
0x858936: add     esp, 8
0x858939: jmp     loc_859143
0x85893E: cmp     [esp+14h+arg_2C], 0
0x858943: jnz     loc_8589EE
0x858949: cmp     [esp+14h+arg_28], 0
0x85894E: jnz     short loc_85899F
0x858950: cmp     byte ptr [esp+14h+arg_10], 1
0x858955: jnz     loc_85913B
0x85895B: push    10h; Size
0x85895D: call    FormHeapAlloc
0x858962: add     esp, 4
0x858965: mov     [esp+14h+arg_10], eax
0x858969: test    eax, eax
0x85896B: mov     [esp+14h+var_4], 0
0x858973: jz      loc_85911E
0x858979: mov     ecx, [esp+14h+arg_8]
0x85897D: mov     edx, [esp+14h+arg_4]
0x858981: push    ecx
0x858982: mov     ecx, [esp+18h+arg_0]
0x858986: push    edx
0x858987: push    2
0x858989: push    1
0x85898B: push    0C7h ; 'Ç'
0x858990: push    ecx
0x858991: push    eax
0x858992: call    sub_7E2370
0x858997: add     esp, 1Ch
0x85899A: jmp     loc_859120
0x85899F: cmp     byte ptr [esp+14h+arg_10], 1
0x8589A4: jnz     loc_85913B
0x8589AA: push    10h; Size
0x8589AC: call    FormHeapAlloc
0x8589B1: add     esp, 4
0x8589B4: mov     [esp+14h+arg_10], eax
0x8589B8: test    eax, eax
0x8589BA: mov     [esp+14h+var_4], 1
0x8589C2: jz      loc_85911E
0x8589C8: mov     ecx, [esp+14h+arg_8]
0x8589CC: mov     edx, [esp+14h+arg_4]
0x8589D0: push    ecx
0x8589D1: mov     ecx, [esp+18h+arg_0]
0x8589D5: push    edx
0x8589D6: push    2
0x8589D8: push    1
0x8589DA: push    0D4h ; 'Ô'
0x8589DF: push    ecx
0x8589E0: push    eax
0x8589E1: call    sub_7E2370
0x8589E6: add     esp, 1Ch
0x8589E9: jmp     loc_859120
0x8589EE: cmp     [esp+14h+arg_28], 0
0x8589F3: jnz     short loc_858A54
0x8589F5: cmp     byte ptr [esp+14h+arg_10], 1
0x8589FA: jnz     loc_85913B
0x858A00: push    10h; Size
0x858A02: call    FormHeapAlloc
0x858A07: add     esp, 4
0x858A0A: mov     [esp+14h+arg_10], eax
0x858A0E: test    eax, eax
0x858A10: mov     [esp+14h+var_4], 2
0x858A18: jz      short loc_858A44
0x858A1A: mov     ecx, [esp+14h+arg_4]
0x858A1E: mov     edx, [esp+14h+arg_0]
0x858A22: push    ecx
0x858A23: push    1
0x858A25: push    1
0x858A27: push    0CBh ; 'Ë'
0x858A2C: push    edx
0x858A2D: push    eax
0x858A2E: call    sub_7E2370
0x858A33: mov     [esp+2Ch+arg_10], eax
0x858A37: add     esp, 18h
0x858A3A: lea     eax, [esp+14h+arg_10]
0x858A3E: push    eax
0x858A3F: jmp     loc_859129
0x858A44: xor     eax, eax
0x858A46: mov     [esp+14h+arg_10], eax
0x858A4A: lea     eax, [esp+14h+arg_10]
0x858A4E: push    eax
0x858A4F: jmp     loc_859129
0x858A54: cmp     byte ptr [esp+14h+arg_10], 1
0x858A59: jnz     loc_85913B
0x858A5F: push    10h; Size
0x858A61: call    FormHeapAlloc
0x858A66: add     esp, 4
0x858A69: mov     [esp+14h+arg_10], eax
0x858A6D: test    eax, eax
0x858A6F: mov     [esp+14h+var_4], 3
0x858A77: jz      short loc_858A44
0x858A79: mov     ecx, [esp+14h+arg_4]
0x858A7D: mov     edx, [esp+14h+arg_0]
0x858A81: push    ecx
0x858A82: push    1
0x858A84: push    1
0x858A86: push    0D8h ; 'Ø'
0x858A8B: push    edx
0x858A8C: push    eax
0x858A8D: call    sub_7E2370
0x858A92: mov     [esp+2Ch+arg_10], eax
0x858A96: add     esp, 18h
0x858A99: lea     eax, [esp+14h+arg_10]
0x858A9D: push    eax
0x858A9E: jmp     loc_859129
0x858AA3: cmp     [esp+14h+arg_20], 0
0x858AA8: jz      short loc_858AC8
0x858AAA: mov     eax, ds:0B42E8Ch
0x858AAF: test    eax, eax
0x858AB1: jz      loc_859143
0x858AB7: push    0; _DWORD
0x858AB9: push    offset aShaderError_33; "SHADER ERROR : no shader to handle ADTS"...
0x858ABE: call    eax ; dword_B42E8C
0x858AC0: add     esp, 8
0x858AC3: jmp     loc_859143
0x858AC8: cmp     [esp+14h+arg_2C], 0
0x858ACD: jnz     loc_858CDC
0x858AD3: cmp     [esp+14h+arg_28], 0
0x858AD8: jnz     loc_858BDD
0x858ADE: cmp     [esp+14h+arg_30], 0
0x858AE3: jnz     loc_858B8E
0x858AE9: cmp     [esp+14h+arg_34], 0
0x858AEE: jnz     short loc_858B3F
0x858AF0: cmp     byte ptr [esp+14h+arg_10], 1
0x858AF5: jnz     loc_85913B
0x858AFB: push    10h; Size
0x858AFD: call    FormHeapAlloc
0x858B02: add     esp, 4
0x858B05: mov     [esp+14h+arg_10], eax
0x858B09: test    eax, eax
0x858B0B: mov     [esp+14h+var_4], 4
0x858B13: jz      loc_85911E
0x858B19: mov     ecx, [esp+14h+arg_8]
0x858B1D: mov     edx, [esp+14h+arg_4]
0x858B21: push    ecx
0x858B22: mov     ecx, [esp+18h+arg_0]
0x858B26: push    edx
0x858B27: push    2
0x858B29: push    1
0x858B2B: push    0C6h ; 'Æ'
0x858B30: push    ecx
0x858B31: push    eax
0x858B32: call    sub_7E2370
0x858B37: add     esp, 1Ch
0x858B3A: jmp     loc_859120
0x858B3F: cmp     byte ptr [esp+14h+arg_10], 1
0x858B44: jnz     loc_85913B
0x858B4A: push    10h; Size
0x858B4C: call    FormHeapAlloc
0x858B51: add     esp, 4
0x858B54: mov     [esp+14h+arg_10], eax
0x858B58: test    eax, eax
0x858B5A: mov     [esp+14h+var_4], 5
0x858B62: jz      loc_85911E
0x858B68: mov     ecx, [esp+14h+arg_8]
0x858B6C: mov     edx, [esp+14h+arg_4]
0x858B70: push    ecx
0x858B71: mov     ecx, [esp+18h+arg_0]
0x858B75: push    edx
0x858B76: push    2
0x858B78: push    1
0x858B7A: push    0C8h ; 'È'
0x858B7F: push    ecx
0x858B80: push    eax
0x858B81: call    sub_7E2370
0x858B86: add     esp, 1Ch
0x858B89: jmp     loc_859120
0x858B8E: cmp     byte ptr [esp+14h+arg_10], 1
0x858B93: jnz     loc_85913B
0x858B99: push    10h; Size
0x858B9B: call    FormHeapAlloc
0x858BA0: add     esp, 4
0x858BA3: mov     [esp+14h+arg_10], eax
0x858BA7: test    eax, eax
0x858BA9: mov     [esp+14h+var_4], 6
0x858BB1: jz      loc_85911E
0x858BB7: mov     ecx, [esp+14h+arg_8]
0x858BBB: mov     edx, [esp+14h+arg_4]
0x858BBF: push    ecx
0x858BC0: mov     ecx, [esp+18h+arg_0]
0x858BC4: push    edx
0x858BC5: push    2
0x858BC7: push    1
0x858BC9: push    0D2h ; 'Ò'
0x858BCE: push    ecx
0x858BCF: push    eax
0x858BD0: call    sub_7E2370
0x858BD5: add     esp, 1Ch
0x858BD8: jmp     loc_859120
0x858BDD: cmp     [esp+14h+arg_30], 0
0x858BE2: jnz     loc_858C8D
0x858BE8: cmp     [esp+14h+arg_34], 0
0x858BED: jnz     short loc_858C3E
0x858BEF: cmp     byte ptr [esp+14h+arg_10], 1
0x858BF4: jnz     loc_85913B
0x858BFA: push    10h; Size
0x858BFC: call    FormHeapAlloc
0x858C01: add     esp, 4
0x858C04: mov     [esp+14h+arg_10], eax
0x858C08: test    eax, eax
0x858C0A: mov     [esp+14h+var_4], 7
0x858C12: jz      loc_85911E
0x858C18: mov     ecx, [esp+14h+arg_8]
0x858C1C: mov     edx, [esp+14h+arg_4]
0x858C20: push    ecx
0x858C21: mov     ecx, [esp+18h+arg_0]
0x858C25: push    edx
0x858C26: push    2
0x858C28: push    1
0x858C2A: push    0D3h ; 'Ó'
0x858C2F: push    ecx
0x858C30: push    eax
0x858C31: call    sub_7E2370
0x858C36: add     esp, 1Ch
0x858C39: jmp     loc_859120
0x858C3E: cmp     byte ptr [esp+14h+arg_10], 1
0x858C43: jnz     loc_85913B
0x858C49: push    10h; Size
0x858C4B: call    FormHeapAlloc
0x858C50: add     esp, 4
0x858C53: mov     [esp+14h+arg_10], eax
0x858C57: test    eax, eax
0x858C59: mov     [esp+14h+var_4], 8
0x858C61: jz      loc_85911E
0x858C67: mov     ecx, [esp+14h+arg_8]
0x858C6B: mov     edx, [esp+14h+arg_4]
0x858C6F: push    ecx
0x858C70: mov     ecx, [esp+18h+arg_0]
0x858C74: push    edx
0x858C75: push    2
0x858C77: push    1
0x858C79: push    0D5h ; 'Õ'
0x858C7E: push    ecx
0x858C7F: push    eax
0x858C80: call    sub_7E2370
0x858C85: add     esp, 1Ch
0x858C88: jmp     loc_859120
0x858C8D: cmp     byte ptr [esp+14h+arg_10], 1
0x858C92: jnz     loc_85913B
0x858C98: push    10h; Size
0x858C9A: call    FormHeapAlloc
0x858C9F: add     esp, 4
0x858CA2: mov     [esp+14h+arg_10], eax
0x858CA6: test    eax, eax
0x858CA8: mov     [esp+14h+var_4], 9
0x858CB0: jz      loc_85911E
0x858CB6: mov     ecx, [esp+14h+arg_8]
0x858CBA: mov     edx, [esp+14h+arg_4]
0x858CBE: push    ecx
0x858CBF: mov     ecx, [esp+18h+arg_0]
0x858CC3: push    edx
0x858CC4: push    2
0x858CC6: push    1
0x858CC8: push    0DFh ; 'ß'
0x858CCD: push    ecx
0x858CCE: push    eax
0x858CCF: call    sub_7E2370
0x858CD4: add     esp, 1Ch
0x858CD7: jmp     loc_859120
0x858CDC: cmp     [esp+14h+arg_28], 0
0x858CE1: jnz     short loc_858D32
0x858CE3: cmp     byte ptr [esp+14h+arg_10], 1
0x858CE8: jnz     loc_85913B
0x858CEE: push    10h; Size
0x858CF0: call    FormHeapAlloc
0x858CF5: add     esp, 4
0x858CF8: mov     [esp+14h+arg_10], eax
0x858CFC: test    eax, eax
0x858CFE: mov     [esp+14h+var_4], 0Ah
0x858D06: jz      loc_85911E
0x858D0C: mov     ecx, [esp+14h+arg_8]
0x858D10: mov     edx, [esp+14h+arg_4]
0x858D14: push    ecx
0x858D15: mov     ecx, [esp+18h+arg_0]
0x858D19: push    edx
0x858D1A: push    2
0x858D1C: push    1
0x858D1E: push    0CAh ; 'Ê'
0x858D23: push    ecx
0x858D24: push    eax
0x858D25: call    sub_7E2370
0x858D2A: add     esp, 1Ch
0x858D2D: jmp     loc_859120
0x858D32: cmp     byte ptr [esp+14h+arg_10], 1
0x858D37: jnz     loc_85913B
0x858D3D: push    10h; Size
0x858D3F: call    FormHeapAlloc
0x858D44: add     esp, 4
0x858D47: mov     [esp+14h+arg_10], eax
0x858D4B: test    eax, eax
0x858D4D: mov     [esp+14h+var_4], 0Bh
0x858D55: jz      loc_85911E
0x858D5B: mov     ecx, [esp+14h+arg_8]
0x858D5F: mov     edx, [esp+14h+arg_4]
0x858D63: push    ecx
0x858D64: mov     ecx, [esp+18h+arg_0]
0x858D68: push    edx
0x858D69: push    2
0x858D6B: push    1
0x858D6D: push    0D7h ; '×'
0x858D72: push    ecx
0x858D73: push    eax
0x858D74: call    sub_7E2370
0x858D79: add     esp, 1Ch
0x858D7C: jmp     loc_859120
0x858D81: cmp     [esp+14h+arg_1C], 0
0x858D86: jz      loc_858F06
0x858D8C: cmp     [esp+14h+arg_20], 0
0x858D91: jz      short loc_858DB1
0x858D93: mov     eax, ds:0B42E8Ch
0x858D98: test    eax, eax
0x858D9A: jz      loc_859143
0x858DA0: push    0; _DWORD
0x858DA2: push    offset aShaderError_34; "SHADER ERROR : no shader to handle ADTS"...
0x858DA7: call    eax ; dword_B42E8C
0x858DA9: add     esp, 8
0x858DAC: jmp     loc_859143
0x858DB1: cmp     [esp+14h+arg_2C], 0
0x858DB6: jnz     loc_858E61
0x858DBC: cmp     [esp+14h+arg_28], 0
0x858DC1: jnz     short loc_858E12
0x858DC3: cmp     byte ptr [esp+14h+arg_10], 1
0x858DC8: jnz     loc_85913B
0x858DCE: push    10h; Size
0x858DD0: call    FormHeapAlloc
0x858DD5: add     esp, 4
0x858DD8: mov     [esp+14h+arg_10], eax
0x858DDC: test    eax, eax
0x858DDE: mov     [esp+14h+var_4], 0Ch
0x858DE6: jz      loc_85911E
0x858DEC: mov     ecx, [esp+14h+arg_8]
0x858DF0: mov     edx, [esp+14h+arg_4]
0x858DF4: push    ecx
0x858DF5: mov     ecx, [esp+18h+arg_0]
0x858DF9: push    edx
0x858DFA: push    2
0x858DFC: push    1
0x858DFE: push    0CDh ; 'Í'
0x858E03: push    ecx
0x858E04: push    eax
0x858E05: call    sub_7E2370
0x858E0A: add     esp, 1Ch
0x858E0D: jmp     loc_859120
0x858E12: cmp     byte ptr [esp+14h+arg_10], 1
0x858E17: jnz     loc_85913B
0x858E1D: push    10h; Size
0x858E1F: call    FormHeapAlloc
0x858E24: add     esp, 4
0x858E27: mov     [esp+14h+arg_10], eax
0x858E2B: test    eax, eax
0x858E2D: mov     [esp+14h+var_4], 0Dh
0x858E35: jz      loc_85911E
0x858E3B: mov     ecx, [esp+14h+arg_8]
0x858E3F: mov     edx, [esp+14h+arg_4]
0x858E43: push    ecx
0x858E44: mov     ecx, [esp+18h+arg_0]
0x858E48: push    edx
0x858E49: push    2
0x858E4B: push    1
0x858E4D: push    0DAh ; 'Ú'
0x858E52: push    ecx
0x858E53: push    eax
0x858E54: call    sub_7E2370
0x858E59: add     esp, 1Ch
0x858E5C: jmp     loc_859120
0x858E61: cmp     [esp+14h+arg_28], 0
0x858E66: jnz     short loc_858EB7
0x858E68: cmp     byte ptr [esp+14h+arg_10], 1
0x858E6D: jnz     loc_85913B
0x858E73: push    10h; Size
0x858E75: call    FormHeapAlloc
0x858E7A: add     esp, 4
0x858E7D: mov     [esp+14h+arg_10], eax
0x858E81: test    eax, eax
0x858E83: mov     [esp+14h+var_4], 0Eh
0x858E8B: jz      loc_85911E
0x858E91: mov     ecx, [esp+14h+arg_8]
0x858E95: mov     edx, [esp+14h+arg_4]
0x858E99: push    ecx
0x858E9A: mov     ecx, [esp+18h+arg_0]
0x858E9E: push    edx
0x858E9F: push    2
0x858EA1: push    1
0x858EA3: push    0D1h ; 'Ñ'
0x858EA8: push    ecx
0x858EA9: push    eax
0x858EAA: call    sub_7E2370
0x858EAF: add     esp, 1Ch
0x858EB2: jmp     loc_859120
0x858EB7: cmp     byte ptr [esp+14h+arg_10], 1
0x858EBC: jnz     loc_85913B
0x858EC2: push    10h; Size
0x858EC4: call    FormHeapAlloc
0x858EC9: add     esp, 4
0x858ECC: mov     [esp+14h+arg_10], eax
0x858ED0: test    eax, eax
0x858ED2: mov     [esp+14h+var_4], 0Fh
0x858EDA: jz      loc_85911E
0x858EE0: mov     ecx, [esp+14h+arg_8]
0x858EE4: mov     edx, [esp+14h+arg_4]
0x858EE8: push    ecx
0x858EE9: mov     ecx, [esp+18h+arg_0]
0x858EED: push    edx
0x858EEE: push    2
0x858EF0: push    1
0x858EF2: push    0DEh ; 'Þ'
0x858EF7: push    ecx
0x858EF8: push    eax
0x858EF9: call    sub_7E2370
0x858EFE: add     esp, 1Ch
0x858F01: jmp     loc_859120
0x858F06: cmp     [esp+14h+arg_20], 0
0x858F0B: jz      short loc_858F2B
0x858F0D: mov     eax, ds:0B42E8Ch
0x858F12: test    eax, eax
0x858F14: jz      loc_859143
0x858F1A: push    0; _DWORD
0x858F1C: push    offset aShaderError_35; "SHADER ERROR : no shader to handle ADTS"...
0x858F21: call    eax ; dword_B42E8C
0x858F23: add     esp, 8
0x858F26: jmp     loc_859143
0x858F2B: cmp     [esp+14h+arg_2C], 0
0x858F30: jnz     loc_85908B
0x858F36: cmp     [esp+14h+arg_28], 0
0x858F3B: jnz     loc_858FE6
0x858F41: cmp     [esp+14h+arg_34], 0
0x858F46: jnz     short loc_858F97
0x858F48: cmp     byte ptr [esp+14h+arg_10], 1
0x858F4D: jnz     loc_85913B
0x858F53: push    10h; Size
0x858F55: call    FormHeapAlloc
0x858F5A: add     esp, 4
0x858F5D: mov     [esp+14h+arg_10], eax
0x858F61: test    eax, eax
0x858F63: mov     [esp+14h+var_4], 10h
0x858F6B: jz      loc_85911E
0x858F71: mov     ecx, [esp+14h+arg_8]
0x858F75: mov     edx, [esp+14h+arg_4]
0x858F79: push    ecx
0x858F7A: mov     ecx, [esp+18h+arg_0]
0x858F7E: push    edx
0x858F7F: push    2
0x858F81: push    1
0x858F83: push    0CCh ; 'Ì'
0x858F88: push    ecx
0x858F89: push    eax
0x858F8A: call    sub_7E2370
0x858F8F: add     esp, 1Ch
0x858F92: jmp     loc_859120
0x858F97: cmp     byte ptr [esp+14h+arg_10], 1
0x858F9C: jnz     loc_85913B
0x858FA2: push    10h; Size
0x858FA4: call    FormHeapAlloc
0x858FA9: add     esp, 4
0x858FAC: mov     [esp+14h+arg_10], eax
0x858FB0: test    eax, eax
0x858FB2: mov     [esp+14h+var_4], 11h
0x858FBA: jz      loc_85911E
0x858FC0: mov     ecx, [esp+14h+arg_8]
0x858FC4: mov     edx, [esp+14h+arg_4]
0x858FC8: push    ecx
0x858FC9: mov     ecx, [esp+18h+arg_0]
0x858FCD: push    edx
0x858FCE: push    2
0x858FD0: push    1
0x858FD2: push    0CEh ; 'Î'
0x858FD7: push    ecx
0x858FD8: push    eax
0x858FD9: call    sub_7E2370
0x858FDE: add     esp, 1Ch
0x858FE1: jmp     loc_859120
0x858FE6: cmp     [esp+14h+arg_34], 0
0x858FEB: jnz     short loc_85903C
0x858FED: cmp     byte ptr [esp+14h+arg_10], 1
0x858FF2: jnz     loc_85913B
0x858FF8: push    10h; Size
0x858FFA: call    FormHeapAlloc
0x858FFF: add     esp, 4
0x859002: mov     [esp+14h+arg_10], eax
0x859006: test    eax, eax
0x859008: mov     [esp+14h+var_4], 12h
0x859010: jz      loc_85911E
0x859016: mov     ecx, [esp+14h+arg_8]
0x85901A: mov     edx, [esp+14h+arg_4]
0x85901E: push    ecx
0x85901F: mov     ecx, [esp+18h+arg_0]
0x859023: push    edx
0x859024: push    2
0x859026: push    1
0x859028: push    0D9h ; 'Ù'
0x85902D: push    ecx
0x85902E: push    eax
0x85902F: call    sub_7E2370
0x859034: add     esp, 1Ch
0x859037: jmp     loc_859120
0x85903C: cmp     byte ptr [esp+14h+arg_10], 1
0x859041: jnz     loc_85913B
0x859047: push    10h; Size
0x859049: call    FormHeapAlloc
0x85904E: add     esp, 4
0x859051: mov     [esp+14h+arg_10], eax
0x859055: test    eax, eax
0x859057: mov     [esp+14h+var_4], 13h
0x85905F: jz      loc_85911E
0x859065: mov     ecx, [esp+14h+arg_8]
0x859069: mov     edx, [esp+14h+arg_4]
0x85906D: push    ecx
0x85906E: mov     ecx, [esp+18h+arg_0]
0x859072: push    edx
0x859073: push    2
0x859075: push    1
0x859077: push    0DBh ; 'Û'
0x85907C: push    ecx
0x85907D: push    eax
0x85907E: call    sub_7E2370
0x859083: add     esp, 1Ch
0x859086: jmp     loc_859120
0x85908B: cmp     [esp+14h+arg_28], 0
0x859090: jnz     short loc_8590DA
0x859092: cmp     byte ptr [esp+14h+arg_10], 1
0x859097: jnz     loc_85913B
0x85909D: push    10h; Size
0x85909F: call    FormHeapAlloc
0x8590A4: add     esp, 4
0x8590A7: mov     [esp+14h+arg_10], eax
0x8590AB: test    eax, eax
0x8590AD: mov     [esp+14h+var_4], 14h
0x8590B5: jz      short loc_85911E
0x8590B7: mov     ecx, [esp+14h+arg_8]
0x8590BB: mov     edx, [esp+14h+arg_4]
0x8590BF: push    ecx
0x8590C0: mov     ecx, [esp+18h+arg_0]
0x8590C4: push    edx
0x8590C5: push    2
0x8590C7: push    1
0x8590C9: push    0D0h ; 'Ð'
0x8590CE: push    ecx
0x8590CF: push    eax
0x8590D0: call    sub_7E2370
0x8590D5: add     esp, 1Ch
0x8590D8: jmp     short loc_859120
0x8590DA: cmp     byte ptr [esp+14h+arg_10], 1
0x8590DF: jnz     short loc_85913B
0x8590E1: push    10h; Size
0x8590E3: call    FormHeapAlloc
0x8590E8: add     esp, 4
0x8590EB: mov     [esp+14h+arg_10], eax
0x8590EF: test    eax, eax
0x8590F1: mov     [esp+14h+var_4], 15h
0x8590F9: jz      short loc_85911E
0x8590FB: mov     ecx, [esp+14h+arg_8]
0x8590FF: mov     edx, [esp+14h+arg_4]
0x859103: push    ecx
0x859104: mov     ecx, [esp+18h+arg_0]
0x859108: push    edx
0x859109: push    2
0x85910B: push    1
0x85910D: push    0DDh ; 'Ý'
0x859112: push    ecx
0x859113: push    eax
0x859114: call    sub_7E2370
0x859119: add     esp, 1Ch
0x85911C: jmp     short loc_859120
0x85911E: xor     eax, eax
0x859120: lea     edx, [esp+14h+arg_10]
0x859124: mov     [esp+14h+arg_10], eax
0x859128: push    edx
0x859129: lea     ecx, [esi+28h]
0x85912C: mov     [esp+18h+var_4], 0FFFFFFFFh
0x859134: call    sub_5B1E20
0x859139: jmp     short loc_859143
0x85913B: mov     eax, [esp+14h+arg_C]
0x85913F: add     word ptr [eax], 1
0x859143: mov     eax, [esp+14h+arg_14]
0x859147: mov     byte ptr [eax], 0
0x85914A: mov     ecx, [esp+14h+var_C]
0x85914E: mov     large fs:0, ecx
0x859155: pop     ecx
0x859156: pop     esi
0x859157: add     esp, 0Ch
0x85915A: retn    38h ; '8'
