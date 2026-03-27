0x8357B0: push    0FFFFFFFFh
0x8357B2: push    offset SEH_81AA00
0x8357B7: mov     eax, large fs:0
0x8357BD: push    eax
0x8357BE: sub     esp, 0Ch
0x8357C1: push    ebx
0x8357C2: push    ebp
0x8357C3: push    esi
0x8357C4: push    edi
0x8357C5: mov     eax, ds:0B30AACh
0x8357CA: xor     eax, esp
0x8357CC: push    eax
0x8357CD: lea     eax, [esp+2Ch+var_C]
0x8357D1: mov     large fs:0, eax
0x8357D7: xor     esi, esi
0x8357D9: mov     [esp+2Ch+var_14], esi
0x8357DD: xor     edi, edi
0x8357DF: mov     [esp+2Ch+var_4], esi
0x8357E3: mov     [esp+2Ch+var_18], edi
0x8357E7: mov     eax, ds:0B45BB0h
0x8357EC: test    eax, eax
0x8357EE: mov     ebx, 1
0x8357F3: mov     byte ptr [esp+2Ch+var_4], bl
0x8357F7: jz      short loc_835806
0x8357F9: mov     esi, eax
0x8357FB: test    esi, esi
0x8357FD: mov     [esp+2Ch+var_14], esi
0x835801: jz      short loc_835806
0x835803: add     [esi+60h], ebx
0x835806: mov     eax, [esi+18h]
0x835809: cmp     eax, 2
0x83580C: jnb     loc_8358D9
0x835812: lea     eax, [esp+2Ch+var_10]
0x835816: push    eax
0x835817: call    sub_772630
0x83581C: add     esp, 4
0x83581F: mov     eax, [eax]
0x835821: test    eax, eax
0x835823: jz      short loc_83582E
0x835825: mov     edi, eax
0x835827: add     [edi+5Ch], ebx
0x83582A: mov     [esp+2Ch+var_18], edi
0x83582E: mov     eax, [esp+2Ch+var_10]
0x835832: test    eax, eax
0x835834: mov     byte ptr [esp+2Ch+var_4], 1
0x835839: jz      short loc_83584E
0x83583B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83583F: mov     ecx, eax
0x835841: add     eax, 5Ch ; '\'
0x835844: cmp     dword ptr [eax], 0
0x835847: jnz     short loc_83584E
0x835849: call    sub_772560
0x83584E: push    2
0x835850: push    ebx
0x835851: push    0
0x835853: push    edi
0x835854: call    sub_801110
0x835859: mov     ecx, [esi+14h]
0x83585C: add     esp, 10h
0x83585F: push    edi; a3
0x835860: push    ecx; a2
0x835861: mov     ecx, esi; this
0x835863: call    sub_760010
0x835868: lea     edx, [esp+2Ch+var_10]
0x83586C: push    edx
0x83586D: call    sub_772630
0x835872: add     esp, 4
0x835875: mov     ebp, eax
0x835877: cmp     edi, [ebp+0]
0x83587A: mov     byte ptr [esp+2Ch+var_4], 3
0x83587F: jz      short loc_8358A0
0x835881: test    edi, edi
0x835883: jz      short loc_835892
0x835885: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x835889: jnz     short loc_835892
0x83588B: mov     ecx, edi
0x83588D: call    sub_772560
0x835892: mov     edi, [ebp+0]
0x835895: test    edi, edi
0x835897: mov     [esp+2Ch+var_18], edi
0x83589B: jz      short loc_8358A0
0x83589D: add     [edi+5Ch], ebx
0x8358A0: mov     eax, [esp+2Ch+var_10]
0x8358A4: test    eax, eax
0x8358A6: mov     byte ptr [esp+2Ch+var_4], 1
0x8358AB: jz      short loc_8358C0
0x8358AD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8358B1: mov     ecx, eax
0x8358B3: add     eax, 5Ch ; '\'
0x8358B6: cmp     dword ptr [eax], 0
0x8358B9: jnz     short loc_8358C0
0x8358BB: call    sub_772560
0x8358C0: push    2
0x8358C2: push    ebx
0x8358C3: push    ebx
0x8358C4: push    edi
0x8358C5: call    sub_801110
0x8358CA: mov     eax, [esi+14h]
0x8358CD: add     esp, 10h
0x8358D0: push    edi; a3
0x8358D1: push    eax; a2
0x8358D2: mov     ecx, esi; this
0x8358D4: call    sub_760010
0x8358D9: mov     eax, ds:0B453F8h
0x8358DE: mov     ebp, [esi+58h]
0x8358E1: cmp     ebp, eax
0x8358E3: mov     ebx, eax
0x8358E5: jz      short loc_835919
0x8358E7: test    ebp, ebp
0x8358E9: jz      short loc_835908
0x8358EB: lea     ecx, [ebp+4]
0x8358EE: push    ecx; lpAddend
0x8358EF: call    dword ptr ds:0A2807Ch
0x8358F5: test    eax, eax
0x8358F7: jnz     short loc_835908
0x8358F9: test    ebp, ebp
0x8358FB: jz      short loc_835908
0x8358FD: mov     edx, [ebp+0]
0x835900: mov     eax, [edx]
0x835902: push    1
0x835904: mov     ecx, ebp
0x835906: call    eax
0x835908: test    ebx, ebx
0x83590A: mov     [esi+58h], ebx
0x83590D: jz      short loc_835919
0x83590F: add     ebx, 4
0x835912: push    ebx; lpAddend
0x835913: call    dword ptr ds:0A28078h
0x835919: mov     eax, ds:0B451F0h
0x83591E: mov     ebp, [esi+44h]
0x835921: cmp     ebp, eax
0x835923: mov     ebx, eax
0x835925: jz      short loc_835959
0x835927: test    ebp, ebp
0x835929: jz      short loc_835948
0x83592B: lea     ecx, [ebp+4]
0x83592E: push    ecx; lpAddend
0x83592F: call    dword ptr ds:0A2807Ch
0x835935: test    eax, eax
0x835937: jnz     short loc_835948
0x835939: test    ebp, ebp
0x83593B: jz      short loc_835948
0x83593D: mov     edx, [ebp+0]
0x835940: mov     eax, [edx]
0x835942: push    1
0x835944: mov     ecx, ebp
0x835946: call    eax
0x835948: test    ebx, ebx
0x83594A: mov     [esi+44h], ebx
0x83594D: jz      short loc_835959
0x83594F: add     ebx, 4
0x835952: push    ebx; lpAddend
0x835953: call    dword ptr ds:0A28078h
0x835959: cmp     dword ptr [esi+30h], 0
0x83595D: jnz     short loc_835967
0x83595F: call    sub_772DF0
0x835964: mov     [esi+30h], eax
0x835967: mov     ecx, [esi+30h]
0x83596A: push    0
0x83596C: push    1
0x83596E: push    1Bh
0x835970: call    sub_772CD0
0x835975: cmp     dword ptr [esi+30h], 0
0x835979: jnz     short loc_835983
0x83597B: call    sub_772DF0
0x835980: mov     [esi+30h], eax
0x835983: mov     ecx, [esi+30h]
0x835986: push    0
0x835988: push    2
0x83598A: push    13h
0x83598C: call    sub_772CD0
0x835991: cmp     dword ptr [esi+30h], 0
0x835995: jnz     short loc_83599F
0x835997: call    sub_772DF0
0x83599C: mov     [esi+30h], eax
0x83599F: mov     ecx, [esi+30h]
0x8359A2: push    0
0x8359A4: push    2
0x8359A6: push    14h
0x8359A8: call    sub_772CD0
0x8359AD: cmp     dword ptr [esi+30h], 0
0x8359B1: jnz     short loc_8359BB
0x8359B3: call    sub_772DF0
0x8359B8: mov     [esi+30h], eax
0x8359BB: mov     ecx, [esi+30h]
0x8359BE: push    0
0x8359C0: push    0
0x8359C2: push    0Fh
0x8359C4: call    sub_772CD0
0x8359C9: cmp     dword ptr [esi+30h], 0
0x8359CD: jnz     short loc_8359D7
0x8359CF: call    sub_772DF0
0x8359D4: mov     [esi+30h], eax
0x8359D7: mov     ecx, [esi+30h]
0x8359DA: push    0
0x8359DC: push    1
0x8359DE: push    7
0x8359E0: call    sub_772CD0
0x8359E5: cmp     dword ptr [esi+30h], 0
0x8359E9: jnz     short loc_8359F3
0x8359EB: call    sub_772DF0
0x8359F0: mov     [esi+30h], eax
0x8359F3: mov     ecx, [esi+30h]
0x8359F6: push    0
0x8359F8: push    3
0x8359FA: push    17h
0x8359FC: call    sub_772CD0
0x835A01: cmp     dword ptr [esi+30h], 0
0x835A05: jnz     short loc_835A0F
0x835A07: call    sub_772DF0
0x835A0C: mov     [esi+30h], eax
0x835A0F: mov     ecx, [esi+30h]
0x835A12: push    0
0x835A14: push    0
0x835A16: push    0Eh
0x835A18: call    sub_772CD0
0x835A1D: cmp     dword ptr [esi+30h], 0
0x835A21: jnz     short loc_835A2B
0x835A23: call    sub_772DF0
0x835A28: mov     [esi+30h], eax
0x835A2B: mov     ecx, [esi+30h]
0x835A2E: push    0
0x835A30: push    0
0x835A32: push    34h ; '4'
0x835A34: call    sub_772CD0
0x835A39: or      ebx, 0FFFFFFFFh
0x835A3C: cmp     esi, ds:0B45BB4h
0x835A42: mov     dword ptr ds:0B44130h, 20006h
0x835A4C: mov     dword ptr ds:0B447C0h, 104h
0x835A56: jz      short loc_835A76
0x835A58: add     [esi+60h], ebx
0x835A5B: jnz     short loc_835A64
0x835A5D: mov     ecx, esi
0x835A5F: call    sub_7604D0
0x835A64: mov     esi, ds:0B45BB4h
0x835A6A: test    esi, esi
0x835A6C: mov     [esp+2Ch+var_14], esi
0x835A70: jz      short loc_835A76
0x835A72: add     dword ptr [esi+60h], 1
0x835A76: cmp     dword ptr [esi+18h], 2
0x835A7A: jnb     loc_835B64
0x835A80: lea     ecx, [esp+2Ch+var_10]
0x835A84: push    ecx
0x835A85: call    sub_772630
0x835A8A: add     esp, 4
0x835A8D: mov     ebp, eax
0x835A8F: cmp     edi, [ebp+0]
0x835A92: mov     byte ptr [esp+2Ch+var_4], 4
0x835A97: jz      short loc_835AB8
0x835A99: test    edi, edi
0x835A9B: jz      short loc_835AA9
0x835A9D: add     [edi+5Ch], ebx
0x835AA0: jnz     short loc_835AA9
0x835AA2: mov     ecx, edi
0x835AA4: call    sub_772560
0x835AA9: mov     edi, [ebp+0]
0x835AAC: test    edi, edi
0x835AAE: mov     [esp+2Ch+var_18], edi
0x835AB2: jz      short loc_835AB8
0x835AB4: add     dword ptr [edi+5Ch], 1
0x835AB8: mov     eax, [esp+2Ch+var_10]
0x835ABC: test    eax, eax
0x835ABE: mov     byte ptr [esp+2Ch+var_4], 1
0x835AC3: jz      short loc_835AD7
0x835AC5: add     [eax+5Ch], ebx
0x835AC8: mov     ecx, eax
0x835ACA: add     eax, 5Ch ; '\'
0x835ACD: cmp     dword ptr [eax], 0
0x835AD0: jnz     short loc_835AD7
0x835AD2: call    sub_772560
0x835AD7: push    2
0x835AD9: push    1
0x835ADB: push    0
0x835ADD: push    edi
0x835ADE: call    sub_801110
0x835AE3: mov     edx, [esi+14h]
0x835AE6: add     esp, 10h
0x835AE9: push    edi; a3
0x835AEA: push    edx; a2
0x835AEB: mov     ecx, esi; this
0x835AED: call    sub_760010
0x835AF2: lea     eax, [esp+2Ch+var_10]
0x835AF6: push    eax
0x835AF7: call    sub_772630
0x835AFC: add     esp, 4
0x835AFF: mov     ebp, eax
0x835B01: cmp     edi, [ebp+0]
0x835B04: mov     byte ptr [esp+2Ch+var_4], 5
0x835B09: jz      short loc_835B2A
0x835B0B: test    edi, edi
0x835B0D: jz      short loc_835B1B
0x835B0F: add     [edi+5Ch], ebx
0x835B12: jnz     short loc_835B1B
0x835B14: mov     ecx, edi
0x835B16: call    sub_772560
0x835B1B: mov     edi, [ebp+0]
0x835B1E: test    edi, edi
0x835B20: mov     [esp+2Ch+var_18], edi
0x835B24: jz      short loc_835B2A
0x835B26: add     dword ptr [edi+5Ch], 1
0x835B2A: mov     eax, [esp+2Ch+var_10]
0x835B2E: test    eax, eax
0x835B30: mov     byte ptr [esp+2Ch+var_4], 1
0x835B35: jz      short loc_835B49
0x835B37: add     [eax+5Ch], ebx
0x835B3A: mov     ecx, eax
0x835B3C: add     eax, 5Ch ; '\'
0x835B3F: cmp     dword ptr [eax], 0
0x835B42: jnz     short loc_835B49
0x835B44: call    sub_772560
0x835B49: push    2
0x835B4B: push    1
0x835B4D: push    1
0x835B4F: push    edi
0x835B50: call    sub_801110
0x835B55: mov     ecx, [esi+14h]
0x835B58: add     esp, 10h
0x835B5B: push    edi; a3
0x835B5C: push    ecx; a2
0x835B5D: mov     ecx, esi; this
0x835B5F: call    sub_760010
0x835B64: mov     eax, ds:0B453FCh
0x835B69: mov     ebp, [esi+58h]
0x835B6C: cmp     ebp, eax
0x835B6E: mov     ebx, eax
0x835B70: jz      short loc_835BA4
0x835B72: test    ebp, ebp
0x835B74: jz      short loc_835B93
0x835B76: lea     edx, [ebp+4]
0x835B79: push    edx; lpAddend
0x835B7A: call    dword ptr ds:0A2807Ch
0x835B80: test    eax, eax
0x835B82: jnz     short loc_835B93
0x835B84: test    ebp, ebp
0x835B86: jz      short loc_835B93
0x835B88: mov     eax, [ebp+0]
0x835B8B: mov     edx, [eax]
0x835B8D: push    1
0x835B8F: mov     ecx, ebp
0x835B91: call    edx
0x835B93: test    ebx, ebx
0x835B95: mov     [esi+58h], ebx
0x835B98: jz      short loc_835BA4
0x835B9A: add     ebx, 4
0x835B9D: push    ebx; lpAddend
0x835B9E: call    dword ptr ds:0A28078h
0x835BA4: mov     eax, ds:0B451F0h
0x835BA9: mov     ebp, [esi+44h]
0x835BAC: cmp     ebp, eax
0x835BAE: mov     ebx, eax
0x835BB0: jz      short loc_835BE4
0x835BB2: test    ebp, ebp
0x835BB4: jz      short loc_835BD3
0x835BB6: lea     eax, [ebp+4]
0x835BB9: push    eax; lpAddend
0x835BBA: call    dword ptr ds:0A2807Ch
0x835BC0: test    eax, eax
0x835BC2: jnz     short loc_835BD3
0x835BC4: test    ebp, ebp
0x835BC6: jz      short loc_835BD3
0x835BC8: mov     edx, [ebp+0]
0x835BCB: mov     eax, [edx]
0x835BCD: push    1
0x835BCF: mov     ecx, ebp
0x835BD1: call    eax
0x835BD3: test    ebx, ebx
0x835BD5: mov     [esi+44h], ebx
0x835BD8: jz      short loc_835BE4
0x835BDA: add     ebx, 4
0x835BDD: push    ebx; lpAddend
0x835BDE: call    dword ptr ds:0A28078h
0x835BE4: cmp     dword ptr [esi+30h], 0
0x835BE8: jnz     short loc_835BF2
0x835BEA: call    sub_772DF0
0x835BEF: mov     [esi+30h], eax
0x835BF2: mov     ecx, [esi+30h]
0x835BF5: push    0
0x835BF7: push    1
0x835BF9: push    1Bh
0x835BFB: call    sub_772CD0
0x835C00: cmp     dword ptr [esi+30h], 0
0x835C04: jnz     short loc_835C0E
0x835C06: call    sub_772DF0
0x835C0B: mov     [esi+30h], eax
0x835C0E: mov     ecx, [esi+30h]
0x835C11: push    0
0x835C13: push    2
0x835C15: push    13h
0x835C17: call    sub_772CD0
0x835C1C: cmp     dword ptr [esi+30h], 0
0x835C20: jnz     short loc_835C2A
0x835C22: call    sub_772DF0
0x835C27: mov     [esi+30h], eax
0x835C2A: mov     ecx, [esi+30h]
0x835C2D: push    0
0x835C2F: push    2
0x835C31: push    14h
0x835C33: call    sub_772CD0
0x835C38: cmp     dword ptr [esi+30h], 0
0x835C3C: jnz     short loc_835C46
0x835C3E: call    sub_772DF0
0x835C43: mov     [esi+30h], eax
0x835C46: mov     ecx, [esi+30h]
0x835C49: push    0
0x835C4B: push    0
0x835C4D: push    0Fh
0x835C4F: call    sub_772CD0
0x835C54: cmp     dword ptr [esi+30h], 0
0x835C58: jnz     short loc_835C62
0x835C5A: call    sub_772DF0
0x835C5F: mov     [esi+30h], eax
0x835C62: mov     ecx, [esi+30h]
0x835C65: push    0
0x835C67: push    1
0x835C69: push    7
0x835C6B: call    sub_772CD0
0x835C70: cmp     dword ptr [esi+30h], 0
0x835C74: jnz     short loc_835C7E
0x835C76: call    sub_772DF0
0x835C7B: mov     [esi+30h], eax
0x835C7E: mov     ecx, [esi+30h]
0x835C81: push    0
0x835C83: push    3
0x835C85: push    17h
0x835C87: call    sub_772CD0
0x835C8C: cmp     dword ptr [esi+30h], 0
0x835C90: jnz     short loc_835C9A
0x835C92: call    sub_772DF0
0x835C97: mov     [esi+30h], eax
0x835C9A: mov     ecx, [esi+30h]
0x835C9D: push    0
0x835C9F: push    0
0x835CA1: push    0Eh
0x835CA3: call    sub_772CD0
0x835CA8: cmp     dword ptr [esi+30h], 0
0x835CAC: jnz     short loc_835CB6
0x835CAE: call    sub_772DF0
0x835CB3: mov     [esi+30h], eax
0x835CB6: mov     ecx, [esi+30h]
0x835CB9: push    0
0x835CBB: push    0
0x835CBD: push    34h ; '4'
0x835CBF: call    sub_772CD0
0x835CC4: or      ebx, 0FFFFFFFFh
0x835CC7: cmp     esi, ds:0B45BB8h
0x835CCD: mov     dword ptr ds:0B44134h, 260008h
0x835CD7: mov     dword ptr ds:0B447C4h, 104h
0x835CE1: jz      short loc_835D01
0x835CE3: add     [esi+60h], ebx
0x835CE6: jnz     short loc_835CEF
0x835CE8: mov     ecx, esi
0x835CEA: call    sub_7604D0
0x835CEF: mov     esi, ds:0B45BB8h
0x835CF5: test    esi, esi
0x835CF7: mov     [esp+2Ch+var_14], esi
0x835CFB: jz      short loc_835D01
0x835CFD: add     dword ptr [esi+60h], 1
0x835D01: cmp     dword ptr [esi+18h], 2
0x835D05: jnb     loc_835DEF
0x835D0B: lea     ecx, [esp+2Ch+var_10]
0x835D0F: push    ecx
0x835D10: call    sub_772630
0x835D15: add     esp, 4
0x835D18: mov     ebp, eax
0x835D1A: cmp     edi, [ebp+0]
0x835D1D: mov     byte ptr [esp+2Ch+var_4], 6
0x835D22: jz      short loc_835D43
0x835D24: test    edi, edi
0x835D26: jz      short loc_835D34
0x835D28: add     [edi+5Ch], ebx
0x835D2B: jnz     short loc_835D34
0x835D2D: mov     ecx, edi
0x835D2F: call    sub_772560
0x835D34: mov     edi, [ebp+0]
0x835D37: test    edi, edi
0x835D39: mov     [esp+2Ch+var_18], edi
0x835D3D: jz      short loc_835D43
0x835D3F: add     dword ptr [edi+5Ch], 1
0x835D43: mov     eax, [esp+2Ch+var_10]
0x835D47: test    eax, eax
0x835D49: mov     byte ptr [esp+2Ch+var_4], 1
0x835D4E: jz      short loc_835D62
0x835D50: add     [eax+5Ch], ebx
0x835D53: mov     ecx, eax
0x835D55: add     eax, 5Ch ; '\'
0x835D58: cmp     dword ptr [eax], 0
0x835D5B: jnz     short loc_835D62
0x835D5D: call    sub_772560
0x835D62: push    2
0x835D64: push    1
0x835D66: push    0
0x835D68: push    edi
0x835D69: call    sub_801110
0x835D6E: mov     edx, [esi+14h]
0x835D71: add     esp, 10h
0x835D74: push    edi; a3
0x835D75: push    edx; a2
0x835D76: mov     ecx, esi; this
0x835D78: call    sub_760010
0x835D7D: lea     eax, [esp+2Ch+var_10]
0x835D81: push    eax
0x835D82: call    sub_772630
0x835D87: add     esp, 4
0x835D8A: mov     ebp, eax
0x835D8C: cmp     edi, [ebp+0]
0x835D8F: mov     byte ptr [esp+2Ch+var_4], 7
0x835D94: jz      short loc_835DB5
0x835D96: test    edi, edi
0x835D98: jz      short loc_835DA6
0x835D9A: add     [edi+5Ch], ebx
0x835D9D: jnz     short loc_835DA6
0x835D9F: mov     ecx, edi
0x835DA1: call    sub_772560
0x835DA6: mov     edi, [ebp+0]
0x835DA9: test    edi, edi
0x835DAB: mov     [esp+2Ch+var_18], edi
0x835DAF: jz      short loc_835DB5
0x835DB1: add     dword ptr [edi+5Ch], 1
0x835DB5: mov     eax, [esp+2Ch+var_10]
0x835DB9: test    eax, eax
0x835DBB: mov     byte ptr [esp+2Ch+var_4], 1
0x835DC0: jz      short loc_835DD4
0x835DC2: add     [eax+5Ch], ebx
0x835DC5: mov     ecx, eax
0x835DC7: add     eax, 5Ch ; '\'
0x835DCA: cmp     dword ptr [eax], 0
0x835DCD: jnz     short loc_835DD4
0x835DCF: call    sub_772560
0x835DD4: push    2
0x835DD6: push    1
0x835DD8: push    1
0x835DDA: push    edi
0x835DDB: call    sub_801110
0x835DE0: mov     ecx, [esi+14h]
0x835DE3: add     esp, 10h
0x835DE6: push    edi; a3
0x835DE7: push    ecx; a2
0x835DE8: mov     ecx, esi; this
0x835DEA: call    sub_760010
0x835DEF: mov     eax, ds:0B453F8h
0x835DF4: mov     ebp, [esi+58h]
0x835DF7: cmp     ebp, eax
0x835DF9: mov     ebx, eax
0x835DFB: jz      short loc_835E2F
0x835DFD: test    ebp, ebp
0x835DFF: jz      short loc_835E1E
0x835E01: lea     edx, [ebp+4]
0x835E04: push    edx; lpAddend
0x835E05: call    dword ptr ds:0A2807Ch
0x835E0B: test    eax, eax
0x835E0D: jnz     short loc_835E1E
0x835E0F: test    ebp, ebp
0x835E11: jz      short loc_835E1E
0x835E13: mov     eax, [ebp+0]
0x835E16: mov     edx, [eax]
0x835E18: push    1
0x835E1A: mov     ecx, ebp
0x835E1C: call    edx
0x835E1E: test    ebx, ebx
0x835E20: mov     [esi+58h], ebx
0x835E23: jz      short loc_835E2F
0x835E25: add     ebx, 4
0x835E28: push    ebx; lpAddend
0x835E29: call    dword ptr ds:0A28078h
0x835E2F: mov     eax, ds:0B451F4h
0x835E34: mov     ebp, [esi+44h]
0x835E37: cmp     ebp, eax
0x835E39: mov     ebx, eax
0x835E3B: jz      short loc_835E6F
0x835E3D: test    ebp, ebp
0x835E3F: jz      short loc_835E5E
0x835E41: lea     eax, [ebp+4]
0x835E44: push    eax; lpAddend
0x835E45: call    dword ptr ds:0A2807Ch
0x835E4B: test    eax, eax
0x835E4D: jnz     short loc_835E5E
0x835E4F: test    ebp, ebp
0x835E51: jz      short loc_835E5E
0x835E53: mov     edx, [ebp+0]
0x835E56: mov     eax, [edx]
0x835E58: push    1
0x835E5A: mov     ecx, ebp
0x835E5C: call    eax
0x835E5E: test    ebx, ebx
0x835E60: mov     [esi+44h], ebx
0x835E63: jz      short loc_835E6F
0x835E65: add     ebx, 4
0x835E68: push    ebx; lpAddend
0x835E69: call    dword ptr ds:0A28078h
0x835E6F: cmp     dword ptr [esi+30h], 0
0x835E73: jnz     short loc_835E7D
0x835E75: call    sub_772DF0
0x835E7A: mov     [esi+30h], eax
0x835E7D: mov     ecx, [esi+30h]
0x835E80: push    0
0x835E82: push    1
0x835E84: push    1Bh
0x835E86: call    sub_772CD0
0x835E8B: cmp     dword ptr [esi+30h], 0
0x835E8F: jnz     short loc_835E99
0x835E91: call    sub_772DF0
0x835E96: mov     [esi+30h], eax
0x835E99: mov     ecx, [esi+30h]
0x835E9C: push    0
0x835E9E: push    2
0x835EA0: push    13h
0x835EA2: call    sub_772CD0
0x835EA7: cmp     dword ptr [esi+30h], 0
0x835EAB: jnz     short loc_835EB5
0x835EAD: call    sub_772DF0
0x835EB2: mov     [esi+30h], eax
0x835EB5: mov     ecx, [esi+30h]
0x835EB8: push    0
0x835EBA: push    2
0x835EBC: push    14h
0x835EBE: call    sub_772CD0
0x835EC3: cmp     dword ptr [esi+30h], 0
0x835EC7: jnz     short loc_835ED1
0x835EC9: call    sub_772DF0
0x835ECE: mov     [esi+30h], eax
0x835ED1: mov     ecx, [esi+30h]
0x835ED4: push    0
0x835ED6: push    0
0x835ED8: push    0Fh
0x835EDA: call    sub_772CD0
0x835EDF: cmp     dword ptr [esi+30h], 0
0x835EE3: jnz     short loc_835EED
0x835EE5: call    sub_772DF0
0x835EEA: mov     [esi+30h], eax
0x835EED: mov     ecx, [esi+30h]
0x835EF0: push    0
0x835EF2: push    1
0x835EF4: push    7
0x835EF6: call    sub_772CD0
0x835EFB: cmp     dword ptr [esi+30h], 0
0x835EFF: jnz     short loc_835F09
0x835F01: call    sub_772DF0
0x835F06: mov     [esi+30h], eax
0x835F09: mov     ecx, [esi+30h]
0x835F0C: push    0
0x835F0E: push    3
0x835F10: push    17h
0x835F12: call    sub_772CD0
0x835F17: cmp     dword ptr [esi+30h], 0
0x835F1B: jnz     short loc_835F25
0x835F1D: call    sub_772DF0
0x835F22: mov     [esi+30h], eax
0x835F25: mov     ecx, [esi+30h]
0x835F28: push    0
0x835F2A: push    0
0x835F2C: push    0Eh
0x835F2E: call    sub_772CD0
0x835F33: cmp     dword ptr [esi+30h], 0
0x835F37: jnz     short loc_835F41
0x835F39: call    sub_772DF0
0x835F3E: mov     [esi+30h], eax
0x835F41: mov     ecx, [esi+30h]
0x835F44: push    0
0x835F46: push    0
0x835F48: push    34h ; '4'
0x835F4A: call    sub_772CD0
0x835F4F: or      ebx, 0FFFFFFFFh
0x835F52: cmp     esi, ds:0B45BBCh
0x835F58: mov     dword ptr ds:0B44138h, 20006h
0x835F62: mov     dword ptr ds:0B447C8h, 104h
0x835F6C: jz      short loc_835F8C
0x835F6E: add     [esi+60h], ebx
0x835F71: jnz     short loc_835F7A
0x835F73: mov     ecx, esi
0x835F75: call    sub_7604D0
0x835F7A: mov     esi, ds:0B45BBCh
0x835F80: test    esi, esi
0x835F82: mov     [esp+2Ch+var_14], esi
0x835F86: jz      short loc_835F8C
0x835F88: add     dword ptr [esi+60h], 1
0x835F8C: cmp     dword ptr [esi+18h], 2
0x835F90: jnb     loc_83607A
0x835F96: lea     ecx, [esp+2Ch+var_10]
0x835F9A: push    ecx
0x835F9B: call    sub_772630
0x835FA0: add     esp, 4
0x835FA3: mov     ebp, eax
0x835FA5: cmp     edi, [ebp+0]
0x835FA8: mov     byte ptr [esp+2Ch+var_4], 8
0x835FAD: jz      short loc_835FCE
0x835FAF: test    edi, edi
0x835FB1: jz      short loc_835FBF
0x835FB3: add     [edi+5Ch], ebx
0x835FB6: jnz     short loc_835FBF
0x835FB8: mov     ecx, edi
0x835FBA: call    sub_772560
0x835FBF: mov     edi, [ebp+0]
0x835FC2: test    edi, edi
0x835FC4: mov     [esp+2Ch+var_18], edi
0x835FC8: jz      short loc_835FCE
0x835FCA: add     dword ptr [edi+5Ch], 1
0x835FCE: mov     eax, [esp+2Ch+var_10]
0x835FD2: test    eax, eax
0x835FD4: mov     byte ptr [esp+2Ch+var_4], 1
0x835FD9: jz      short loc_835FED
0x835FDB: add     [eax+5Ch], ebx
0x835FDE: mov     ecx, eax
0x835FE0: add     eax, 5Ch ; '\'
0x835FE3: cmp     dword ptr [eax], 0
0x835FE6: jnz     short loc_835FED
0x835FE8: call    sub_772560
0x835FED: push    2
0x835FEF: push    1
0x835FF1: push    0
0x835FF3: push    edi
0x835FF4: call    sub_801110
0x835FF9: mov     edx, [esi+14h]
0x835FFC: add     esp, 10h
0x835FFF: push    edi; a3
0x836000: push    edx; a2
0x836001: mov     ecx, esi; this
0x836003: call    sub_760010
0x836008: lea     eax, [esp+2Ch+var_10]
0x83600C: push    eax
0x83600D: call    sub_772630
0x836012: add     esp, 4
0x836015: mov     ebp, eax
0x836017: cmp     edi, [ebp+0]
0x83601A: mov     byte ptr [esp+2Ch+var_4], 9
0x83601F: jz      short loc_836040
0x836021: test    edi, edi
0x836023: jz      short loc_836031
0x836025: add     [edi+5Ch], ebx
0x836028: jnz     short loc_836031
0x83602A: mov     ecx, edi
0x83602C: call    sub_772560
0x836031: mov     edi, [ebp+0]
0x836034: test    edi, edi
0x836036: mov     [esp+2Ch+var_18], edi
0x83603A: jz      short loc_836040
0x83603C: add     dword ptr [edi+5Ch], 1
0x836040: mov     eax, [esp+2Ch+var_10]
0x836044: test    eax, eax
0x836046: mov     byte ptr [esp+2Ch+var_4], 1
0x83604B: jz      short loc_83605F
0x83604D: add     [eax+5Ch], ebx
0x836050: mov     ecx, eax
0x836052: add     eax, 5Ch ; '\'
0x836055: cmp     dword ptr [eax], 0
0x836058: jnz     short loc_83605F
0x83605A: call    sub_772560
0x83605F: push    2
0x836061: push    1
0x836063: push    1
0x836065: push    edi
0x836066: call    sub_801110
0x83606B: mov     ecx, [esi+14h]
0x83606E: add     esp, 10h
0x836071: push    edi; a3
0x836072: push    ecx; a2
0x836073: mov     ecx, esi; this
0x836075: call    sub_760010
0x83607A: mov     eax, ds:0B45400h
0x83607F: mov     ebp, [esi+58h]
0x836082: cmp     ebp, eax
0x836084: mov     ebx, eax
0x836086: jz      short loc_8360BA
0x836088: test    ebp, ebp
0x83608A: jz      short loc_8360A9
0x83608C: lea     edx, [ebp+4]
0x83608F: push    edx; lpAddend
0x836090: call    dword ptr ds:0A2807Ch
0x836096: test    eax, eax
0x836098: jnz     short loc_8360A9
0x83609A: test    ebp, ebp
0x83609C: jz      short loc_8360A9
0x83609E: mov     eax, [ebp+0]
0x8360A1: mov     edx, [eax]
0x8360A3: push    1
0x8360A5: mov     ecx, ebp
0x8360A7: call    edx
0x8360A9: test    ebx, ebx
0x8360AB: mov     [esi+58h], ebx
0x8360AE: jz      short loc_8360BA
0x8360B0: add     ebx, 4
0x8360B3: push    ebx; lpAddend
0x8360B4: call    dword ptr ds:0A28078h
0x8360BA: mov     eax, ds:0B451F8h
0x8360BF: mov     ebp, [esi+44h]
0x8360C2: cmp     ebp, eax
0x8360C4: mov     ebx, eax
0x8360C6: jz      short loc_8360FA
0x8360C8: test    ebp, ebp
0x8360CA: jz      short loc_8360E9
0x8360CC: lea     eax, [ebp+4]
0x8360CF: push    eax; lpAddend
0x8360D0: call    dword ptr ds:0A2807Ch
0x8360D6: test    eax, eax
0x8360D8: jnz     short loc_8360E9
0x8360DA: test    ebp, ebp
0x8360DC: jz      short loc_8360E9
0x8360DE: mov     edx, [ebp+0]
0x8360E1: mov     eax, [edx]
0x8360E3: push    1
0x8360E5: mov     ecx, ebp
0x8360E7: call    eax
0x8360E9: test    ebx, ebx
0x8360EB: mov     [esi+44h], ebx
0x8360EE: jz      short loc_8360FA
0x8360F0: add     ebx, 4
0x8360F3: push    ebx; lpAddend
0x8360F4: call    dword ptr ds:0A28078h
0x8360FA: cmp     dword ptr [esi+30h], 0
0x8360FE: jnz     short loc_836108
0x836100: call    sub_772DF0
0x836105: mov     [esi+30h], eax
0x836108: mov     ecx, [esi+30h]
0x83610B: push    0
0x83610D: push    1
0x83610F: push    1Bh
0x836111: call    sub_772CD0
0x836116: cmp     dword ptr [esi+30h], 0
0x83611A: jnz     short loc_836124
0x83611C: call    sub_772DF0
0x836121: mov     [esi+30h], eax
0x836124: mov     ecx, [esi+30h]
0x836127: push    0
0x836129: push    2
0x83612B: push    13h
0x83612D: call    sub_772CD0
0x836132: cmp     dword ptr [esi+30h], 0
0x836136: jnz     short loc_836140
0x836138: call    sub_772DF0
0x83613D: mov     [esi+30h], eax
0x836140: mov     ecx, [esi+30h]
0x836143: push    0
0x836145: push    2
0x836147: push    14h
0x836149: call    sub_772CD0
0x83614E: cmp     dword ptr [esi+30h], 0
0x836152: jnz     short loc_83615C
0x836154: call    sub_772DF0
0x836159: mov     [esi+30h], eax
0x83615C: mov     ecx, [esi+30h]
0x83615F: push    0
0x836161: push    0
0x836163: push    0Fh
0x836165: call    sub_772CD0
0x83616A: cmp     dword ptr [esi+30h], 0
0x83616E: jnz     short loc_836178
0x836170: call    sub_772DF0
0x836175: mov     [esi+30h], eax
0x836178: mov     ecx, [esi+30h]
0x83617B: push    0
0x83617D: push    1
0x83617F: push    7
0x836181: call    sub_772CD0
0x836186: cmp     dword ptr [esi+30h], 0
0x83618A: jnz     short loc_836194
0x83618C: call    sub_772DF0
0x836191: mov     [esi+30h], eax
0x836194: mov     ecx, [esi+30h]
0x836197: push    0
0x836199: push    3
0x83619B: push    17h
0x83619D: call    sub_772CD0
0x8361A2: cmp     dword ptr [esi+30h], 0
0x8361A6: jnz     short loc_8361B0
0x8361A8: call    sub_772DF0
0x8361AD: mov     [esi+30h], eax
0x8361B0: mov     ecx, [esi+30h]
0x8361B3: push    0
0x8361B5: push    0
0x8361B7: push    0Eh
0x8361B9: call    sub_772CD0
0x8361BE: cmp     dword ptr [esi+30h], 0
0x8361C2: jnz     short loc_8361CC
0x8361C4: call    sub_772DF0
0x8361C9: mov     [esi+30h], eax
0x8361CC: mov     ecx, [esi+30h]
0x8361CF: push    0
0x8361D1: push    0
0x8361D3: push    34h ; '4'
0x8361D5: call    sub_772CD0
0x8361DA: or      ebx, 0FFFFFFFFh
0x8361DD: test    edi, edi
0x8361DF: mov     dword ptr ds:0B4413Ch, 4020006h
0x8361E9: mov     dword ptr ds:0B447CCh, 10Ch
0x8361F3: mov     byte ptr [esp+2Ch+var_4], 0
0x8361F8: jz      short loc_836206
0x8361FA: add     [edi+5Ch], ebx
0x8361FD: jnz     short loc_836206
0x8361FF: mov     ecx, edi
0x836201: call    sub_772560
0x836206: add     [esi+60h], ebx
0x836209: mov     [esp+2Ch+var_4], ebx
0x83620D: jnz     short loc_836216
0x83620F: mov     ecx, esi
0x836211: call    sub_7604D0
0x836216: mov     ecx, dword ptr [esp+2Ch+var_C]
0x83621A: mov     large fs:0, ecx
0x836221: pop     ecx
0x836222: pop     edi
0x836223: pop     esi
0x836224: pop     ebp
0x836225: pop     ebx
0x836226: add     esp, 18h
0x836229: retn
