0x84C940: push    0FFFFFFFFh
0x84C942: push    offset SEH_879360
0x84C947: mov     eax, large fs:0
0x84C94D: push    eax
0x84C94E: push    ecx
0x84C94F: push    ebx
0x84C950: push    ebp
0x84C951: push    esi
0x84C952: push    edi
0x84C953: mov     eax, ds:0B30AACh
0x84C958: xor     eax, esp
0x84C95A: push    eax
0x84C95B: lea     eax, [esp+24h+var_C]
0x84C95F: mov     large fs:0, eax
0x84C965: mov     [esp+24h+var_10], ecx
0x84C969: mov     eax, [esp+24h+arg_8]
0x84C96D: mov     eax, [eax+10h]
0x84C970: mov     ebx, ds:0B45638h
0x84C976: push    eax
0x84C977: call    sub_848DA0
0x84C97C: mov     ecx, [ebx+24h]
0x84C97F: mov     esi, [esp+24h+arg_C]
0x84C983: mov     edi, [ecx]
0x84C985: mov     edx, [esi]
0x84C987: mov     eax, [edx+88h]
0x84C98D: push    0
0x84C98F: mov     ecx, esi
0x84C991: mov     [esp+28h+arg_8], edi
0x84C995: call    eax
0x84C997: mov     edi, [edi+4]
0x84C99A: mov     ebp, eax
0x84C99C: cmp     edi, ebp
0x84C99E: jz      short loc_84C9D7
0x84C9A0: test    edi, edi
0x84C9A2: jz      short loc_84C9C0
0x84C9A4: lea     ecx, [edi+4]
0x84C9A7: push    ecx; lpAddend
0x84C9A8: call    dword ptr ds:0A2807Ch
0x84C9AE: test    eax, eax
0x84C9B0: jnz     short loc_84C9C0
0x84C9B2: test    edi, edi
0x84C9B4: jz      short loc_84C9C0
0x84C9B6: mov     edx, [edi]
0x84C9B8: mov     eax, [edx]
0x84C9BA: push    1
0x84C9BC: mov     ecx, edi
0x84C9BE: call    eax
0x84C9C0: test    ebp, ebp
0x84C9C2: mov     edi, [esp+24h+arg_8]
0x84C9C6: mov     [edi+4], ebp
0x84C9C9: jz      short loc_84C9DB
0x84C9CB: add     ebp, 4
0x84C9CE: push    ebp; lpAddend
0x84C9CF: call    dword ptr ds:0A28078h
0x84C9D5: jmp     short loc_84C9DB
0x84C9D7: mov     edi, [esp+24h+arg_8]
0x84C9DB: test    edi, edi
0x84C9DD: jz      short loc_84C9F9
0x84C9DF: cmp     byte ptr ds:0B42CDDh, 0
0x84C9E6: jz      short loc_84C9F9
0x84C9E8: mov     edx, [esi]
0x84C9EA: mov     eax, [edx+78h]
0x84C9ED: mov     ecx, esi
0x84C9EF: call    eax
0x84C9F1: push    eax
0x84C9F2: mov     ecx, edi
0x84C9F4: call    sub_7715E0
0x84C9F9: mov     ecx, [ebx+24h]
0x84C9FC: mov     edi, [ecx+4]
0x84C9FF: mov     edx, [esi]
0x84CA01: mov     eax, [edx+8Ch]
0x84CA07: push    0
0x84CA09: mov     ecx, esi
0x84CA0B: mov     [esp+28h+arg_8], edi
0x84CA0F: call    eax
0x84CA11: test    eax, eax
0x84CA13: jz      short loc_84CA27
0x84CA15: mov     edx, [esi]
0x84CA17: mov     eax, [edx+8Ch]
0x84CA1D: push    0
0x84CA1F: mov     ecx, esi
0x84CA21: call    eax
0x84CA23: mov     ebp, eax
0x84CA25: jmp     short loc_84CA3C
0x84CA27: test    dword ptr [esi+1Ch], 80h
0x84CA2E: mov     ebp, ds:0B430F0h
0x84CA34: ja      short loc_84CA3C
0x84CA36: mov     ebp, ds:0B430DCh
0x84CA3C: mov     edi, [edi+4]
0x84CA3F: cmp     edi, ebp
0x84CA41: jz      short loc_84CA7A
0x84CA43: test    edi, edi
0x84CA45: jz      short loc_84CA63
0x84CA47: lea     ecx, [edi+4]
0x84CA4A: push    ecx; lpAddend
0x84CA4B: call    dword ptr ds:0A2807Ch
0x84CA51: test    eax, eax
0x84CA53: jnz     short loc_84CA63
0x84CA55: test    edi, edi
0x84CA57: jz      short loc_84CA63
0x84CA59: mov     edx, [edi]
0x84CA5B: mov     eax, [edx]
0x84CA5D: push    1
0x84CA5F: mov     ecx, edi
0x84CA61: call    eax
0x84CA63: test    ebp, ebp
0x84CA65: mov     edi, [esp+24h+arg_8]
0x84CA69: mov     [edi+4], ebp
0x84CA6C: jz      short loc_84CA7E
0x84CA6E: add     ebp, 4
0x84CA71: push    ebp; lpAddend
0x84CA72: call    dword ptr ds:0A28078h
0x84CA78: jmp     short loc_84CA7E
0x84CA7A: mov     edi, [esp+24h+arg_8]
0x84CA7E: test    edi, edi
0x84CA80: jz      short loc_84CA9C
0x84CA82: cmp     byte ptr ds:0B42CDDh, 0
0x84CA89: jz      short loc_84CA9C
0x84CA8B: mov     edx, [esi]
0x84CA8D: mov     eax, [edx+78h]
0x84CA90: mov     ecx, esi
0x84CA92: call    eax
0x84CA94: push    eax
0x84CA95: mov     ecx, edi
0x84CA97: call    sub_7715E0
0x84CA9C: mov     ecx, [ebx+24h]
0x84CA9F: mov     edi, [ecx+8]
0x84CAA2: mov     edx, [esi]
0x84CAA4: mov     eax, [edx+90h]
0x84CAAA: push    0
0x84CAAC: mov     ecx, esi
0x84CAAE: mov     [esp+28h+arg_8], edi
0x84CAB2: call    eax
0x84CAB4: mov     edi, [edi+4]
0x84CAB7: mov     ebp, eax
0x84CAB9: cmp     edi, ebp
0x84CABB: jz      short loc_84CAF4
0x84CABD: test    edi, edi
0x84CABF: jz      short loc_84CADD
0x84CAC1: lea     ecx, [edi+4]
0x84CAC4: push    ecx; lpAddend
0x84CAC5: call    dword ptr ds:0A2807Ch
0x84CACB: test    eax, eax
0x84CACD: jnz     short loc_84CADD
0x84CACF: test    edi, edi
0x84CAD1: jz      short loc_84CADD
0x84CAD3: mov     edx, [edi]
0x84CAD5: mov     eax, [edx]
0x84CAD7: push    1
0x84CAD9: mov     ecx, edi
0x84CADB: call    eax
0x84CADD: test    ebp, ebp
0x84CADF: mov     edi, [esp+24h+arg_8]
0x84CAE3: mov     [edi+4], ebp
0x84CAE6: jz      short loc_84CAF8
0x84CAE8: add     ebp, 4
0x84CAEB: push    ebp; lpAddend
0x84CAEC: call    dword ptr ds:0A28078h
0x84CAF2: jmp     short loc_84CAF8
0x84CAF4: mov     edi, [esp+24h+arg_8]
0x84CAF8: test    edi, edi
0x84CAFA: jz      short loc_84CB16
0x84CAFC: cmp     byte ptr ds:0B42CDDh, 0
0x84CB03: jz      short loc_84CB16
0x84CB05: mov     edx, [esi]
0x84CB07: mov     eax, [edx+78h]
0x84CB0A: mov     ecx, esi
0x84CB0C: call    eax
0x84CB0E: push    eax
0x84CB0F: mov     ecx, edi
0x84CB11: call    sub_7715E0
0x84CB16: mov     edi, 1
0x84CB1B: add     [ebx+60h], edi
0x84CB1E: mov     [esp+24h+arg_8], ebx
0x84CB22: mov     esi, [esp+24h+var_10]
0x84CB26: mov     edx, [esi+38h]
0x84CB29: lea     ecx, [esp+24h+arg_8]
0x84CB2D: push    ecx
0x84CB2E: push    edx
0x84CB2F: lea     ecx, [esi+40h]
0x84CB32: mov     [esp+2Ch+var_4], 0
0x84CB3A: call    sub_76CE40
0x84CB3F: or      eax, 0FFFFFFFFh
0x84CB42: add     [ebx+60h], eax
0x84CB45: mov     [esp+24h+var_4], eax
0x84CB49: jnz     short loc_84CB52
0x84CB4B: mov     ecx, ebx
0x84CB4D: call    sub_7604D0
0x84CB52: add     [esi+38h], edi
0x84CB55: mov     ecx, dword ptr [esp+24h+var_C]
0x84CB59: mov     large fs:0, ecx
0x84CB60: pop     ecx
0x84CB61: pop     edi
0x84CB62: pop     esi
0x84CB63: pop     ebp
0x84CB64: pop     ebx
0x84CB65: add     esp, 10h
0x84CB68: retn    10h
