0x90A9A0: mov     edx, ds:0BA9DE4h
0x90A9A6: sub     esp, 1Ch
0x90A9A9: push    ebx
0x90A9AA: push    ebp
0x90A9AB: push    esi
0x90A9AC: push    edi
0x90A9AD: mov     edi, ecx
0x90A9AF: mov     ecx, large fs:2Ch
0x90A9B6: mov     eax, [ecx+edx*4]
0x90A9B9: mov     esi, [eax+1A4h]
0x90A9BF: cmp     esi, [eax+1A8h]
0x90A9C5: jnb     short loc_90A9F2
0x90A9C7: mov     esi, eax
0x90A9C9: mov     ecx, [esi+1A4h]
0x90A9CF: mov     dword ptr [ecx], offset aLthkbvagent; "LthkBvAgent"
0x90A9D5: mov     dword ptr [ecx+0Ch], offset aCheckbvshape; "checkBvShape"
0x90A9DC: rdtsc
0x90A9DE: mov     [esp+2Ch+var_1C], eax
0x90A9E2: mov     eax, [esp+2Ch+var_1C]
0x90A9E6: mov     [ecx+4], eax
0x90A9E9: add     ecx, 10h
0x90A9EC: mov     [esi+1A4h], ecx
0x90A9F2: mov     eax, [esp+2Ch+arg_0]
0x90A9F6: mov     ecx, [eax+8]
0x90A9F9: mov     esi, [eax]
0x90A9FB: mov     ebp, [esp+2Ch+arg_8]
0x90A9FF: mov     ebx, [esp+2Ch+arg_4]
0x90AA03: mov     [esp+2Ch+var_8], ecx
0x90AA07: mov     [esp+2Ch+var_4], eax
0x90AA0B: mov     edx, [eax+4]
0x90AA0E: mov     ecx, [esi+0Ch]
0x90AA11: mov     [esp+2Ch+var_C], edx
0x90AA15: lea     edx, [esp+2Ch+var_18]
0x90AA19: push    edx
0x90AA1A: push    ebp
0x90AA1B: mov     [esp+34h+var_10], ecx
0x90AA1F: mov     ecx, [edi+0Ch]
0x90AA22: push    ebx
0x90AA23: lea     edx, [esp+38h+var_10]
0x90AA27: mov     [esp+38h+var_18], offset off_A9BB84
0x90AA2F: mov     byte ptr [esp+38h+var_14], 0
0x90AA34: mov     eax, [ecx]
0x90AA36: push    edx
0x90AA37: call    dword ptr [eax+8]
0x90AA3A: mov     al, byte ptr [esp+2Ch+var_14]
0x90AA3E: test    al, al
0x90AA40: jz      loc_90AB26
0x90AA46: mov     ecx, large fs:2Ch
0x90AA4D: mov     eax, ds:0BA9DE4h
0x90AA52: mov     eax, [ecx+eax*4]
0x90AA55: mov     edx, [eax+1A4h]
0x90AA5B: cmp     edx, [eax+1A8h]
0x90AA61: jnb     short loc_90AA95
0x90AA63: mov     eax, ds:0BA9DE4h
0x90AA68: mov     eax, [ecx+eax*4]
0x90AA6B: mov     ecx, [eax+1A4h]
0x90AA71: mov     [esp+2Ch+arg_8], eax
0x90AA75: mov     dword ptr [ecx], offset aStchild; "Stchild"
0x90AA7B: rdtsc
0x90AA7D: mov     [esp+2Ch+arg_0], eax
0x90AA81: mov     edx, [esp+2Ch+arg_0]
0x90AA85: mov     eax, [esp+2Ch+arg_8]
0x90AA89: mov     [ecx+4], edx
0x90AA8C: add     ecx, 0Ch
0x90AA8F: mov     [eax+1A4h], ecx
0x90AA95: mov     edx, [esp+2Ch+var_4]
0x90AA99: mov     eax, [edx+4]
0x90AA9C: mov     ecx, [esi+10h]
0x90AA9F: mov     [esp+2Ch+var_C], eax
0x90AAA3: mov     eax, [edi+10h]
0x90AAA6: test    eax, eax
0x90AAA8: mov     [esp+2Ch+var_10], ecx
0x90AAAC: jnz     short loc_90AB0E
0x90AAAE: mov     edx, [edi+8]
0x90AAB1: mov     eax, [ebp+0]
0x90AAB4: mov     [esp+2Ch+arg_8], edx
0x90AAB8: mov     edx, [ecx]
0x90AABA: mov     [esp+2Ch+arg_0], eax
0x90AABE: call    dword ptr [edx+8]
0x90AAC1: mov     ecx, [ebx]
0x90AAC3: mov     esi, eax
0x90AAC5: mov     eax, [ecx]
0x90AAC7: call    dword ptr [eax+8]
0x90AACA: mov     cl, [ebp+0Ch]
0x90AACD: test    cl, cl
0x90AACF: mov     ecx, [esp+2Ch+arg_0]
0x90AAD3: jz      short loc_90AADD
0x90AAD5: add     ecx, 590h
0x90AADB: jmp     short loc_90AAE3
0x90AADD: add     ecx, 190h
0x90AAE3: mov     edx, [esp+2Ch+arg_0]
0x90AAE7: shl     esi, 5
0x90AAEA: add     esi, ecx
0x90AAEC: movzx   eax, byte ptr [esi+eax]
0x90AAF0: lea     ecx, [eax+eax*4]
0x90AAF3: mov     eax, [edx+ecx*4+990h]
0x90AAFA: mov     ecx, [esp+2Ch+arg_8]
0x90AAFE: push    ecx
0x90AAFF: push    ebp
0x90AB00: lea     edx, [esp+34h+var_10]
0x90AB04: push    ebx
0x90AB05: push    edx
0x90AB06: call    eax
0x90AB08: add     esp, 10h
0x90AB0B: mov     [edi+10h], eax
0x90AB0E: mov     ecx, [esp+2Ch+arg_C]
0x90AB12: mov     edi, [edi+10h]
0x90AB15: mov     eax, [edi]
0x90AB17: push    ecx
0x90AB18: push    ebp
0x90AB19: push    ebx
0x90AB1A: lea     edx, [esp+38h+var_10]
0x90AB1E: push    edx
0x90AB1F: mov     ecx, edi
0x90AB21: call    dword ptr [eax+14h]
0x90AB24: jmp     short loc_90AB39
0x90AB26: mov     ecx, [edi+10h]
0x90AB29: test    ecx, ecx
0x90AB2B: jz      short loc_90AB39
0x90AB2D: mov     eax, [ecx]
0x90AB2F: call    dword ptr [eax+18h]
0x90AB32: mov     dword ptr [edi+10h], 0
0x90AB39: mov     ecx, large fs:2Ch
0x90AB40: mov     edx, ds:0BA9DE4h
0x90AB46: mov     eax, [ecx+edx*4]
0x90AB49: mov     esi, [eax+1A4h]
0x90AB4F: cmp     esi, [eax+1A8h]
0x90AB55: jnb     short loc_90AB7B
0x90AB57: mov     esi, eax
0x90AB59: mov     ecx, [esi+1A4h]
0x90AB5F: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90AB65: rdtsc
0x90AB67: mov     [esp+2Ch+arg_0], eax
0x90AB6B: mov     edx, [esp+2Ch+arg_0]
0x90AB6F: mov     [ecx+4], edx
0x90AB72: add     ecx, 0Ch
0x90AB75: mov     [esi+1A4h], ecx
0x90AB7B: pop     edi
0x90AB7C: pop     esi
0x90AB7D: pop     ebp
0x90AB7E: pop     ebx
0x90AB7F: add     esp, 1Ch
0x90AB82: retn    10h
