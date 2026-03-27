0x955CA0: sub     esp, 98h
0x955CA6: push    ebx
0x955CA7: push    ebp
0x955CA8: push    esi
0x955CA9: mov     esi, [esp+0A4h+arg_0]
0x955CB0: mov     al, [esi+38h]
0x955CB3: test    al, al
0x955CB5: lea     ebp, [esi+38h]
0x955CB8: mov     ebx, ecx
0x955CBA: mov     [esp+0A4h+var_80], ebx
0x955CBE: mov     [esp+0A4h+var_98], ebp
0x955CC2: jnz     loc_955F38
0x955CC8: mov     al, [esi+4]
0x955CCB: test    al, al
0x955CCD: push    edi
0x955CCE: mov     edi, [esp+0A8h+arg_8]
0x955CD5: jz      short loc_955CF4
0x955CD7: mov     ecx, edi
0x955CD9: call    sub_954760
0x955CDE: push    edi
0x955CDF: push    esi
0x955CE0: mov     ecx, ebx
0x955CE2: call    sub_955150
0x955CE7: pop     edi
0x955CE8: pop     esi
0x955CE9: pop     ebp
0x955CEA: pop     ebx
0x955CEB: add     esp, 98h
0x955CF1: retn    0Ch
0x955CF4: cmp     byte ptr [ebp+4], 1
0x955CF8: jnz     short loc_955D12
0x955CFA: mov     ecx, [esp+0A8h+arg_4]
0x955D01: lea     eax, [esp+0A8h+var_14]
0x955D08: push    eax
0x955D09: push    edi
0x955D0A: push    ecx
0x955D0B: mov     ecx, ebx
0x955D0D: call    sub_954DB0
0x955D12: mov     ecx, edi
0x955D14: call    sub_954760
0x955D19: mov     edx, [esi+0B8h]
0x955D1F: push    edx
0x955D20: mov     ecx, ebx
0x955D22: call    sub_9553B0
0x955D27: mov     [esp+0A8h+var_8C], eax
0x955D2B: lea     eax, [esp+0A8h+var_84]
0x955D2F: push    eax
0x955D30: lea     ecx, [esp+0ACh+var_94]
0x955D34: push    ecx
0x955D35: push    edi
0x955D36: push    esi
0x955D37: mov     ecx, ebx
0x955D39: call    sub_9558D0
0x955D3E: mov     eax, [esi+0F0h]
0x955D44: mov     edx, [esi+0ECh]
0x955D4A: mov     [esp+0A8h+var_84], eax
0x955D4E: mov     [esp+0A8h+var_7C], eax
0x955D52: mov     [esp+0A8h+var_78], edx
0x955D56: lea     esi, [ebp+18h]
0x955D59: mov     edi, 3
0x955D5E: mov     edi, edi
0x955D60: fld     dword ptr [ebx+3Ch]
0x955D63: push    ecx
0x955D64: fmul    dword ptr [ebx+44h]
0x955D67: fstp    [esp+0ACh+var_AC]
0x955D6A: call    sub_8ECB30
0x955D6F: mov     dword ptr [esi-0Ch], 0
0x955D76: mov     dword ptr [esi], 7FFFFFFFh
0x955D7C: add     esp, 4
0x955D7F: add     esi, 4
0x955D82: dec     edi
0x955D83: jnz     short loc_955D60
0x955D85: xor     eax, eax
0x955D87: mov     [esp+0A8h+var_94], eax
0x955D8B: jmp     short loc_955D90
0x955D8D: align 10h
0x955D90: mov     ebp, [esp+eax*4+0A8h+var_7C]
0x955D94: test    ebp, ebp
0x955D96: lea     ebx, [ebp+38h]
0x955D99: jz      loc_955F29
0x955D9F: mov     esi, [esp+0A8h+arg_8]
0x955DA6: mov     ecx, 12h
0x955DAB: lea     edi, [esp+0A8h+var_74]
0x955DAF: rep movsd
0x955DB1: mov     ecx, [ebp+24h]
0x955DB4: mov     eax, [ebp+28h]
0x955DB7: sub     eax, ecx
0x955DB9: mov     [esp+0A8h+var_3C], eax
0x955DBD: mov     ecx, [ebp+2Ch]
0x955DC0: mov     [esp+0A8h+var_38], ecx
0x955DC4: mov     eax, [ebp+2Ch]
0x955DC7: xor     ecx, ecx
0x955DC9: test    eax, eax
0x955DCB: jle     short loc_955DF8
0x955DCD: mov     edx, ebp
0x955DCF: neg     edx
0x955DD1: lea     esi, [esp+edx+0A8h+var_64]
0x955DD5: lea     eax, [ebp+30h]
0x955DD8: lea     edx, [esp+edx+0A8h+var_60]
0x955DDC: lea     esp, [esp+0]
0x955DE0: mov     edi, [eax]
0x955DE2: mov     [esi+eax], edi
0x955DE5: mov     edi, [eax+4]
0x955DE8: sub     edi, [eax]
0x955DEA: inc     ecx
0x955DEB: mov     [edx+eax], edi
0x955DEE: mov     edi, [ebp+2Ch]
0x955DF1: add     eax, 4
0x955DF4: cmp     ecx, edi
0x955DF6: jl      short loc_955DE0
0x955DF8: mov     edi, [esp+0A8h+var_80]
0x955DFC: lea     edx, [edi+30h]
0x955DFF: push    edx
0x955E00: push    ebp
0x955E01: lea     ecx, [esp+0B0h+var_74]
0x955E05: call    sub_954C10
0x955E0A: mov     esi, [esp+0A8h+arg_8]
0x955E11: mov     eax, [esi]
0x955E13: inc     eax
0x955E14: lea     ecx, [esp+0A8h+var_74]
0x955E18: mov     [esp+0A8h+var_74], eax
0x955E1C: mov     [esp+0A8h+var_70], 0
0x955E21: call    sub_954CA0
0x955E26: lea     ecx, [esp+0A8h+var_74]
0x955E2A: push    ecx
0x955E2B: push    esi
0x955E2C: push    ebp
0x955E2D: mov     ecx, edi
0x955E2F: call    sub_955CA0
0x955E34: cmp     ebp, [esp+0A8h+var_84]
0x955E38: jnz     short loc_955E4D
0x955E3A: mov     eax, [esp+0A8h+var_8C]
0x955E3E: cmp     eax, 2
0x955E41: jg      short loc_955E60
0x955E43: mov     dword ptr [ebp+eax*4+44h], 0
0x955E4B: jmp     short loc_955E60
0x955E4D: mov     eax, [esp+0A8h+var_8C]
0x955E51: cmp     eax, 2
0x955E54: jg      short loc_955E60
0x955E56: mov     edx, eax
0x955E58: mov     dword ptr [ebp+edx*4+50h], 7FFFFFFFh
0x955E60: mov     edi, [esp+0A8h+var_98]
0x955E64: mov     ebp, [esp+0A8h+var_98]
0x955E68: lea     edx, [esi+10h]
0x955E6B: add     esi, 54h ; 'T'
0x955E6E: xor     eax, eax
0x955E70: add     edi, 18h
0x955E73: lea     ecx, [ebx+0Ch]
0x955E76: mov     [esp+0A8h+var_90], edx
0x955E7A: mov     [esp+0A8h+var_88], esi
0x955E7E: sub     ebp, ebx
0x955E80: movsx   edx, byte ptr [ebx+eax+8]
0x955E85: cmp     edx, 1
0x955E88: jnz     short loc_955EB7
0x955E8A: mov     edx, [ecx]
0x955E8C: cmp     edx, [esi-0Ch]
0x955E8F: jg      short loc_955EDC
0x955E91: mov     edx, [ecx+0Ch]
0x955E94: cmp     edx, [esi]
0x955E96: jl      short loc_955EDC
0x955E98: mov     edx, [esp+0A8h+var_98]
0x955E9C: movsx   esi, byte ptr [eax+edx+8]
0x955EA1: cmp     esi, 1
0x955EA4: mov     edx, 1
0x955EA9: jl      short loc_955EAD
0x955EAB: mov     edx, esi
0x955EAD: mov     esi, [esp+0A8h+var_98]
0x955EB1: mov     [eax+esi+8], dl
0x955EB5: jmp     short loc_955ED7
0x955EB7: cmp     edx, 2
0x955EBA: jnz     short loc_955EDC
0x955EBC: mov     esi, [ecx]
0x955EBE: mov     edx, [esp+0A8h+var_90]
0x955EC2: cmp     esi, [edx-4]
0x955EC5: jg      short loc_955EDC
0x955EC7: mov     esi, [ecx+0Ch]
0x955ECA: cmp     esi, [edx]
0x955ECC: jl      short loc_955EDC
0x955ECE: mov     edx, [esp+0A8h+var_98]
0x955ED2: mov     byte ptr [eax+edx+8], 2
0x955ED7: mov     byte ptr [ebx+eax+8], 0
0x955EDC: mov     dl, [ebx+eax+8]
0x955EE0: test    dl, dl
0x955EE2: jnz     short loc_955EFF
0x955EE4: mov     edx, [ecx]
0x955EE6: mov     esi, [ecx+ebp]
0x955EE9: cmp     esi, edx
0x955EEB: jle     short loc_955EEF
0x955EED: mov     edx, esi
0x955EEF: mov     esi, [edi]
0x955EF1: mov     [ecx+ebp], edx
0x955EF4: mov     edx, [ecx+0Ch]
0x955EF7: cmp     esi, edx
0x955EF9: jge     short loc_955EFD
0x955EFB: mov     edx, esi
0x955EFD: mov     [edi], edx
0x955EFF: mov     esi, [esp+0A8h+var_88]
0x955F03: mov     edx, [esp+0A8h+var_90]
0x955F07: inc     eax
0x955F08: add     esi, 4
0x955F0B: add     edx, 8
0x955F0E: add     ecx, 4
0x955F11: add     edi, 4
0x955F14: cmp     eax, 3
0x955F17: mov     [esp+0A8h+var_88], esi
0x955F1B: mov     [esp+0A8h+var_90], edx
0x955F1F: jl      loc_955E80
0x955F25: mov     eax, [esp+0A8h+var_94]
0x955F29: inc     eax
0x955F2A: cmp     eax, 2
0x955F2D: mov     [esp+0A8h+var_94], eax
0x955F31: jl      loc_955D90
0x955F37: pop     edi
0x955F38: pop     esi
0x955F39: pop     ebp
0x955F3A: pop     ebx
0x955F3B: add     esp, 98h
0x955F41: retn    0Ch
