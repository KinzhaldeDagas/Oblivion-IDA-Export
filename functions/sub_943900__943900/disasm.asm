0x943900: sub     esp, 240h
0x943906: mov     al, ds:0BA94E4h
0x94390B: test    al, al
0x94390D: push    ebx
0x94390E: push    ebp
0x94390F: push    esi
0x943910: mov     ebp, ecx
0x943912: push    edi
0x943913: mov     [esp+250h+var_240], ebp
0x943917: jnz     short loc_943930
0x943919: push    4
0x94391B: call    sub_9246E0
0x943920: add     esp, 4
0x943923: test    al, al
0x943925: mov     ds:0BA94E4h, al
0x94392A: jz      loc_943E7B; jumptable 00943957 case 0
0x943930: mov     ebx, [esp+250h+arg_4]
0x943937: mov     esi, [esp+250h+arg_0]
0x94393E: jmp     short loc_943944
0x943940: mov     ebp, [esp+250h+var_240]
0x943944: movzx   eax, byte ptr [ebx]
0x943947: cmp     eax, 6Bh; switch 108 cases
0x94394A: ja      def_943957; jumptable 00943957 default case, cases 8,12-15,29-31,44-47,84-95
0x943950: movzx   ecx, ds:byte_943F08[eax]
0x943957: jmp     ds:jpt_943957[ecx*4]; switch jump
0x94395E: mov     edi, [esi+4]; jumptable 00943957 case 19
0x943961: mov     eax, [esi+8]
0x943964: movzx   edx, byte ptr [ebx+1]
0x943968: movzx   ecx, byte ptr [ebx+2]
0x94396C: add     eax, edi
0x94396E: mov     edi, [esi+0Ch]
0x943971: mov     ebp, edi
0x943973: shl     edx, 1
0x943975: shl     ecx, 1
0x943977: sar     ebp, 1
0x943979: lea     edi, [edi+ebp+1]
0x94397D: jmp     loc_943A6D
0x943982: mov     eax, [esi+4]; jumptable 00943957 case 20
0x943985: mov     ebp, [esi+8]
0x943988: jmp     short loc_9439DA
0x94398A: mov     edi, [esi]; jumptable 00943957 case 21
0x94398C: mov     eax, [esi+8]
0x94398F: movzx   edx, byte ptr [ebx+1]
0x943993: movzx   ecx, byte ptr [ebx+2]
0x943997: add     eax, edi
0x943999: mov     edi, [esi+0Ch]
0x94399C: mov     ebp, edi
0x94399E: shl     edx, 1
0x9439A0: shl     ecx, 1
0x9439A2: sar     ebp, 1
0x9439A4: lea     edi, [edi+ebp+1]
0x9439A8: jmp     loc_943A6D
0x9439AD: mov     ebp, [esi+8]; jumptable 00943957 case 22
0x9439B0: jmp     short loc_9439D8
0x9439B2: mov     edi, [esi]; jumptable 00943957 case 23
0x9439B4: mov     eax, [esi+4]
0x9439B7: movzx   edx, byte ptr [ebx+1]
0x9439BB: movzx   ecx, byte ptr [ebx+2]
0x9439BF: add     eax, edi
0x9439C1: mov     edi, [esi+0Ch]
0x9439C4: mov     ebp, edi
0x9439C6: shl     edx, 1
0x9439C8: shl     ecx, 1
0x9439CA: sar     ebp, 1
0x9439CC: lea     edi, [edi+ebp+1]
0x9439D0: jmp     loc_943A6D
0x9439D5: mov     ebp, [esi+4]; jumptable 00943957 case 24
0x9439D8: mov     eax, [esi]
0x9439DA: movzx   edx, byte ptr [ebx+1]
0x9439DE: movzx   ecx, byte ptr [ebx+2]
0x9439E2: mov     edi, [esi+0Ch]
0x9439E5: sub     eax, ebp
0x9439E7: mov     ebp, edi
0x9439E9: shl     edx, 1
0x9439EB: shl     ecx, 1
0x9439ED: add     eax, 0FFh
0x9439F2: sar     ebp, 1
0x9439F4: lea     edi, [edi+ebp+1]
0x9439F8: jmp     short loc_943A6D
0x9439FA: mov     eax, [esi+8]; jumptable 00943957 case 25
0x9439FD: mov     ebp, [esi+4]
0x943A00: mov     edi, [esi]
0x943A02: add     eax, ebp
0x943A04: add     eax, edi
0x943A06: jmp     short loc_943A21
0x943A08: mov     eax, [esi+4]; jumptable 00943957 case 26
0x943A0B: mov     edi, [esi+8]
0x943A0E: jmp     short loc_943A16
0x943A10: mov     eax, [esi+8]; jumptable 00943957 case 27
0x943A13: mov     edi, [esi+4]
0x943A16: sub     eax, edi
0x943A18: mov     edi, [esi]
0x943A1A: lea     eax, [eax+edi+0FFh]
0x943A21: movzx   edx, byte ptr [ebx+1]
0x943A25: movzx   ecx, byte ptr [ebx+2]
0x943A29: mov     edi, [esi+0Ch]
0x943A2C: lea     edx, [edx+edx*2]
0x943A2F: lea     ecx, [ecx+ecx*2]
0x943A32: shl     edi, 2
0x943A35: jmp     short loc_943A6D
0x943A37: mov     edi, [esi+8]; jumptable 00943957 case 28
0x943A3A: mov     eax, [esi]
0x943A3C: mov     ebp, [esi+4]
0x943A3F: movzx   edx, byte ptr [ebx+1]
0x943A43: movzx   ecx, byte ptr [ebx+2]
0x943A47: sub     eax, edi
0x943A49: mov     edi, [esi+0Ch]
0x943A4C: sub     eax, ebp
0x943A4E: add     eax, 1FEh
0x943A53: lea     edx, [edx+edx*2]
0x943A56: lea     ecx, [ecx+ecx*2]
0x943A59: shl     edi, 2
0x943A5C: jmp     short loc_943A6D
0x943A5E: movzx   edx, byte ptr [ebx+1]; jumptable 00943957 cases 16-18
0x943A62: movzx   ecx, byte ptr [ebx+2]
0x943A66: mov     eax, [esi+eax*4-40h]
0x943A6A: mov     edi, [esi+0Ch]
0x943A6D: lea     ebp, [edi+eax]
0x943A70: add     ebx, 4
0x943A73: cmp     ebp, ecx
0x943A75: jl      loc_943940
0x943A7B: movzx   ecx, byte ptr [ebx-1]
0x943A7F: add     edi, edx
0x943A81: add     ebx, ecx
0x943A83: cmp     eax, edi
0x943A85: jg      loc_943940
0x943A8B: mov     ebp, [esp+250h+var_240]
0x943A8F: mov     edx, ebx
0x943A91: sub     edx, ecx
0x943A93: push    edx
0x943A94: push    esi
0x943A95: mov     ecx, ebp
0x943A97: call    sub_943900
0x943A9C: jmp     loc_943944
0x943AA1: movzx   ecx, byte ptr [ebx+1]; jumptable 00943957 cases 32-34
0x943AA5: mov     edx, [esi+0Ch]
0x943AA8: mov     eax, [esi+eax*4-80h]
0x943AAC: lea     edi, [edx+eax]
0x943AAF: add     ebx, 3
0x943AB2: cmp     edi, ecx
0x943AB4: jl      loc_943944
0x943ABA: movzx   edi, byte ptr [ebx-1]
0x943ABE: lea     ecx, [edx+ecx+1]
0x943AC2: add     ebx, edi
0x943AC4: cmp     eax, ecx
0x943AC6: jg      loc_943944
0x943ACC: mov     edx, ebx
0x943ACE: sub     edx, edi
0x943AD0: push    edx
0x943AD1: push    esi
0x943AD2: mov     ecx, ebp
0x943AD4: call    sub_943900
0x943AD9: jmp     loc_943944
0x943ADE: movzx   ecx, byte ptr [ebx+1]; jumptable 00943957 cases 35-37
0x943AE2: movzx   edi, byte ptr [ebx+4]
0x943AE6: mov     eax, [esi+eax*4-8Ch]
0x943AED: movzx   edx, byte ptr [ebx+2]
0x943AF1: mov     [esp+250h+var_210], ecx
0x943AF5: movzx   ecx, byte ptr [ebx+3]
0x943AF9: shl     ecx, 8
0x943AFC: mov     [esp+250h+var_214], eax
0x943B00: mov     eax, [esi+0Ch]
0x943B03: add     ecx, edi
0x943B05: mov     edi, [esp+250h+var_214]
0x943B09: add     edi, eax
0x943B0B: add     ebx, 7
0x943B0E: cmp     edi, edx
0x943B10: jge     short loc_943B19
0x943B12: add     ebx, ecx
0x943B14: jmp     loc_943944
0x943B19: movzx   edx, byte ptr [ebx-2]
0x943B1D: movzx   edi, byte ptr [ebx-1]
0x943B21: shl     edx, 8
0x943B24: add     edx, edi
0x943B26: mov     edi, [esp+250h+var_210]
0x943B2A: add     eax, edi
0x943B2C: mov     edi, [esp+250h+var_214]
0x943B30: add     ebx, edx
0x943B32: cmp     edi, eax
0x943B34: jg      loc_943944
0x943B3A: sub     ecx, edx
0x943B3C: add     ecx, ebx
0x943B3E: push    ecx
0x943B3F: push    esi
0x943B40: mov     ecx, ebp
0x943B42: call    sub_943900
0x943B47: jmp     loc_943944
0x943B4C: mov     eax, [esi+eax*4-98h]; jumptable 00943957 cases 38-40
0x943B53: mov     ecx, [esi+0Ch]
0x943B56: movzx   edi, byte ptr [ebx+1]
0x943B5A: lea     edx, [ecx+eax]
0x943B5D: cmp     edx, edi
0x943B5F: jl      loc_943E7B; jumptable 00943957 case 0
0x943B65: movzx   edx, byte ptr [ebx+2]
0x943B69: add     edx, ecx
0x943B6B: cmp     eax, edx
0x943B6D: jg      loc_943E7B; jumptable 00943957 case 0
0x943B73: add     ebx, 3
0x943B76: jmp     loc_943944
0x943B7B: movzx   edx, byte ptr [ebx+1]; jumptable 00943957 cases 41-43
0x943B7F: movzx   edi, byte ptr [ebx+2]
0x943B83: mov     eax, [ebp+eax*4-94h]
0x943B8A: mov     ecx, [ebp+1Ch]
0x943B8D: shl     edx, 8
0x943B90: add     edx, edi
0x943B92: movzx   edi, byte ptr [ebx+3]
0x943B96: shl     edx, 8
0x943B99: add     edx, edi
0x943B9B: lea     edi, [ecx+eax]
0x943B9E: cmp     edi, edx
0x943BA0: jl      loc_943E7B; jumptable 00943957 case 0
0x943BA6: movzx   edx, byte ptr [ebx+4]
0x943BAA: movzx   edi, byte ptr [ebx+5]
0x943BAE: shl     edx, 8
0x943BB1: add     edx, edi
0x943BB3: movzx   edi, byte ptr [ebx+6]
0x943BB7: shl     edx, 8
0x943BBA: add     edx, ecx
0x943BBC: add     edi, edx
0x943BBE: cmp     eax, edi
0x943BC0: jg      loc_943E7B; jumptable 00943957 case 0
0x943BC6: add     ebx, 7
0x943BC9: jmp     loc_943944
0x943BCE: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 5
0x943BD2: lea     ebx, [ebx+eax+2]
0x943BD6: jmp     loc_943944
0x943BDB: movzx   ecx, byte ptr [ebx+1]; jumptable 00943957 case 6
0x943BDF: movzx   edx, byte ptr [ebx+2]
0x943BE3: shl     ecx, 8
0x943BE6: add     edx, ebx
0x943BE8: lea     ebx, [edx+ecx+3]
0x943BEC: jmp     loc_943944
0x943BF1: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 7
0x943BF5: movzx   ecx, byte ptr [ebx+2]
0x943BF9: movzx   edx, byte ptr [ebx+3]
0x943BFD: shl     eax, 8
0x943C00: add     eax, ecx
0x943C02: shl     eax, 8
0x943C05: add     edx, ebx
0x943C07: lea     ebx, [edx+eax+4]
0x943C0B: jmp     loc_943944
0x943C10: mov     edx, [esi+20h]; jumptable 00943957 cases 1-4
0x943C13: mov     ebp, [ebp+10h]
0x943C16: sub     edx, eax
0x943C18: mov     [esp+250h+var_21C], edx
0x943C1C: movzx   edi, byte ptr [ebx+1]
0x943C20: add     edi, [esi+10h]
0x943C23: mov     ecx, eax
0x943C25: shl     edi, cl
0x943C27: mov     ecx, edx
0x943C29: sar     ebp, cl
0x943C2B: mov     [esp+250h+var_22C], edi
0x943C2F: sub     ebp, edi
0x943C31: mov     [esp+250h+var_23C], ebp
0x943C35: movzx   edi, byte ptr [ebx+2]
0x943C39: add     edi, [esi+14h]
0x943C3C: mov     ecx, eax
0x943C3E: shl     edi, cl
0x943C40: mov     ecx, [esp+250h+var_240]
0x943C44: mov     ebp, [ecx+14h]
0x943C47: mov     ecx, edx
0x943C49: sar     ebp, cl
0x943C4B: mov     [esp+250h+var_228], edi
0x943C4F: sub     ebp, edi
0x943C51: mov     [esp+250h+var_238], ebp
0x943C55: movzx   edi, byte ptr [ebx+3]
0x943C59: mov     ecx, [esi+18h]
0x943C5C: mov     ebp, [esp+250h+var_240]
0x943C60: add     edi, ecx
0x943C62: mov     ecx, eax
0x943C64: mov     eax, [ebp+18h]
0x943C67: shl     edi, cl
0x943C69: mov     ecx, edx
0x943C6B: sar     eax, cl
0x943C6D: mov     [esp+250h+var_224], edi
0x943C71: sub     eax, edi
0x943C73: mov     [esp+250h+var_234], eax
0x943C77: mov     eax, [ebp+1Ch]
0x943C7A: sar     eax, cl
0x943C7C: inc     eax
0x943C7D: mov     [esp+250h+var_230], eax
0x943C81: mov     ecx, [esi+1Ch]
0x943C84: mov     [esp+250h+var_220], ecx
0x943C88: mov     edx, [esi+24h]
0x943C8B: mov     [esp+250h+var_218], edx
0x943C8F: lea     esi, [esp+250h+var_23C]
0x943C93: add     ebx, 4
0x943C96: jmp     loc_943944
0x943C9B: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 9
0x943C9F: lea     ecx, [esp+250h+var_23C]
0x943CA3: cmp     esi, ecx
0x943CA5: jz      short loc_943CB6
0x943CA7: mov     ecx, 0Ah
0x943CAC: lea     edi, [esp+250h+var_23C]
0x943CB0: rep movsd
0x943CB2: lea     esi, [esp+250h+var_23C]
0x943CB6: add     [esp+250h+var_220], eax
0x943CBA: add     ebx, 2
0x943CBD: jmp     loc_943944
0x943CC2: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 10
0x943CC6: movzx   edx, byte ptr [ebx+2]
0x943CCA: shl     eax, 8
0x943CCD: lea     ecx, [esp+250h+var_23C]
0x943CD1: add     eax, edx
0x943CD3: cmp     esi, ecx
0x943CD5: jz      short loc_943CE6
0x943CD7: mov     ecx, 0Ah
0x943CDC: lea     edi, [esp+250h+var_23C]
0x943CE0: rep movsd
0x943CE2: lea     esi, [esp+250h+var_23C]
0x943CE6: add     [esp+250h+var_220], eax
0x943CEA: add     ebx, 3
0x943CED: jmp     loc_943944
0x943CF2: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 11
0x943CF6: movzx   edx, byte ptr [ebx+2]
0x943CFA: movzx   ecx, byte ptr [ebx+3]
0x943CFE: shl     eax, 8
0x943D01: add     eax, edx
0x943D03: movzx   edx, byte ptr [ebx+4]
0x943D07: shl     eax, 8
0x943D0A: add     eax, ecx
0x943D0C: shl     eax, 8
0x943D0F: lea     ecx, [esp+250h+var_23C]
0x943D13: add     eax, edx
0x943D15: cmp     esi, ecx
0x943D17: jz      short loc_943D28
0x943D19: mov     ecx, 0Ah
0x943D1E: lea     edi, [esp+250h+var_23C]
0x943D22: rep movsd
0x943D24: lea     esi, [esp+250h+var_23C]
0x943D28: mov     [esp+250h+var_220], eax
0x943D2C: add     ebx, 5
0x943D2F: jmp     loc_943944
0x943D34: movzx   ecx, byte ptr [ebx+1]; jumptable 00943957 cases 96-99
0x943D38: add     ebx, 2
0x943D3B: mov     [esp+eax*4+250h+var_398], ecx
0x943D42: jmp     short loc_943D86
0x943D44: movzx   edx, byte ptr [ebx+1]; jumptable 00943957 cases 100-103
0x943D48: movzx   ecx, byte ptr [ebx+2]
0x943D4C: shl     edx, 8
0x943D4F: add     edx, ecx
0x943D51: mov     [esp+eax*4+250h+var_3A8], edx
0x943D58: add     ebx, 3
0x943D5B: jmp     short loc_943D86
0x943D5D: movzx   edx, byte ptr [ebx+1]; jumptable 00943957 cases 104-107
0x943D61: movzx   ecx, byte ptr [ebx+2]
0x943D65: shl     edx, 8
0x943D68: add     edx, ecx
0x943D6A: movzx   ecx, byte ptr [ebx+3]
0x943D6E: shl     edx, 8
0x943D71: add     edx, ecx
0x943D73: movzx   ecx, byte ptr [ebx+4]
0x943D77: shl     edx, 8
0x943D7A: add     edx, ecx
0x943D7C: mov     [esp+eax*4+250h+var_3B8], edx
0x943D83: add     ebx, 5
0x943D86: mov     eax, [esp+250h+var_218]
0x943D8A: lea     edx, [esp+250h+var_23C]
0x943D8E: cmp     esi, edx
0x943D90: jz      short loc_943D9D
0x943D92: mov     ecx, 0Ah
0x943D97: mov     edi, edx
0x943D99: rep movsd
0x943D9B: mov     esi, edx
0x943D9D: mov     [esp+250h+var_218], eax
0x943DA1: jmp     loc_943944
0x943DA6: push    ecx; jumptable 00943957 default case, cases 8,12-15,29-31,44-47,84-95
0x943DA7: mov     eax, esp
0x943DA9: mov     byte ptr [eax], 1
0x943DAC: push    200h
0x943DB1: lea     eax, [esp+258h+var_200]
0x943DB5: push    eax
0x943DB6: lea     ecx, [esp+25Ch+var_20C]
0x943DBA: call    sub_8BBFB0
0x943DBF: push    offset aUnknownCommand; "Unknown command.\n"
0x943DC4: lea     ecx, [esp+254h+var_20C]
0x943DC8: call    sub_8BBDB0
0x943DCD: mov     ecx, ds:0BA7FB0h
0x943DD3: mov     edx, [ecx]
0x943DD5: push    124h
0x943DDA: push    offset a_CollideMopp_0; ".\\collide\\mopp\\machine\\hkMoppSphere"...
0x943DDF: lea     eax, [esp+258h+var_200]
0x943DE3: push    eax
0x943DE4: push    1298FEDDh
0x943DE9: push    3
0x943DEB: call    dword ptr [edx+8]
0x943DEE: lea     ecx, [esp+250h+var_20C]
0x943DF2: call    sub_8BC000
0x943DF7: jmp     loc_943944
0x943DFC: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 80
0x943E00: jmp     short loc_943E4D
0x943E02: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 81
0x943E06: movzx   ecx, byte ptr [ebx+2]
0x943E0A: shl     eax, 8
0x943E0D: add     eax, ecx
0x943E0F: jmp     short loc_943E4D
0x943E11: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 82
0x943E15: movzx   edx, byte ptr [ebx+2]
0x943E19: movzx   ecx, byte ptr [ebx+3]
0x943E1D: shl     eax, 8
0x943E20: add     eax, edx
0x943E22: shl     eax, 8
0x943E25: add     eax, ecx
0x943E27: jmp     short loc_943E4D
0x943E29: movzx   eax, byte ptr [ebx+1]; jumptable 00943957 case 83
0x943E2D: movzx   edx, byte ptr [ebx+2]
0x943E31: movzx   ecx, byte ptr [ebx+3]
0x943E35: shl     eax, 8
0x943E38: add     eax, edx
0x943E3A: movzx   edx, byte ptr [ebx+4]
0x943E3E: shl     eax, 8
0x943E41: add     eax, ecx
0x943E43: shl     eax, 8
0x943E46: add     eax, edx
0x943E48: jmp     short loc_943E4D
0x943E4A: add     eax, 0FFFFFFD0h; jumptable 00943957 cases 48-79
0x943E4D: mov     esi, [esi+1Ch]
0x943E50: mov     ebp, [ebp+0]
0x943E53: mov     ecx, [ebp+4]
0x943E56: add     esi, eax
0x943E58: mov     eax, [ebp+8]
0x943E5B: and     eax, 3FFFFFFFh
0x943E60: cmp     ecx, eax
0x943E62: jnz     short loc_943E6F
0x943E64: push    4
0x943E66: push    ebp
0x943E67: call    sub_8A6EE0
0x943E6C: add     esp, 8
0x943E6F: mov     ecx, [ebp+4]
0x943E72: mov     edx, [ebp+0]
0x943E75: mov     [edx+ecx*4], esi
0x943E78: inc     dword ptr [ebp+4]
0x943E7B: pop     edi; jumptable 00943957 case 0
0x943E7C: pop     esi
0x943E7D: pop     ebp
0x943E7E: pop     ebx
0x943E7F: add     esp, 240h
0x943E85: retn    8
