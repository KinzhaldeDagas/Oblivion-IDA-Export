0x7E0840: push    ebp
0x7E0841: mov     ebp, esp
0x7E0843: and     esp, 0FFFFFFF8h
0x7E0846: sub     esp, 1Ch
0x7E0849: mov     eax, ds:0B45FC8h
0x7E084E: push    ebx
0x7E084F: push    esi
0x7E0850: mov     ebx, ecx
0x7E0852: lea     ecx, [eax+1]
0x7E0855: xor     esi, esi
0x7E0857: test    ecx, ecx
0x7E0859: push    edi
0x7E085A: mov     byte ptr [esp+28h+a2], 1
0x7E085F: jle     short loc_7E08DC
0x7E0861: jmp     short loc_7E0870
0x7E0863: align 10h
0x7E0870: lea     edx, ds:1[eax*4]
0x7E0877: mov     eax, [ebx+0F8h]
0x7E087D: mov     ecx, [eax+esi*4]
0x7E0880: push    edx
0x7E0881: push    0
0x7E0883: push    ecx
0x7E0884: call    __memset
0x7E0889: mov     edx, ds:0B45FC8h
0x7E088F: mov     ecx, [ebx+0FCh]
0x7E0895: lea     eax, ds:1[edx*4]
0x7E089C: mov     edx, [ecx+esi*4]
0x7E089F: push    eax
0x7E08A0: push    0
0x7E08A2: push    edx
0x7E08A3: call    __memset
0x7E08A8: mov     eax, ds:0B45FC8h
0x7E08AD: add     esp, 18h
0x7E08B0: cmp     esi, eax
0x7E08B2: jge     short loc_7E08D2
0x7E08B4: mov     ecx, [ebx+0F8h]
0x7E08BA: mov     edx, [ecx+esi*4]
0x7E08BD: add     eax, eax
0x7E08BF: add     eax, eax
0x7E08C1: push    eax
0x7E08C2: push    0
0x7E08C4: push    edx
0x7E08C5: call    __memset
0x7E08CA: mov     eax, ds:0B45FC8h
0x7E08CF: add     esp, 0Ch
0x7E08D2: add     esi, 1
0x7E08D5: lea     ecx, [eax+1]
0x7E08D8: cmp     esi, ecx
0x7E08DA: jl      short loc_7E0870
0x7E08DC: xor     edi, edi
0x7E08DE: cmp     byte ptr ds:0B45FD0h, 0
0x7E08E5: mov     [esp+28h+var_14], edi
0x7E08E9: jz      loc_7E0B15
0x7E08EF: test    eax, eax
0x7E08F1: jl      loc_7E0C9D
0x7E08F7: fild    [esp+28h+var_14]
0x7E08FB: xor     esi, esi
0x7E08FD: test    eax, eax
0x7E08FF: fild    dword ptr ds:0B45FC8h
0x7E0905: mov     [esp+28h+a2+1], esi
0x7E0909: fmul    qword ptr ds:0A2FAA0h
0x7E090F: fsubp   st(1), st
0x7E0911: fmul    qword ptr ds:0A78420h
0x7E0917: fstp    [esp+28h+var_14]
0x7E091B: jl      loc_7E0AF3
0x7E0921: fld     [esp+28h+var_14]
0x7E0925: fmul    st, st
0x7E0927: fstp    [esp+28h+var_8]
0x7E092B: fild    [esp+28h+a2+1]
0x7E092F: fild    dword ptr ds:0B45FC8h
0x7E0935: fmul    qword ptr ds:0A2FAA0h
0x7E093B: fsubp   st(1), st
0x7E093D: fmul    qword ptr ds:0A78420h
0x7E0943: fstp    [esp+28h+a2+1]
0x7E0947: fld     [esp+28h+a2+1]
0x7E094B: fmul    st, st
0x7E094D: fadd    [esp+28h+var_8]
0x7E0951: fstp    [esp+28h+var_10]
0x7E0955: fld     [esp+28h+var_10]
0x7E0959: call    __CIsqrt
0x7E095E: fstp    [esp+28h+var_10]
0x7E0962: fld     [esp+28h+var_10]
0x7E0966: fmul    qword ptr ds:0A91B68h
0x7E096C: fstp    [esp+28h+var_10]
0x7E0970: fld     [esp+28h+var_10]
0x7E0974: call    __CIsqrt
0x7E0979: fstp    [esp+28h+var_10]
0x7E097D: cmp     edi, 20h ; ' '
0x7E0980: fld     [esp+28h+var_10]
0x7E0984: mov     edx, [ebx+0F8h]
0x7E098A: mov     eax, [edx+edi*4]
0x7E098D: fstp    dword ptr [eax+esi*4]
0x7E0990: jge     short loc_7E099B
0x7E0992: cmp     esi, 20h ; ' '
0x7E0995: jl      loc_7E0ADF
0x7E099B: mov     ecx, ds:0B45FC8h
0x7E09A1: lea     eax, [ecx-20h]
0x7E09A4: cmp     edi, eax
0x7E09A6: jle     short loc_7E09CC
0x7E09A8: cmp     esi, 20h ; ' '
0x7E09AB: jge     short loc_7E09CC
0x7E09AD: mov     eax, [ebx+0FCh]
0x7E09B3: mov     edx, edi
0x7E09B5: sub     edx, ecx
0x7E09B7: mov     ecx, [eax+edx*4+100h]
0x7E09BE: mov     edx, [eax+edi*4]
0x7E09C1: fld     dword ptr [ecx+esi*4]
0x7E09C4: fstp    dword ptr [edx+esi*4]
0x7E09C7: jmp     loc_7E0ADF
0x7E09CC: cmp     edi, 20h ; ' '
0x7E09CF: jge     short loc_7E09EE
0x7E09D1: cmp     esi, eax
0x7E09D3: jle     short loc_7E09EE
0x7E09D5: mov     eax, [ebx+0FCh]
0x7E09DB: mov     eax, [eax+edi*4]
0x7E09DE: mov     edx, esi
0x7E09E0: sub     edx, ecx
0x7E09E2: fld     dword ptr [eax+edx*4+100h]
0x7E09E9: jmp     loc_7E0ADC
0x7E09EE: cmp     edi, eax
0x7E09F0: jle     short loc_7E0A19
0x7E09F2: cmp     esi, eax
0x7E09F4: jle     short loc_7E0A19
0x7E09F6: mov     eax, 40h ; '@'
0x7E09FB: sub     eax, ecx
0x7E09FD: mov     ecx, [ebx+0FCh]
0x7E0A03: lea     edx, [eax+edi]
0x7E0A06: mov     edx, [ecx+edx*4]
0x7E0A09: mov     ecx, [ecx+edi*4]
0x7E0A0C: add     eax, esi
0x7E0A0E: fld     dword ptr [edx+eax*4]
0x7E0A11: fstp    dword ptr [ecx+esi*4]
0x7E0A14: jmp     loc_7E0ADF
0x7E0A19: fldz
0x7E0A1B: fld     st
0x7E0A1D: fld     [esp+28h+var_14]
0x7E0A21: fucom   st(1)
0x7E0A23: fnstsw  ax
0x7E0A25: fstp    st(1)
0x7E0A27: test    ah, 44h
0x7E0A2A: jp      short loc_7E0A41
0x7E0A2C: fld     st(1)
0x7E0A2E: fcomp   [esp+28h+a2+1]
0x7E0A32: fnstsw  ax
0x7E0A34: test    ah, 44h
0x7E0A37: jp      short loc_7E0A41
0x7E0A39: fstp    st
0x7E0A3B: fst     [esp+28h+a2+1]
0x7E0A3F: jmp     short loc_7E0A6B
0x7E0A41: fstp    st(1)
0x7E0A43: sub     esp, 8
0x7E0A46: fld     [esp+30h+a2+1]
0x7E0A4A: mov     ecx, ebx
0x7E0A4C: fstp    [esp+30h+var_2C]; float
0x7E0A50: fstp    [esp+30h+var_30]; float
0x7E0A53: call    sub_7DF640
0x7E0A58: call    __CIsqrt
0x7E0A5D: fstp    [esp+28h+var_10]
0x7E0A61: fld     [esp+28h+var_10]
0x7E0A65: fstp    [esp+28h+a2+1]
0x7E0A69: fldz
0x7E0A6B: fld1
0x7E0A6D: sub     esp, 8
0x7E0A70: fstp    [esp+30h+var_2C]; float
0x7E0A74: fstp    [esp+30h+var_30]; float
0x7E0A77: call    sub_7DF580
0x7E0A7C: add     esp, 8
0x7E0A7F: fstp    [esp+28h+var_10]
0x7E0A83: call    _rand
0x7E0A88: mov     [esp+28h+var_C], eax
0x7E0A8C: fild    [esp+28h+var_C]
0x7E0A90: fdiv    qword ptr ds:0A3D5A8h
0x7E0A96: fstp    [esp+28h+var_C]
0x7E0A9A: fld     [esp+28h+var_C]
0x7E0A9E: fadd    st, st
0x7E0AA0: fmul    qword ptr ds:0A3D5B8h
0x7E0AA6: fstp    [esp+28h+var_C]
0x7E0AAA: fld     [esp+28h+var_C]
0x7E0AAE: call    __CIsin
0x7E0AB3: fstp    [esp+28h+var_C]
0x7E0AB7: fld     [esp+28h+var_C]
0x7E0ABB: mov     edx, [ebx+0FCh]
0x7E0AC1: mov     eax, [edx+edi*4]
0x7E0AC4: fstp    [esp+28h+var_C]
0x7E0AC8: fld     [esp+28h+var_10]
0x7E0ACC: fmul    [esp+28h+a2+1]
0x7E0AD0: fmul    [esp+28h+var_C]
0x7E0AD4: fstp    [esp+28h+var_C]
0x7E0AD8: fld     [esp+28h+var_C]
0x7E0ADC: fstp    dword ptr [eax+esi*4]
0x7E0ADF: mov     eax, ds:0B45FC8h
0x7E0AE4: add     esi, 1
0x7E0AE7: cmp     esi, eax
0x7E0AE9: mov     [esp+28h+a2+1], esi
0x7E0AED: jle     loc_7E092B
0x7E0AF3: add     edi, 1
0x7E0AF6: cmp     edi, eax
0x7E0AF8: mov     [esp+28h+var_14], edi
0x7E0AFC: jle     loc_7E08F7
0x7E0B02: lea     edx, [esp+28h+a2]
0x7E0B06: push    edx; a2
0x7E0B07: mov     ecx, ebx; this
0x7E0B09: call    sub_7E06B0
0x7E0B0E: pop     edi
0x7E0B0F: pop     esi
0x7E0B10: pop     ebx
0x7E0B11: mov     esp, ebp
0x7E0B13: pop     ebp
0x7E0B14: retn
0x7E0B15: test    eax, eax
0x7E0B17: jl      loc_7E0C9D
0x7E0B1D: fild    [esp+28h+var_14]
0x7E0B21: xor     esi, esi
0x7E0B23: test    eax, eax
0x7E0B25: fild    dword ptr ds:0B45FC8h
0x7E0B2B: mov     [esp+28h+a2+1], esi
0x7E0B2F: fmul    qword ptr ds:0A2FAA0h
0x7E0B35: fsubp   st(1), st
0x7E0B37: fmul    qword ptr ds:0A78420h
0x7E0B3D: fstp    [esp+28h+var_14]
0x7E0B41: jl      loc_7E0C8E
0x7E0B47: fld     [esp+28h+var_14]
0x7E0B4B: fmul    st, st
0x7E0B4D: fstp    [esp+28h+var_8]
0x7E0B51: fild    [esp+28h+a2+1]
0x7E0B55: fild    dword ptr ds:0B45FC8h
0x7E0B5B: fmul    qword ptr ds:0A2FAA0h
0x7E0B61: fsubp   st(1), st
0x7E0B63: fmul    qword ptr ds:0A78420h
0x7E0B69: fstp    [esp+28h+a2+1]
0x7E0B6D: fld     [esp+28h+a2+1]
0x7E0B71: fmul    st, st
0x7E0B73: fadd    [esp+28h+var_8]
0x7E0B77: fstp    [esp+28h+var_C]
0x7E0B7B: fld     [esp+28h+var_C]
0x7E0B7F: call    __CIsqrt
0x7E0B84: fstp    [esp+28h+var_C]
0x7E0B88: fld     [esp+28h+var_C]
0x7E0B8C: fmul    qword ptr ds:0A91B68h
0x7E0B92: fstp    [esp+28h+var_C]
0x7E0B96: fld     [esp+28h+var_C]
0x7E0B9A: call    __CIsqrt
0x7E0B9F: fstp    [esp+28h+var_C]
0x7E0BA3: mov     ecx, [ebx+0F8h]
0x7E0BA9: fld     [esp+28h+var_C]
0x7E0BAD: mov     edx, [ecx+edi*4]
0x7E0BB0: fstp    dword ptr [edx+esi*4]
0x7E0BB3: fldz
0x7E0BB5: fld     st
0x7E0BB7: fld     [esp+28h+var_14]
0x7E0BBB: fucom   st(1)
0x7E0BBD: fnstsw  ax
0x7E0BBF: fstp    st(1)
0x7E0BC1: test    ah, 44h
0x7E0BC4: jp      short loc_7E0BDB
0x7E0BC6: fld     st(1)
0x7E0BC8: fcomp   [esp+28h+a2+1]
0x7E0BCC: fnstsw  ax
0x7E0BCE: test    ah, 44h
0x7E0BD1: jp      short loc_7E0BDB
0x7E0BD3: fstp    st
0x7E0BD5: fst     [esp+28h+a2+1]
0x7E0BD9: jmp     short loc_7E0C05
0x7E0BDB: fstp    st(1)
0x7E0BDD: sub     esp, 8
0x7E0BE0: fld     [esp+30h+a2+1]
0x7E0BE4: mov     ecx, ebx
0x7E0BE6: fstp    [esp+30h+var_2C]; float
0x7E0BEA: fstp    [esp+30h+var_30]; float
0x7E0BED: call    sub_7DF640
0x7E0BF2: call    __CIsqrt
0x7E0BF7: fstp    [esp+28h+var_C]
0x7E0BFB: fld     [esp+28h+var_C]
0x7E0BFF: fstp    [esp+28h+a2+1]
0x7E0C03: fldz
0x7E0C05: fld1
0x7E0C07: sub     esp, 8
0x7E0C0A: fstp    [esp+30h+var_2C]; float
0x7E0C0E: fstp    [esp+30h+var_30]; float
0x7E0C11: call    sub_7DF580
0x7E0C16: add     esp, 8
0x7E0C19: fstp    [esp+28h+var_10]
0x7E0C1D: call    _rand
0x7E0C22: mov     [esp+28h+var_C], eax
0x7E0C26: fild    [esp+28h+var_C]
0x7E0C2A: fdiv    qword ptr ds:0A3D5A8h
0x7E0C30: fstp    [esp+28h+var_C]
0x7E0C34: fld     [esp+28h+var_C]
0x7E0C38: fadd    st, st
0x7E0C3A: fmul    qword ptr ds:0A3D5B8h
0x7E0C40: fstp    [esp+28h+var_C]
0x7E0C44: fld     [esp+28h+var_C]
0x7E0C48: call    __CIsin
0x7E0C4D: fstp    [esp+28h+var_C]
0x7E0C51: fld     [esp+28h+var_C]
0x7E0C55: mov     eax, [ebx+0FCh]
0x7E0C5B: mov     ecx, [eax+edi*4]
0x7E0C5E: fstp    [esp+28h+var_C]
0x7E0C62: fld     [esp+28h+var_10]
0x7E0C66: add     esi, 1
0x7E0C69: fmul    [esp+28h+a2+1]
0x7E0C6D: mov     [esp+28h+a2+1], esi
0x7E0C71: fmul    [esp+28h+var_C]
0x7E0C75: fstp    [esp+28h+var_C]
0x7E0C79: fld     [esp+28h+var_C]
0x7E0C7D: fstp    dword ptr [ecx+esi*4-4]
0x7E0C81: mov     eax, ds:0B45FC8h
0x7E0C86: cmp     esi, eax
0x7E0C88: jle     loc_7E0B51
0x7E0C8E: add     edi, 1
0x7E0C91: cmp     edi, eax
0x7E0C93: mov     [esp+28h+var_14], edi
0x7E0C97: jle     loc_7E0B1D
0x7E0C9D: lea     edx, [esp+28h+a2]
0x7E0CA1: push    edx; a2
0x7E0CA2: mov     ecx, ebx; this
0x7E0CA4: call    sub_7E06B0
0x7E0CA9: pop     edi
0x7E0CAA: pop     esi
0x7E0CAB: pop     ebx
0x7E0CAC: mov     esp, ebp
0x7E0CAE: pop     ebp
0x7E0CAF: retn
