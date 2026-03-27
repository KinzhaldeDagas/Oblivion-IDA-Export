0x43C9B0: push    0FFFFFFFFh
0x43C9B2: push    offset SEH_43C9B0
0x43C9B7: mov     eax, large fs:0
0x43C9BD: push    eax
0x43C9BE: sub     esp, 8
0x43C9C1: push    ebx
0x43C9C2: push    ebp
0x43C9C3: push    esi
0x43C9C4: push    edi
0x43C9C5: mov     eax, ___security_cookie
0x43C9CA: xor     eax, esp
0x43C9CC: push    eax
0x43C9CD: lea     eax, [esp+28h+var_C]
0x43C9D1: mov     large fs:0, eax
0x43C9D7: mov     esi, ecx
0x43C9D9: mov     ecx, [esi+20h]
0x43C9DC: mov     eax, [ecx]
0x43C9DE: mov     edx, [eax+170h]
0x43C9E4: call    edx
0x43C9E6: mov     ecx, ModelLoaderPtr
0x43C9EC: mov     ebp, eax
0x43C9EE: mov     eax, [esi+20h]
0x43C9F1: push    eax
0x43C9F2: push    ebp
0x43C9F3: call    sub_435580
0x43C9F8: mov     edi, eax
0x43C9FA: test    edi, edi
0x43C9FC: jz      loc_43CAC6
0x43CA02: mov     edx, [edi]
0x43CA04: mov     eax, [edx+14h]
0x43CA07: mov     ecx, edi
0x43CA09: call    eax
0x43CA0B: lea     edx, [eax+1]
0x43CA0E: mov     edi, edi
0x43CA10: mov     cl, [eax]
0x43CA12: add     eax, 1
0x43CA15: test    cl, cl
0x43CA17: jnz     short loc_43CA10
0x43CA19: sub     eax, edx
0x43CA1B: jz      loc_43CAC6
0x43CA21: mov     eax, [esi+10h]
0x43CA24: mov     edx, [esi+14h]
0x43CA27: mov     cl, 10h
0x43CA29: call    __allshr
0x43CA2E: mov     ecx, [esi+20h]
0x43CA31: push    ecx
0x43CA32: mov     ecx, ModelLoaderPtr
0x43CA38: movzx   eax, al
0x43CA3B: push    esi
0x43CA3C: push    eax
0x43CA3D: push    ebp
0x43CA3E: lea     edx, [esp+38h+var_10]
0x43CA42: push    edx
0x43CA43: call    sub_43B990
0x43CA48: lea     ebp, [esi+24h]
0x43CA4B: push    eax
0x43CA4C: mov     ecx, ebp
0x43CA4E: mov     [esp+2Ch+var_4], 0
0x43CA56: call    sub_4348B0
0x43CA5B: mov     eax, [esp+28h+var_10]
0x43CA5F: test    eax, eax
0x43CA61: mov     [esp+28h+var_4], 0FFFFFFFFh
0x43CA69: jz      short loc_43CA89
0x43CA6B: mov     ebx, eax
0x43CA6D: add     eax, 8
0x43CA70: push    eax; lpAddend
0x43CA71: call    ds:InterlockedDecrement
0x43CA77: test    eax, eax
0x43CA79: jnz     short loc_43CA89
0x43CA7B: test    ebx, ebx
0x43CA7D: jz      short loc_43CA89
0x43CA7F: mov     eax, [ebx]
0x43CA81: mov     edx, [eax]
0x43CA83: push    1
0x43CA85: mov     ecx, ebx
0x43CA87: call    edx
0x43CA89: cmp     dword ptr [ebp+0], 0
0x43CA8D: jnz     short loc_43CAC6
0x43CA8F: mov     eax, [edi]
0x43CA91: mov     edx, [eax+14h]
0x43CA94: mov     ecx, edi
0x43CA96: call    edx
0x43CA98: mov     ecx, ModelLoaderPtr
0x43CA9E: mov     ecx, [ecx]
0x43CAA0: lea     edi, [esp+28h+var_14]
0x43CAA4: mov     [esp+28h+var_14], 0
0x43CAAC: mov     edx, [ecx]
0x43CAAE: push    edi
0x43CAAF: push    eax
0x43CAB0: mov     eax, [edx+4]
0x43CAB3: call    eax
0x43CAB5: neg     al
0x43CAB7: lea     ecx, [esi+28h]
0x43CABA: sbb     eax, eax
0x43CABC: and     eax, [esp+28h+var_14]
0x43CAC0: push    eax
0x43CAC1: call    sub_435AB0
0x43CAC6: mov     ecx, dword ptr [esp+28h+var_C]
0x43CACA: mov     large fs:0, ecx
0x43CAD1: pop     ecx
0x43CAD2: pop     edi
0x43CAD3: pop     esi
0x43CAD4: pop     ebp
0x43CAD5: pop     ebx
0x43CAD6: add     esp, 14h
0x43CAD9: retn
