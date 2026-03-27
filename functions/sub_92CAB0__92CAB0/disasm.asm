0x92CAB0: push    ebp
0x92CAB1: mov     ebp, esp
0x92CAB3: and     esp, 0FFFFFFF0h
0x92CAB6: sub     esp, 54h
0x92CAB9: push    ebx
0x92CABA: mov     ebx, [ebp+arg_C]
0x92CABD: push    esi
0x92CABE: push    edi
0x92CABF: nop
0x92CAC0: mov     esi, [ebp+arg_8]
0x92CAC3: mov     edi, [ebp+arg_4]
0x92CAC6: mov     ecx, [ebp+arg_0]
0x92CAC9: lea     eax, [edi+esi]
0x92CACC: sar     eax, 1
0x92CACE: lea     eax, [eax+eax*4]
0x92CAD1: lea     edx, [ecx+eax*4]
0x92CAD4: mov     eax, [edx]
0x92CAD6: mov     ecx, [edx+4]
0x92CAD9: mov     [esp+60h+var_20], eax
0x92CADD: mov     eax, [edx+8]
0x92CAE0: mov     [esp+60h+var_1C], ecx
0x92CAE4: mov     ecx, [edx+0Ch]
0x92CAE7: mov     edx, [edx+10h]
0x92CAEA: mov     [esp+60h+var_18], eax
0x92CAEE: mov     [esp+60h+var_14], ecx
0x92CAF2: mov     [esp+60h+var_10], edx
0x92CAF6: mov     ecx, [ebp+arg_0]
0x92CAF9: lea     edx, [esp+60h+var_20]
0x92CAFD: lea     eax, [edi+edi*4]
0x92CB00: lea     eax, [ecx+eax*4]
0x92CB03: push    edx
0x92CB04: push    eax
0x92CB05: mov     [esp+68h+var_44], eax
0x92CB09: lea     eax, [esp+68h+var_46]
0x92CB0D: push    eax
0x92CB0E: call    ebx
0x92CB10: mov     cl, [eax]
0x92CB12: add     esp, 0Ch
0x92CB15: test    cl, cl
0x92CB17: jz      short loc_92CB41
0x92CB19: mov     eax, [esp+60h+var_44]
0x92CB1D: jmp     short loc_92CB23
0x92CB1F: mov     eax, [esp+60h+var_44]
0x92CB23: lea     ecx, [esp+60h+var_20]
0x92CB27: add     eax, 14h
0x92CB2A: push    ecx
0x92CB2B: push    eax
0x92CB2C: lea     edx, [esp+68h+var_46]
0x92CB30: push    edx
0x92CB31: inc     edi
0x92CB32: mov     [esp+6Ch+var_44], eax
0x92CB36: call    ebx
0x92CB38: mov     cl, [eax]
0x92CB3A: add     esp, 0Ch
0x92CB3D: test    cl, cl
0x92CB3F: jnz     short loc_92CB1F
0x92CB41: mov     ecx, [ebp+arg_0]
0x92CB44: lea     eax, [esi+esi*4]
0x92CB47: lea     eax, [ecx+eax*4]
0x92CB4A: push    eax
0x92CB4B: lea     edx, [esp+64h+var_20]
0x92CB4F: mov     [esp+64h+var_44], eax
0x92CB53: push    edx
0x92CB54: lea     eax, [esp+68h+var_45]
0x92CB58: push    eax
0x92CB59: call    ebx
0x92CB5B: mov     cl, [eax]
0x92CB5D: add     esp, 0Ch
0x92CB60: test    cl, cl
0x92CB62: jz      short loc_92CB8E
0x92CB64: mov     eax, [esp+60h+var_44]
0x92CB68: jmp     short loc_92CB70
0x92CB6A: mov     eax, [esp+60h+var_44]
0x92CB6E: mov     edi, edi
0x92CB70: sub     eax, 14h
0x92CB73: push    eax
0x92CB74: lea     ecx, [esp+64h+var_20]
0x92CB78: push    ecx
0x92CB79: lea     edx, [esp+68h+var_45]
0x92CB7D: push    edx
0x92CB7E: dec     esi
0x92CB7F: mov     [esp+6Ch+var_44], eax
0x92CB83: call    ebx
0x92CB85: mov     cl, [eax]
0x92CB87: add     esp, 0Ch
0x92CB8A: test    cl, cl
0x92CB8C: jnz     short loc_92CB6A
0x92CB8E: cmp     esi, edi
0x92CB90: jl      loc_92CC18
0x92CB96: jz      short loc_92CC0E
0x92CB98: mov     ecx, [ebp+arg_0]
0x92CB9B: lea     eax, [esi+esi*4]
0x92CB9E: lea     eax, [ecx+eax*4]
0x92CBA1: mov     edx, eax
0x92CBA3: mov     ebx, [edx]
0x92CBA5: mov     [esp+60h+var_40], ebx
0x92CBA9: mov     ebx, [edx+4]
0x92CBAC: mov     [esp+60h+var_3C], ebx
0x92CBB0: mov     ebx, [edx+8]
0x92CBB3: mov     [esp+60h+var_38], ebx
0x92CBB7: mov     ebx, [edx+0Ch]
0x92CBBA: mov     edx, [edx+10h]
0x92CBBD: mov     [esp+60h+var_30], edx
0x92CBC1: lea     edx, [edi+edi*4]
0x92CBC4: lea     ecx, [ecx+edx*4]
0x92CBC7: mov     [esp+60h+var_34], ebx
0x92CBCB: mov     edx, ecx
0x92CBCD: mov     ebx, [edx]
0x92CBCF: mov     [eax], ebx
0x92CBD1: mov     ebx, [edx+4]
0x92CBD4: mov     [eax+4], ebx
0x92CBD7: mov     ebx, [edx+8]
0x92CBDA: mov     [eax+8], ebx
0x92CBDD: mov     ebx, [edx+0Ch]
0x92CBE0: mov     [eax+0Ch], ebx
0x92CBE3: mov     edx, [edx+10h]
0x92CBE6: mov     ebx, [ebp+arg_C]
0x92CBE9: mov     [eax+10h], edx
0x92CBEC: mov     eax, [esp+60h+var_40]
0x92CBF0: mov     edx, [esp+60h+var_3C]
0x92CBF4: mov     [ecx], eax
0x92CBF6: mov     eax, [esp+60h+var_38]
0x92CBFA: mov     [ecx+4], edx
0x92CBFD: mov     edx, [esp+60h+var_34]
0x92CC01: mov     [ecx+8], eax
0x92CC04: mov     eax, [esp+60h+var_30]
0x92CC08: mov     [ecx+0Ch], edx
0x92CC0B: mov     [ecx+10h], eax
0x92CC0E: dec     esi
0x92CC0F: inc     edi
0x92CC10: cmp     edi, esi
0x92CC12: jle     loc_92CAF6
0x92CC18: mov     eax, [ebp+arg_4]
0x92CC1B: cmp     eax, esi
0x92CC1D: jge     short loc_92CC2E
0x92CC1F: mov     ecx, [ebp+arg_0]
0x92CC22: push    ebx
0x92CC23: push    esi
0x92CC24: push    eax
0x92CC25: push    ecx
0x92CC26: call    sub_92CAB0
0x92CC2B: add     esp, 10h
0x92CC2E: cmp     edi, [ebp+arg_8]
0x92CC31: jge     short loc_92CC3B
0x92CC33: mov     [ebp+arg_4], edi
0x92CC36: jmp     loc_92CAC0
0x92CC3B: pop     edi
0x92CC3C: pop     esi
0x92CC3D: pop     ebx
0x92CC3E: mov     esp, ebp
0x92CC40: pop     ebp
0x92CC41: retn
