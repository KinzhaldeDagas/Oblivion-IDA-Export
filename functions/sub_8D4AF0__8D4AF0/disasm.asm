0x8D4AF0: sub     esp, 69Ch
0x8D4AF6: push    ebx
0x8D4AF7: mov     ebx, [esp+6A0h+arg_8]
0x8D4AFE: mov     eax, [ebx+4]
0x8D4B01: mov     ecx, [ebx+8]
0x8D4B04: push    ebp
0x8D4B05: add     eax, 14h
0x8D4B08: push    esi
0x8D4B09: mov     [esp+6A8h+var_64C], eax
0x8D4B0D: lea     edx, [ebx+20h]
0x8D4B10: add     ecx, 14h
0x8D4B13: mov     [esp+6A8h+var_640], edx
0x8D4B17: lea     eax, [ebx+10h]
0x8D4B1A: push    edi
0x8D4B1B: lea     edx, [esp+6ACh+var_64C]
0x8D4B1F: mov     [esp+6ACh+var_63C], eax
0x8D4B23: mov     eax, [esp+6ACh+arg_10]
0x8D4B2A: mov     [esp+6ACh+var_648], ecx
0x8D4B2E: mov     ecx, [ebx+0Ch]
0x8D4B31: push    edx
0x8D4B32: push    eax
0x8D4B33: mov     [esp+6B4h+var_638], ecx
0x8D4B37: mov     [esp+6B4h+var_634], 0
0x8D4B42: call    sub_8DC890
0x8D4B47: mov     eax, [ebx+4]
0x8D4B4A: mov     ecx, [eax+98h]
0x8D4B50: add     esp, 8
0x8D4B53: test    ecx, ecx
0x8D4B55: jz      short loc_8D4B65
0x8D4B57: lea     ecx, [esp+6ACh+var_64C]
0x8D4B5B: push    ecx
0x8D4B5C: push    eax
0x8D4B5D: call    sub_8DC010
0x8D4B62: add     esp, 8
0x8D4B65: mov     eax, [ebx+8]
0x8D4B68: mov     ecx, [eax+98h]
0x8D4B6E: test    ecx, ecx
0x8D4B70: jz      short loc_8D4B80
0x8D4B72: lea     edx, [esp+6ACh+var_64C]
0x8D4B76: push    edx
0x8D4B77: push    eax
0x8D4B78: call    sub_8DC010
0x8D4B7D: add     esp, 8
0x8D4B80: mov     ebp, [ebx+4]
0x8D4B83: mov     cl, [ebp+91h]
0x8D4B89: test    cl, cl
0x8D4B8B: mov     eax, [ebx+8]
0x8D4B8E: mov     [esp+6ACh+var_674], eax
0x8D4B92: jnz     short loc_8D4B99
0x8D4B94: mov     eax, [ebp+54h]
0x8D4B97: jmp     short loc_8D4B9C
0x8D4B99: mov     eax, [eax+54h]
0x8D4B9C: mov     esi, [eax+38h]
0x8D4B9F: mov     ecx, large fs:2Ch
0x8D4BA6: mov     [esp+6ACh+var_668], eax
0x8D4BAA: xor     eax, eax
0x8D4BAC: mov     [esp+6ACh+var_698], eax
0x8D4BB0: mov     [esp+6ACh+var_694], eax
0x8D4BB4: mov     eax, ds:0BA9DE4h
0x8D4BB9: mov     eax, [ecx+eax*4]
0x8D4BBC: mov     ecx, [eax+19Ch]
0x8D4BC2: mov     [esp+6ACh+var_69C], eax
0x8D4BC6: mov     [esp+6ACh+var_690], 80000000h
0x8D4BCE: mov     edx, [ecx+20h]
0x8D4BD1: lea     eax, ds:10h[esi*4]
0x8D4BD8: and     eax, 0FFFFFFF0h
0x8D4BDB: lea     edi, [edx+eax]
0x8D4BDE: cmp     edi, [ecx+2Ch]
0x8D4BE1: ja      short loc_8D4BEA
0x8D4BE3: mov     [ecx+20h], edi
0x8D4BE6: mov     eax, edx
0x8D4BE8: jmp     short loc_8D4BF0
0x8D4BEA: mov     edx, [ecx]
0x8D4BEC: push    eax
0x8D4BED: call    dword ptr [edx+0Ch]
0x8D4BF0: mov     ecx, large fs:2Ch
0x8D4BF7: mov     edx, ds:0BA9DE4h
0x8D4BFD: mov     [esp+6ACh+var_698], eax
0x8D4C01: mov     [esp+6ACh+var_68C], eax
0x8D4C05: lea     eax, [esp+6ACh+var_300]
0x8D4C0C: mov     [esp+6ACh+var_30C], eax
0x8D4C13: xor     eax, eax
0x8D4C15: mov     [esp+6ACh+var_308], eax
0x8D4C1C: mov     [esp+6ACh+var_66C], eax
0x8D4C20: mov     eax, [ecx+edx*4]
0x8D4C23: mov     ecx, [eax+1A4h]
0x8D4C29: mov     edx, [eax+1A8h]
0x8D4C2F: or      esi, 80000000h
0x8D4C35: cmp     ecx, edx
0x8D4C37: mov     edi, 80000040h
0x8D4C3C: mov     [esp+6ACh+var_690], esi
0x8D4C40: mov     [esp+6ACh+var_304], edi
0x8D4C47: jnb     short loc_8D4C6F
0x8D4C49: mov     esi, [esp+6ACh+var_69C]
0x8D4C4D: mov     ecx, [esi+1A4h]
0x8D4C53: mov     dword ptr [ecx], offset aSt2bodycollide; "St2BodyCollide"
0x8D4C59: rdtsc
0x8D4C5B: mov     [esp+6ACh+var_67C], eax
0x8D4C5F: mov     edx, [esp+6ACh+var_67C]
0x8D4C63: mov     [ecx+4], edx
0x8D4C66: add     ecx, 0Ch
0x8D4C69: mov     [esi+1A4h], ecx
0x8D4C6F: mov     al, [ebp+91h]
0x8D4C75: test    al, al
0x8D4C77: mov     ecx, [esp+6ACh+arg_18]
0x8D4C7E: jnz     short loc_8D4CD9
0x8D4C80: mov     eax, [esp+6ACh+var_694]
0x8D4C84: mov     edx, [esp+6ACh+var_698]
0x8D4C88: mov     [edx+eax*4], ebp
0x8D4C8B: mov     esi, [esp+6ACh+var_694]
0x8D4C8F: mov     eax, [ebx]
0x8D4C91: inc     esi
0x8D4C92: mov     [esp+6ACh+var_694], esi
0x8D4C96: movzx   edx, word ptr [ebp+8Ch]
0x8D4C9D: mov     [esp+6ACh+var_67C], eax
0x8D4CA1: mov     eax, [ecx]
0x8D4CA3: add     eax, edx
0x8D4CA5: cmp     byte ptr [eax], 0
0x8D4CA8: jnz     short loc_8D4CCC
0x8D4CAA: mov     ecx, [esp+6ACh+var_67C]
0x8D4CAE: mov     byte ptr [eax], 1
0x8D4CB1: mov     eax, [ebp+50h]
0x8D4CB4: add     eax, 10h
0x8D4CB7: push    eax; int
0x8D4CB8: push    ecx; float
0x8D4CB9: add     eax, 40h ; '@'
0x8D4CBC: push    eax; int
0x8D4CBD: call    sub_8DD150
0x8D4CC2: mov     ecx, [esp+6B8h+arg_18]
0x8D4CC9: add     esp, 0Ch
0x8D4CCC: movzx   edx, word ptr [ebp+8Ch]
0x8D4CD3: mov     eax, [ecx]
0x8D4CD5: mov     byte ptr [edx+eax], 2
0x8D4CD9: mov     esi, [esp+6ACh+var_674]
0x8D4CDD: mov     al, [esi+91h]
0x8D4CE3: test    al, al
0x8D4CE5: jnz     short loc_8D4D40
0x8D4CE7: mov     edx, [esp+6ACh+var_694]
0x8D4CEB: mov     eax, [esp+6ACh+var_698]
0x8D4CEF: mov     [eax+edx*4], esi
0x8D4CF2: mov     ebp, [esp+6ACh+var_694]
0x8D4CF6: mov     edx, [ebx]
0x8D4CF8: inc     ebp
0x8D4CF9: mov     [esp+6ACh+var_694], ebp
0x8D4CFD: movzx   eax, word ptr [esi+8Ch]
0x8D4D04: mov     [esp+6ACh+var_67C], edx
0x8D4D08: mov     edx, [ecx]
0x8D4D0A: add     eax, edx
0x8D4D0C: cmp     byte ptr [eax], 0
0x8D4D0F: jnz     short loc_8D4D33
0x8D4D11: mov     ecx, [esp+6ACh+var_67C]
0x8D4D15: mov     byte ptr [eax], 1
0x8D4D18: mov     eax, [esi+50h]
0x8D4D1B: add     eax, 10h
0x8D4D1E: push    eax; int
0x8D4D1F: push    ecx; float
0x8D4D20: add     eax, 40h ; '@'
0x8D4D23: push    eax; int
0x8D4D24: call    sub_8DD150
0x8D4D29: mov     ecx, [esp+6B8h+arg_18]
0x8D4D30: add     esp, 0Ch
0x8D4D33: movzx   edx, word ptr [esi+8Ch]
0x8D4D3A: mov     eax, [ecx]
0x8D4D3C: mov     byte ptr [edx+eax], 2
0x8D4D40: mov     eax, [esp+6ACh+arg_10]
0x8D4D47: lea     edx, [esp+6ACh+var_524]
0x8D4D4E: push    edx
0x8D4D4F: lea     ecx, [esp+6B0h+var_518]
0x8D4D56: push    ebx
0x8D4D57: xor     esi, esi
0x8D4D59: push    eax
0x8D4D5A: mov     [esp+6B8h+var_524], ecx
0x8D4D61: mov     [esp+6B8h+var_520], esi
0x8D4D68: mov     [esp+6B8h+var_51C], edi
0x8D4D6F: call    sub_8D2F10
0x8D4D74: mov     eax, [esp+6B8h+var_524]
0x8D4D7B: mov     ecx, [eax]
0x8D4D7D: mov     [esp+6B8h+var_688], ecx
0x8D4D81: mov     ecx, [esp+6B8h+var_520]; void *
0x8D4D88: add     esp, 0Ch
0x8D4D8B: cmp     ecx, 1
0x8D4D8E: jle     short loc_8D4D99
0x8D4D90: mov     edx, [eax+4]
0x8D4D93: mov     [esp+6ACh+var_684], edx
0x8D4D97: jmp     short loc_8D4D9D
0x8D4D99: mov     [esp+6ACh+var_684], esi
0x8D4D9D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x8D4DA2: mov     eax, [esp+6ACh+var_694]
0x8D4DA6: mov     ecx, [esp+6ACh+var_698]
0x8D4DAA: mov     ebp, [esp+6ACh+arg_4]
0x8D4DB1: push    eax
0x8D4DB2: push    ecx
0x8D4DB3: push    ebp
0x8D4DB4: call    sub_923CE0
0x8D4DB9: lea     edx, [esp+6B8h+var_624]
0x8D4DC0: lea     eax, [esp+6B8h+var_40C]
0x8D4DC7: mov     [esp+6B8h+var_630], edx
0x8D4DCE: mov     edx, [esp+6B8h+arg_0]
0x8D4DD5: xor     ecx, ecx
0x8D4DD7: mov     [esp+6B8h+var_418], eax
0x8D4DDE: mov     eax, [edx+10h]
0x8D4DE1: add     esp, 0Ch
0x8D4DE4: cmp     eax, ecx
0x8D4DE6: mov     bl, 1
0x8D4DE8: mov     [esp+6ACh+var_628], edi
0x8D4DEF: mov     [esp+6ACh+var_410], edi
0x8D4DF6: mov     edi, [esp+6ACh+arg_14]
0x8D4DFD: mov     [esp+6ACh+var_661], bl
0x8D4E01: mov     [esp+6ACh+var_62C], ecx
0x8D4E08: mov     [esp+6ACh+var_414], ecx
0x8D4E0F: mov     [esp+6ACh+var_67C], eax
0x8D4E13: jle     loc_8D543F
0x8D4E19: mov     esi, [esp+6ACh+arg_18]
0x8D4E20: mov     al, [esp+6ACh+var_661]
0x8D4E24: test    al, al
0x8D4E26: jz      loc_8D53A8
0x8D4E2C: mov     eax, large fs:2Ch
0x8D4E32: mov     ecx, ds:0BA9DE4h
0x8D4E38: mov     eax, [eax+ecx*4]
0x8D4E3B: mov     [esp+6ACh+var_650], eax
0x8D4E3F: nop
0x8D4E40: mov     edx, [eax+1A4h]
0x8D4E46: cmp     edx, [eax+1A8h]
0x8D4E4C: jnb     short loc_8D4E78
0x8D4E4E: mov     eax, [esp+6ACh+var_69C]
0x8D4E52: mov     ecx, [eax+1A4h]
0x8D4E58: mov     dword ptr [ecx], offset aStexpandsystem; "StExpandSystem"
0x8D4E5E: rdtsc
0x8D4E60: mov     [esp+6ACh+var_654], eax
0x8D4E64: mov     edx, [esp+6ACh+var_654]
0x8D4E68: mov     eax, [esp+6ACh+var_69C]
0x8D4E6C: mov     [ecx+4], edx
0x8D4E6F: add     ecx, 0Ch
0x8D4E72: mov     [eax+1A4h], ecx
0x8D4E78: mov     ecx, [esp+6ACh+var_66C]
0x8D4E7C: xor     eax, eax
0x8D4E7E: test    bl, bl
0x8D4E80: mov     [esp+6ACh+var_414], eax
0x8D4E87: mov     [esp+6ACh+var_62C], eax
0x8D4E8E: mov     [esp+6ACh+var_65C], ecx
0x8D4E92: jnz     short loc_8D4EF2
0x8D4E94: mov     edx, ecx
0x8D4E96: cmp     edx, [esp+6ACh+var_308]
0x8D4E9D: jge     loc_8D51F1
0x8D4EA3: mov     edx, [esp+6ACh+arg_0]
0x8D4EAA: mov     [esp+6ACh+var_520], eax
0x8D4EB1: lea     eax, [esp+6ACh+var_524]
0x8D4EB8: push    eax
0x8D4EB9: mov     eax, [edx]
0x8D4EBB: lea     ecx, [esp+6B0h+var_698]
0x8D4EBF: push    ecx
0x8D4EC0: push    esi
0x8D4EC1: push    eax
0x8D4EC2: mov     eax, [esp+6BCh+arg_10]
0x8D4EC9: lea     ecx, [esp+6BCh+var_65C]
0x8D4ECD: push    ecx
0x8D4ECE: mov     ecx, [eax+74h]
0x8D4ED1: lea     edx, [esp+6C0h+var_30C]
0x8D4ED8: push    edx
0x8D4ED9: push    ecx
0x8D4EDA: push    ebp
0x8D4EDB: call    sub_8D39E0
0x8D4EE0: mov     eax, [esp+6CCh+var_520]
0x8D4EE7: add     esp, 20h
0x8D4EEA: test    eax, eax
0x8D4EEC: jz      loc_8D53A8
0x8D4EF2: mov     ebx, [esp+6ACh+arg_0]
0x8D4EF9: lea     edx, [esp+6ACh+var_418]
0x8D4F00: push    edx; int
0x8D4F01: mov     edx, [esp+6B0h+arg_8]
0x8D4F08: lea     eax, [esp+6B0h+var_630]
0x8D4F0F: push    eax; int
0x8D4F10: mov     eax, [edx]
0x8D4F12: mov     edx, [esp+6B4h+arg_10]
0x8D4F19: push    esi; int
0x8D4F1A: lea     ecx, [esp+6B8h+var_524]
0x8D4F21: push    ecx; int
0x8D4F22: mov     ecx, [ebx]
0x8D4F24: push    eax; float
0x8D4F25: mov     eax, [edx+74h]
0x8D4F28: push    ecx; int
0x8D4F29: push    eax; int
0x8D4F2A: call    sub_8D3CF0
0x8D4F2F: mov     ecx, large fs:2Ch
0x8D4F36: mov     edx, ds:0BA9DE4h
0x8D4F3C: mov     eax, [ecx+edx*4]
0x8D4F3F: mov     ecx, [eax+1A4h]
0x8D4F45: mov     edx, [eax+1A8h]
0x8D4F4B: add     esp, 1Ch
0x8D4F4E: cmp     ecx, edx
0x8D4F50: jnb     short loc_8D4F7C
0x8D4F52: mov     edx, [esp+6ACh+var_69C]
0x8D4F56: mov     ecx, [edx+1A4h]
0x8D4F5C: mov     dword ptr [ecx], offset aStbuildaccJac; "StbuildAcc+Jac"
0x8D4F62: rdtsc
0x8D4F64: mov     [esp+6ACh+var_658], eax
0x8D4F68: mov     eax, [esp+6ACh+var_658]
0x8D4F6C: mov     edx, [esp+6ACh+var_69C]
0x8D4F70: mov     [ecx+4], eax
0x8D4F73: add     ecx, 0Ch
0x8D4F76: mov     [edx+1A4h], ecx
0x8D4F7C: mov     eax, [esp+6ACh+var_62C]
0x8D4F83: mov     ecx, [esp+6ACh+var_630]
0x8D4F87: push    eax
0x8D4F88: push    ecx
0x8D4F89: lea     edx, [esp+6B4h+var_660+3]
0x8D4F8D: push    ebp
0x8D4F8E: push    edx
0x8D4F8F: call    sub_923D70
0x8D4F94: mov     cl, [eax]
0x8D4F96: add     esp, 10h
0x8D4F99: test    cl, cl
0x8D4F9B: jz      loc_8D5177
0x8D4FA1: mov     eax, [esp+6ACh+var_414]
0x8D4FA8: mov     ecx, [esp+6ACh+var_418]
0x8D4FAF: push    eax
0x8D4FB0: push    ecx
0x8D4FB1: lea     edx, [esp+6B4h+var_680+3]
0x8D4FB5: push    ebp
0x8D4FB6: push    edx
0x8D4FB7: call    sub_923F40
0x8D4FBC: mov     cl, [eax]
0x8D4FBE: add     esp, 10h
0x8D4FC1: test    cl, cl
0x8D4FC3: jz      loc_8D5177
0x8D4FC9: mov     eax, [esp+6ACh+var_308]
0x8D4FD0: mov     ecx, [esp+6ACh+var_414]
0x8D4FD7: add     ecx, eax
0x8D4FD9: cmp     [ebx+0Ch], ecx
0x8D4FDC: jl      loc_8D5177
0x8D4FE2: mov     eax, [edi+4]
0x8D4FE5: mov     ecx, [esp+6ACh+var_62C]
0x8D4FEC: lea     edx, [eax+ecx]
0x8D4FEF: add     edx, [esp+6ACh+var_694]
0x8D4FF3: cmp     [ebx+4], edx
0x8D4FF6: jl      loc_8D517E
0x8D4FFC: mov     edx, [esp+6ACh+var_520]
0x8D5003: add     eax, edx
0x8D5005: cmp     [ebx+8], eax
0x8D5008: jl      loc_8D517E
0x8D500E: mov     eax, [esp+6ACh+var_630]
0x8D5012: push    ecx
0x8D5013: push    eax
0x8D5014: push    ebp
0x8D5015: call    sub_923CE0
0x8D501A: mov     edx, [esp+6B8h+var_414]
0x8D5021: mov     eax, [esp+6B8h+var_418]
0x8D5028: lea     ecx, [esp+6B8h+var_30C]
0x8D502F: push    ecx
0x8D5030: push    edx
0x8D5031: push    eax
0x8D5032: push    ebp
0x8D5033: call    sub_923DD0
0x8D5038: mov     edx, [esp+6C8h+var_694]
0x8D503C: mov     ecx, [esp+6C8h+var_65C]
0x8D5040: add     esp, 1Ch
0x8D5043: xor     eax, eax
0x8D5045: test    edx, edx
0x8D5047: mov     [esp+6ACh+var_66C], ecx
0x8D504B: jle     short loc_8D5083
0x8D504D: mov     ecx, [esp+6ACh+var_698]
0x8D5051: mov     edi, [ecx+eax*4]
0x8D5054: movzx   edi, word ptr [edi+8Ch]
0x8D505B: mov     ebx, [esi]
0x8D505D: cmp     byte ptr [edi+ebx], 8
0x8D5061: jnz     short loc_8D5077
0x8D5063: dec     edx
0x8D5064: mov     [esp+6ACh+var_694], edx
0x8D5068: mov     edx, [ecx+edx*4]
0x8D506B: mov     [ecx+eax*4], edx
0x8D506E: mov     edx, [esp+6ACh+var_694]
0x8D5072: mov     ecx, [esp+6ACh+var_698]
0x8D5076: dec     eax
0x8D5077: inc     eax
0x8D5078: cmp     eax, edx
0x8D507A: jl      short loc_8D5051
0x8D507C: mov     edi, [esp+6ACh+arg_14]
0x8D5083: mov     ecx, [edi+4]
0x8D5086: lea     eax, [esp+6ACh+var_524]
0x8D508D: push    eax
0x8D508E: push    ecx
0x8D508F: mov     ecx, edi
0x8D5091: call    sub_8E6720
0x8D5096: mov     eax, [esp+6ACh+var_62C]
0x8D509D: mov     edx, [esp+6ACh+var_694]
0x8D50A1: lea     ecx, [eax+edx]
0x8D50A4: mov     eax, [esp+6ACh+var_690]
0x8D50A8: and     eax, 3FFFFFFFh
0x8D50AD: cmp     eax, ecx
0x8D50AF: jge     short loc_8D50C9
0x8D50B1: add     eax, eax
0x8D50B3: cmp     ecx, eax
0x8D50B5: jl      short loc_8D50B9
0x8D50B7: mov     eax, ecx
0x8D50B9: push    4
0x8D50BB: push    eax
0x8D50BC: lea     ecx, [esp+6B4h+var_698]
0x8D50C0: push    ecx
0x8D50C1: call    sub_8A6E40
0x8D50C6: add     esp, 0Ch
0x8D50C9: mov     eax, [esp+6ACh+var_62C]
0x8D50D0: xor     esi, esi
0x8D50D2: test    eax, eax
0x8D50D4: jle     short loc_8D510C
0x8D50D6: mov     edx, [esp+6ACh+var_630]
0x8D50DA: mov     eax, [edx+esi*4]
0x8D50DD: mov     ecx, [eax+50h]
0x8D50E0: mov     edx, [ecx]
0x8D50E2: call    dword ptr [edx+8]
0x8D50E5: cmp     eax, 6
0x8D50E8: jz      short loc_8D5100
0x8D50EA: mov     eax, [esp+6ACh+var_630]
0x8D50EE: mov     ecx, [eax+esi*4]
0x8D50F1: mov     edx, [esp+6ACh+var_694]
0x8D50F5: mov     eax, [esp+6ACh+var_698]
0x8D50F9: mov     [eax+edx*4], ecx
0x8D50FC: inc     [esp+6ACh+var_694]
0x8D5100: mov     eax, [esp+6ACh+var_62C]
0x8D5107: inc     esi
0x8D5108: cmp     esi, eax
0x8D510A: jl      short loc_8D50D6
0x8D510C: mov     ecx, [esp+6ACh+var_414]
0x8D5113: push    ecx
0x8D5114: lea     edx, [esp+6B0h+var_66C]
0x8D5118: push    edx
0x8D5119: lea     eax, [esp+6B4h+var_30C]
0x8D5120: push    eax
0x8D5121: call    sub_8D3140
0x8D5126: mov     ecx, [esp+6B8h+arg_18]
0x8D512D: push    ecx
0x8D512E: lea     edx, [esp+6BCh+var_66C]
0x8D5132: push    edx
0x8D5133: lea     eax, [esp+6C0h+var_30C]
0x8D513A: push    eax
0x8D513B: call    sub_8D3200
0x8D5140: push    1
0x8D5142: push    ebp
0x8D5143: call    sub_923C00
0x8D5148: mov     eax, [esp+6CCh+var_414]
0x8D514F: add     esp, 20h
0x8D5152: test    eax, eax
0x8D5154: jnz     short loc_8D5165
0x8D5156: mov     eax, [esp+6ACh+var_62C]
0x8D515D: test    eax, eax
0x8D515F: jz      loc_8D53A1
0x8D5165: mov     esi, [esp+6ACh+arg_18]
0x8D516C: mov     eax, [esp+6ACh+var_650]
0x8D5170: xor     bl, bl
0x8D5172: jmp     loc_8D4E40
0x8D5177: mov     ecx, [esp+6ACh+var_62C]
0x8D517E: mov     edx, [esp+6ACh+var_520]
0x8D5185: mov     ebx, [esp+6ACh+var_69C]
0x8D5189: xor     eax, eax
0x8D518B: test    edx, edx
0x8D518D: jle     short loc_8D51BA
0x8D518F: nop
0x8D5190: mov     ecx, [esp+6ACh+var_524]
0x8D5197: mov     edx, [ecx+eax*4]
0x8D519A: movzx   ecx, word ptr [edx+8Ch]
0x8D51A1: mov     edx, [esi]
0x8D51A3: mov     byte ptr [ecx+edx], 2
0x8D51A7: mov     ecx, [esp+6ACh+var_520]
0x8D51AE: inc     eax
0x8D51AF: cmp     eax, ecx
0x8D51B1: jl      short loc_8D5190
0x8D51B3: mov     ecx, [esp+6ACh+var_62C]
0x8D51BA: xor     eax, eax
0x8D51BC: test    ecx, ecx
0x8D51BE: jle     short loc_8D51E0
0x8D51C0: mov     ecx, [esp+6ACh+var_630]
0x8D51C4: mov     edx, [ecx+eax*4]
0x8D51C7: movzx   ecx, word ptr [edx+8Ch]
0x8D51CE: mov     edx, [esi]
0x8D51D0: mov     byte ptr [ecx+edx], 1
0x8D51D4: mov     ecx, [esp+6ACh+var_62C]
0x8D51DB: inc     eax
0x8D51DC: cmp     eax, ecx
0x8D51DE: jl      short loc_8D51C0
0x8D51E0: mov     ecx, [esp+6ACh+arg_C]
0x8D51E7: mov     eax, [ecx]
0x8D51E9: call    dword ptr [eax+14h]
0x8D51EC: cmp     eax, 1
0x8D51EF: jnz     short loc_8D51FB
0x8D51F1: mov     [esp+6ACh+var_661], 0
0x8D51F6: jmp     loc_8D53A8
0x8D51FB: cmp     eax, 2
0x8D51FE: jnz     loc_8D53A8
0x8D5204: mov     ecx, ds:0BA9DE4h
0x8D520A: mov     ebp, large fs:2Ch
0x8D5211: mov     eax, [ebp+ecx*4+0]
0x8D5215: mov     edx, [eax+1A4h]
0x8D521B: cmp     edx, [eax+1A8h]
0x8D5221: jnb     short loc_8D5245
0x8D5223: mov     ecx, [ebx+1A4h]
0x8D5229: mov     dword ptr [ecx], offset aStbackstep; "StBackstep"
0x8D522F: rdtsc
0x8D5231: mov     [esp+6ACh+var_678], eax
0x8D5235: mov     eax, [esp+6ACh+var_678]
0x8D5239: mov     [ecx+4], eax
0x8D523C: add     ecx, 0Ch
0x8D523F: mov     [ebx+1A4h], ecx
0x8D5245: mov     ecx, [esp+6ACh+var_668]
0x8D5249: mov     edx, [esp+6ACh+arg_8]
0x8D5250: mov     eax, [edx]
0x8D5252: push    edi; int
0x8D5253: push    esi; int
0x8D5254: push    ecx; int
0x8D5255: push    eax; float
0x8D5256: call    sub_8D40E0
0x8D525B: mov     ecx, ds:0BA9DE4h
0x8D5261: mov     eax, [ebp+ecx*4+0]
0x8D5265: mov     edx, [eax+1A4h]
0x8D526B: mov     ecx, [eax+1A8h]
0x8D5271: add     esp, 10h
0x8D5274: cmp     edx, ecx
0x8D5276: jnb     short loc_8D529A
0x8D5278: mov     ecx, [ebx+1A4h]
0x8D527E: mov     dword ptr [ecx], offset aStinvalidtims; "StInvalidTIMs"
0x8D5284: rdtsc
0x8D5286: mov     [esp+6ACh+var_678], eax
0x8D528A: mov     eax, [esp+6ACh+var_678]
0x8D528E: mov     [ecx+4], eax
0x8D5291: add     ecx, 0Ch
0x8D5294: mov     [ebx+1A4h], ecx
0x8D529A: mov     eax, [edi+4]
0x8D529D: xor     esi, esi
0x8D529F: test    eax, eax
0x8D52A1: jle     short loc_8D52C4
0x8D52A3: mov     ecx, [esp+6ACh+arg_10]
0x8D52AA: mov     edx, [ecx+74h]
0x8D52AD: mov     eax, [edi]
0x8D52AF: mov     ecx, [eax+esi*4]
0x8D52B2: push    edx
0x8D52B3: push    ecx
0x8D52B4: call    sub_8E77C0
0x8D52B9: mov     eax, [edi+4]
0x8D52BC: add     esp, 8
0x8D52BF: inc     esi
0x8D52C0: cmp     esi, eax
0x8D52C2: jl      short loc_8D52A3
0x8D52C4: mov     eax, [esp+6ACh+var_410]
0x8D52CB: test    eax, eax
0x8D52CD: mov     dword ptr [edi+4], 0
0x8D52D4: js      short loc_8D52F4
0x8D52D6: mov     edx, [esp+6ACh+var_418]
0x8D52DD: mov     ecx, [ebx+19Ch]
0x8D52E3: and     eax, 3FFFFFFFh
0x8D52E8: push    14h
0x8D52EA: shl     eax, 2
0x8D52ED: push    eax
0x8D52EE: push    edx
0x8D52EF: call    sub_8A75D0
0x8D52F4: mov     eax, [esp+6ACh+var_628]
0x8D52FB: test    eax, eax
0x8D52FD: js      short loc_8D531D
0x8D52FF: mov     ecx, [ebx+19Ch]
0x8D5305: and     eax, 3FFFFFFFh
0x8D530A: push    14h
0x8D530C: shl     eax, 2
0x8D530F: push    eax
0x8D5310: mov     eax, [esp+6B4h+var_630]
0x8D5317: push    eax
0x8D5318: call    sub_8A75D0
0x8D531D: mov     eax, [esp+6ACh+var_51C]
0x8D5324: test    eax, eax
0x8D5326: js      short loc_8D5346
0x8D5328: mov     ecx, [esp+6ACh+var_524]
0x8D532F: and     eax, 3FFFFFFFh
0x8D5334: push    14h
0x8D5336: shl     eax, 2
0x8D5339: push    eax
0x8D533A: push    ecx
0x8D533B: mov     ecx, [ebx+19Ch]
0x8D5341: call    sub_8A75D0
0x8D5346: mov     eax, [esp+6ACh+var_304]
0x8D534D: test    eax, eax
0x8D534F: js      short loc_8D5372
0x8D5351: mov     ecx, [ebx+19Ch]
0x8D5357: and     eax, 3FFFFFFFh
0x8D535C: lea     edx, [eax+eax*2]
0x8D535F: mov     eax, [esp+6ACh+var_30C]
0x8D5366: push    14h
0x8D5368: shl     edx, 2
0x8D536B: push    edx
0x8D536C: push    eax
0x8D536D: call    sub_8A75D0
0x8D5372: mov     ecx, [ebx+19Ch]
0x8D5378: mov     eax, [esp+6ACh+var_68C]
0x8D537C: cmp     eax, [ecx+28h]
0x8D537F: mov     [ecx+20h], eax
0x8D5382: jnz     short loc_8D538A
0x8D5384: mov     edx, [ecx]
0x8D5386: push    eax
0x8D5387: call    dword ptr [edx+10h]
0x8D538A: mov     eax, [esp+6ACh+var_690]
0x8D538E: test    eax, eax
0x8D5390: js      loc_8D595D
0x8D5396: mov     ecx, [ebx+19Ch]
0x8D539C: jmp     loc_8D5948
0x8D53A1: mov     esi, [esp+6ACh+arg_18]
0x8D53A8: mov     ecx, large fs:2Ch
0x8D53AF: mov     edx, ds:0BA9DE4h
0x8D53B5: mov     eax, [ecx+edx*4]
0x8D53B8: mov     ecx, [eax+1A4h]
0x8D53BE: mov     edx, [eax+1A8h]
0x8D53C4: xor     bl, bl
0x8D53C6: cmp     ecx, edx
0x8D53C8: jnb     short loc_8D53F4
0x8D53CA: mov     edx, [esp+6ACh+var_69C]
0x8D53CE: mov     ecx, [edx+1A4h]
0x8D53D4: mov     dword ptr [ecx], offset aStsolver; "StSolver"
0x8D53DA: rdtsc
0x8D53DC: mov     [esp+6ACh+var_678], eax
0x8D53E0: mov     eax, [esp+6ACh+var_678]
0x8D53E4: mov     edx, [esp+6ACh+var_69C]
0x8D53E8: mov     [ecx+4], eax
0x8D53EB: add     ecx, 0Ch
0x8D53EE: mov     [edx+1A4h], ecx
0x8D53F4: mov     eax, [ebp+24h]
0x8D53F7: cmp     eax, [ebp+2Ch]
0x8D53FA: jz      short loc_8D5411
0x8D53FC: mov     ecx, [ebp+1Ch]
0x8D53FF: mov     edx, [ebp+0Ch]
0x8D5402: push    ecx
0x8D5403: push    edx
0x8D5404: push    eax
0x8D5405: mov     eax, [ebp+4]
0x8D5408: push    eax
0x8D5409: call    sub_9202A0
0x8D540E: add     esp, 10h
0x8D5411: mov     eax, [ebp+34h]
0x8D5414: cmp     eax, [ebp+3Ch]
0x8D5417: jz      short loc_8D542E
0x8D5419: mov     ecx, [ebp+1Ch]
0x8D541C: mov     edx, [ebp+0Ch]
0x8D541F: push    ecx
0x8D5420: push    edx
0x8D5421: push    eax
0x8D5422: mov     eax, [ebp+4]
0x8D5425: push    eax
0x8D5426: call    sub_9202A0
0x8D542B: add     esp, 10h
0x8D542E: mov     eax, [esp+6ACh+var_67C]
0x8D5432: dec     eax
0x8D5433: test    eax, eax
0x8D5435: mov     [esp+6ACh+var_67C], eax
0x8D5439: jg      loc_8D4E20
0x8D543F: mov     ecx, ds:0BA9DE4h
0x8D5445: mov     edx, large fs:2Ch
0x8D544C: mov     eax, [edx+ecx*4]
0x8D544F: mov     ecx, [eax+1A4h]
0x8D5455: cmp     ecx, [eax+1A8h]
0x8D545B: jnb     short loc_8D5483
0x8D545D: mov     esi, [esp+6ACh+var_69C]
0x8D5461: mov     ecx, [esi+1A4h]
0x8D5467: mov     dword ptr [ecx], offset aStforcedconstr; "StForcedConstr"
0x8D546D: rdtsc
0x8D546F: mov     [esp+6ACh+var_678], eax
0x8D5473: mov     edx, [esp+6ACh+var_678]
0x8D5477: mov     [ecx+4], edx
0x8D547A: add     ecx, 0Ch
0x8D547D: mov     [esi+1A4h], ecx
0x8D5483: mov     eax, [ebp+34h]
0x8D5486: cmp     eax, [ebp+3Ch]
0x8D5489: jz      loc_8D5522
0x8D548F: lea     ecx, [esp+6ACh+var_698]
0x8D5493: push    ecx
0x8D5494: push    ebp
0x8D5495: call    sub_8D32C0
0x8D549A: mov     edx, [esp+6B4h+arg_10]
0x8D54A1: mov     eax, [edx+74h]
0x8D54A4: push    eax
0x8D54A5: lea     ecx, [esp+6B8h+var_30C]
0x8D54AC: push    ecx
0x8D54AD: lea     edx, [esp+6BCh+var_680+3]
0x8D54B1: push    ebp
0x8D54B2: push    edx
0x8D54B3: call    sub_8D4020
0x8D54B8: mov     al, [eax]
0x8D54BA: add     esp, 18h
0x8D54BD: test    al, al
0x8D54BF: jnz     short loc_8D5522
0x8D54C1: mov     ecx, [esp+6ACh+arg_0]
0x8D54C8: mov     esi, [ecx+14h]
0x8D54CB: jmp     short loc_8D54D0
0x8D54CD: align 10h
0x8D54D0: mov     edx, esi
0x8D54D2: dec     esi
0x8D54D3: test    edx, edx
0x8D54D5: jz      loc_8D55B1
0x8D54DB: mov     eax, [ebp+1Ch]
0x8D54DE: mov     ecx, [ebp+0Ch]
0x8D54E1: mov     edx, [ebp+34h]
0x8D54E4: push    eax
0x8D54E5: mov     eax, [ebp+4]
0x8D54E8: push    ecx
0x8D54E9: push    edx
0x8D54EA: push    eax
0x8D54EB: call    sub_9202A0
0x8D54F0: lea     ecx, [esp+6BCh+var_698]
0x8D54F4: push    ecx
0x8D54F5: push    ebp
0x8D54F6: call    sub_8D32C0
0x8D54FB: mov     edx, [esp+6C4h+arg_10]
0x8D5502: mov     eax, [edx+74h]
0x8D5505: push    eax
0x8D5506: lea     ecx, [esp+6C8h+var_30C]
0x8D550D: push    ecx
0x8D550E: lea     edx, [esp+6CCh+var_680+3]
0x8D5512: push    ebp
0x8D5513: push    edx
0x8D5514: call    sub_8D4020
0x8D5519: mov     al, [eax]
0x8D551B: add     esp, 28h
0x8D551E: test    al, al
0x8D5520: jz      short loc_8D54D0
0x8D5522: mov     eax, [edi+4]
0x8D5525: test    eax, eax
0x8D5527: jnz     loc_8D576B
0x8D552D: lea     edx, [esp+6ACh+var_678]
0x8D5531: lea     ecx, [esp+6ACh+var_688]
0x8D5535: push    edx
0x8D5536: mov     [esp+6B0h+var_678], ecx
0x8D553A: mov     esi, 80000001h
0x8D553F: push    0
0x8D5541: mov     ecx, edi
0x8D5543: mov     [esp+6B4h+var_674], 1
0x8D554B: mov     [esp+6B4h+var_670], esi
0x8D554F: call    sub_8E6720
0x8D5554: mov     eax, [edi]
0x8D5556: mov     ecx, [eax]
0x8D5558: movzx   edx, word ptr [ecx+8Ch]
0x8D555F: mov     ebx, [esp+6ACh+arg_18]
0x8D5566: mov     eax, [ebx]
0x8D5568: mov     byte ptr [edx+eax], 8
0x8D556C: mov     eax, [esp+6ACh+var_684]
0x8D5570: test    eax, eax
0x8D5572: jz      loc_8D5772
0x8D5578: lea     edx, [esp+6ACh+var_678]
0x8D557C: lea     ecx, [esp+6ACh+var_684]
0x8D5580: push    edx
0x8D5581: mov     [esp+6B0h+var_678], ecx
0x8D5585: push    1
0x8D5587: mov     ecx, edi
0x8D5589: mov     [esp+6B4h+var_674], 1
0x8D5591: mov     [esp+6B4h+var_670], esi
0x8D5595: call    sub_8E6720
0x8D559A: mov     eax, [edi]
0x8D559C: mov     ecx, [eax+4]
0x8D559F: movzx   edx, word ptr [ecx+8Ch]
0x8D55A6: mov     eax, [ebx]
0x8D55A8: mov     byte ptr [edx+eax], 8
0x8D55AC: jmp     loc_8D5772
0x8D55B1: test    al, al
0x8D55B3: jnz     loc_8D5522
0x8D55B9: mov     ecx, [esp+6ACh+arg_C]
0x8D55C0: mov     eax, [ecx]
0x8D55C2: call    dword ptr [eax+10h]
0x8D55C5: cmp     eax, 2
0x8D55C8: jnz     loc_8D5522
0x8D55CE: mov     esi, large fs:2Ch
0x8D55D5: mov     ebx, ds:0BA9DE4h
0x8D55DB: mov     eax, [esi+ebx*4]
0x8D55DE: mov     ecx, [eax+1A4h]
0x8D55E4: cmp     ecx, [eax+1A8h]
0x8D55EA: mov     ebp, [esp+6ACh+var_69C]
0x8D55EE: jnb     short loc_8D5612
0x8D55F0: mov     ecx, [ebp+1A4h]
0x8D55F6: mov     dword ptr [ecx], offset aStbackstep; "StBackstep"
0x8D55FC: rdtsc
0x8D55FE: mov     [esp+6ACh+var_678], eax
0x8D5602: mov     edx, [esp+6ACh+var_678]
0x8D5606: mov     [ecx+4], edx
0x8D5609: add     ecx, 0Ch
0x8D560C: mov     [ebp+1A4h], ecx
0x8D5612: mov     eax, [esp+6ACh+arg_18]
0x8D5619: mov     ecx, [esp+6ACh+var_668]
0x8D561D: mov     edx, [esp+6ACh+arg_8]
0x8D5624: push    edi; int
0x8D5625: push    eax; int
0x8D5626: mov     eax, [edx]
0x8D5628: push    ecx; int
0x8D5629: push    eax; float
0x8D562A: call    sub_8D40E0
0x8D562F: mov     eax, [esi+ebx*4]
0x8D5632: mov     ecx, [eax+1A4h]
0x8D5638: mov     edx, [eax+1A8h]
0x8D563E: add     esp, 10h
0x8D5641: cmp     ecx, edx
0x8D5643: jnb     short loc_8D5667
0x8D5645: mov     ecx, [ebp+1A4h]
0x8D564B: mov     dword ptr [ecx], offset aStinvalidtims; "StInvalidTIMs"
0x8D5651: rdtsc
0x8D5653: mov     [esp+6ACh+var_678], eax
0x8D5657: mov     edx, [esp+6ACh+var_678]
0x8D565B: mov     [ecx+4], edx
0x8D565E: add     ecx, 0Ch
0x8D5661: mov     [ebp+1A4h], ecx
0x8D5667: mov     eax, [edi+4]
0x8D566A: xor     esi, esi
0x8D566C: test    eax, eax
0x8D566E: jle     short loc_8D5691
0x8D5670: mov     eax, [esp+6ACh+arg_10]
0x8D5677: mov     ecx, [eax+74h]
0x8D567A: mov     edx, [edi]
0x8D567C: mov     eax, [edx+esi*4]
0x8D567F: push    ecx
0x8D5680: push    eax
0x8D5681: call    sub_8E77C0
0x8D5686: mov     eax, [edi+4]
0x8D5689: add     esp, 8
0x8D568C: inc     esi
0x8D568D: cmp     esi, eax
0x8D568F: jl      short loc_8D5670
0x8D5691: mov     eax, [esp+6ACh+var_410]
0x8D5698: test    eax, eax
0x8D569A: mov     dword ptr [edi+4], 0
0x8D56A1: js      short loc_8D56C1
0x8D56A3: mov     ecx, [esp+6ACh+var_418]
0x8D56AA: and     eax, 3FFFFFFFh
0x8D56AF: push    14h
0x8D56B1: shl     eax, 2
0x8D56B4: push    eax
0x8D56B5: push    ecx
0x8D56B6: mov     ecx, [ebp+19Ch]
0x8D56BC: call    sub_8A75D0
0x8D56C1: mov     eax, [esp+6ACh+var_628]
0x8D56C8: test    eax, eax
0x8D56CA: js      short loc_8D56E7
0x8D56CC: mov     edx, [esp+6ACh+var_630]
0x8D56D0: mov     ecx, [ebp+19Ch]
0x8D56D6: and     eax, 3FFFFFFFh
0x8D56DB: push    14h
0x8D56DD: shl     eax, 2
0x8D56E0: push    eax
0x8D56E1: push    edx
0x8D56E2: call    sub_8A75D0
0x8D56E7: mov     eax, [esp+6ACh+var_51C]
0x8D56EE: test    eax, eax
0x8D56F0: js      short loc_8D5710
0x8D56F2: mov     ecx, [ebp+19Ch]
0x8D56F8: and     eax, 3FFFFFFFh
0x8D56FD: push    14h
0x8D56FF: shl     eax, 2
0x8D5702: push    eax
0x8D5703: mov     eax, [esp+6B4h+var_524]
0x8D570A: push    eax
0x8D570B: call    sub_8A75D0
0x8D5710: mov     eax, [esp+6ACh+var_304]
0x8D5717: test    eax, eax
0x8D5719: js      short loc_8D573C
0x8D571B: mov     edx, [esp+6ACh+var_30C]
0x8D5722: and     eax, 3FFFFFFFh
0x8D5727: lea     ecx, [eax+eax*2]
0x8D572A: push    14h
0x8D572C: shl     ecx, 2
0x8D572F: push    ecx
0x8D5730: mov     ecx, [ebp+19Ch]
0x8D5736: push    edx
0x8D5737: call    sub_8A75D0
0x8D573C: mov     ecx, [ebp+19Ch]
0x8D5742: mov     eax, [esp+6ACh+var_68C]
0x8D5746: cmp     eax, [ecx+28h]
0x8D5749: mov     [ecx+20h], eax
0x8D574C: jnz     short loc_8D5754
0x8D574E: mov     edx, [ecx]
0x8D5750: push    eax
0x8D5751: call    dword ptr [edx+10h]
0x8D5754: mov     eax, [esp+6ACh+var_690]
0x8D5758: test    eax, eax
0x8D575A: js      loc_8D595D
0x8D5760: mov     ecx, [ebp+19Ch]
0x8D5766: jmp     loc_8D5948
0x8D576B: mov     ebx, [esp+6ACh+arg_18]
0x8D5772: mov     ecx, large fs:2Ch
0x8D5779: mov     edx, ds:0BA9DE4h
0x8D577F: mov     eax, [ecx+edx*4]
0x8D5782: mov     ecx, [eax+1A4h]
0x8D5788: cmp     ecx, [eax+1A8h]
0x8D578E: jnb     short loc_8D57B6
0x8D5790: mov     esi, [esp+6ACh+var_69C]
0x8D5794: mov     ecx, [esi+1A4h]
0x8D579A: mov     dword ptr [ecx], offset aStintegmotions; "StIntegMotions"
0x8D57A0: rdtsc
0x8D57A2: mov     [esp+6ACh+var_678], eax
0x8D57A6: mov     edx, [esp+6ACh+var_678]
0x8D57AA: mov     [ecx+4], edx
0x8D57AD: add     ecx, 0Ch
0x8D57B0: mov     [esi+1A4h], ecx
0x8D57B6: mov     eax, [edi+4]
0x8D57B9: xor     esi, esi
0x8D57BB: test    eax, eax
0x8D57BD: jle     short loc_8D57E6
0x8D57BF: nop
0x8D57C0: mov     eax, [edi]
0x8D57C2: mov     ecx, [eax+esi*4]
0x8D57C5: mov     edx, [ecx+50h]
0x8D57C8: mov     eax, [esp+6ACh+arg_8]
0x8D57CF: mov     ecx, [eax]
0x8D57D1: add     edx, 10h
0x8D57D4: push    edx; int
0x8D57D5: push    ecx; float
0x8D57D6: call    sub_8DD530
0x8D57DB: mov     eax, [edi+4]
0x8D57DE: add     esp, 8
0x8D57E1: inc     esi
0x8D57E2: cmp     esi, eax
0x8D57E4: jl      short loc_8D57C0
0x8D57E6: mov     edx, [ebp+0Ch]
0x8D57E9: mov     eax, [edi+4]
0x8D57EC: mov     ecx, [edi]
0x8D57EE: push    edx
0x8D57EF: mov     edx, [ebp+0]
0x8D57F2: push    eax
0x8D57F3: push    ecx
0x8D57F4: push    edx
0x8D57F5: call    sub_923C80
0x8D57FA: mov     eax, [esp+6BCh+var_668]
0x8D57FE: push    ebx
0x8D57FF: push    eax
0x8D5800: call    sub_8D41A0
0x8D5805: mov     ecx, large fs:2Ch
0x8D580C: mov     edx, ds:0BA9DE4h
0x8D5812: mov     eax, [ecx+edx*4]
0x8D5815: mov     ecx, [eax+1A4h]
0x8D581B: mov     edx, [eax+1A8h]
0x8D5821: add     esp, 18h
0x8D5824: cmp     ecx, edx
0x8D5826: jnb     short loc_8D584E
0x8D5828: mov     esi, [esp+6ACh+var_69C]
0x8D582C: mov     ecx, [esi+1A4h]
0x8D5832: mov     dword ptr [ecx], offset aStinvalidtims; "StInvalidTIMs"
0x8D5838: rdtsc
0x8D583A: mov     [esp+6ACh+var_678], eax
0x8D583E: mov     edx, [esp+6ACh+var_678]
0x8D5842: mov     [ecx+4], edx
0x8D5845: add     ecx, 0Ch
0x8D5848: mov     [esi+1A4h], ecx
0x8D584E: mov     eax, [edi+4]
0x8D5851: xor     esi, esi
0x8D5853: test    eax, eax
0x8D5855: jle     short loc_8D587A
0x8D5857: mov     ebx, [esp+6ACh+arg_10]
0x8D585E: mov     edi, edi
0x8D5860: mov     eax, [ebx+74h]
0x8D5863: mov     ecx, [edi]
0x8D5865: mov     edx, [ecx+esi*4]
0x8D5868: push    eax
0x8D5869: push    edx
0x8D586A: call    sub_8E77C0
0x8D586F: mov     eax, [edi+4]
0x8D5872: add     esp, 8
0x8D5875: inc     esi
0x8D5876: cmp     esi, eax
0x8D5878: jl      short loc_8D5860
0x8D587A: mov     eax, [esp+6ACh+var_410]
0x8D5881: test    eax, eax
0x8D5883: mov     esi, [esp+6ACh+var_69C]
0x8D5887: js      short loc_8D58A7
0x8D5889: mov     ecx, [esi+19Ch]
0x8D588F: and     eax, 3FFFFFFFh
0x8D5894: push    14h
0x8D5896: shl     eax, 2
0x8D5899: push    eax
0x8D589A: mov     eax, [esp+6B4h+var_418]
0x8D58A1: push    eax
0x8D58A2: call    sub_8A75D0
0x8D58A7: mov     eax, [esp+6ACh+var_628]
0x8D58AE: test    eax, eax
0x8D58B0: js      short loc_8D58CD
0x8D58B2: mov     ecx, [esp+6ACh+var_630]
0x8D58B6: and     eax, 3FFFFFFFh
0x8D58BB: push    14h
0x8D58BD: shl     eax, 2
0x8D58C0: push    eax
0x8D58C1: push    ecx
0x8D58C2: mov     ecx, [esi+19Ch]
0x8D58C8: call    sub_8A75D0
0x8D58CD: mov     eax, [esp+6ACh+var_51C]
0x8D58D4: test    eax, eax
0x8D58D6: js      short loc_8D58F6
0x8D58D8: mov     edx, [esp+6ACh+var_524]
0x8D58DF: mov     ecx, [esi+19Ch]
0x8D58E5: and     eax, 3FFFFFFFh
0x8D58EA: push    14h
0x8D58EC: shl     eax, 2
0x8D58EF: push    eax
0x8D58F0: push    edx
0x8D58F1: call    sub_8A75D0
0x8D58F6: mov     eax, [esp+6ACh+var_304]
0x8D58FD: test    eax, eax
0x8D58FF: js      short loc_8D5922
0x8D5901: mov     ecx, [esp+6ACh+var_30C]
0x8D5908: and     eax, 3FFFFFFFh
0x8D590D: lea     eax, [eax+eax*2]
0x8D5910: push    14h
0x8D5912: shl     eax, 2
0x8D5915: push    eax
0x8D5916: push    ecx
0x8D5917: mov     ecx, [esi+19Ch]
0x8D591D: call    sub_8A75D0
0x8D5922: mov     ecx, [esi+19Ch]
0x8D5928: mov     eax, [esp+6ACh+var_68C]
0x8D592C: cmp     eax, [ecx+28h]
0x8D592F: mov     [ecx+20h], eax
0x8D5932: jnz     short loc_8D593A
0x8D5934: mov     edx, [ecx]
0x8D5936: push    eax
0x8D5937: call    dword ptr [edx+10h]
0x8D593A: mov     eax, [esp+6ACh+var_690]
0x8D593E: test    eax, eax
0x8D5940: js      short loc_8D595D
0x8D5942: mov     ecx, [esi+19Ch]
0x8D5948: and     eax, 3FFFFFFFh
0x8D594D: shl     eax, 2
0x8D5950: push    14h
0x8D5952: push    eax
0x8D5953: mov     eax, [esp+6B4h+var_698]
0x8D5957: push    eax
0x8D5958: call    sub_8A75D0
0x8D595D: pop     edi
0x8D595E: pop     esi
0x8D595F: pop     ebp
0x8D5960: pop     ebx
0x8D5961: add     esp, 69Ch
0x8D5967: retn
