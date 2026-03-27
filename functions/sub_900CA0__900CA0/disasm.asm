0x900CA0: push    ebp
0x900CA1: mov     ebp, esp
0x900CA3: and     esp, 0FFFFFFF0h
0x900CA6: sub     esp, 104h
0x900CAC: mov     ecx, ds:0BA9DE4h
0x900CB2: push    ebx
0x900CB3: push    esi
0x900CB4: mov     esi, large fs:2Ch
0x900CBB: mov     eax, [esi+ecx*4]
0x900CBE: mov     edx, [eax+1A4h]
0x900CC4: push    edi
0x900CC5: cmp     edx, [eax+1A8h]
0x900CCB: jnb     short loc_900CF8
0x900CCD: mov     edi, eax
0x900CCF: mov     ecx, [edi+1A4h]
0x900CD5: mov     dword ptr [ecx], offset aLtheightfield; "LtHeightField"
0x900CDB: mov     dword ptr [ecx+0Ch], offset aClosestpoints; "ClosestPoints"
0x900CE2: rdtsc
0x900CE4: mov     [esp+110h+var_FC], eax
0x900CE8: mov     eax, [esp+110h+var_FC]
0x900CEC: mov     [ecx+4], eax
0x900CEF: add     ecx, 10h
0x900CF2: mov     [edi+1A4h], ecx
0x900CF8: mov     eax, [ebp+arg_10]
0x900CFB: test    eax, eax
0x900CFD: mov     ebx, [ebp+arg_4]
0x900D00: mov     edi, [ebp+arg_0]
0x900D03: jz      short loc_900D14
0x900D05: mov     ecx, [ebp+arg_8]
0x900D08: push    eax
0x900D09: push    ecx
0x900D0A: push    ebx
0x900D0B: push    edi
0x900D0C: call    sub_900770
0x900D11: add     esp, 10h
0x900D14: mov     ecx, ds:0BA9DE4h
0x900D1A: mov     eax, [esi+ecx*4]
0x900D1D: mov     edx, [eax+1A4h]
0x900D23: cmp     edx, [eax+1A8h]
0x900D29: jnb     short loc_900D4F
0x900D2B: mov     esi, eax
0x900D2D: mov     ecx, [esi+1A4h]
0x900D33: mov     dword ptr [ecx], offset aStgetspheres_0; "StGetSpheres"
0x900D39: rdtsc
0x900D3B: mov     [esp+110h+var_FC], eax
0x900D3F: mov     eax, [esp+110h+var_FC]
0x900D43: mov     [ecx+4], eax
0x900D46: add     ecx, 0Ch
0x900D49: mov     [esi+1A4h], ecx
0x900D4F: mov     ecx, [ebx]
0x900D51: mov     edx, [edi+8]
0x900D54: mov     eax, [ebx+8]
0x900D57: mov     esi, [edi]
0x900D59: push    edx
0x900D5A: mov     dword ptr [esp+114h+var_EC], ecx
0x900D5E: push    eax
0x900D5F: lea     ecx, [esp+118h+var_EC+0Ch]
0x900D63: call    sub_8B1FF0
0x900D68: mov     edx, [esi]
0x900D6A: lea     eax, [esp+110h+var_F8]
0x900D6E: push    eax
0x900D6F: mov     ecx, esi
0x900D71: call    dword ptr [edx+1Ch]
0x900D74: mov     edx, large fs:2Ch
0x900D7B: mov     eax, ds:0BA9DE4h
0x900D80: mov     eax, [edx+eax*4]
0x900D83: mov     ecx, [esp+110h+var_F8]
0x900D87: mov     [esp+110h+var_F0], eax
0x900D8B: mov     eax, [eax+19Ch]
0x900D91: test    eax, eax
0x900D93: mov     dword ptr [esp+110h+var_EC+8], ecx
0x900D97: jnz     short loc_900D9E
0x900D99: mov     eax, ds:0BA7D9Ch
0x900D9E: lea     edx, [ecx+1]
0x900DA1: mov     ecx, [eax+20h]
0x900DA4: shl     edx, 4
0x900DA7: and     edx, 0FFFFFFF0h
0x900DAA: lea     edi, [ecx+edx]
0x900DAD: cmp     edi, [eax+2Ch]
0x900DB0: ja      short loc_900DBB
0x900DB2: mov     [eax+20h], edi
0x900DB5: mov     [esp+110h+var_FC], ecx
0x900DB9: jmp     short loc_900DC7
0x900DBB: mov     edi, [eax]
0x900DBD: push    edx
0x900DBE: mov     ecx, eax
0x900DC0: call    dword ptr [edi+0Ch]
0x900DC3: mov     [esp+110h+var_FC], eax
0x900DC7: mov     eax, [ebx+8]
0x900DCA: movaps  xmm3, xmmword ptr [eax+20h]
0x900DCE: movaps  xmm2, xmmword ptr [eax]
0x900DD1: movaps  xmm5, xmmword ptr [eax+10h]
0x900DD5: mov     edi, [ebp+arg_8]
0x900DD8: movaps  xmm1, xmmword ptr [edi+10h]
0x900DDC: mov     eax, [esp+110h+var_FC]
0x900DE0: mov     edx, [esi]
0x900DE2: movaps  xmm4, xmm3
0x900DE5: shufps  xmm4, xmm3, 44h ; 'D'
0x900DE9: movaps  xmm7, xmm3
0x900DEC: movaps  xmm0, xmm2
0x900DEF: shufps  xmm0, xmm5, 44h ; 'D'
0x900DF3: shufps  xmm7, xmm3, 0EEh ; 'î'
0x900DF7: shufps  xmm2, xmm5, 0EEh ; 'î'
0x900DFB: movaps  xmm5, xmm0
0x900DFE: add     edi, 10h
0x900E01: movaps  xmm3, xmm1
0x900E04: shufps  xmm3, xmm1, 55h ; 'U'
0x900E08: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x900E0C: mulps   xmm5, xmm3
0x900E0F: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x900E13: movaps  xmm3, xmm1
0x900E16: movaps  xmm6, xmm1
0x900E19: shufps  xmm3, xmm1, 0
0x900E1D: mulps   xmm0, xmm3
0x900E20: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x900E24: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x900E28: mulps   xmm2, xmm6
0x900E2B: addps   xmm0, xmm5
0x900E2E: addps   xmm0, xmm2
0x900E31: push    eax
0x900E32: mov     ecx, esi
0x900E34: movaps  xmmword ptr [esp+114h+var_18+8], xmm0
0x900E3C: call    dword ptr [edx+20h]
0x900E3F: mov     ecx, ds:0BA9DE4h
0x900E45: mov     edx, large fs:2Ch
0x900E4C: mov     esi, eax
0x900E4E: mov     eax, [edx+ecx*4]
0x900E51: mov     ecx, [eax+1A4h]
0x900E57: cmp     ecx, [eax+1A8h]
0x900E5D: jnb     short loc_900E89
0x900E5F: mov     edx, [esp+110h+var_F0]
0x900E63: mov     ecx, [edx+1A4h]
0x900E69: mov     dword ptr [ecx], offset aStcastspheres; "StCastSpheres"
0x900E6F: rdtsc
0x900E71: mov     dword ptr [esp+110h+var_EC+4], eax
0x900E75: mov     eax, dword ptr [esp+110h+var_EC+4]
0x900E79: mov     edx, [esp+110h+var_F0]
0x900E7D: mov     [ecx+4], eax
0x900E80: add     ecx, 0Ch
0x900E83: mov     [edx+1A4h], ecx
0x900E89: mov     ecx, [ebp+arg_8]
0x900E8C: mov     edx, [ecx+20h]
0x900E8F: mov     ecx, [edi]
0x900E91: mov     [esp+110h+var_1C], edx
0x900E98: mov     edx, [edi+4]
0x900E9B: mov     [esp+110h+var_70], ecx
0x900EA2: mov     ecx, [edi+8]
0x900EA5: mov     [esp+110h+var_6C], edx
0x900EAC: mov     edx, [edi+0Ch]
0x900EAF: mov     edi, dword ptr [esp+110h+var_EC+8]
0x900EB3: xor     eax, eax
0x900EB5: cmp     edi, eax
0x900EB7: mov     [esp+110h+var_68], ecx
0x900EBE: mov     ecx, [ebp+arg_0]
0x900EC1: mov     [esp+110h+var_64], edx
0x900EC8: mov     edx, [ebp+arg_C]
0x900ECB: mov     [esp+110h+var_30], eax
0x900ED2: mov     [esp+110h+var_2C], eax
0x900ED9: mov     dword ptr [esp+110h+var_9C], 3F800000h
0x900EE1: mov     [esp+110h+var_A0], offset off_A9BA78
0x900EE9: mov     [esp+110h+var_60], ecx
0x900EF0: mov     dword ptr [esp+110h+var_5C], edx
0x900EF7: jle     loc_900FBD
0x900EFD: lea     ecx, [ecx+0]
0x900F00: movaps  xmm0, xmmword ptr [esi]
0x900F03: movaps  xmm4, [esp+110h+anonymous_0]
0x900F08: movaps  xmm5, [esp+110h+var_EC+0Ch]
0x900F0D: mov     eax, [esi+0Ch]
0x900F10: mov     ecx, [ebp+arg_0]
0x900F13: mov     edx, [esi+0Ch]
0x900F16: movaps  xmm1, xmm0
0x900F19: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x900F1D: movaps  xmm2, xmm0
0x900F20: movaps  xmm3, xmm0
0x900F23: shufps  xmm3, xmm0, 0
0x900F27: shufps  xmm2, xmm0, 55h ; 'U'
0x900F2B: movaps  xmm0, [esp+110h+anonymous_1]
0x900F30: mulps   xmm4, xmm1
0x900F33: addps   xmm4, xmm0
0x900F36: movaps  xmm0, xmmword ptr [esp+110h+var_DC+0Ch]
0x900F3B: mulps   xmm0, xmm2
0x900F3E: mov     [esp+110h+var_20], eax
0x900F45: mov     eax, [ecx+8]
0x900F48: mov     ecx, dword ptr [esp+110h+var_EC]
0x900F4C: mulps   xmm5, xmm3
0x900F4F: addps   xmm5, xmm0
0x900F52: movaps  xmm0, xmm5
0x900F55: addps   xmm0, xmm4
0x900F58: movaps  [esp+110h+var_5C+0Ch], xmm0
0x900F60: addps   xmm0, xmmword ptr [esp+110h+var_18+8]
0x900F68: movaps  xmmword ptr [esp+110h+var_4C+0Ch], xmm0
0x900F70: movaps  xmm0, xmmword ptr [eax+30h]
0x900F74: movaps  xmm4, xmmword ptr [eax+20h]
0x900F78: mulps   xmm4, xmm1
0x900F7B: movaps  xmm1, xmmword ptr [eax]
0x900F7E: addps   xmm4, xmm0
0x900F81: movaps  xmm0, xmmword ptr [eax+10h]
0x900F85: mov     eax, [ecx]
0x900F87: mov     [esp+110h+var_80], edx
0x900F8E: lea     edx, [esp+110h+var_A0]
0x900F92: push    edx
0x900F93: mulps   xmm1, xmm3
0x900F96: mulps   xmm0, xmm2
0x900F99: push    ebx
0x900F9A: lea     edx, [esp+118h+var_5C+0Ch]
0x900FA1: addps   xmm1, xmm0
0x900FA4: addps   xmm1, xmm4
0x900FA7: push    edx
0x900FA8: movaps  [esp+11Ch+var_9C+0Ch], xmm1
0x900FB0: call    dword ptr [eax+20h]
0x900FB3: add     esi, 10h
0x900FB6: dec     edi
0x900FB7: jnz     loc_900F00
0x900FBD: mov     eax, [esp+110h+var_F0]
0x900FC1: mov     eax, [eax+19Ch]
0x900FC7: test    eax, eax
0x900FC9: jnz     short loc_900FD0
0x900FCB: mov     eax, ds:0BA7D9Ch
0x900FD0: mov     edx, [esp+110h+var_FC]
0x900FD4: cmp     edx, [eax+28h]
0x900FD7: mov     [eax+20h], edx
0x900FDA: jnz     short loc_900FE4
0x900FDC: mov     esi, [eax]
0x900FDE: push    edx
0x900FDF: mov     ecx, eax
0x900FE1: call    dword ptr [esi+10h]
0x900FE4: mov     ecx, large fs:2Ch
0x900FEB: mov     edx, ds:0BA9DE4h
0x900FF1: mov     eax, [ecx+edx*4]
0x900FF4: mov     ecx, [eax+1A4h]
0x900FFA: cmp     ecx, [eax+1A8h]
0x901000: jnb     short loc_901028
0x901002: mov     ecx, [esp+110h+var_F0]
0x901006: mov     esi, [ecx+1A4h]
0x90100C: mov     dword ptr [esi], offset aLt_0; "lt"
0x901012: rdtsc
0x901014: mov     dword ptr [esp+110h+var_EC], eax
0x901018: mov     edx, dword ptr [esp+110h+var_EC]
0x90101C: mov     [esi+4], edx
0x90101F: add     esi, 0Ch
0x901022: mov     [ecx+1A4h], esi
0x901028: pop     edi
0x901029: pop     esi
0x90102A: pop     ebx
0x90102B: mov     esp, ebp
0x90102D: pop     ebp
0x90102E: retn
