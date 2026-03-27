0x859160: push    0FFFFFFFFh
0x859162: push    offset SEH_859160
0x859167: mov     eax, large fs:0
0x85916D: push    eax
0x85916E: push    esi
0x85916F: push    edi
0x859170: mov     eax, ds:0B30AACh
0x859175: xor     eax, esp
0x859177: push    eax
0x859178: lea     eax, [esp+18h+var_C]
0x85917C: mov     large fs:0, eax
0x859182: mov     edi, ecx
0x859184: cmp     [esp+18h+arg_18], 0
0x859189: mov     esi, [esp+18h+arg_14]
0x85918D: jnz     loc_8592F4
0x859193: cmp     [esp+18h+arg_1C], 0
0x859198: jnz     loc_8592A3
0x85919E: cmp     [esp+18h+arg_24], 0
0x8591A3: jnz     loc_859252
0x8591A9: cmp     [esp+18h+arg_28], 0
0x8591AE: jnz     short loc_859201
0x8591B0: cmp     byte ptr [esp+18h+arg_10], 1
0x8591B5: jnz     loc_859404
0x8591BB: push    10h; Size
0x8591BD: call    FormHeapAlloc
0x8591C2: add     esp, 4
0x8591C5: mov     [esp+18h+arg_10], eax
0x8591C9: test    eax, eax
0x8591CB: mov     [esp+18h+var_4], 0
0x8591D3: jz      loc_8593E7
0x8591D9: mov     ecx, [esp+18h+arg_8]
0x8591DD: mov     edx, [esp+18h+arg_4]
0x8591E1: push    ecx
0x8591E2: movzx   ecx, byte ptr [esi]
0x8591E5: push    edx
0x8591E6: mov     edx, [esp+20h+arg_0]
0x8591EA: push    2
0x8591EC: push    ecx
0x8591ED: push    0E8h ; 'è'
0x8591F2: push    edx
0x8591F3: push    eax
0x8591F4: call    sub_7E2370
0x8591F9: add     esp, 1Ch
0x8591FC: jmp     loc_8593E9
0x859201: cmp     byte ptr [esp+18h+arg_10], 1
0x859206: jnz     loc_859404
0x85920C: push    10h; Size
0x85920E: call    FormHeapAlloc
0x859213: add     esp, 4
0x859216: mov     [esp+18h+arg_10], eax
0x85921A: test    eax, eax
0x85921C: mov     [esp+18h+var_4], 1
0x859224: jz      loc_8593E7
0x85922A: mov     ecx, [esp+18h+arg_8]
0x85922E: mov     edx, [esp+18h+arg_4]
0x859232: push    ecx
0x859233: movzx   ecx, byte ptr [esi]
0x859236: push    edx
0x859237: mov     edx, [esp+20h+arg_0]
0x85923B: push    2
0x85923D: push    ecx
0x85923E: push    0EEh ; 'î'
0x859243: push    edx
0x859244: push    eax
0x859245: call    sub_7E2370
0x85924A: add     esp, 1Ch
0x85924D: jmp     loc_8593E9
0x859252: cmp     byte ptr [esp+18h+arg_10], 1
0x859257: jnz     loc_859404
0x85925D: push    10h; Size
0x85925F: call    FormHeapAlloc
0x859264: add     esp, 4
0x859267: mov     [esp+18h+arg_10], eax
0x85926B: test    eax, eax
0x85926D: mov     [esp+18h+var_4], 2
0x859275: jz      loc_8593E7
0x85927B: mov     ecx, [esp+18h+arg_8]
0x85927F: mov     edx, [esp+18h+arg_4]
0x859283: push    ecx
0x859284: movzx   ecx, byte ptr [esi]
0x859287: push    edx
0x859288: mov     edx, [esp+20h+arg_0]
0x85928C: push    2
0x85928E: push    ecx
0x85928F: push    0EAh ; 'ê'
0x859294: push    edx
0x859295: push    eax
0x859296: call    sub_7E2370
0x85929B: add     esp, 1Ch
0x85929E: jmp     loc_8593E9
0x8592A3: cmp     byte ptr [esp+18h+arg_10], 1
0x8592A8: jnz     loc_859404
0x8592AE: push    10h; Size
0x8592B0: call    FormHeapAlloc
0x8592B5: add     esp, 4
0x8592B8: mov     [esp+18h+arg_10], eax
0x8592BC: test    eax, eax
0x8592BE: mov     [esp+18h+var_4], 3
0x8592C6: jz      loc_8593E7
0x8592CC: mov     ecx, [esp+18h+arg_8]
0x8592D0: mov     edx, [esp+18h+arg_4]
0x8592D4: push    ecx
0x8592D5: movzx   ecx, byte ptr [esi]
0x8592D8: push    edx
0x8592D9: mov     edx, [esp+20h+arg_0]
0x8592DD: push    2
0x8592DF: push    ecx
0x8592E0: push    0E9h ; 'é'
0x8592E5: push    edx
0x8592E6: push    eax
0x8592E7: call    sub_7E2370
0x8592EC: add     esp, 1Ch
0x8592EF: jmp     loc_8593E9
0x8592F4: cmp     [esp+18h+arg_1C], 0
0x8592F9: jnz     loc_8593A1
0x8592FF: cmp     [esp+18h+arg_24], 0
0x859304: jnz     short loc_859357
0x859306: cmp     byte ptr [esp+18h+arg_10], 1
0x85930B: jnz     loc_859404
0x859311: push    10h; Size
0x859313: call    FormHeapAlloc
0x859318: add     esp, 4
0x85931B: mov     [esp+18h+arg_10], eax
0x85931F: test    eax, eax
0x859321: mov     [esp+18h+var_4], 4
0x859329: jz      loc_8593E7
0x85932F: mov     ecx, [esp+18h+arg_8]
0x859333: mov     edx, [esp+18h+arg_4]
0x859337: push    ecx
0x859338: movzx   ecx, byte ptr [esi]
0x85933B: push    edx
0x85933C: mov     edx, [esp+20h+arg_0]
0x859340: push    2
0x859342: push    ecx
0x859343: push    0EBh ; 'ë'
0x859348: push    edx
0x859349: push    eax
0x85934A: call    sub_7E2370
0x85934F: add     esp, 1Ch
0x859352: jmp     loc_8593E9
0x859357: cmp     byte ptr [esp+18h+arg_10], 1
0x85935C: jnz     loc_859404
0x859362: push    10h; Size
0x859364: call    FormHeapAlloc
0x859369: add     esp, 4
0x85936C: mov     [esp+18h+arg_10], eax
0x859370: test    eax, eax
0x859372: mov     [esp+18h+var_4], 5
0x85937A: jz      short loc_8593E7
0x85937C: mov     ecx, [esp+18h+arg_8]
0x859380: mov     edx, [esp+18h+arg_4]
0x859384: push    ecx
0x859385: movzx   ecx, byte ptr [esi]
0x859388: push    edx
0x859389: mov     edx, [esp+20h+arg_0]
0x85938D: push    2
0x85938F: push    ecx
0x859390: push    0EDh ; 'í'
0x859395: push    edx
0x859396: push    eax
0x859397: call    sub_7E2370
0x85939C: add     esp, 1Ch
0x85939F: jmp     short loc_8593E9
0x8593A1: cmp     byte ptr [esp+18h+arg_10], 1
0x8593A6: jnz     short loc_859404
0x8593A8: push    10h; Size
0x8593AA: call    FormHeapAlloc
0x8593AF: add     esp, 4
0x8593B2: mov     [esp+18h+arg_10], eax
0x8593B6: test    eax, eax
0x8593B8: mov     [esp+18h+var_4], 6
0x8593C0: jz      short loc_8593E7
0x8593C2: mov     ecx, [esp+18h+arg_8]
0x8593C6: mov     edx, [esp+18h+arg_4]
0x8593CA: push    ecx
0x8593CB: movzx   ecx, byte ptr [esi]
0x8593CE: push    edx
0x8593CF: mov     edx, [esp+20h+arg_0]
0x8593D3: push    2
0x8593D5: push    ecx
0x8593D6: push    0ECh ; 'ì'
0x8593DB: push    edx
0x8593DC: push    eax
0x8593DD: call    sub_7E2370
0x8593E2: add     esp, 1Ch
0x8593E5: jmp     short loc_8593E9
0x8593E7: xor     eax, eax
0x8593E9: mov     [esp+18h+arg_10], eax
0x8593ED: lea     eax, [esp+18h+arg_10]
0x8593F1: push    eax
0x8593F2: lea     ecx, [edi+28h]
0x8593F5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8593FD: call    sub_5B1E20
0x859402: jmp     short loc_85940C
0x859404: mov     eax, [esp+18h+arg_C]
0x859408: add     word ptr [eax], 1
0x85940C: mov     byte ptr [esi], 0
0x85940F: mov     ecx, [esp+18h+var_C]
0x859413: mov     large fs:0, ecx
0x85941A: pop     ecx
0x85941B: pop     edi
0x85941C: pop     esi
0x85941D: add     esp, 0Ch
0x859420: retn    2Ch ; ','
