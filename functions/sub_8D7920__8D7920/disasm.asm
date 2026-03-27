0x8D7920: sub     esp, 18h
0x8D7923: push    ebx
0x8D7924: push    ebp
0x8D7925: mov     ebp, ds:0BA9DE4h
0x8D792B: push    esi
0x8D792C: push    edi
0x8D792D: mov     edi, large fs:2Ch
0x8D7934: mov     eax, [edi+ebp*4]
0x8D7937: mov     ecx, [eax+1A4h]
0x8D793D: cmp     ecx, [eax+1A8h]
0x8D7943: jnb     short loc_8D7970
0x8D7945: mov     esi, eax
0x8D7947: mov     ecx, [esi+1A4h]
0x8D794D: mov     dword ptr [ecx], offset aLtsimulate; "LtSimulate"
0x8D7953: mov     dword ptr [ecx+0Ch], offset aCollide; "Collide"
0x8D795A: rdtsc
0x8D795C: mov     [esp+28h+var_18], eax
0x8D7960: mov     edx, [esp+28h+var_18]
0x8D7964: mov     [ecx+4], edx
0x8D7967: add     ecx, 10h
0x8D796A: mov     [esi+1A4h], ecx
0x8D7970: mov     esi, [esp+28h+arg_0]
0x8D7974: mov     eax, [esp+28h+arg_4]
0x8D7978: mov     edx, eax
0x8D797A: mov     ebx, [edx]
0x8D797C: lea     ecx, [esi+160h]
0x8D7982: mov     [ecx], ebx
0x8D7984: mov     ebx, [edx+4]
0x8D7987: mov     [ecx+4], ebx
0x8D798A: mov     ebx, [edx+8]
0x8D798D: mov     [ecx+8], ebx
0x8D7990: mov     edx, [edx+0Ch]
0x8D7993: mov     [ecx+0Ch], edx
0x8D7996: mov     ecx, [esi+74h]
0x8D7999: add     ecx, 10h
0x8D799C: mov     edx, eax
0x8D799E: mov     ebx, [edx]
0x8D79A0: mov     [ecx], ebx
0x8D79A2: mov     ebx, [edx+4]
0x8D79A5: mov     [ecx+4], ebx
0x8D79A8: mov     ebx, [edx+8]
0x8D79AB: mov     [ecx+8], ebx
0x8D79AE: mov     edx, [edx+0Ch]
0x8D79B1: mov     [ecx+0Ch], edx
0x8D79B4: fld     dword ptr [esi+270h]
0x8D79BA: fmul    dword ptr [eax+8]
0x8D79BD: xor     ebx, ebx
0x8D79BF: fstp    dword ptr [esi+264h]
0x8D79C5: fild    dword ptr [esi+26Ch]
0x8D79CB: fmul    dword ptr [eax+0Ch]
0x8D79CE: fstp    dword ptr [esi+268h]
0x8D79D4: mov     ecx, [esi+88h]
0x8D79DA: mov     eax, [esi+3Ch]
0x8D79DD: inc     ecx
0x8D79DE: test    eax, eax
0x8D79E0: mov     [esi+88h], ecx
0x8D79E6: jle     short loc_8D7A20
0x8D79E8: jmp     short loc_8D79F0
0x8D79EA: align 10h
0x8D79F0: mov     eax, [esi+38h]
0x8D79F3: mov     eax, [eax+ebx*4]
0x8D79F6: mov     ecx, [eax+38h]
0x8D79F9: mov     edx, [eax+34h]
0x8D79FC: push    esi
0x8D79FD: push    ecx
0x8D79FE: push    edx
0x8D79FF: call    sub_8D7400
0x8D7A04: mov     eax, ds:0BA7D98h
0x8D7A09: mov     ecx, [eax+4]
0x8D7A0C: add     esp, 0Ch
0x8D7A0F: cmp     ecx, 1
0x8D7A12: jz      loc_8D7CAB
0x8D7A18: mov     eax, [esi+3Ch]
0x8D7A1B: inc     ebx
0x8D7A1C: cmp     ebx, eax
0x8D7A1E: jl      short loc_8D79F0
0x8D7A20: dec     dword ptr [esi+88h]
0x8D7A26: jnz     short loc_8D7A43
0x8D7A28: mov     eax, [esi+84h]
0x8D7A2E: test    eax, eax
0x8D7A30: jz      short loc_8D7A43
0x8D7A32: mov     al, [esi+90h]
0x8D7A38: test    al, al
0x8D7A3A: jnz     short loc_8D7A43
0x8D7A3C: mov     ecx, esi
0x8D7A3E: call    sub_899210
0x8D7A43: mov     ecx, [esi+88h]
0x8D7A49: mov     eax, [esi+3Ch]
0x8D7A4C: inc     ecx
0x8D7A4D: test    eax, eax
0x8D7A4F: mov     [esi+88h], ecx
0x8D7A55: mov     [esp+28h+var_18], 0
0x8D7A5D: jle     loc_8D7BFC
0x8D7A63: mov     ecx, [esp+28h+var_18]
0x8D7A67: mov     eax, [esi+38h]
0x8D7A6A: mov     eax, [eax+ecx*4]
0x8D7A6D: mov     ecx, [eax+60h]
0x8D7A70: test    ecx, ecx
0x8D7A72: mov     ebx, [esi+74h]
0x8D7A75: mov     [esp+28h+arg_0], eax
0x8D7A79: jz      short loc_8D7ABC
0x8D7A7B: mov     edx, [eax+5Ch]
0x8D7A7E: mov     ecx, [edx]
0x8D7A80: mov     ecx, [ecx+14h]
0x8D7A83: test    ecx, ecx
0x8D7A85: mov     [esp+28h+var_14], ecx
0x8D7A89: jz      short loc_8D7ABC
0x8D7A8B: mov     ecx, [edi+ebp*4]
0x8D7A8E: mov     edx, [ecx+1A4h]
0x8D7A94: cmp     edx, [ecx+1A8h]
0x8D7A9A: jnb     short loc_8D7ABC
0x8D7A9C: mov     eax, [ecx+1A4h]
0x8D7AA2: mov     edx, [esp+28h+var_14]
0x8D7AA6: mov     [eax], edx
0x8D7AA8: mov     dword ptr [eax+4], 3F800000h
0x8D7AAF: add     eax, 8
0x8D7AB2: mov     [ecx+1A4h], eax
0x8D7AB8: mov     eax, [esp+28h+arg_0]
0x8D7ABC: mov     ecx, [edi+ebp*4]
0x8D7ABF: mov     edx, [ecx+1A4h]
0x8D7AC5: cmp     edx, [ecx+1A8h]
0x8D7ACB: jnb     short loc_8D7AF8
0x8D7ACD: mov     eax, ecx
0x8D7ACF: mov     ecx, [eax+1A4h]
0x8D7AD5: mov     dword ptr [ecx], offset aTtnarrowphase; "TtNarrowPhase"
0x8D7ADB: rdtsc
0x8D7ADD: mov     [esp+28h+var_10], eax
0x8D7AE1: mov     eax, [esp+28h+var_10]
0x8D7AE5: mov     [ecx+4], eax
0x8D7AE8: mov     eax, [edi+ebp*4]
0x8D7AEB: add     ecx, 0Ch
0x8D7AEE: mov     [eax+1A4h], ecx
0x8D7AF4: mov     eax, [esp+28h+arg_0]
0x8D7AF8: mov     ecx, [ebx]
0x8D7AFA: add     ecx, 1A50h
0x8D7B00: add     eax, 44h ; 'D'
0x8D7B03: push    ebx
0x8D7B04: mov     [ebx+28h], ecx
0x8D7B07: push    eax
0x8D7B08: mov     byte ptr [ebx+0Ch], 0
0x8D7B0C: call    sub_8E7180
0x8D7B11: mov     eax, [edi+ebp*4]
0x8D7B14: mov     edx, [eax+1A4h]
0x8D7B1A: mov     ecx, [eax+1A8h]
0x8D7B20: add     esp, 8
0x8D7B23: cmp     edx, ecx
0x8D7B25: jnb     short loc_8D7B4B
0x8D7B27: mov     ebx, eax
0x8D7B29: mov     ecx, [ebx+1A4h]
0x8D7B2F: mov     dword ptr [ecx], offset aEt; "Et"
0x8D7B35: rdtsc
0x8D7B37: mov     [esp+28h+var_C], eax
0x8D7B3B: mov     eax, [esp+28h+var_C]
0x8D7B3F: mov     [ecx+4], eax
0x8D7B42: add     ecx, 0Ch
0x8D7B45: mov     [ebx+1A4h], ecx
0x8D7B4B: mov     ecx, ds:0BA7D98h
0x8D7B51: cmp     dword ptr [ecx+4], 1
0x8D7B55: jz      loc_8D7CF5
0x8D7B5B: mov     eax, [esi+140h]
0x8D7B61: test    eax, eax
0x8D7B63: jz      loc_8D7BE8
0x8D7B69: mov     eax, [edi+ebp*4]
0x8D7B6C: mov     edx, [eax+1A4h]
0x8D7B72: cmp     edx, [eax+1A8h]
0x8D7B78: jnb     short loc_8D7B9E
0x8D7B7A: mov     ebx, eax
0x8D7B7C: mov     ecx, [ebx+1A4h]
0x8D7B82: mov     dword ptr [ecx], offset aTtislandpostco; "TtIslandPostCollideCb"
0x8D7B88: rdtsc
0x8D7B8A: mov     [esp+28h+var_8], eax
0x8D7B8E: mov     eax, [esp+28h+var_8]
0x8D7B92: mov     [ecx+4], eax
0x8D7B95: add     ecx, 0Ch
0x8D7B98: mov     [ebx+1A4h], ecx
0x8D7B9E: mov     ecx, [esp+28h+arg_4]
0x8D7BA2: mov     edx, [esp+28h+arg_0]
0x8D7BA6: push    ecx
0x8D7BA7: push    edx
0x8D7BA8: push    esi
0x8D7BA9: call    sub_8DCFA0
0x8D7BAE: mov     eax, [edi+ebp*4]
0x8D7BB1: mov     ecx, [eax+1A4h]
0x8D7BB7: mov     edx, [eax+1A8h]
0x8D7BBD: add     esp, 0Ch
0x8D7BC0: cmp     ecx, edx
0x8D7BC2: jnb     short loc_8D7BE8
0x8D7BC4: mov     ebx, eax
0x8D7BC6: mov     ecx, [ebx+1A4h]
0x8D7BCC: mov     dword ptr [ecx], offset aEt; "Et"
0x8D7BD2: rdtsc
0x8D7BD4: mov     [esp+28h+var_4], eax
0x8D7BD8: mov     edx, [esp+28h+var_4]
0x8D7BDC: mov     [ecx+4], edx
0x8D7BDF: add     ecx, 0Ch
0x8D7BE2: mov     [ebx+1A4h], ecx
0x8D7BE8: mov     eax, [esp+28h+var_18]
0x8D7BEC: mov     ecx, [esi+3Ch]
0x8D7BEF: inc     eax
0x8D7BF0: cmp     eax, ecx
0x8D7BF2: mov     [esp+28h+var_18], eax
0x8D7BF6: jl      loc_8D7A63
0x8D7BFC: dec     dword ptr [esi+88h]
0x8D7C02: jnz     short loc_8D7C1F
0x8D7C04: mov     eax, [esi+84h]
0x8D7C0A: test    eax, eax
0x8D7C0C: jz      short loc_8D7C1F
0x8D7C0E: mov     al, [esi+90h]
0x8D7C14: test    al, al
0x8D7C16: jnz     short loc_8D7C1F
0x8D7C18: mov     ecx, esi
0x8D7C1A: call    sub_899210
0x8D7C1F: mov     eax, [esi+128h]
0x8D7C25: test    eax, eax
0x8D7C27: jz      short loc_8D7C6C
0x8D7C29: mov     eax, [edi+ebp*4]
0x8D7C2C: mov     ecx, [eax+1A4h]
0x8D7C32: cmp     ecx, [eax+1A8h]
0x8D7C38: jnb     short loc_8D7C5E
0x8D7C3A: mov     ebx, eax
0x8D7C3C: mov     ecx, [ebx+1A4h]
0x8D7C42: mov     dword ptr [ecx], offset aStpostcollidec; "StPostCollideCB"
0x8D7C48: rdtsc
0x8D7C4A: mov     [esp+28h+arg_0], eax
0x8D7C4E: mov     edx, [esp+28h+arg_0]
0x8D7C52: mov     [ecx+4], edx
0x8D7C55: add     ecx, 0Ch
0x8D7C58: mov     [ebx+1A4h], ecx
0x8D7C5E: mov     eax, [esp+28h+arg_4]
0x8D7C62: push    eax
0x8D7C63: push    esi
0x8D7C64: call    sub_8DCE80
0x8D7C69: add     esp, 8
0x8D7C6C: mov     eax, [edi+ebp*4]
0x8D7C6F: mov     ecx, [eax+1A4h]
0x8D7C75: cmp     ecx, [eax+1A8h]
0x8D7C7B: jnb     short loc_8D7CA1
0x8D7C7D: mov     edi, eax
0x8D7C7F: mov     ecx, [edi+1A4h]
0x8D7C85: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D7C8B: rdtsc
0x8D7C8D: mov     [esp+28h+arg_4], eax
0x8D7C91: mov     edx, [esp+28h+arg_4]
0x8D7C95: mov     [ecx+4], edx
0x8D7C98: add     ecx, 0Ch
0x8D7C9B: mov     [edi+1A4h], ecx
0x8D7CA1: pop     edi
0x8D7CA2: pop     esi
0x8D7CA3: pop     ebp
0x8D7CA4: pop     ebx
0x8D7CA5: add     esp, 18h
0x8D7CA8: retn    8
0x8D7CAB: dec     dword ptr [esi+88h]
0x8D7CB1: jnz     short loc_8D7CCE
0x8D7CB3: mov     eax, [esi+84h]
0x8D7CB9: test    eax, eax
0x8D7CBB: jz      short loc_8D7CCE
0x8D7CBD: mov     al, [esi+90h]
0x8D7CC3: test    al, al
0x8D7CC5: jnz     short loc_8D7CCE
0x8D7CC7: mov     ecx, esi
0x8D7CC9: call    sub_899210
0x8D7CCE: mov     eax, [edi+ebp*4]
0x8D7CD1: mov     ecx, [eax+1A4h]
0x8D7CD7: cmp     ecx, [eax+1A8h]
0x8D7CDD: jnb     short loc_8D7CA1
0x8D7CDF: mov     edi, eax
0x8D7CE1: mov     ecx, [edi+1A4h]
0x8D7CE7: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D7CED: rdtsc
0x8D7CEF: mov     [esp+28h+arg_4], eax
0x8D7CF3: jmp     short loc_8D7C91
0x8D7CF5: dec     dword ptr [esi+88h]
0x8D7CFB: jnz     short loc_8D7D18
0x8D7CFD: mov     eax, [esi+84h]
0x8D7D03: test    eax, eax
0x8D7D05: jz      short loc_8D7D18
0x8D7D07: mov     al, [esi+90h]
0x8D7D0D: test    al, al
0x8D7D0F: jnz     short loc_8D7D18
0x8D7D11: mov     ecx, esi
0x8D7D13: call    sub_899210
0x8D7D18: mov     eax, [edi+ebp*4]
0x8D7D1B: mov     ecx, [eax+1A4h]
0x8D7D21: cmp     ecx, [eax+1A8h]
0x8D7D27: jnb     loc_8D7CA1
0x8D7D2D: mov     edi, eax
0x8D7D2F: mov     ecx, [edi+1A4h]
0x8D7D35: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D7D3B: rdtsc
0x8D7D3D: mov     [esp+28h+arg_4], eax
0x8D7D41: jmp     loc_8D7C91
