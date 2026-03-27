0x577C10: push    ebp
0x577C11: mov     ebp, esp
0x577C13: and     esp, 0FFFFFFF8h
0x577C16: push    0FFFFFFFFh
0x577C18: push    offset SEH_577C10
0x577C1D: mov     eax, large fs:0
0x577C23: push    eax
0x577C24: sub     esp, 0E8h
0x577C2A: push    ebx
0x577C2B: push    esi
0x577C2C: push    edi
0x577C2D: mov     eax, ds:0B30AACh
0x577C32: xor     eax, esp
0x577C34: push    eax
0x577C35: lea     eax, [esp+104h+var_C]
0x577C3C: mov     large fs:0, eax
0x577C42: mov     [esp+104h+var_D8], ecx
0x577C46: mov     ecx, [ebp+arg_0]
0x577C49: movzx   eax, word ptr [ecx+4]
0x577C4D: xor     ebx, ebx
0x577C4F: cmp     ax, 0FFFFh
0x577C53: jnz     short loc_577C6F
0x577C55: mov     eax, [ecx]
0x577C57: lea     edx, [eax+1]
0x577C5A: lea     ebx, [ebx+0]
0x577C60: mov     cl, [eax]
0x577C62: add     eax, 1
0x577C65: cmp     cl, bl
0x577C67: jnz     short loc_577C60
0x577C69: sub     eax, edx
0x577C6B: mov     esi, eax
0x577C6D: jmp     short loc_577C72
0x577C6F: movzx   esi, ax
0x577C72: push    1
0x577C74: add     esi, 1
0x577C77: push    esi
0x577C78: mov     ecx, offset FormHeap
0x577C7D: call    j_MemoryHeap_Alloc
0x577C82: push    esi
0x577C83: mov     edi, eax
0x577C85: push    ebx
0x577C86: push    edi
0x577C87: mov     [esp+110h+var_D4], edi
0x577C8B: call    __memset
0x577C90: mov     eax, [ebp+arg_0]
0x577C93: mov     ecx, [eax]
0x577C95: add     esp, 0Ch
0x577C98: mov     edx, edi
0x577C9A: lea     ebx, [ebx+0]
0x577CA0: mov     al, [ecx]
0x577CA2: mov     [edx], al
0x577CA4: add     ecx, 1
0x577CA7: add     edx, 1
0x577CAA: cmp     al, bl
0x577CAC: jnz     short loc_577CA0
0x577CAE: mov     [esp+104h+var_E8], ebx
0x577CB2: mov     [esp+104h+var_F0], ebx
0x577CB6: mov     byte ptr [esp+104h+var_E4], bl
0x577CBA: mov     [esp+104h+var_B4.m_data], ebx
0x577CBE: mov     [esp+104h+var_B4.m_dataLen], bx
0x577CC3: mov     [esp+104h+var_B4.m_bufLen], bx
0x577CC8: mov     [esp+104h+var_4], ebx
0x577CCF: mov     [esp+104h+Str1], ebx
0x577CD3: mov     [esp+104h+var_BC], bx
0x577CD8: mov     [esp+104h+var_BA], bx
0x577CDD: mov     [esp+104h+var_C8.m_data], ebx
0x577CE1: mov     [esp+104h+var_C8.m_dataLen], bx
0x577CE6: mov     [esp+104h+var_C8.m_bufLen], bx
0x577CEB: mov     [esp+104h+Src], ebx
0x577CEF: mov     [esp+104h+var_DC], bx
0x577CF4: mov     [esp+104h+var_DA], bx
0x577CF9: mov     [esp+104h+a2], ebx
0x577CFD: mov     [esp+104h+var_94], bx
0x577D02: mov     [esp+104h+var_92], bx
0x577D07: fld     dword ptr ds:0A68A90h
0x577D0D: fstp    [esp+104h+var_AC]
0x577D11: mov     ecx, [esp+104h+var_AC]
0x577D15: fld     dword ptr ds:0A68A8Ch
0x577D1B: push    1
0x577D1D: fstp    [esp+108h+var_A8]
0x577D21: mov     edx, [esp+108h+var_A8]
0x577D25: fld     dword ptr ds:0A68A88h
0x577D2B: sub     esp, 10h
0x577D2E: mov     eax, esp
0x577D30: fstp    [esp+118h+var_A4]
0x577D34: fld1
0x577D36: mov     [eax], ecx
0x577D38: mov     ecx, [esp+118h+var_A4]
0x577D3C: fstp    [esp+118h+var_A0]
0x577D40: mov     [eax+4], edx
0x577D43: mov     edx, [esp+118h+var_A0]
0x577D47: mov     [eax+8], ecx
0x577D4A: push    20h ; ' '
0x577D4C: push    ebx
0x577D4D: lea     ecx, [esp+120h+var_48]
0x577D54: mov     byte ptr [esp+120h+var_4], 4
0x577D5C: mov     [eax+0Ch], edx
0x577D5F: call    sub_576F30
0x577D64: push    ebx
0x577D65: lea     eax, [esp+108h+var_E4]
0x577D69: push    eax
0x577D6A: lea     ecx, [esp+10Ch+var_F0]
0x577D6E: push    ecx
0x577D6F: mov     ecx, [esp+110h+var_D8]
0x577D73: push    4
0x577D75: push    ebx
0x577D76: lea     edx, [esp+118h+var_E8]
0x577D7A: push    edx
0x577D7B: push    edi
0x577D7C: lea     eax, [esp+120h+var_AC]
0x577D80: push    eax
0x577D81: mov     byte ptr [esp+124h+var_4], 5
0x577D89: mov     [esp+124h+var_F1], bl
0x577D8D: mov     [esp+124h+var_EC], ebx
0x577D91: mov     byte ptr [esp+124h+var_D0], bl
0x577D95: mov     [esp+124h+var_CC], ebx
0x577D99: call    sub_574E00
0x577D9E: mov     ecx, [esp+104h+var_AC]
0x577DA2: push    ecx
0x577DA3: call    FormHeapFree
0x577DA8: mov     esi, [ebp+arg_4]
0x577DAB: add     esp, 4
0x577DAE: cmp     [esp+104h+var_F0], 1
0x577DB3: jnz     loc_578867
0x577DB9: push    1Ch; Size
0x577DBB: call    FormHeapAlloc
0x577DC0: add     esp, 4
0x577DC3: cmp     eax, ebx
0x577DC5: jz      short loc_577DEA
0x577DC7: mov     ecx, [esi+24h]
0x577DCA: mov     edx, [esi+20h]
0x577DCD: mov     esi, [esi+1Ch]
0x577DD0: mov     [eax+0Ch], ebx
0x577DD3: mov     [eax+4], ebx
0x577DD6: mov     [eax+8], ebx
0x577DD9: mov     dword ptr [eax], offset ??_7?$NiTList@PAVTextPage@FontManager@@@@6B@; const NiTList<FontManager::TextPage *>::`vftable'
0x577DDF: mov     [eax+10h], esi
0x577DE2: mov     [eax+14h], edx
0x577DE5: mov     [eax+18h], ecx
0x577DE8: jmp     short loc_577DEC
0x577DEA: xor     eax, eax
0x577DEC: mov     [esp+104h+var_B8], eax
0x577DF0: mov     [esp+104h+var_CC], eax
0x577DF4: mov     [esp+104h+var_E8], ebx
0x577DF8: push    1
0x577DFA: lea     edx, [esp+108h+var_E4]
0x577DFE: push    edx
0x577DFF: mov     edx, [esp+10Ch+var_D4]
0x577E03: lea     eax, [esp+10Ch+var_F0]
0x577E07: push    eax
0x577E08: push    ebx
0x577E09: push    1
0x577E0B: lea     ecx, [esp+118h+var_E8]
0x577E0F: push    ecx
0x577E10: mov     ecx, [esp+11Ch+var_D8]
0x577E14: push    edx
0x577E15: lea     eax, [esp+120h+var_78]
0x577E1C: push    eax
0x577E1D: call    sub_574E00
0x577E22: mov     eax, [eax]
0x577E24: push    ebx; a3
0x577E25: push    eax; a2
0x577E26: lea     ecx, [esp+10Ch+var_B4]; this
0x577E2A: mov     byte ptr [esp+10Ch+var_4], 6
0x577E32: call    BSStringT_Set
0x577E37: mov     ecx, [esp+104h+var_78]
0x577E3E: push    ecx
0x577E3F: mov     byte ptr [esp+108h+var_4], 5
0x577E47: call    FormHeapFree
0x577E4C: mov     edi, [esp+108h+var_B4.m_data]
0x577E50: add     esp, 4
0x577E53: cmp     edi, ebx
0x577E55: mov     [esp+104h+var_78], ebx
0x577E5C: mov     [esp+104h+var_72], bx
0x577E64: mov     [esp+104h+var_74], bx
0x577E6C: jz      loc_577F32
0x577E72: cmp     [esp+104h+var_F1], bl
0x577E76: jz      short loc_577EBD
0x577E78: mov     edx, [esp+104h+var_D0]
0x577E7C: mov     eax, [esp+104h+var_EC]
0x577E80: push    edx
0x577E81: push    eax
0x577E82: lea     ecx, [esp+10Ch+var_48]
0x577E89: mov     [esp+10Ch+var_F1], bl
0x577E8D: mov     byte ptr [esp+10Ch+var_44], bl
0x577E94: call    sub_577060
0x577E99: mov     ecx, [esp+10Ch+var_B8]
0x577E9D: push    eax
0x577E9E: call    sub_577B40
0x577EA3: push    ebx; a3
0x577EA4: push    offset EmptyString; a2
0x577EA9: lea     ecx, [esp+10Ch+var_2C]; this
0x577EB0: mov     [esp+10Ch+var_EC], ebx
0x577EB4: mov     byte ptr [esp+10Ch+var_D0], bl
0x577EB8: call    BSStringT_Set
0x577EBD: push    edi
0x577EBE: lea     ecx, [esp+108h+a2]
0x577EC2: call    BSStringT_Append
0x577EC7: xor     esi, esi
0x577EC9: mov     ax, [esp+104h+var_B4.m_dataLen]
0x577ECE: cmp     ax, 0FFFFh
0x577ED2: jnz     short loc_577EED
0x577ED4: mov     eax, edi
0x577ED6: lea     edx, [eax+1]
0x577ED9: lea     esp, [esp+0]
0x577EE0: mov     cl, [eax]
0x577EE2: add     eax, 1
0x577EE5: cmp     cl, bl
0x577EE7: jnz     short loc_577EE0
0x577EE9: sub     eax, edx
0x577EEB: jmp     short loc_577EF0
0x577EED: movzx   eax, ax
0x577EF0: cmp     esi, eax
0x577EF2: jnb     short loc_577F32
0x577EF4: movzx   ecx, byte ptr [edi+esi]
0x577EF8: push    ecx
0x577EF9: lea     ecx, [esp+108h+var_48]
0x577F00: call    sub_577120
0x577F05: mov     edx, [esp+104h+var_D0]
0x577F09: mov     eax, [esp+104h+var_EC]
0x577F0D: push    edx
0x577F0E: push    eax
0x577F0F: lea     ecx, [esp+10Ch+var_48]
0x577F16: call    sub_577060
0x577F1B: mov     ecx, [esp+10Ch+var_B8]
0x577F1F: push    eax
0x577F20: call    sub_577B40
0x577F25: mov     [esp+104h+var_EC], ebx
0x577F29: mov     byte ptr [esp+104h+var_D0], bl
0x577F2D: add     esi, 1
0x577F30: jmp     short loc_577EC9
0x577F32: test    byte ptr [esp+104h+var_F0], 20h
0x577F37: jnz     loc_578852
0x577F3D: push    1
0x577F3F: lea     ecx, [esp+108h+var_E4]
0x577F43: push    ecx
0x577F44: mov     ecx, [esp+10Ch+var_D4]
0x577F48: lea     edx, [esp+10Ch+var_F0]
0x577F4C: push    edx
0x577F4D: push    ebx
0x577F4E: push    6
0x577F50: lea     eax, [esp+118h+var_E8]
0x577F54: push    eax
0x577F55: push    ecx
0x577F56: mov     ecx, [esp+120h+var_D8]
0x577F5A: lea     edx, [esp+120h+var_70]
0x577F61: push    edx
0x577F62: call    sub_574E00
0x577F67: mov     eax, [eax]
0x577F69: push    ebx; a3
0x577F6A: push    eax; a2
0x577F6B: lea     ecx, [esp+10Ch+Str1]; this
0x577F6F: mov     byte ptr [esp+10Ch+var_4], 7
0x577F77: call    BSStringT_Set
0x577F7C: mov     eax, [esp+104h+var_70]
0x577F83: push    eax
0x577F84: mov     byte ptr [esp+108h+var_4], 5
0x577F8C: call    FormHeapFree
0x577F91: add     esp, 4
0x577F94: mov     [esp+104h+var_70], ebx
0x577F9B: mov     [esp+104h+var_6A], bx
0x577FA3: mov     [esp+104h+var_6C], bx
0x577FAB: xor     edi, edi
0x577FAD: mov     ax, [esp+104h+var_BC]
0x577FB2: cmp     ax, 0FFFFh
0x577FB6: jnz     short loc_577FCD
0x577FB8: mov     eax, [esp+104h+Str1]
0x577FBC: lea     edx, [eax+1]
0x577FBF: nop
0x577FC0: mov     cl, [eax]
0x577FC2: add     eax, 1
0x577FC5: cmp     cl, bl
0x577FC7: jnz     short loc_577FC0
0x577FC9: sub     eax, edx
0x577FCB: jmp     short loc_577FD0
0x577FCD: movzx   eax, ax
0x577FD0: cmp     edi, eax
0x577FD2: jnb     short loc_577FF7
0x577FD4: mov     eax, [esp+104h+Str1]
0x577FD8: mov     ecx, eax
0x577FDA: neg     ecx
0x577FDC: sbb     ecx, ecx
0x577FDE: and     ecx, edi
0x577FE0: movsx   edx, byte ptr [ecx+eax]
0x577FE4: lea     esi, [ecx+eax]
0x577FE7: push    edx; C
0x577FE8: call    _toupper
0x577FED: add     esp, 4
0x577FF0: mov     [esi], al
0x577FF2: add     edi, 1
0x577FF5: jmp     short loc_577FAD
0x577FF7: mov     al, byte ptr [esp+104h+var_F0]
0x577FFB: test    al, 20h
0x577FFD: jnz     loc_578852
0x578003: test    al, 4
0x578005: jz      loc_5787AF
0x57800B: push    ebx
0x57800C: lea     eax, [esp+108h+var_E4]
0x578010: push    eax
0x578011: mov     eax, [esp+10Ch+var_D4]
0x578015: lea     ecx, [esp+10Ch+var_F0]
0x578019: push    ecx
0x57801A: push    4
0x57801C: push    ebx
0x57801D: lea     edx, [esp+118h+var_E8]
0x578021: push    edx
0x578022: push    eax
0x578023: lea     ecx, [esp+120h+var_88]
0x57802A: push    ecx
0x57802B: mov     ecx, [esp+124h+var_D8]
0x57802F: call    sub_574E00
0x578034: mov     edx, [esp+104h+var_88]
0x578038: push    edx
0x578039: call    FormHeapFree
0x57803E: add     esp, 4
0x578041: test    byte ptr [esp+104h+var_F0], 22h
0x578046: mov     [esp+104h+var_88], ebx
0x57804A: mov     [esp+104h+var_82], bx
0x578052: mov     [esp+104h+var_84], bx
0x57805A: jnz     loc_5787AF
0x578060: push    1
0x578062: lea     eax, [esp+108h+var_E4]
0x578066: push    eax
0x578067: mov     eax, [esp+10Ch+var_D4]
0x57806B: lea     ecx, [esp+10Ch+var_F0]
0x57806F: push    ecx
0x578070: push    ebx
0x578071: push    16h
0x578073: lea     edx, [esp+118h+var_E8]
0x578077: push    edx
0x578078: push    eax
0x578079: lea     ecx, [esp+120h+var_60]
0x578080: push    ecx
0x578081: mov     ecx, [esp+124h+var_D8]
0x578085: call    sub_574E00
0x57808A: mov     eax, [eax]
0x57808C: push    ebx; a3
0x57808D: push    eax; a2
0x57808E: lea     ecx, [esp+10Ch+var_C8]; this
0x578092: mov     byte ptr [esp+10Ch+var_4], 8
0x57809A: call    BSStringT_Set
0x57809F: mov     edx, [esp+104h+var_60]
0x5780A6: push    edx
0x5780A7: mov     byte ptr [esp+108h+var_4], 5
0x5780AF: call    FormHeapFree
0x5780B4: add     esp, 4
0x5780B7: mov     [esp+104h+var_60], ebx
0x5780BE: mov     [esp+104h+var_5A], bx
0x5780C6: mov     [esp+104h+var_5C], bx
0x5780CE: xor     edi, edi
0x5780D0: mov     ax, [esp+104h+var_C8.m_dataLen]
0x5780D5: cmp     ax, 0FFFFh
0x5780D9: jnz     short loc_5780EF
0x5780DB: mov     eax, [esp+104h+var_C8.m_data]
0x5780DF: lea     edx, [eax+1]
0x5780E2: mov     cl, [eax]
0x5780E4: add     eax, 1
0x5780E7: cmp     cl, bl
0x5780E9: jnz     short loc_5780E2
0x5780EB: sub     eax, edx
0x5780ED: jmp     short loc_5780F2
0x5780EF: movzx   eax, ax
0x5780F2: cmp     edi, eax
0x5780F4: jnb     short loc_578119
0x5780F6: mov     eax, [esp+104h+var_C8.m_data]
0x5780FA: mov     ecx, eax
0x5780FC: neg     ecx
0x5780FE: sbb     ecx, ecx
0x578100: and     ecx, edi
0x578102: movsx   edx, byte ptr [ecx+eax]
0x578106: lea     esi, [ecx+eax]
0x578109: push    edx; C
0x57810A: call    _toupper
0x57810F: add     esp, 4
0x578112: mov     [esi], al
0x578114: add     edi, 1
0x578117: jmp     short loc_5780D0
0x578119: mov     al, byte ptr [esp+104h+var_F0]
0x57811D: test    al, 22h
0x57811F: jnz     loc_5787AF
0x578125: test    al, 4
0x578127: push    ebx; a3
0x578128: jz      short loc_578198
0x57812A: push    offset aTrue; "true"
0x57812F: lea     ecx, [esp+10Ch+Src]; this
0x578133: call    BSStringT_Set
0x578138: mov     esi, [esp+104h+Str1]
0x57813C: cmp     esi, ebx
0x57813E: jz      loc_5783B1
0x578144: push    offset off_A68AF4; Str2
0x578149: push    esi; Str1
0x57814A: call    __strcmp
0x57814F: add     esp, 8
0x578152: cmp     eax, ebx
0x578154: jnz     loc_5783B1
0x57815A: mov     edi, [esp+104h+var_C8.m_data]
0x57815E: cmp     edi, ebx
0x578160: mov     [esp+104h+var_F1], 1
0x578165: jz      loc_578400
0x57816B: push    offset off_A68AF0; Str2
0x578170: push    edi; Str1
0x578171: call    __strcmp
0x578176: add     esp, 8
0x578179: cmp     eax, ebx
0x57817B: jnz     loc_57834B
0x578181: mov     eax, [esp+104h+Src]
0x578185: push    ebx; a3
0x578186: push    eax; a2
0x578187: lea     ecx, [esp+10Ch+var_2C]; this
0x57818E: call    BSStringT_Set
0x578193: jmp     loc_578400
0x578198: lea     eax, [esp+108h+var_E4]
0x57819C: push    eax
0x57819D: mov     eax, [esp+10Ch+var_D4]
0x5781A1: lea     ecx, [esp+10Ch+var_F0]
0x5781A5: push    ecx
0x5781A6: push    4
0x5781A8: push    ebx
0x5781A9: lea     edx, [esp+118h+var_E8]
0x5781AD: push    edx
0x5781AE: push    eax
0x5781AF: lea     ecx, [esp+120h+var_68]
0x5781B6: push    ecx
0x5781B7: mov     ecx, [esp+124h+var_D8]
0x5781BB: call    sub_574E00
0x5781C0: mov     edx, [esp+104h+var_68]
0x5781C7: push    edx
0x5781C8: call    FormHeapFree
0x5781CD: mov     eax, [esp+108h+var_F0]
0x5781D1: add     esp, 4
0x5781D4: test    al, 22h
0x5781D6: mov     [esp+104h+var_68], ebx
0x5781DD: mov     [esp+104h+var_62], bx
0x5781E5: mov     [esp+104h+var_64], bx
0x5781ED: jnz     loc_5787AF
0x5781F3: cmp     eax, 8
0x5781F6: push    1
0x5781F8: jnz     loc_578298
0x5781FE: mov     esi, [esp+108h+var_D4]
0x578202: mov     edi, [esp+108h+var_D8]
0x578206: add     [esp+108h+var_E8], 1
0x57820B: lea     eax, [esp+108h+var_E4]
0x57820F: push    eax
0x578210: lea     ecx, [esp+10Ch+var_F0]
0x578214: push    ecx
0x578215: push    ebx
0x578216: push    0Ah
0x578218: lea     edx, [esp+118h+var_E8]
0x57821C: push    edx
0x57821D: push    esi
0x57821E: lea     eax, [esp+120h+var_80]
0x578225: push    eax
0x578226: mov     ecx, edi
0x578228: call    sub_574E00
0x57822D: mov     eax, [eax]
0x57822F: push    ebx; a3
0x578230: push    eax; a2
0x578231: lea     ecx, [esp+10Ch+Src]; this
0x578235: mov     byte ptr [esp+10Ch+var_4], 9
0x57823D: call    BSStringT_Set
0x578242: mov     ecx, [esp+104h+var_80]
0x578249: push    ecx
0x57824A: mov     byte ptr [esp+108h+var_4], 5
0x578252: call    FormHeapFree
0x578257: mov     eax, [esp+108h+var_E8]
0x57825B: mov     dl, [esi+eax]
0x57825E: add     eax, 1
0x578261: mov     [esp+108h+var_E8], eax
0x578265: add     esp, 4
0x578268: mov     byte ptr [esp+104h+var_E4], dl
0x57826C: mov     eax, [esp+104h+var_E4]
0x578270: push    eax
0x578271: mov     ecx, edi
0x578273: mov     [esp+108h+var_80], ebx
0x57827A: mov     [esp+108h+var_7A], bx
0x578282: mov     [esp+108h+var_7C], bx
0x57828A: call    sub_573760
0x57828F: mov     [esp+104h+var_F0], eax
0x578293: jmp     loc_578138
0x578298: lea     ecx, [esp+108h+var_E4]
0x57829C: push    ecx
0x57829D: mov     ecx, [esp+10Ch+var_D4]
0x5782A1: lea     edx, [esp+10Ch+var_F0]
0x5782A5: push    edx
0x5782A6: push    ebx
0x5782A7: push    6
0x5782A9: lea     eax, [esp+118h+var_E8]
0x5782AD: push    eax
0x5782AE: push    ecx
0x5782AF: mov     ecx, [esp+120h+var_D8]
0x5782B3: lea     edx, [esp+120h+var_AC]
0x5782B7: push    edx
0x5782B8: call    sub_574E00
0x5782BD: mov     eax, [eax]
0x5782BF: push    ebx; a3
0x5782C0: push    eax; a2
0x5782C1: lea     ecx, [esp+10Ch+Src]; this
0x5782C5: mov     byte ptr [esp+10Ch+var_4], 0Ah
0x5782CD: call    BSStringT_Set
0x5782D2: mov     eax, [esp+104h+var_AC]
0x5782D6: push    eax
0x5782D7: mov     byte ptr [esp+108h+var_4], 5
0x5782DF: call    FormHeapFree
0x5782E4: add     esp, 4
0x5782E7: mov     [esp+104h+var_AC], ebx
0x5782EB: mov     word ptr [esp+104h+var_A8+2], bx
0x5782F0: mov     word ptr [esp+104h+var_A8], bx
0x5782F5: xor     edi, edi
0x5782F7: mov     ax, [esp+104h+var_DC]
0x5782FC: cmp     ax, 0FFFFh
0x578300: jnz     short loc_57831D
0x578302: mov     eax, [esp+104h+Src]
0x578306: lea     edx, [eax+1]
0x578309: lea     esp, [esp+0]
0x578310: mov     cl, [eax]
0x578312: add     eax, 1
0x578315: cmp     cl, bl
0x578317: jnz     short loc_578310
0x578319: sub     eax, edx
0x57831B: jmp     short loc_578320
0x57831D: movzx   eax, ax
0x578320: cmp     edi, eax
0x578322: jnb     loc_578138
0x578328: mov     eax, [esp+104h+Src]
0x57832C: mov     ecx, eax
0x57832E: neg     ecx
0x578330: sbb     ecx, ecx
0x578332: and     ecx, edi
0x578334: movsx   edx, byte ptr [ecx+eax]
0x578338: lea     esi, [ecx+eax]
0x57833B: push    edx; C
0x57833C: call    _toupper
0x578341: add     esp, 4
0x578344: mov     [esi], al
0x578346: add     edi, 1
0x578349: jmp     short loc_5782F7
0x57834B: push    offset aWidth; "WIDTH"
0x578350: push    edi; Str1
0x578351: call    __strcmp
0x578356: add     esp, 8
0x578359: cmp     eax, ebx
0x57835B: jnz     short loc_57837C
0x57835D: mov     edx, [esp+104h+Src]
0x578361: lea     ecx, [esp+104h+var_24]
0x578368: push    ecx
0x578369: push    offset aI; "%i"
0x57836E: push    edx; Src
0x57836F: call    _sscanf
0x578374: add     esp, 0Ch
0x578377: jmp     loc_578400
0x57837C: push    offset aHeight; "HEIGHT"
0x578381: push    edi; Str1
0x578382: call    __strcmp
0x578387: add     esp, 8
0x57838A: cmp     eax, ebx
0x57838C: jnz     short loc_578400
0x57838E: mov     ecx, [esp+104h+Src]
0x578392: lea     eax, [esp+104h+var_20]
0x578399: push    eax
0x57839A: push    offset aI; "%i"
0x57839F: push    ecx; Src
0x5783A0: call    _sscanf
0x5783A5: add     esp, 0Ch
0x5783A8: mov     [esp+104h+var_1C], ebx
0x5783AF: jmp     short loc_578400
0x5783B1: cmp     [esp+104h+var_F1], bl
0x5783B5: jz      short loc_5783FC
0x5783B7: mov     edx, [esp+104h+var_D0]
0x5783BB: mov     eax, [esp+104h+var_EC]
0x5783BF: push    edx
0x5783C0: push    eax
0x5783C1: lea     ecx, [esp+10Ch+var_48]
0x5783C8: mov     [esp+10Ch+var_F1], bl
0x5783CC: mov     byte ptr [esp+10Ch+var_44], bl
0x5783D3: call    sub_577060
0x5783D8: mov     ecx, [esp+10Ch+var_B8]
0x5783DC: push    eax
0x5783DD: call    sub_577B40
0x5783E2: push    ebx; a3
0x5783E3: push    offset EmptyString; a2
0x5783E8: lea     ecx, [esp+10Ch+var_2C]; this
0x5783EF: mov     [esp+10Ch+var_EC], ebx
0x5783F3: mov     byte ptr [esp+10Ch+var_D0], bl
0x5783F7: call    BSStringT_Set
0x5783FC: mov     edi, [esp+104h+var_C8.m_data]
0x578400: cmp     esi, ebx
0x578402: jz      loc_5787A4
0x578408: push    offset off_A68ADC; Str2
0x57840D: push    esi; Str1
0x57840E: call    __strcmp
0x578413: add     esp, 8
0x578416: cmp     eax, ebx
0x578418: jnz     loc_5784B7
0x57841E: add     [esp+104h+var_EC], 1
0x578423: cmp     edi, ebx
0x578425: jz      loc_5787A4
0x57842B: push    offset aAlign; "ALIGN"
0x578430: push    edi; Str1
0x578431: call    __strcmp
0x578436: add     esp, 8
0x578439: cmp     eax, ebx
0x57843B: jnz     loc_5787A4
0x578441: mov     esi, [esp+104h+Src]
0x578445: cmp     esi, ebx
0x578447: jz      loc_5787A4
0x57844D: push    offset aLeft; "LEFT"
0x578452: push    esi; Str1
0x578453: call    __strcmp
0x578458: add     esp, 8
0x57845B: cmp     eax, ebx
0x57845D: jnz     short loc_57846F
0x57845F: mov     [esp+104h+var_30], 1
0x57846A: jmp     loc_5787A4
0x57846F: push    offset aCenter; "CENTER"
0x578474: push    esi; Str1
0x578475: call    __strcmp
0x57847A: add     esp, 8
0x57847D: cmp     eax, ebx
0x57847F: jnz     short loc_578491
0x578481: mov     [esp+104h+var_30], 2
0x57848C: jmp     loc_5787A4
0x578491: push    offset aRight; "RIGHT"
0x578496: push    esi; Str1
0x578497: call    __strcmp
0x57849C: add     esp, 8
0x57849F: cmp     eax, ebx
0x5784A1: jnz     loc_5787A4
0x5784A7: mov     [esp+104h+var_30], 4
0x5784B2: jmp     loc_5787A4
0x5784B7: push    offset aFont; "FONT"
0x5784BC: push    esi; Str1
0x5784BD: call    __strcmp
0x5784C2: add     esp, 8
0x5784C5: cmp     eax, ebx
0x5784C7: jnz     loc_5787A4
0x5784CD: cmp     edi, ebx
0x5784CF: jz      loc_5787A4
0x5784D5: push    offset aFace; "FACE"
0x5784DA: push    edi; Str1
0x5784DB: call    __strcmp
0x5784E0: add     esp, 8
0x5784E3: cmp     eax, ebx
0x5784E5: jnz     short loc_578544
0x5784E7: xor     esi, esi
0x5784E9: lea     esp, [esp+0]
0x5784F0: mov     ecx, [esp+104h+var_D8]
0x5784F4: mov     edx, [ecx+esi*4]
0x5784F7: mov     eax, [edx+4]
0x5784FA: push    eax; Str2
0x5784FB: mov     eax, [esp+108h+Src]
0x5784FF: push    eax; Str1
0x578500: call    __strcmp
0x578505: add     esp, 8
0x578508: test    eax, eax
0x57850A: jz      short loc_578529
0x57850C: mov     ecx, [esp+104h+Src]
0x578510: push    ecx; Str
0x578511: lea     edi, [esi+1]
0x578514: call    j__atol
0x578519: add     esp, 4
0x57851C: cmp     edi, eax
0x57851E: jz      short loc_578529
0x578520: mov     esi, edi
0x578522: cmp     esi, 5
0x578525: jl      short loc_5784F0
0x578527: jmp     short loc_578544
0x578529: mov     edx, [esp+104h+var_44]
0x578530: push    edx
0x578531: lea     ecx, [esp+108h+var_48]
0x578538: mov     [esp+108h+var_48], esi
0x57853F: call    sub_577120
0x578544: mov     eax, [esp+104h+var_C8.m_data]
0x578548: push    offset aColor; "COLOR"
0x57854D: push    eax; Str1
0x57854E: call    __strcmp
0x578553: add     esp, 8
0x578556: cmp     eax, ebx
0x578558: jnz     loc_5787A4
0x57855E: mov     ax, [esp+104h+var_DC]
0x578563: cmp     ax, 0FFFFh
0x578567: mov     esi, [esp+104h+Src]
0x57856B: jnz     short loc_57857F
0x57856D: mov     eax, esi
0x57856F: lea     edx, [eax+1]
0x578572: mov     cl, [eax]
0x578574: add     eax, 1
0x578577: cmp     cl, bl
0x578579: jnz     short loc_578572
0x57857B: sub     eax, edx
0x57857D: jmp     short loc_578582
0x57857F: movzx   eax, ax
0x578582: cmp     eax, 6
0x578585: jnz     loc_5787A4
0x57858B: movsx   ecx, byte ptr [esi]
0x57858E: push    ecx; C
0x57858F: call    _toupper
0x578594: add     esp, 4
0x578597: cmp     eax, 41h ; 'A'
0x57859A: jl      short loc_5785AD
0x57859C: movsx   edx, byte ptr [esi]
0x57859F: push    edx; C
0x5785A0: call    _toupper
0x5785A5: add     esp, 4
0x5785A8: sub     eax, 37h ; '7'
0x5785AB: jmp     short loc_5785BC
0x5785AD: movsx   eax, byte ptr [esi]
0x5785B0: push    eax; C
0x5785B1: call    _toupper
0x5785B6: add     esp, 4
0x5785B9: sub     eax, 30h ; '0'
0x5785BC: mov     edi, [esp+104h+Src]
0x5785C0: movsx   ecx, byte ptr [edi+1]
0x5785C4: shl     eax, 4
0x5785C7: push    ecx; C
0x5785C8: mov     esi, eax
0x5785CA: call    _toupper
0x5785CF: add     esp, 4
0x5785D2: cmp     eax, 41h ; 'A'
0x5785D5: jl      short loc_5785E9
0x5785D7: movsx   edx, byte ptr [edi+1]
0x5785DB: push    edx; C
0x5785DC: call    _toupper
0x5785E1: add     esp, 4
0x5785E4: sub     eax, 37h ; '7'
0x5785E7: jmp     short loc_5785F9
0x5785E9: movsx   eax, byte ptr [edi+1]
0x5785ED: push    eax; C
0x5785EE: call    _toupper
0x5785F3: add     esp, 4
0x5785F6: sub     eax, 30h ; '0'
0x5785F9: add     esi, eax
0x5785FB: xor     eax, eax
0x5785FD: cmp     esi, ebx
0x5785FF: setle   al
0x578602: sub     eax, 1
0x578605: and     eax, esi
0x578607: cmp     eax, 0FFh
0x57860C: mov     [esp+104h+var_9C], eax
0x578610: jl      short loc_57861A
0x578612: mov     [esp+104h+var_9C], 0FFh
0x57861A: movsx   ecx, byte ptr [edi+2]
0x57861E: push    ecx; C
0x57861F: call    _toupper
0x578624: add     esp, 4
0x578627: cmp     eax, 41h ; 'A'
0x57862A: jl      short loc_57863E
0x57862C: movsx   edx, byte ptr [edi+2]
0x578630: push    edx; C
0x578631: call    _toupper
0x578636: add     esp, 4
0x578639: sub     eax, 37h ; '7'
0x57863C: jmp     short loc_57864E
0x57863E: movsx   eax, byte ptr [edi+2]
0x578642: push    eax; C
0x578643: call    _toupper
0x578648: add     esp, 4
0x57864B: sub     eax, 30h ; '0'
0x57864E: movsx   ecx, byte ptr [edi+3]
0x578652: shl     eax, 4
0x578655: push    ecx; C
0x578656: mov     esi, eax
0x578658: call    _toupper
0x57865D: add     esp, 4
0x578660: cmp     eax, 41h ; 'A'
0x578663: jl      short loc_578677
0x578665: movsx   edx, byte ptr [edi+3]
0x578669: push    edx; C
0x57866A: call    _toupper
0x57866F: add     esp, 4
0x578672: sub     eax, 37h ; '7'
0x578675: jmp     short loc_578687
0x578677: movsx   eax, byte ptr [edi+3]
0x57867B: push    eax; C
0x57867C: call    _toupper
0x578681: add     esp, 4
0x578684: sub     eax, 30h ; '0'
0x578687: add     esi, eax
0x578689: xor     eax, eax
0x57868B: cmp     esi, ebx
0x57868D: setle   al
0x578690: sub     eax, 1
0x578693: and     eax, esi
0x578695: cmp     eax, 0FFh
0x57869A: mov     [esp+104h+var_8C], eax
0x57869E: jl      short loc_5786A8
0x5786A0: mov     [esp+104h+var_8C], 0FFh
0x5786A8: movsx   ecx, byte ptr [edi+4]
0x5786AC: push    ecx; C
0x5786AD: call    _toupper
0x5786B2: add     esp, 4
0x5786B5: cmp     eax, 41h ; 'A'
0x5786B8: jl      short loc_5786CC
0x5786BA: movsx   edx, byte ptr [edi+4]
0x5786BE: push    edx; C
0x5786BF: call    _toupper
0x5786C4: add     esp, 4
0x5786C7: sub     eax, 37h ; '7'
0x5786CA: jmp     short loc_5786DC
0x5786CC: movsx   eax, byte ptr [edi+4]
0x5786D0: push    eax; C
0x5786D1: call    _toupper
0x5786D6: add     esp, 4
0x5786D9: sub     eax, 30h ; '0'
0x5786DC: movsx   ecx, byte ptr [edi+5]
0x5786E0: shl     eax, 4
0x5786E3: push    ecx; C
0x5786E4: mov     esi, eax
0x5786E6: call    _toupper
0x5786EB: add     esp, 4
0x5786EE: cmp     eax, 41h ; 'A'
0x5786F1: jl      short loc_578705
0x5786F3: movsx   edx, byte ptr [edi+5]
0x5786F7: push    edx; C
0x5786F8: call    _toupper
0x5786FD: add     esp, 4
0x578700: sub     eax, 37h ; '7'
0x578703: jmp     short loc_578715
0x578705: movsx   eax, byte ptr [edi+5]
0x578709: push    eax; C
0x57870A: call    _toupper
0x57870F: add     esp, 4
0x578712: sub     eax, 30h ; '0'
0x578715: add     esi, eax
0x578717: xor     eax, eax
0x578719: cmp     esi, ebx
0x57871B: setle   al
0x57871E: sub     eax, 1
0x578721: and     eax, esi
0x578723: cmp     eax, 0FFh
0x578728: mov     [esp+104h+var_90], eax
0x57872C: jl      short loc_578736
0x57872E: mov     [esp+104h+var_90], 0FFh
0x578736: fild    [esp+104h+var_9C]
0x57873A: fld     qword ptr ds:0A3DDD8h
0x578740: fdiv    st(1), st
0x578742: fxch    st(1)
0x578744: fstp    [esp+104h+var_58]
0x57874B: fild    [esp+104h+var_8C]
0x57874F: mov     ecx, [esp+104h+var_58]
0x578756: mov     [esp+104h+var_40], ecx
0x57875D: fdiv    st, st(1)
0x57875F: fstp    [esp+104h+var_54]
0x578766: mov     edx, [esp+104h+var_54]
0x57876D: mov     [esp+104h+var_3C], edx
0x578774: fidivr  [esp+104h+var_90]
0x578778: fstp    [esp+104h+var_50]
0x57877F: fld1
0x578781: mov     eax, [esp+104h+var_50]
0x578788: fstp    [esp+104h+var_4C]
0x57878F: mov     [esp+104h+var_38], eax
0x578796: mov     ecx, [esp+104h+var_4C]
0x57879D: mov     [esp+104h+var_34], ecx
0x5787A4: test    byte ptr [esp+104h+var_F0], 22h
0x5787A9: jz      loc_57800B
0x5787AF: cmp     [esp+104h+Str1], ebx
0x5787B3: jz      loc_577DF8
0x5787B9: mov     esi, [esp+104h+Str1]
0x5787BD: push    offset aBr; "BR"
0x5787C2: push    esi; Str1
0x5787C3: call    __strcmp
0x5787C8: add     esp, 8
0x5787CB: cmp     eax, ebx
0x5787CD: jnz     short loc_5787D9
0x5787CF: add     [esp+104h+var_EC], 1
0x5787D4: jmp     loc_577DF8
0x5787D9: push    offset aP; "P"
0x5787DE: push    esi; Str1
0x5787DF: call    __strcmp
0x5787E4: add     esp, 8
0x5787E7: cmp     eax, ebx
0x5787E9: jnz     short loc_5787F5
0x5787EB: add     [esp+104h+var_EC], 2
0x5787F0: jmp     loc_577DF8
0x5787F5: push    offset aHr; "HR"
0x5787FA: push    esi; Str1
0x5787FB: call    __strcmp
0x578800: add     esp, 8
0x578803: cmp     eax, ebx
0x578805: jnz     short loc_57882B
0x578807: mov     edx, [ebp+arg_4]
0x57880A: cmp     dword ptr [edx+20h], 7FFFFFFFh
0x578811: jnz     short loc_57881D
0x578813: add     [esp+104h+var_EC], 2
0x578818: jmp     loc_577DF8
0x57881D: mov     byte ptr [esp+104h+var_D0], 1
0x578822: mov     [esp+104h+var_EC], ebx
0x578826: jmp     loc_577DF8
0x57882B: push    offset aFont_0; "/FONT"
0x578830: push    esi; Str1
0x578831: call    __strcmp
0x578836: add     esp, 8
0x578839: cmp     eax, ebx
0x57883B: jnz     loc_577DF8
0x578841: lea     ecx, [esp+104h+var_48]
0x578848: call    sub_577690
0x57884D: jmp     loc_577DF8
0x578852: mov     eax, [esp+104h+a2]
0x578856: mov     ecx, [ebp+arg_0]; this
0x578859: push    ebx; a3
0x57885A: push    eax; a2
0x57885B: call    BSStringT_Set
0x578860: mov     esi, [ebp+arg_4]
0x578863: mov     edi, [esp+104h+var_D4]
0x578867: push    edi; void *
0x578868: mov     ecx, offset FormHeap
0x57886D: call    MemoryHeap_Free_checked
0x578872: mov     edi, [esp+104h+var_CC]
0x578876: cmp     edi, ebx
0x578878: jz      short loc_5788ED
0x57887A: mov     byte ptr [esi+34h], 1
0x57887E: mov     eax, [edi+0Ch]
0x578881: mov     [esi+2Ch], eax
0x578884: cmp     [edi+0Ch], ebx
0x578887: jz      short loc_5788ED
0x578889: mov     eax, [edi+4]
0x57888C: cmp     eax, ebx
0x57888E: mov     ecx, [edi+18h]
0x578891: jz      short loc_5788ED
0x578893: mov     edx, ecx
0x578895: sub     ecx, 1
0x578898: test    edx, edx
0x57889A: jz      short loc_5788A4
0x57889C: mov     eax, [eax]
0x57889E: cmp     eax, ebx
0x5788A0: jnz     short loc_578893
0x5788A2: jmp     short loc_5788ED
0x5788A4: cmp     eax, ebx
0x5788A6: jz      short loc_5788ED
0x5788A8: mov     edi, [eax+8]
0x5788AB: cmp     edi, ebx
0x5788AD: jz      short loc_5788E9
0x5788AF: mov     [esi+20h], ebx
0x5788B2: mov     [esi+1Ch], ebx
0x5788B5: mov     eax, [edi+4]
0x5788B8: cmp     eax, ebx
0x5788BA: jz      short loc_5788E3
0x5788BC: lea     esp, [esp+0]
0x5788C0: lea     ecx, [eax+8]
0x5788C3: mov     ecx, [ecx]
0x5788C5: mov     edx, [ecx+20h]
0x5788C8: add     edx, [ecx+18h]
0x5788CB: mov     eax, [eax]
0x5788CD: add     [esi+20h], edx
0x5788D0: mov     edx, [esi+1Ch]
0x5788D3: mov     ecx, [ecx+10h]
0x5788D6: cmp     edx, ecx
0x5788D8: jle     short loc_5788DC
0x5788DA: mov     ecx, edx
0x5788DC: cmp     eax, ebx
0x5788DE: mov     [esi+1Ch], ecx
0x5788E1: jnz     short loc_5788C0
0x5788E3: mov     eax, [edi+0Ch]
0x5788E6: mov     [esi+30h], eax
0x5788E9: mov     edi, [esp+104h+var_CC]
0x5788ED: mov     eax, [esp+104h+var_2C.m_data]
0x5788F4: push    eax
0x5788F5: call    FormHeapFree
0x5788FA: mov     ecx, [esp+108h+a2]
0x5788FE: push    ecx
0x5788FF: mov     [esp+10Ch+var_2C.m_data], ebx
0x578906: mov     [esp+10Ch+var_2C.m_bufLen], bx
0x57890E: mov     [esp+10Ch+var_2C.m_dataLen], bx
0x578916: call    FormHeapFree
0x57891B: mov     edx, [esp+10Ch+Src]
0x57891F: push    edx
0x578920: call    FormHeapFree
0x578925: mov     eax, [esp+110h+var_C8.m_data]
0x578929: push    eax
0x57892A: call    FormHeapFree
0x57892F: mov     ecx, [esp+114h+Str1]
0x578933: push    ecx
0x578934: call    FormHeapFree
0x578939: mov     edx, [esp+118h+var_B4.m_data]
0x57893D: push    edx
0x57893E: call    FormHeapFree
0x578943: add     esp, 18h
0x578946: mov     eax, edi
0x578948: mov     ecx, [esp+104h+var_C]
0x57894F: mov     large fs:0, ecx
0x578956: pop     ecx
0x578957: pop     edi
0x578958: pop     esi
0x578959: pop     ebx
0x57895A: mov     esp, ebp
0x57895C: pop     ebp
0x57895D: retn    8
