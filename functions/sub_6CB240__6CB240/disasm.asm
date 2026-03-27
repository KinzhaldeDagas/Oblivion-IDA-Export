0x6CB240: push    0FFFFFFFFh
0x6CB242: push    offset SEH_6CB240
0x6CB247: mov     eax, large fs:0
0x6CB24D: push    eax
0x6CB24E: sub     esp, 8
0x6CB251: push    esi
0x6CB252: push    edi
0x6CB253: mov     eax, ds:0B30AACh
0x6CB258: xor     eax, esp
0x6CB25A: push    eax
0x6CB25B: lea     eax, [esp+20h+var_C]
0x6CB25F: mov     large fs:0, eax
0x6CB265: mov     [esp+20h+var_10], 0
0x6CB26D: mov     eax, [esp+20h+arg_4]
0x6CB271: mov     edx, [eax+210h]
0x6CB277: mov     ecx, [esp+20h+arg_8]
0x6CB27B: cmp     ecx, edx
0x6CB27D: jb      short loc_6CB29B
0x6CB27F: mov     eax, [esp+20h+arg_0]
0x6CB283: mov     dword ptr [eax], 0
0x6CB289: mov     ecx, [esp+20h+var_C]
0x6CB28D: mov     large fs:0, ecx
0x6CB294: pop     ecx
0x6CB295: pop     edi
0x6CB296: pop     esi
0x6CB297: add     esp, 14h
0x6CB29A: retn
0x6CB29B: mov     [esp+20h+arg_4], 0
0x6CB2A3: cmp     dword ptr [eax+0D8h], 5000000h
0x6CB2AD: mov     [esp+20h+var_4], 1
0x6CB2B5: jnb     loc_6CB345
0x6CB2BB: push    0; Src
0x6CB2BD: push    ecx; int
0x6CB2BE: push    eax; int
0x6CB2BF: lea     eax, [esp+2Ch+arg_8]
0x6CB2C3: push    eax; int
0x6CB2C4: call    sub_6D89F0
0x6CB2C9: mov     ecx, [esp+30h+arg_8]
0x6CB2CD: push    ecx
0x6CB2CE: lea     edx, [esp+34h+var_14]
0x6CB2D2: push    edx
0x6CB2D3: mov     byte ptr [esp+38h+var_4], 2
0x6CB2D8: call    sub_6CB0B0
0x6CB2DD: add     esp, 18h
0x6CB2E0: push    eax
0x6CB2E1: lea     ecx, [esp+24h+arg_4]
0x6CB2E5: mov     byte ptr [esp+24h+var_4], 3
0x6CB2EA: call    sub_55E2A0
0x6CB2EF: mov     eax, [esp+20h+var_14]
0x6CB2F3: test    eax, eax
0x6CB2F5: mov     byte ptr [esp+20h+var_4], 2
0x6CB2FA: jz      short loc_6CB31A
0x6CB2FC: mov     esi, eax
0x6CB2FE: add     eax, 4
0x6CB301: push    eax; lpAddend
0x6CB302: call    dword ptr ds:0A2807Ch
0x6CB308: test    eax, eax
0x6CB30A: jnz     short loc_6CB31A
0x6CB30C: test    esi, esi
0x6CB30E: jz      short loc_6CB31A
0x6CB310: mov     eax, [esi]
0x6CB312: mov     edx, [eax]
0x6CB314: push    1
0x6CB316: mov     ecx, esi
0x6CB318: call    edx
0x6CB31A: mov     esi, [esp+20h+arg_8]
0x6CB31E: test    esi, esi
0x6CB320: mov     byte ptr [esp+20h+var_4], 1
0x6CB325: jz      short loc_6CB366
0x6CB327: lea     eax, [esi+4]
0x6CB32A: push    eax; lpAddend
0x6CB32B: call    dword ptr ds:0A2807Ch
0x6CB331: test    eax, eax
0x6CB333: jnz     short loc_6CB366
0x6CB335: test    esi, esi
0x6CB337: jz      short loc_6CB366
0x6CB339: mov     edx, [esi]
0x6CB33B: mov     eax, [edx]
0x6CB33D: push    1
0x6CB33F: mov     ecx, esi
0x6CB341: call    eax
0x6CB343: jmp     short loc_6CB366
0x6CB345: mov     edx, [eax+208h]
0x6CB34B: mov     ecx, [edx+ecx*4]
0x6CB34E: push    ecx
0x6CB34F: push    offset dword_B3CB24
0x6CB354: call    NiRTTI_Cast
0x6CB359: add     esp, 8
0x6CB35C: push    eax; a2
0x6CB35D: lea     ecx, [esp+24h+arg_4]; this
0x6CB361: call    NiSmartPointer_Set??
0x6CB366: mov     esi, [esp+20h+arg_4]
0x6CB36A: test    esi, esi
0x6CB36C: mov     edi, [esp+20h+arg_0]
0x6CB370: mov     [edi], esi
0x6CB372: jz      short loc_6CB37E
0x6CB374: lea     eax, [esi+4]
0x6CB377: push    eax; lpAddend
0x6CB378: call    dword ptr ds:0A28078h
0x6CB37E: test    esi, esi
0x6CB380: mov     [esp+20h+var_10], 1
0x6CB388: mov     byte ptr [esp+20h+var_4], 0
0x6CB38D: jz      short loc_6CB3A7
0x6CB38F: lea     ecx, [esi+4]
0x6CB392: push    ecx; lpAddend
0x6CB393: call    dword ptr ds:0A2807Ch
0x6CB399: test    eax, eax
0x6CB39B: jnz     short loc_6CB3A7
0x6CB39D: mov     edx, [esi]
0x6CB39F: mov     eax, [edx]
0x6CB3A1: push    1
0x6CB3A3: mov     ecx, esi
0x6CB3A5: call    eax
0x6CB3A7: mov     eax, edi
0x6CB3A9: mov     ecx, [esp+20h+var_C]
0x6CB3AD: mov     large fs:0, ecx
0x6CB3B4: pop     ecx
0x6CB3B5: pop     edi
0x6CB3B6: pop     esi
0x6CB3B7: add     esp, 14h
0x6CB3BA: retn
