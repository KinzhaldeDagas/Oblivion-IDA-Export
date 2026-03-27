0x6B3AE0: sub     esp, 0B8h
0x6B3AE6: push    ebx
0x6B3AE7: mov     ebx, ecx
0x6B3AE9: mov     eax, [ebx]
0x6B3AEB: cmp     byte ptr [eax+18h], 0
0x6B3AEF: jnz     short loc_6B3AFB
0x6B3AF1: xor     eax, eax
0x6B3AF3: pop     ebx
0x6B3AF4: add     esp, 0B8h
0x6B3AFA: retn
0x6B3AFB: mov     ecx, [ebx+0Ch]
0x6B3AFE: mov     edx, [ecx+4]
0x6B3B01: mov     eax, [eax+4]
0x6B3B04: push    ebp
0x6B3B05: mov     ebp, [eax+10h]
0x6B3B08: push    esi
0x6B3B09: push    900h
0x6B3B0E: push    0
0x6B3B10: push    edx
0x6B3B11: call    __memset
0x6B3B16: add     esp, 0Ch
0x6B3B19: test    ebp, ebp
0x6B3B1B: jle     short loc_6B3B37
0x6B3B1D: mov     esi, ebp
0x6B3B1F: nop
0x6B3B20: mov     ecx, [ebx]
0x6B3B22: push    8
0x6B3B24: call    sub_6B3240
0x6B3B29: mov     ecx, [ebx+4]
0x6B3B2C: push    eax
0x6B3B2D: call    sub_6AF790
0x6B3B32: sub     esi, 1
0x6B3B35: jnz     short loc_6B3B20
0x6B3B37: mov     ecx, [ebx+4]
0x6B3B3A: mov     eax, [ecx+4]
0x6B3B3D: push    edi
0x6B3B3E: mov     edi, eax
0x6B3B40: shr     edi, 3
0x6B3B43: and     eax, 7
0x6B3B46: jz      short loc_6B3B58
0x6B3B48: mov     edx, 8
0x6B3B4D: sub     edx, eax
0x6B3B4F: push    edx
0x6B3B50: call    sub_6AF6F0
0x6B3B55: add     edi, 1
0x6B3B58: mov     eax, [ebx+4124h]
0x6B3B5E: mov     ecx, [ebx]
0x6B3B60: mov     edx, [ecx+4]
0x6B3B63: mov     esi, eax
0x6B3B65: sub     esi, [edx+14h]
0x6B3B68: lea     eax, [eax+ebp]
0x6B3B6B: sub     esi, edi
0x6B3B6D: mov     [ebx+4124h], eax
0x6B3B73: js      loc_6B44D7
0x6B3B79: cmp     edi, 1000h
0x6B3B7F: jle     short loc_6B3B99
0x6B3B81: mov     ecx, [ebx+4]
0x6B3B84: add     eax, 0FFFFF000h
0x6B3B89: push    1000h
0x6B3B8E: mov     [ebx+4124h], eax
0x6B3B94: call    sub_6AF7E0
0x6B3B99: test    esi, esi
0x6B3B9B: jle     short loc_6B3BB1
0x6B3B9D: lea     ecx, [ecx+0]
0x6B3BA0: mov     ecx, [ebx+4]
0x6B3BA3: push    8
0x6B3BA5: call    sub_6AF6F0
0x6B3BAA: sub     esi, 1
0x6B3BAD: test    esi, esi
0x6B3BAF: jg      short loc_6B3BA0
0x6B3BB1: xor     edi, edi
0x6B3BB3: cmp     [ebx+4120h], edi
0x6B3BB9: mov     [esp+0C8h+var_A4], edi
0x6B3BBD: jle     loc_6B44B5
0x6B3BC3: lea     esi, [ebx+122Ch]
0x6B3BC9: mov     [esp+0C8h+var_A0], edi
0x6B3BCD: jmp     short loc_6B3BD4
0x6B3BCF: align 10h
0x6B3BD0: mov     edi, [esp+0C8h+var_A4]
0x6B3BD4: mov     eax, [ebx]
0x6B3BD6: mov     ecx, [eax+4]
0x6B3BD9: mov     edx, [esp+0C8h+var_A0]
0x6B3BDD: mov     eax, [ebx+4]
0x6B3BE0: lea     ebp, [ecx+edx+2Ch]
0x6B3BE4: mov     ecx, [eax+4]
0x6B3BE7: mov     [ebx+4128h], ecx
0x6B3BED: push    edi
0x6B3BEE: mov     ecx, ebx
0x6B3BF0: mov     [esp+0CCh+var_AC], ebp
0x6B3BF4: call    sub_6B2A30
0x6B3BF9: push    edi
0x6B3BFA: mov     ecx, ebx
0x6B3BFC: call    sub_6B3560
0x6B3C01: push    edi
0x6B3C02: lea     eax, [ebx+92Ch]
0x6B3C08: push    eax
0x6B3C09: mov     ecx, ebx
0x6B3C0B: call    sub_6B2F30
0x6B3C10: mov     eax, esi
0x6B3C12: mov     edx, 20h ; ' '
0x6B3C17: jmp     short loc_6B3C20
0x6B3C19: align 10h
0x6B3C20: mov     ecx, 6
0x6B3C25: jmp     short loc_6B3C30
0x6B3C27: align 10h
0x6B3C30: fld     dword ptr [eax-900h]
0x6B3C36: add     eax, 0Ch
0x6B3C39: sub     ecx, 1
0x6B3C3C: fstp    dword ptr [eax-0Ch]
0x6B3C3F: fld     dword ptr [eax-908h]
0x6B3C45: fstp    dword ptr [eax-8]
0x6B3C48: fld     dword ptr [eax-904h]
0x6B3C4E: fstp    dword ptr [eax-4]
0x6B3C51: jnz     short loc_6B3C30
0x6B3C53: sub     edx, 1
0x6B3C56: jnz     short loc_6B3C20
0x6B3C58: cmp     dword ptr [ebp+10h], 0
0x6B3C5C: jz      loc_6B3F96
0x6B3C62: cmp     dword ptr [ebp+14h], 2
0x6B3C66: jnz     loc_6B3F96
0x6B3C6C: xor     eax, eax
0x6B3C6E: lea     edi, [ebx+1B2Ch]
0x6B3C74: mov     ecx, 240h
0x6B3C79: rep stosd
0x6B3C7B: cmp     [ebp+18h], eax
0x6B3C7E: jz      loc_6B3E87
0x6B3C84: lea     ecx, [esi+8]
0x6B3C87: lea     eax, [ebx+1B30h]
0x6B3C8D: mov     edx, 4
0x6B3C92: fld     dword ptr [ecx-8]
0x6B3C95: add     eax, 24h ; '$'
0x6B3C98: fstp    dword ptr [eax-28h]
0x6B3C9B: add     ecx, 24h ; '$'
0x6B3C9E: sub     edx, 1
0x6B3CA1: fld     dword ptr [ecx-28h]
0x6B3CA4: fstp    dword ptr [eax-24h]
0x6B3CA7: fld     dword ptr [ecx-24h]
0x6B3CAA: fstp    dword ptr [eax-20h]
0x6B3CAD: fld     dword ptr [ecx-20h]
0x6B3CB0: fstp    dword ptr [eax-1Ch]
0x6B3CB3: fld     dword ptr [ecx-1Ch]
0x6B3CB6: fstp    dword ptr [eax-18h]
0x6B3CB9: fld     dword ptr [ecx-18h]
0x6B3CBC: fstp    dword ptr [eax-14h]
0x6B3CBF: fld     dword ptr [ecx-14h]
0x6B3CC2: fstp    dword ptr [eax-10h]
0x6B3CC5: fld     dword ptr [ecx-10h]
0x6B3CC8: fstp    dword ptr [eax-0Ch]
0x6B3CCB: fld     dword ptr [ecx-0Ch]
0x6B3CCE: fstp    dword ptr [eax-8]
0x6B3CD1: jnz     short loc_6B3C92
0x6B3CD3: mov     eax, [ebx+4138h]
0x6B3CD9: imul    eax, 94h ; '”'
0x6B3CDF: mov     ecx, ds:dword_B17FC0[eax]
0x6B3CE5: mov     eax, ds:dword_B17FC4[eax]
0x6B3CEB: sub     eax, ecx
0x6B3CED: mov     [esp+0C8h+var_94], 3
0x6B3CF5: mov     [esp+0C8h+var_B8], eax
0x6B3CF9: lea     esp, [esp+0]
0x6B3D00: xor     eax, eax
0x6B3D02: cmp     [esp+0C8h+var_B8], 4
0x6B3D07: lea     edx, [ecx+ecx*2]
0x6B3D0A: mov     [esp+0C8h+var_A8], edx
0x6B3D0E: mov     [esp+0C8h+var_B4], eax
0x6B3D12: mov     [esp+0C8h+var_98], eax
0x6B3D16: jl      loc_6B3DF0
0x6B3D1C: mov     ecx, [esp+0C8h+var_B8]
0x6B3D20: mov     eax, [esp+0C8h+var_A8]
0x6B3D24: lea     edi, [ecx-3]
0x6B3D27: add     edi, 0FFFFFFFFh
0x6B3D2A: shr     edi, 2
0x6B3D2D: lea     edx, ds:0[ecx*4]
0x6B3D34: lea     ecx, [eax+ecx+1]
0x6B3D38: add     edi, 1
0x6B3D3B: lea     edi, [edi+edi*2]
0x6B3D3E: mov     [esp+0C8h+var_9C], ecx
0x6B3D42: lea     ecx, ds:4[eax*4]
0x6B3D49: mov     ebp, esi
0x6B3D4B: add     edi, edi
0x6B3D4D: neg     ebp
0x6B3D4F: mov     [esp+0C8h+var_B0], ecx
0x6B3D53: add     edi, edi
0x6B3D55: lea     ecx, [esi+eax*4+4]
0x6B3D59: lea     eax, [ebx+eax*4+1B34h]
0x6B3D60: mov     [esp+0C8h+var_98], edi
0x6B3D64: fld     dword ptr [ecx-4]
0x6B3D67: lea     edi, [ecx+ebp-4]
0x6B3D6B: fstp    dword ptr [eax-8]
0x6B3D6E: add     edi, edx
0x6B3D70: fld     dword ptr [edi+esi]
0x6B3D73: add     edi, edx
0x6B3D75: fstp    dword ptr [eax-4]
0x6B3D78: add     [esp+0C8h+var_B4], 4
0x6B3D7D: fld     dword ptr [esi+edi]
0x6B3D80: mov     edi, [esp+0C8h+var_B0]
0x6B3D84: fstp    dword ptr [eax]
0x6B3D86: add     edi, edx
0x6B3D88: fld     dword ptr [ecx]
0x6B3D8A: add     [esp+0C8h+var_B0], 10h
0x6B3D8F: fstp    dword ptr [eax+4]
0x6B3D92: add     [esp+0C8h+var_9C], 4
0x6B3D97: fld     dword ptr [edi+esi]
0x6B3D9A: add     edi, edx
0x6B3D9C: fstp    dword ptr [eax+8]
0x6B3D9F: add     eax, 30h ; '0'
0x6B3DA2: fld     dword ptr [esi+edi]
0x6B3DA5: lea     edi, [ecx+ebp+4]
0x6B3DA9: fstp    dword ptr [eax-24h]
0x6B3DAC: add     edi, edx
0x6B3DAE: fld     dword ptr [ecx+4]
0x6B3DB1: fstp    dword ptr [eax-20h]
0x6B3DB4: fld     dword ptr [edi+esi]
0x6B3DB7: add     edi, edx
0x6B3DB9: fstp    dword ptr [eax-1Ch]
0x6B3DBC: fld     dword ptr [esi+edi]
0x6B3DBF: lea     edi, [ecx+ebp+8]
0x6B3DC3: fstp    dword ptr [eax-18h]
0x6B3DC6: add     edi, edx
0x6B3DC8: fld     dword ptr [ecx+8]
0x6B3DCB: add     ecx, 10h
0x6B3DCE: fstp    dword ptr [eax-14h]
0x6B3DD1: fld     dword ptr [edi+esi]
0x6B3DD4: add     edi, edx
0x6B3DD6: fstp    dword ptr [eax-10h]
0x6B3DD9: fld     dword ptr [esi+edi]
0x6B3DDC: mov     edi, [esp+0C8h+var_B8]
0x6B3DE0: fstp    dword ptr [eax-0Ch]
0x6B3DE3: add     edi, 0FFFFFFFDh
0x6B3DE6: cmp     [esp+0C8h+var_B4], edi
0x6B3DEA: jb      loc_6B3D64
0x6B3DF0: mov     edi, [esp+0C8h+var_B8]
0x6B3DF4: mov     eax, [esp+0C8h+var_B4]
0x6B3DF8: cmp     eax, edi
0x6B3DFA: jnb     short loc_6B3E48
0x6B3DFC: mov     edx, [esp+0C8h+var_A8]
0x6B3E00: add     eax, edx
0x6B3E02: mov     [esp+0C8h+var_A8], eax
0x6B3E06: lea     ecx, ds:0[eax*4]
0x6B3E0D: mov     eax, [esp+0C8h+var_98]
0x6B3E11: add     eax, edx
0x6B3E13: mov     ebp, edi
0x6B3E15: sub     ebp, [esp+0C8h+var_B4]
0x6B3E19: lea     eax, [ebx+eax*4+1B34h]
0x6B3E20: fld     dword ptr [ecx+esi]
0x6B3E23: add     [esp+0C8h+var_A8], 1
0x6B3E28: fstp    dword ptr [eax-8]
0x6B3E2B: lea     edx, [ecx+edi*4]
0x6B3E2E: fld     dword ptr [edx+esi]
0x6B3E31: lea     edx, [edx+edi*4]
0x6B3E34: fstp    dword ptr [eax-4]
0x6B3E37: add     eax, 0Ch
0x6B3E3A: fld     dword ptr [edx+esi]
0x6B3E3D: add     ecx, 4
0x6B3E40: sub     ebp, 1
0x6B3E43: fstp    dword ptr [eax-0Ch]
0x6B3E46: jnz     short loc_6B3E20
0x6B3E48: mov     eax, [ebx+4138h]
0x6B3E4E: mov     edx, [esp+0C8h+var_94]
0x6B3E52: imul    eax, 25h ; '%'
0x6B3E55: add     edx, 1
0x6B3E58: add     eax, edx
0x6B3E5A: add     eax, eax
0x6B3E5C: mov     ecx, ds:dword_B17FB4[eax+eax]
0x6B3E63: add     eax, eax
0x6B3E65: mov     eax, ds:dword_B17FB8[eax]
0x6B3E6B: sub     eax, ecx
0x6B3E6D: cmp     edx, 0Dh
0x6B3E70: mov     [esp+0C8h+var_94], edx
0x6B3E74: mov     [esp+0C8h+var_B8], eax
0x6B3E78: jl      loc_6B3D00
0x6B3E7E: mov     ebp, [esp+0C8h+var_AC]
0x6B3E82: jmp     loc_6B3FE5
0x6B3E87: xor     eax, eax
0x6B3E89: lea     ecx, [ebx+1B30h]
0x6B3E8F: nop
0x6B3E90: mov     edx, [ebx+4138h]
0x6B3E96: lea     edx, [edx+edx*8]
0x6B3E99: shl     edx, 6
0x6B3E9C: add     edx, eax
0x6B3E9E: mov     edx, ds:0B18650h[edx*4]
0x6B3EA5: fld     dword ptr [esi+edx*4]
0x6B3EA8: add     ecx, 24h ; '$'
0x6B3EAB: fstp    dword ptr [ecx-28h]
0x6B3EAE: mov     edx, [ebx+4138h]
0x6B3EB4: lea     edx, [edx+edx*8]
0x6B3EB7: shl     edx, 6
0x6B3EBA: add     edx, eax
0x6B3EBC: mov     edx, ds:0B18654h[edx*4]
0x6B3EC3: fld     dword ptr [esi+edx*4]
0x6B3EC6: fstp    dword ptr [ecx-24h]
0x6B3EC9: mov     edx, [ebx+4138h]
0x6B3ECF: lea     edx, [edx+edx*8]
0x6B3ED2: shl     edx, 6
0x6B3ED5: add     edx, eax
0x6B3ED7: mov     edx, ds:0B18658h[edx*4]
0x6B3EDE: fld     dword ptr [esi+edx*4]
0x6B3EE1: fstp    dword ptr [ecx-20h]
0x6B3EE4: mov     edx, [ebx+4138h]
0x6B3EEA: lea     edx, [edx+edx*8]
0x6B3EED: shl     edx, 6
0x6B3EF0: add     edx, eax
0x6B3EF2: mov     edx, ds:0B1865Ch[edx*4]
0x6B3EF9: fld     dword ptr [esi+edx*4]
0x6B3EFC: fstp    dword ptr [ecx-1Ch]
0x6B3EFF: mov     edx, [ebx+4138h]
0x6B3F05: lea     edx, [edx+edx*8]
0x6B3F08: shl     edx, 6
0x6B3F0B: add     edx, eax
0x6B3F0D: mov     edx, ds:0B18660h[edx*4]
0x6B3F14: fld     dword ptr [esi+edx*4]
0x6B3F17: fstp    dword ptr [ecx-18h]
0x6B3F1A: mov     edx, [ebx+4138h]
0x6B3F20: lea     edx, [edx+edx*8]
0x6B3F23: shl     edx, 6
0x6B3F26: add     edx, eax
0x6B3F28: mov     edx, ds:0B18664h[edx*4]
0x6B3F2F: fld     dword ptr [esi+edx*4]
0x6B3F32: fstp    dword ptr [ecx-14h]
0x6B3F35: mov     edx, [ebx+4138h]
0x6B3F3B: lea     edx, [edx+edx*8]
0x6B3F3E: shl     edx, 6
0x6B3F41: add     edx, eax
0x6B3F43: mov     edx, ds:0B18668h[edx*4]
0x6B3F4A: fld     dword ptr [esi+edx*4]
0x6B3F4D: fstp    dword ptr [ecx-10h]
0x6B3F50: mov     edx, [ebx+4138h]
0x6B3F56: lea     edx, [edx+edx*8]
0x6B3F59: shl     edx, 6
0x6B3F5C: add     edx, eax
0x6B3F5E: mov     edx, ds:0B1866Ch[edx*4]
0x6B3F65: fld     dword ptr [esi+edx*4]
0x6B3F68: fstp    dword ptr [ecx-0Ch]
0x6B3F6B: mov     edx, [ebx+4138h]
0x6B3F71: lea     edx, [edx+edx*8]
0x6B3F74: shl     edx, 6
0x6B3F77: add     edx, eax
0x6B3F79: mov     edx, ds:0B18670h[edx*4]
0x6B3F80: fld     dword ptr [esi+edx*4]
0x6B3F83: add     eax, 9
0x6B3F86: cmp     eax, 240h
0x6B3F8B: fstp    dword ptr [ecx-8]
0x6B3F8E: jl      loc_6B3E90
0x6B3F94: jmp     short loc_6B3FE5
0x6B3F96: lea     ecx, [esi+8]
0x6B3F99: lea     eax, [ebx+1B30h]
0x6B3F9F: mov     edx, 40h ; '@'
0x6B3FA4: fld     dword ptr [ecx-8]
0x6B3FA7: add     eax, 24h ; '$'
0x6B3FAA: fstp    dword ptr [eax-28h]
0x6B3FAD: add     ecx, 24h ; '$'
0x6B3FB0: sub     edx, 1
0x6B3FB3: fld     dword ptr [ecx-28h]
0x6B3FB6: fstp    dword ptr [eax-24h]
0x6B3FB9: fld     dword ptr [ecx-24h]
0x6B3FBC: fstp    dword ptr [eax-20h]
0x6B3FBF: fld     dword ptr [ecx-20h]
0x6B3FC2: fstp    dword ptr [eax-1Ch]
0x6B3FC5: fld     dword ptr [ecx-1Ch]
0x6B3FC8: fstp    dword ptr [eax-18h]
0x6B3FCB: fld     dword ptr [ecx-18h]
0x6B3FCE: fstp    dword ptr [eax-14h]
0x6B3FD1: fld     dword ptr [ecx-14h]
0x6B3FD4: fstp    dword ptr [eax-10h]
0x6B3FD7: fld     dword ptr [ecx-10h]
0x6B3FDA: fstp    dword ptr [eax-0Ch]
0x6B3FDD: fld     dword ptr [ecx-0Ch]
0x6B3FE0: fstp    dword ptr [eax-8]
0x6B3FE3: jnz     short loc_6B3FA4
0x6B3FE5: mov     eax, [ebp+10h]
0x6B3FE8: test    eax, eax
0x6B3FEA: jnz     short loc_6B3FFF
0x6B3FEC: cmp     [ebp+18h], eax
0x6B3FEF: jnz     short loc_6B3FFB
0x6B3FF1: cmp     dword ptr [ebp+14h], 2
0x6B3FF5: jz      loc_6B44D7
0x6B3FFB: test    eax, eax
0x6B3FFD: jz      short loc_6B4010
0x6B3FFF: cmp     dword ptr [ebp+18h], 0
0x6B4003: jz      short loc_6B4010
0x6B4005: cmp     dword ptr [ebp+14h], 2
0x6B4009: mov     eax, 12h
0x6B400E: jz      short loc_6B4015
0x6B4010: mov     eax, 22Eh
0x6B4015: lea     edx, [eax-1]
0x6B4018: mov     eax, 38E38E39h
0x6B401D: mul     edx
0x6B401F: shr     edx, 2
0x6B4022: lea     ecx, [ebx+1B74h]
0x6B4028: add     edx, 1
0x6B402B: jmp     short loc_6B4030
0x6B402D: align 10h
0x6B4030: fld     dword ptr [ecx-4]
0x6B4033: fstp    [esp+0C8h+var_B8]
0x6B4037: fld     dword ptr [ecx]
0x6B4039: fstp    [esp+0C8h+var_B4]
0x6B403D: fld     [esp+0C8h+var_B8]
0x6B4041: fld     [esp+0C8h+var_B4]
0x6B4045: fld     dword ptr ds:0B18610h
0x6B404B: fmul    st, st(2)
0x6B404D: fld     dword ptr ds:0B18630h
0x6B4053: fmul    st, st(2)
0x6B4055: fsubp   st(1), st
0x6B4057: fstp    dword ptr [ecx-4]
0x6B405A: fmul    dword ptr ds:0B18610h
0x6B4060: fld     dword ptr ds:0B18630h
0x6B4066: fmulp   st(2), st
0x6B4068: faddp   st(1), st
0x6B406A: fstp    dword ptr [ecx]
0x6B406C: fld     dword ptr [ecx-8]
0x6B406F: fstp    [esp+0C8h+var_B8]
0x6B4073: fld     dword ptr [ecx+4]
0x6B4076: fstp    [esp+0C8h+var_B4]
0x6B407A: fld     [esp+0C8h+var_B8]
0x6B407E: fld     [esp+0C8h+var_B4]
0x6B4082: fld     dword ptr ds:0B18614h
0x6B4088: fmul    st, st(2)
0x6B408A: fld     dword ptr ds:0B18634h
0x6B4090: fmul    st, st(2)
0x6B4092: fsubp   st(1), st
0x6B4094: fstp    dword ptr [ecx-8]
0x6B4097: fmul    dword ptr ds:0B18614h
0x6B409D: fld     dword ptr ds:0B18634h
0x6B40A3: fmulp   st(2), st
0x6B40A5: faddp   st(1), st
0x6B40A7: fstp    dword ptr [ecx+4]
0x6B40AA: fld     dword ptr [ecx-0Ch]
0x6B40AD: fstp    [esp+0C8h+var_B8]
0x6B40B1: fld     dword ptr [ecx+8]
0x6B40B4: fstp    [esp+0C8h+var_B4]
0x6B40B8: fld     [esp+0C8h+var_B8]
0x6B40BC: fld     [esp+0C8h+var_B4]
0x6B40C0: fld     dword ptr ds:0B18618h
0x6B40C6: fmul    st, st(2)
0x6B40C8: fld     dword ptr ds:0B18638h
0x6B40CE: fmul    st, st(2)
0x6B40D0: fsubp   st(1), st
0x6B40D2: fstp    dword ptr [ecx-0Ch]
0x6B40D5: fmul    dword ptr ds:0B18618h
0x6B40DB: fld     dword ptr ds:0B18638h
0x6B40E1: fmulp   st(2), st
0x6B40E3: faddp   st(1), st
0x6B40E5: fstp    dword ptr [ecx+8]
0x6B40E8: fld     dword ptr [ecx-10h]
0x6B40EB: fstp    [esp+0C8h+var_B8]
0x6B40EF: fld     dword ptr [ecx+0Ch]
0x6B40F2: fstp    [esp+0C8h+var_B4]
0x6B40F6: fld     [esp+0C8h+var_B8]
0x6B40FA: fld     [esp+0C8h+var_B4]
0x6B40FE: fld     dword ptr ds:0B1861Ch
0x6B4104: fmul    st, st(2)
0x6B4106: fld     dword ptr ds:0B1863Ch
0x6B410C: fmul    st, st(2)
0x6B410E: fsubp   st(1), st
0x6B4110: fstp    dword ptr [ecx-10h]
0x6B4113: fmul    dword ptr ds:0B1861Ch
0x6B4119: fld     dword ptr ds:0B1863Ch
0x6B411F: fmulp   st(2), st
0x6B4121: faddp   st(1), st
0x6B4123: fstp    dword ptr [ecx+0Ch]
0x6B4126: fld     dword ptr [ecx-14h]
0x6B4129: fstp    [esp+0C8h+var_B8]
0x6B412D: fld     dword ptr [ecx+10h]
0x6B4130: fstp    [esp+0C8h+var_B4]
0x6B4134: fld     [esp+0C8h+var_B8]
0x6B4138: fld     [esp+0C8h+var_B4]
0x6B413C: fld     dword ptr ds:0B18620h
0x6B4142: fmul    st, st(2)
0x6B4144: fld     dword ptr ds:0B18640h
0x6B414A: fmul    st, st(2)
0x6B414C: fsubp   st(1), st
0x6B414E: fstp    dword ptr [ecx-14h]
0x6B4151: fmul    dword ptr ds:0B18620h
0x6B4157: fld     dword ptr ds:0B18640h
0x6B415D: add     ecx, 48h ; 'H'
0x6B4160: sub     edx, 1
0x6B4163: fmulp   st(2), st
0x6B4165: faddp   st(1), st
0x6B4167: fstp    dword ptr [ecx-38h]
0x6B416A: fld     dword ptr [ecx-60h]
0x6B416D: fstp    [esp+0C8h+var_B8]
0x6B4171: fld     dword ptr [ecx-34h]
0x6B4174: fstp    [esp+0C8h+var_B4]
0x6B4178: fld     [esp+0C8h+var_B8]
0x6B417C: fld     [esp+0C8h+var_B4]
0x6B4180: fld     dword ptr ds:0B18624h
0x6B4186: fmul    st, st(2)
0x6B4188: fld     dword ptr ds:0B18644h
0x6B418E: fmul    st, st(2)
0x6B4190: fsubp   st(1), st
0x6B4192: fstp    dword ptr [ecx-60h]
0x6B4195: fmul    dword ptr ds:0B18624h
0x6B419B: fld     dword ptr ds:0B18644h
0x6B41A1: fmulp   st(2), st
0x6B41A3: faddp   st(1), st
0x6B41A5: fstp    dword ptr [ecx-34h]
0x6B41A8: fld     dword ptr [ecx-64h]
0x6B41AB: fstp    [esp+0C8h+var_B8]
0x6B41AF: fld     dword ptr [ecx-30h]
0x6B41B2: fstp    [esp+0C8h+var_B4]
0x6B41B6: fld     [esp+0C8h+var_B8]
0x6B41BA: fld     [esp+0C8h+var_B4]
0x6B41BE: fld     dword ptr ds:0B18628h
0x6B41C4: fmul    st, st(2)
0x6B41C6: fld     dword ptr ds:0B18648h
0x6B41CC: fmul    st, st(2)
0x6B41CE: fsubp   st(1), st
0x6B41D0: fstp    dword ptr [ecx-64h]
0x6B41D3: fmul    dword ptr ds:0B18628h
0x6B41D9: fld     dword ptr ds:0B18648h
0x6B41DF: fmulp   st(2), st
0x6B41E1: faddp   st(1), st
0x6B41E3: fstp    dword ptr [ecx-30h]
0x6B41E6: fld     dword ptr [ecx-68h]
0x6B41E9: fstp    [esp+0C8h+var_B8]
0x6B41ED: fld     dword ptr [ecx-2Ch]
0x6B41F0: fstp    [esp+0C8h+var_B4]
0x6B41F4: fld     [esp+0C8h+var_B8]
0x6B41F8: fld     [esp+0C8h+var_B4]
0x6B41FC: fld     dword ptr ds:0B1862Ch
0x6B4202: fmul    st, st(2)
0x6B4204: fld     dword ptr ds:0B1864Ch
0x6B420A: fmul    st, st(2)
0x6B420C: fsubp   st(1), st
0x6B420E: fstp    dword ptr [ecx-68h]
0x6B4211: fmul    dword ptr ds:0B1862Ch
0x6B4217: fld     dword ptr ds:0B1864Ch
0x6B421D: fmulp   st(2), st
0x6B421F: faddp   st(1), st
0x6B4221: fstp    dword ptr [ecx-2Ch]
0x6B4224: jnz     loc_6B4030
0x6B422A: mov     [esp+0C8h+var_B0], 0
0x6B4232: lea     edi, [ebx+2430h]
0x6B4238: jmp     short loc_6B4244
0x6B423A: align 10h
0x6B4240: mov     ebp, [esp+0C8h+var_AC]
0x6B4244: cmp     dword ptr [ebp+10h], 0
0x6B4248: jz      short loc_6B425B
0x6B424A: cmp     dword ptr [ebp+18h], 0
0x6B424E: jz      short loc_6B425B
0x6B4250: cmp     [esp+0C8h+var_B0], 24h ; '$'
0x6B4255: jge     short loc_6B425B
0x6B4257: xor     eax, eax
0x6B4259: jmp     short loc_6B425E
0x6B425B: mov     eax, [ebp+14h]
0x6B425E: push    eax
0x6B425F: lea     eax, [esp+0CCh+var_90]
0x6B4263: push    eax
0x6B4264: lea     ebp, [edi-904h]
0x6B426A: push    ebp
0x6B426B: mov     ecx, ebx
0x6B426D: call    sub_6B1EA0
0x6B4272: fld     dword ptr [edi-4]
0x6B4275: fadd    [esp+0C8h+var_90]
0x6B4279: fstp    dword ptr [ebp+0]
0x6B427C: fld     [esp+0C8h+var_48]
0x6B4283: fstp    dword ptr [edi-4]
0x6B4286: fld     dword ptr [edi]
0x6B4288: fadd    [esp+0C8h+var_8C]
0x6B428C: fstp    dword ptr [edi-900h]
0x6B4292: fld     [esp+0C8h+var_44]
0x6B4299: fstp    dword ptr [edi]
0x6B429B: fld     dword ptr [edi+4]
0x6B429E: fadd    [esp+0C8h+var_88]
0x6B42A2: fstp    dword ptr [edi-8FCh]
0x6B42A8: fld     [esp+0C8h+var_40]
0x6B42AF: fstp    dword ptr [edi+4]
0x6B42B2: fld     dword ptr [edi+8]
0x6B42B5: fadd    [esp+0C8h+var_84]
0x6B42B9: fstp    dword ptr [edi-8F8h]
0x6B42BF: fld     [esp+0C8h+var_3C]
0x6B42C6: fstp    dword ptr [edi+8]
0x6B42C9: fld     dword ptr [edi+0Ch]
0x6B42CC: fadd    [esp+0C8h+var_80]
0x6B42D0: fstp    dword ptr [edi-8F4h]
0x6B42D6: fld     [esp+0C8h+var_38]
0x6B42DD: fstp    dword ptr [edi+0Ch]
0x6B42E0: fld     dword ptr [edi+10h]
0x6B42E3: fadd    [esp+0C8h+var_7C]
0x6B42E7: fstp    dword ptr [edi-8F0h]
0x6B42ED: fld     [esp+0C8h+var_34]
0x6B42F4: fstp    dword ptr [edi+10h]
0x6B42F7: fld     dword ptr [edi+14h]
0x6B42FA: fadd    [esp+0C8h+var_78]
0x6B42FE: fstp    dword ptr [edi-8ECh]
0x6B4304: fld     [esp+0C8h+var_30]
0x6B430B: fstp    dword ptr [edi+14h]
0x6B430E: fld     dword ptr [edi+18h]
0x6B4311: fadd    [esp+0C8h+var_74]
0x6B4315: fstp    dword ptr [edi-8E8h]
0x6B431B: fld     [esp+0C8h+var_2C]
0x6B4322: fstp    dword ptr [edi+18h]
0x6B4325: fld     dword ptr [edi+1Ch]
0x6B4328: fadd    [esp+0C8h+var_70]
0x6B432C: fstp    dword ptr [edi-8E4h]
0x6B4332: fld     [esp+0C8h+var_28]
0x6B4339: fstp    dword ptr [edi+1Ch]
0x6B433C: fld     dword ptr [edi+20h]
0x6B433F: fadd    [esp+0C8h+var_6C]
0x6B4343: fstp    dword ptr [edi-8E0h]
0x6B4349: fld     [esp+0C8h+var_24]
0x6B4350: fstp    dword ptr [edi+20h]
0x6B4353: fld     dword ptr [edi+24h]
0x6B4356: fadd    [esp+0C8h+var_68]
0x6B435A: fstp    dword ptr [edi-8DCh]
0x6B4360: fld     [esp+0C8h+var_20]
0x6B4367: fstp    dword ptr [edi+24h]
0x6B436A: fld     dword ptr [edi+28h]
0x6B436D: fadd    [esp+0C8h+var_64]
0x6B4371: fstp    dword ptr [edi-8D8h]
0x6B4377: fld     [esp+0C8h+var_1C]
0x6B437E: fstp    dword ptr [edi+28h]
0x6B4381: fld     dword ptr [edi+2Ch]
0x6B4384: fadd    [esp+0C8h+var_60]
0x6B4388: fstp    dword ptr [edi-8D4h]
0x6B438E: fld     [esp+0C8h+var_18]
0x6B4395: fstp    dword ptr [edi+2Ch]
0x6B4398: fld     dword ptr [edi+30h]
0x6B439B: fadd    [esp+0C8h+var_5C]
0x6B439F: fstp    dword ptr [edi-8D0h]
0x6B43A5: fld     [esp+0C8h+var_14]
0x6B43AC: fstp    dword ptr [edi+30h]
0x6B43AF: fld     dword ptr [edi+34h]
0x6B43B2: fadd    [esp+0C8h+var_58]
0x6B43B6: fstp    dword ptr [edi-8CCh]
0x6B43BC: fld     [esp+0C8h+var_10]
0x6B43C3: fstp    dword ptr [edi+34h]
0x6B43C6: mov     eax, [esp+0C8h+var_B0]
0x6B43CA: fld     dword ptr [edi+38h]
0x6B43CD: add     eax, 12h
0x6B43D0: fadd    [esp+0C8h+var_54]
0x6B43D4: add     edi, 48h ; 'H'
0x6B43D7: cmp     eax, 240h
0x6B43DC: mov     [esp+0C8h+var_B0], eax
0x6B43E0: fstp    dword ptr [edi-910h]
0x6B43E6: fld     [esp+0C8h+var_C]
0x6B43ED: fstp    dword ptr [edi-10h]
0x6B43F0: fld     dword ptr [edi-0Ch]
0x6B43F3: fadd    [esp+0C8h+var_50]
0x6B43F7: fstp    dword ptr [edi-90Ch]
0x6B43FD: fld     [esp+0C8h+var_8]
0x6B4404: fstp    dword ptr [edi-0Ch]
0x6B4407: fld     [esp+0C8h+var_4C]
0x6B440B: fadd    dword ptr [edi-8]
0x6B440E: fstp    dword ptr [edi-908h]
0x6B4414: fld     [esp+0C8h+var_4]
0x6B441B: fstp    dword ptr [edi-8]
0x6B441E: jl      loc_6B4240
0x6B4424: lea     edx, [ebx+1B78h]
0x6B442A: mov     edi, 10h
0x6B442F: nop
0x6B4430: mov     eax, edx
0x6B4432: mov     ecx, 9
0x6B4437: fld     dword ptr [eax]
0x6B4439: add     eax, 8
0x6B443C: sub     ecx, 1
0x6B443F: fchs
0x6B4441: fstp    dword ptr [eax-8]
0x6B4444: jnz     short loc_6B4437
0x6B4446: add     edx, 90h
0x6B444C: sub     edi, 1
0x6B444F: jnz     short loc_6B4430
0x6B4451: lea     edi, [ebx+1B2Ch]
0x6B4457: mov     [esp+0C8h+var_AC], 12h
0x6B445F: nop
0x6B4460: mov     eax, 1008h
0x6B4465: mov     ecx, edi
0x6B4467: mov     edx, 20h ; ' '
0x6B446C: lea     esp, [esp+0]
0x6B4470: fld     dword ptr [ecx]
0x6B4472: mov     ebp, [ebx+8]
0x6B4475: fstp    dword ptr [eax+ebp]
0x6B4478: add     eax, 4
0x6B447B: add     ecx, 48h ; 'H'
0x6B447E: sub     edx, 1
0x6B4481: jnz     short loc_6B4470
0x6B4483: mov     ecx, [ebx+0Ch]
0x6B4486: push    ecx
0x6B4487: mov     ecx, [ebx+8]
0x6B448A: call    sub_6B66A0
0x6B448F: add     edi, 4
0x6B4492: sub     [esp+0C8h+var_AC], 1
0x6B4497: jnz     short loc_6B4460
0x6B4499: mov     eax, [esp+0C8h+var_A4]
0x6B449D: add     [esp+0C8h+var_A0], 48h ; 'H'
0x6B44A2: add     eax, 1
0x6B44A5: cmp     eax, [ebx+4120h]
0x6B44AB: mov     [esp+0C8h+var_A4], eax
0x6B44AF: jl      loc_6B3BD0
0x6B44B5: mov     ecx, [ebx]
0x6B44B7: call    sub_6B3790
0x6B44BC: test    al, al
0x6B44BE: jz      short loc_6B44E4
0x6B44C0: mov     edx, [ebx]
0x6B44C2: pop     edi
0x6B44C3: pop     esi
0x6B44C4: mov     byte ptr [edx+18h], 1
0x6B44C8: mov     ecx, [ebx+0Ch]
0x6B44CB: mov     eax, [ecx+4]
0x6B44CE: pop     ebp
0x6B44CF: pop     ebx
0x6B44D0: add     esp, 0B8h
0x6B44D6: retn
0x6B44D7: pop     edi
0x6B44D8: pop     esi
0x6B44D9: pop     ebp
0x6B44DA: xor     eax, eax
0x6B44DC: pop     ebx
0x6B44DD: add     esp, 0B8h
0x6B44E3: retn
0x6B44E4: mov     eax, [ebx]
0x6B44E6: pop     edi
0x6B44E7: pop     esi
0x6B44E8: mov     byte ptr [eax+18h], 0
0x6B44EC: mov     ecx, [ebx+0Ch]
0x6B44EF: mov     eax, [ecx+4]
0x6B44F2: pop     ebp
0x6B44F3: pop     ebx
0x6B44F4: add     esp, 0B8h
0x6B44FA: retn
