0x8A2260: push    ebp
0x8A2261: mov     ebp, esp
0x8A2263: and     esp, 0FFFFFFF0h
0x8A2266: push    0FFFFFFFFh
0x8A2268: push    offset SEH_8C9980
0x8A226D: mov     eax, large fs:0
0x8A2273: push    eax
0x8A2274: sub     esp, 98h
0x8A227A: mov     eax, ds:0B30AACh
0x8A227F: xor     eax, esp
0x8A2281: mov     [esp+0A4h+var_14], eax
0x8A2288: push    ebx
0x8A2289: push    esi
0x8A228A: push    edi
0x8A228B: mov     eax, ds:0B30AACh
0x8A2290: xor     eax, esp
0x8A2292: push    eax
0x8A2293: lea     eax, [esp+0B4h+var_C]
0x8A229A: mov     large fs:0, eax
0x8A22A0: mov     esi, [ebp+arg_0]
0x8A22A3: mov     eax, ecx
0x8A22A5: test    eax, eax
0x8A22A7: mov     [esp+0B4h+var_9C], eax
0x8A22AB: jz      short loc_8A22B9
0x8A22AD: mov     eax, [eax+8]
0x8A22B0: test    eax, eax
0x8A22B2: jz      short loc_8A22B9
0x8A22B4: add     eax, 20h ; ' '
0x8A22B7: jmp     short loc_8A22BE
0x8A22B9: mov     eax, offset xmmword_B2F090
0x8A22BE: movaps  xmm0, xmmword ptr [eax]
0x8A22C1: movaps  [esp+0B4h+var_60], xmm0
0x8A22C6: movaps  xmm0, xmmword ptr [eax+10h]
0x8A22CA: movaps  [esp+0B4h+var_50], xmm0
0x8A22CF: movaps  xmm0, xmmword ptr [eax+20h]
0x8A22D3: movaps  [esp+0B4h+var_40], xmm0
0x8A22D8: movaps  xmm0, xmmword ptr [eax+30h]
0x8A22DC: lea     eax, [esp+0B4h+var_60]
0x8A22E0: push    eax
0x8A22E1: lea     ecx, [esp+0B8h+var_94]
0x8A22E5: push    ecx
0x8A22E6: movaps  [esp+0BCh+var_30], xmm0
0x8A22EE: call    sub_607740
0x8A22F3: lea     edx, [esp+0BCh+var_30]
0x8A22FA: push    edx
0x8A22FB: lea     eax, [esp+0C0h+var_70]
0x8A22FF: push    eax
0x8A2300: call    sub_43F3E0
0x8A2305: push    0DCh ; 'Ü'; Size
0x8A230A: call    FormHeapAlloc
0x8A230F: add     esp, 14h
0x8A2312: mov     [esp+0B4h+var_98], eax
0x8A2316: test    eax, eax
0x8A2318: mov     [esp+0B4h+var_4], 0
0x8A2323: jz      short loc_8A2332
0x8A2325: push    0
0x8A2327: mov     ecx, eax; this
0x8A2329: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x8A232E: mov     ebx, eax
0x8A2330: jmp     short loc_8A2334
0x8A2332: xor     ebx, ebx
0x8A2334: push    offset aBhktransformsh; "bhkTransformShape"
0x8A2339: mov     ecx, ebx
0x8A233B: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x8A2346: call    NiObjectNET_SetName
0x8A234B: mov     edx, [esi]
0x8A234D: mov     eax, [edx+84h]
0x8A2353: push    0
0x8A2355: push    ebx
0x8A2356: mov     ecx, esi
0x8A2358: call    eax
0x8A235A: mov     ecx, [esp+0B4h+var_70]
0x8A235E: mov     edx, [esp+0B4h+var_6C]
0x8A2362: mov     eax, [esp+0B4h+var_68]
0x8A2366: mov     [ebx+54h], ecx
0x8A2369: mov     [ebx+58h], edx
0x8A236C: mov     [ebx+5Ch], eax
0x8A236F: mov     eax, [esp+0B4h+var_9C]
0x8A2373: test    eax, eax
0x8A2375: lea     edi, [ebx+30h]
0x8A2378: mov     ecx, 9
0x8A237D: lea     esi, [esp+0B4h+var_94]
0x8A2381: rep movsd
0x8A2383: jz      short loc_8A2398
0x8A2385: mov     eax, [eax+8]
0x8A2388: test    eax, eax
0x8A238A: jz      short loc_8A2398
0x8A238C: mov     eax, [eax+0Ch]
0x8A238F: test    eax, eax
0x8A2391: jz      short loc_8A2398
0x8A2393: mov     ecx, [eax+8]
0x8A2396: jmp     short loc_8A239A
0x8A2398: xor     ecx, ecx
0x8A239A: test    ecx, ecx
0x8A239C: jz      short loc_8A23A9
0x8A239E: mov     edx, [ecx]
0x8A23A0: mov     eax, [edx+90h]
0x8A23A6: push    ebx
0x8A23A7: call    eax
0x8A23A9: mov     ecx, dword ptr [esp+0B4h+var_C]
0x8A23B0: mov     large fs:0, ecx
0x8A23B7: pop     ecx
0x8A23B8: pop     edi
0x8A23B9: pop     esi
0x8A23BA: pop     ebx
0x8A23BB: mov     ecx, [esp+0A4h+var_14]
0x8A23C2: xor     ecx, esp
0x8A23C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A23C9: mov     esp, ebp
0x8A23CB: pop     ebp
0x8A23CC: retn    4
