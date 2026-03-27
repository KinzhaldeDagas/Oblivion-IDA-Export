0x7D94B0: push    0FFFFFFFFh
0x7D94B2: push    offset ??0BSShaderPPLightingProperty@@QAE@XZ_SEH
0x7D94B7: mov     eax, large fs:0
0x7D94BD: push    eax
0x7D94BE: sub     esp, 8
0x7D94C1: push    ebx
0x7D94C2: push    ebp
0x7D94C3: push    esi
0x7D94C4: push    edi
0x7D94C5: mov     eax, ds:0B30AACh
0x7D94CA: xor     eax, esp
0x7D94CC: push    eax
0x7D94CD: lea     eax, [esp+28h+var_C]
0x7D94D1: mov     large fs:0, eax
0x7D94D7: mov     esi, ecx
0x7D94D9: mov     [esp+28h+var_14], esi
0x7D94DD: call    ??0BSShaderLightingProperty@@QAE@XZ; BSShaderLightingProperty::BSShaderLightingProperty(void)
0x7D94E2: fldz
0x7D94E4: mov     dword ptr [esi], offset ??_7BSShaderPPLightingProperty@@6B@; const BSShaderPPLightingProperty::`vftable'
0x7D94EA: fst     dword ptr [esi+0A8h]
0x7D94F0: fst     dword ptr [esi+0ACh]
0x7D94F6: xor     ebx, ebx
0x7D94F8: fst     dword ptr [esi+0B0h]
0x7D94FE: mov     [esp+28h+var_4], ebx
0x7D9502: fstp    dword ptr [esi+0B4h]
0x7D9508: mov     [esi+0D4h], ebx
0x7D950E: mov     [esi+0E0h], ebx
0x7D9514: push    0Ch; Size
0x7D9516: mov     byte ptr [esp+2Ch+var_4], 2
0x7D951B: mov     word ptr [esi+0B8h], 2
0x7D9524: call    FormHeapAlloc
0x7D9529: add     esp, 4
0x7D952C: mov     [esp+28h+var_10], eax
0x7D9530: cmp     eax, ebx
0x7D9532: mov     byte ptr [esp+28h+var_4], 3
0x7D9537: jz      short loc_7D9558
0x7D9539: push    offset sub_7016A0; a5
0x7D953E: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D9543: push    2; size
0x7D9545: lea     ebp, [eax+4]
0x7D9548: push    4; a2
0x7D954A: push    ebp; a1
0x7D954B: mov     dword ptr [eax], 2
0x7D9551: call    ArrayConstructor
0x7D9556: jmp     short loc_7D955A
0x7D9558: xor     ebp, ebp
0x7D955A: mov     [esi+0BCh], ebp
0x7D9560: mov     edi, [ebp+0]
0x7D9563: cmp     edi, ebx
0x7D9565: mov     byte ptr [esp+28h+var_4], 2
0x7D956A: jz      short loc_7D958B
0x7D956C: lea     eax, [edi+4]
0x7D956F: push    eax; lpAddend
0x7D9570: call    dword ptr ds:0A2807Ch
0x7D9576: test    eax, eax
0x7D9578: jnz     short loc_7D9588
0x7D957A: cmp     edi, ebx
0x7D957C: jz      short loc_7D9588
0x7D957E: mov     edx, [edi]
0x7D9580: mov     eax, [edx]
0x7D9582: push    1
0x7D9584: mov     ecx, edi
0x7D9586: call    eax
0x7D9588: mov     [ebp+0], ebx
0x7D958B: mov     edi, [esi+0BCh]
0x7D9591: mov     ebp, [edi+4]
0x7D9594: add     edi, 4
0x7D9597: cmp     ebp, ebx
0x7D9599: jz      short loc_7D95BA
0x7D959B: lea     ecx, [ebp+4]
0x7D959E: push    ecx; lpAddend
0x7D959F: call    dword ptr ds:0A2807Ch
0x7D95A5: test    eax, eax
0x7D95A7: jnz     short loc_7D95B8
0x7D95A9: cmp     ebp, ebx
0x7D95AB: jz      short loc_7D95B8
0x7D95AD: mov     edx, [ebp+0]
0x7D95B0: mov     eax, [edx]
0x7D95B2: push    1
0x7D95B4: mov     ecx, ebp
0x7D95B6: call    eax
0x7D95B8: mov     [edi], ebx
0x7D95BA: push    0Ch; Size
0x7D95BC: call    FormHeapAlloc
0x7D95C1: add     esp, 4
0x7D95C4: mov     [esp+28h+var_10], eax
0x7D95C8: cmp     eax, ebx
0x7D95CA: mov     byte ptr [esp+28h+var_4], 4
0x7D95CF: jz      short loc_7D95F0
0x7D95D1: push    offset sub_7016A0; a5
0x7D95D6: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D95DB: push    2; size
0x7D95DD: lea     edi, [eax+4]
0x7D95E0: push    4; a2
0x7D95E2: push    edi; a1
0x7D95E3: mov     dword ptr [eax], 2
0x7D95E9: call    ArrayConstructor
0x7D95EE: jmp     short loc_7D95F2
0x7D95F0: xor     edi, edi
0x7D95F2: mov     [esi+0C0h], edi
0x7D95F8: mov     ebp, [edi]
0x7D95FA: cmp     ebp, ebx
0x7D95FC: mov     byte ptr [esp+28h+var_4], 2
0x7D9601: jz      short loc_7D9622
0x7D9603: lea     ecx, [ebp+4]
0x7D9606: push    ecx; lpAddend
0x7D9607: call    dword ptr ds:0A2807Ch
0x7D960D: test    eax, eax
0x7D960F: jnz     short loc_7D9620
0x7D9611: cmp     ebp, ebx
0x7D9613: jz      short loc_7D9620
0x7D9615: mov     edx, [ebp+0]
0x7D9618: mov     eax, [edx]
0x7D961A: push    1
0x7D961C: mov     ecx, ebp
0x7D961E: call    eax
0x7D9620: mov     [edi], ebx
0x7D9622: mov     edi, [esi+0C0h]
0x7D9628: mov     ebp, [edi+4]
0x7D962B: add     edi, 4
0x7D962E: cmp     ebp, ebx
0x7D9630: jz      short loc_7D9651
0x7D9632: lea     ecx, [ebp+4]
0x7D9635: push    ecx; lpAddend
0x7D9636: call    dword ptr ds:0A2807Ch
0x7D963C: test    eax, eax
0x7D963E: jnz     short loc_7D964F
0x7D9640: cmp     ebp, ebx
0x7D9642: jz      short loc_7D964F
0x7D9644: mov     edx, [ebp+0]
0x7D9647: mov     eax, [edx]
0x7D9649: push    1
0x7D964B: mov     ecx, ebp
0x7D964D: call    eax
0x7D964F: mov     [edi], ebx
0x7D9651: push    0Ch; Size
0x7D9653: call    FormHeapAlloc
0x7D9658: add     esp, 4
0x7D965B: mov     [esp+28h+var_10], eax
0x7D965F: cmp     eax, ebx
0x7D9661: mov     byte ptr [esp+28h+var_4], 5
0x7D9666: jz      short loc_7D9687
0x7D9668: push    offset sub_7016A0; a5
0x7D966D: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D9672: push    2; size
0x7D9674: lea     edi, [eax+4]
0x7D9677: push    4; a2
0x7D9679: push    edi; a1
0x7D967A: mov     dword ptr [eax], 2
0x7D9680: call    ArrayConstructor
0x7D9685: jmp     short loc_7D9689
0x7D9687: xor     edi, edi
0x7D9689: mov     [esi+0C4h], edi
0x7D968F: mov     ebp, [edi]
0x7D9691: cmp     ebp, ebx
0x7D9693: mov     byte ptr [esp+28h+var_4], 2
0x7D9698: jz      short loc_7D96B9
0x7D969A: lea     ecx, [ebp+4]
0x7D969D: push    ecx; lpAddend
0x7D969E: call    dword ptr ds:0A2807Ch
0x7D96A4: test    eax, eax
0x7D96A6: jnz     short loc_7D96B7
0x7D96A8: cmp     ebp, ebx
0x7D96AA: jz      short loc_7D96B7
0x7D96AC: mov     edx, [ebp+0]
0x7D96AF: mov     eax, [edx]
0x7D96B1: push    1
0x7D96B3: mov     ecx, ebp
0x7D96B5: call    eax
0x7D96B7: mov     [edi], ebx
0x7D96B9: mov     edi, [esi+0C4h]
0x7D96BF: mov     ebp, [edi+4]
0x7D96C2: add     edi, 4
0x7D96C5: cmp     ebp, ebx
0x7D96C7: jz      short loc_7D96E8
0x7D96C9: lea     ecx, [ebp+4]
0x7D96CC: push    ecx; lpAddend
0x7D96CD: call    dword ptr ds:0A2807Ch
0x7D96D3: test    eax, eax
0x7D96D5: jnz     short loc_7D96E6
0x7D96D7: cmp     ebp, ebx
0x7D96D9: jz      short loc_7D96E6
0x7D96DB: mov     edx, [ebp+0]
0x7D96DE: mov     eax, [edx]
0x7D96E0: push    1
0x7D96E2: mov     ecx, ebp
0x7D96E4: call    eax
0x7D96E6: mov     [edi], ebx
0x7D96E8: push    2; Size
0x7D96EA: call    FormHeapAlloc
0x7D96EF: mov     [esi+0D0h], eax
0x7D96F5: mov     [eax], bl
0x7D96F7: mov     ecx, [esi+0D0h]
0x7D96FD: push    2; Size
0x7D96FF: mov     [ecx+1], bl
0x7D9702: call    FormHeapAlloc
0x7D9707: mov     [esi+0C8h], eax
0x7D970D: mov     byte ptr [eax], 1Eh
0x7D9710: mov     edx, [esi+0C8h]
0x7D9716: mov     byte ptr [edx+1], 1Eh
0x7D971A: mov     edi, [esi+0D4h]
0x7D9720: add     esp, 8
0x7D9723: cmp     edi, ebx
0x7D9725: jz      short loc_7D9749
0x7D9727: lea     eax, [edi+4]
0x7D972A: push    eax; lpAddend
0x7D972B: call    dword ptr ds:0A2807Ch
0x7D9731: test    eax, eax
0x7D9733: jnz     short loc_7D9743
0x7D9735: cmp     edi, ebx
0x7D9737: jz      short loc_7D9743
0x7D9739: mov     edx, [edi]
0x7D973B: mov     eax, [edx]
0x7D973D: push    1
0x7D973F: mov     ecx, edi
0x7D9741: call    eax
0x7D9743: mov     [esi+0D4h], ebx
0x7D9749: mov     edi, [esi+0E0h]
0x7D974F: cmp     edi, ebx
0x7D9751: jz      short loc_7D9775
0x7D9753: lea     ecx, [edi+4]
0x7D9756: push    ecx; lpAddend
0x7D9757: call    dword ptr ds:0A2807Ch
0x7D975D: test    eax, eax
0x7D975F: jnz     short loc_7D976F
0x7D9761: cmp     edi, ebx
0x7D9763: jz      short loc_7D976F
0x7D9765: mov     edx, [edi]
0x7D9767: mov     eax, [edx]
0x7D9769: push    1
0x7D976B: mov     ecx, edi
0x7D976D: call    eax
0x7D976F: mov     [esi+0E0h], ebx
0x7D9775: fldz
0x7D9777: mov     [esi+0ECh], ebx
0x7D977D: fstp    dword ptr [esi+0E8h]
0x7D9783: mov     [esi+0E4h], bl
0x7D9789: fld1
0x7D978B: mov     dword ptr [esi+0DCh], 1
0x7D9795: fst     dword ptr [esi+9Ch]
0x7D979B: mov     [esi+0D8h], ebx
0x7D97A1: fstp    dword ptr [esi+0A4h]
0x7D97A7: mov     eax, esi
0x7D97A9: cmp     ds:0B45DA4h, bl
0x7D97AF: jz      short loc_7D97BB
0x7D97B1: or      dword ptr [esi+1Ch], 2000h
0x7D97B8: mov     [esi+24h], ebx
0x7D97BB: mov     ecx, dword ptr [esp+28h+var_C]
0x7D97BF: mov     large fs:0, ecx
0x7D97C6: pop     ecx
0x7D97C7: pop     edi
0x7D97C8: pop     esi
0x7D97C9: pop     ebp
0x7D97CA: pop     ebx
0x7D97CB: add     esp, 14h
0x7D97CE: retn
