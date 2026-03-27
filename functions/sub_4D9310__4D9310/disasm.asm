0x4D9310: cmp     [esp+arg_0], 0
0x4D9315: push    ebx
0x4D9316: push    ebp
0x4D9317: push    esi
0x4D9318: push    edi
0x4D9319: mov     esi, ecx
0x4D931B: jz      loc_4D960A
0x4D9321: mov     eax, [esi]
0x4D9323: mov     edx, [eax+170h]
0x4D9329: call    edx
0x4D932B: test    eax, eax
0x4D932D: jz      loc_4D96DF
0x4D9333: mov     eax, ds:0B33398h
0x4D9338: cmp     dword ptr [eax+24h], 0
0x4D933C: jz      loc_4D96DF
0x4D9342: mov     ecx, [esi+8]
0x4D9345: shr     ecx, 0Bh
0x4D9348: test    cl, 1
0x4D934B: jnz     loc_4D96DF
0x4D9351: mov     edx, [esi]
0x4D9353: mov     eax, [edx+170h]
0x4D9359: mov     ecx, esi
0x4D935B: call    eax
0x4D935D: cmp     byte ptr [eax+4], 12h
0x4D9361: jnz     loc_4D93F7
0x4D9367: lea     ebp, [esi+44h]
0x4D936A: mov     ecx, ebp
0x4D936C: call    sub_41E960
0x4D9371: mov     edi, eax
0x4D9373: test    edi, edi
0x4D9375: jz      short loc_4D93A4
0x4D9377: mov     ecx, edi
0x4D9379: call    sub_6B73A0
0x4D937E: test    al, al
0x4D9380: jz      short loc_4D9390
0x4D9382: mov     ecx, edi
0x4D9384: call    sub_6B7240
0x4D9389: mov     ecx, edi
0x4D938B: call    sub_6B73C0
0x4D9390: mov     ecx, edi
0x4D9392: call    sub_6B73A0
0x4D9397: test    al, al
0x4D9399: jnz     short loc_4D93A4
0x4D939B: push    5Bh ; '['
0x4D939D: mov     ecx, ebp
0x4D939F: call    BaseExtraList_RemoveExtraByType
0x4D93A4: mov     edx, [esi]
0x4D93A6: mov     eax, [edx+170h]
0x4D93AC: mov     ecx, esi
0x4D93AE: call    eax
0x4D93B0: mov     ecx, ds:0B33398h
0x4D93B6: mov     edx, [esi]
0x4D93B8: mov     edi, [eax+54h]
0x4D93BB: mov     ebx, [ecx+24h]
0x4D93BE: mov     eax, [edx+174h]
0x4D93C4: mov     ecx, esi
0x4D93C6: call    eax
0x4D93C8: mov     edx, [eax]
0x4D93CA: push    1; int
0x4D93CC: push    1; int
0x4D93CE: push    0; int
0x4D93D0: push    edi; int
0x4D93D1: sub     esp, 0Ch
0x4D93D4: mov     ecx, esp
0x4D93D6: mov     [ecx], edx
0x4D93D8: mov     edx, [eax+4]
0x4D93DB: mov     eax, [eax+8]
0x4D93DE: mov     [ecx+4], edx
0x4D93E1: mov     [ecx+8], eax
0x4D93E4: mov     ecx, ebx
0x4D93E6: call    sub_6AE4B0
0x4D93EB: test    eax, eax
0x4D93ED: jz      short loc_4D93F7
0x4D93EF: push    eax
0x4D93F0: mov     ecx, ebp
0x4D93F2: call    sub_423B10
0x4D93F7: mov     edx, [esi]
0x4D93F9: mov     eax, [edx+170h]
0x4D93FF: mov     ecx, esi
0x4D9401: call    eax
0x4D9403: cmp     byte ptr [eax+4], 18h
0x4D9407: jnz     loc_4D94AC
0x4D940D: mov     ecx, [esi+8]
0x4D9410: shr     ecx, 0Dh
0x4D9413: test    cl, 1
0x4D9416: jnz     loc_4D94AC
0x4D941C: lea     ebp, [esi+44h]
0x4D941F: mov     ecx, ebp
0x4D9421: call    sub_41E960
0x4D9426: mov     edi, eax
0x4D9428: test    edi, edi
0x4D942A: jz      short loc_4D9459
0x4D942C: mov     ecx, edi
0x4D942E: call    sub_6B73A0
0x4D9433: test    al, al
0x4D9435: jz      short loc_4D9445
0x4D9437: mov     ecx, edi
0x4D9439: call    sub_6B7240
0x4D943E: mov     ecx, edi
0x4D9440: call    sub_6B73C0
0x4D9445: mov     ecx, edi
0x4D9447: call    sub_6B73A0
0x4D944C: test    al, al
0x4D944E: jnz     short loc_4D9459
0x4D9450: push    5Bh ; '['
0x4D9452: mov     ecx, ebp
0x4D9454: call    BaseExtraList_RemoveExtraByType
0x4D9459: mov     edx, [esi]
0x4D945B: mov     eax, [edx+170h]
0x4D9461: mov     ecx, esi
0x4D9463: call    eax
0x4D9465: mov     ecx, ds:0B33398h
0x4D946B: mov     edx, [esi]
0x4D946D: mov     edi, [eax+60h]
0x4D9470: mov     ebx, [ecx+24h]
0x4D9473: mov     eax, [edx+174h]
0x4D9479: mov     ecx, esi
0x4D947B: call    eax
0x4D947D: mov     edx, [eax]
0x4D947F: push    0; int
0x4D9481: push    1; int
0x4D9483: push    0; int
0x4D9485: push    edi; int
0x4D9486: sub     esp, 0Ch
0x4D9489: mov     ecx, esp
0x4D948B: mov     [ecx], edx
0x4D948D: mov     edx, [eax+4]
0x4D9490: mov     eax, [eax+8]
0x4D9493: mov     [ecx+4], edx
0x4D9496: mov     [ecx+8], eax
0x4D9499: mov     ecx, ebx
0x4D949B: call    sub_6AE4B0
0x4D94A0: test    eax, eax
0x4D94A2: jz      short loc_4D94AC
0x4D94A4: push    eax
0x4D94A5: mov     ecx, ebp
0x4D94A7: call    sub_423B10
0x4D94AC: mov     edx, [esi]
0x4D94AE: mov     eax, [edx+170h]
0x4D94B4: mov     ecx, esi
0x4D94B6: call    eax
0x4D94B8: cmp     byte ptr [eax+4], 1Ah
0x4D94BC: jnz     loc_4D9564
0x4D94C2: mov     ecx, [esi+8]
0x4D94C5: shr     ecx, 0Dh
0x4D94C8: test    cl, 1
0x4D94CB: jnz     loc_4D9564
0x4D94D1: lea     ebp, [esi+44h]
0x4D94D4: mov     ecx, ebp
0x4D94D6: call    sub_41E960
0x4D94DB: mov     edi, eax
0x4D94DD: test    edi, edi
0x4D94DF: jz      short loc_4D950E
0x4D94E1: mov     ecx, edi
0x4D94E3: call    sub_6B73A0
0x4D94E8: test    al, al
0x4D94EA: jz      short loc_4D94FA
0x4D94EC: mov     ecx, edi
0x4D94EE: call    sub_6B7240
0x4D94F3: mov     ecx, edi
0x4D94F5: call    sub_6B73C0
0x4D94FA: mov     ecx, edi
0x4D94FC: call    sub_6B73A0
0x4D9501: test    al, al
0x4D9503: jnz     short loc_4D950E
0x4D9505: push    5Bh ; '['
0x4D9507: mov     ecx, ebp
0x4D9509: call    BaseExtraList_RemoveExtraByType
0x4D950E: mov     edx, [esi]
0x4D9510: mov     eax, [edx+170h]
0x4D9516: mov     ecx, esi
0x4D9518: call    eax
0x4D951A: mov     ecx, ds:0B33398h
0x4D9520: mov     edx, [esi]
0x4D9522: mov     edi, [eax+8Ch]
0x4D9528: mov     ebx, [ecx+24h]
0x4D952B: mov     eax, [edx+174h]
0x4D9531: mov     ecx, esi
0x4D9533: call    eax
0x4D9535: mov     edx, [eax]
0x4D9537: push    1; int
0x4D9539: push    1; int
0x4D953B: push    0; int
0x4D953D: push    edi; int
0x4D953E: sub     esp, 0Ch
0x4D9541: mov     ecx, esp
0x4D9543: mov     [ecx], edx
0x4D9545: mov     edx, [eax+4]
0x4D9548: mov     eax, [eax+8]
0x4D954B: mov     [ecx+4], edx
0x4D954E: mov     [ecx+8], eax
0x4D9551: mov     ecx, ebx
0x4D9553: call    sub_6AE4B0
0x4D9558: test    eax, eax
0x4D955A: jz      short loc_4D9564
0x4D955C: push    eax
0x4D955D: mov     ecx, ebp
0x4D955F: call    sub_423B10
0x4D9564: mov     edx, [esi]
0x4D9566: mov     eax, [edx+170h]
0x4D956C: mov     ecx, esi
0x4D956E: call    eax
0x4D9570: cmp     byte ptr [eax+4], 0Ah
0x4D9574: jnz     loc_4D96DF
0x4D957A: lea     ecx, [esi+44h]
0x4D957D: call    sub_41E960
0x4D9582: mov     edi, eax
0x4D9584: test    edi, edi
0x4D9586: jz      short loc_4D95A1
0x4D9588: mov     ecx, edi
0x4D958A: call    sub_6B73A0
0x4D958F: test    al, al
0x4D9591: jz      short loc_4D95A1
0x4D9593: mov     ecx, edi
0x4D9595: call    sub_6B7240
0x4D959A: mov     ecx, edi
0x4D959C: call    sub_6B73C0
0x4D95A1: mov     ecx, ds:0B33398h
0x4D95A7: mov     edx, [esi]
0x4D95A9: mov     ebp, [ecx+24h]
0x4D95AC: mov     eax, [edx+174h]
0x4D95B2: mov     ebx, [esi+0Ch]
0x4D95B5: mov     ecx, esi
0x4D95B7: call    eax
0x4D95B9: mov     edx, [esi]
0x4D95BB: push    1; int
0x4D95BD: push    0; int
0x4D95BF: mov     edi, eax
0x4D95C1: mov     eax, [edx+170h]
0x4D95C7: push    ebx; int
0x4D95C8: mov     ecx, esi
0x4D95CA: call    eax
0x4D95CC: mov     ecx, [edi]
0x4D95CE: mov     edx, [edi+4]
0x4D95D1: push    eax; int
0x4D95D2: sub     esp, 0Ch
0x4D95D5: mov     eax, esp
0x4D95D7: mov     [eax], ecx
0x4D95D9: mov     ecx, [edi+8]
0x4D95DC: mov     [eax+4], edx
0x4D95DF: mov     [eax+8], ecx
0x4D95E2: mov     ecx, ebp
0x4D95E4: call    sub_6AE4B0
0x4D95E9: mov     esi, eax
0x4D95EB: test    esi, esi
0x4D95ED: jz      loc_4D96DF
0x4D95F3: mov     ecx, esi; this
0x4D95F5: call    sub_6B73E0
0x4D95FA: push    esi
0x4D95FB: call    FormHeapFree
0x4D9600: add     esp, 4
0x4D9603: pop     edi
0x4D9604: pop     esi
0x4D9605: pop     ebp
0x4D9606: pop     ebx
0x4D9607: retn    4
0x4D960A: mov     edx, [esi]
0x4D960C: mov     eax, [edx+170h]
0x4D9612: call    eax
0x4D9614: test    eax, eax
0x4D9616: jz      short loc_4D9667
0x4D9618: mov     edx, [esi]
0x4D961A: mov     eax, [edx+170h]
0x4D9620: mov     ecx, esi
0x4D9622: call    eax
0x4D9624: cmp     byte ptr [eax+4], 0Ah
0x4D9628: jnz     short loc_4D9667
0x4D962A: mov     ecx, ds:0B33398h
0x4D9630: mov     ecx, [ecx+24h]
0x4D9633: test    ecx, ecx
0x4D9635: jz      short loc_4D9667
0x4D9637: mov     eax, [esi+0Ch]
0x4D963A: push    eax
0x4D963B: call    sub_6ACA40
0x4D9640: test    al, al
0x4D9642: jz      short loc_4D9667
0x4D9644: mov     edx, [esi+0Ch]
0x4D9647: mov     eax, ds:0B33398h
0x4D964C: mov     ecx, [eax+24h]
0x4D964F: push    edx
0x4D9650: call    sub_6AB890
0x4D9655: mov     ecx, [esi+0Ch]
0x4D9658: mov     edx, ds:0B33398h
0x4D965E: push    ecx
0x4D965F: mov     ecx, [edx+24h]
0x4D9662: call    sub_6AC9F0
0x4D9667: mov     eax, [esi]
0x4D9669: mov     edx, [eax+170h]
0x4D966F: mov     ecx, esi
0x4D9671: call    edx
0x4D9673: test    eax, eax
0x4D9675: jz      short loc_4D96DF
0x4D9677: mov     eax, ds:0B33398h
0x4D967C: cmp     dword ptr [eax+24h], 0
0x4D9680: jz      short loc_4D96DF
0x4D9682: mov     edx, [esi]
0x4D9684: mov     eax, [edx+170h]
0x4D968A: mov     ecx, esi
0x4D968C: call    eax
0x4D968E: cmp     byte ptr [eax+4], 12h
0x4D9692: jz      short loc_4D96B8
0x4D9694: mov     edx, [esi]
0x4D9696: mov     eax, [edx+170h]
0x4D969C: mov     ecx, esi
0x4D969E: call    eax
0x4D96A0: cmp     byte ptr [eax+4], 18h
0x4D96A4: jz      short loc_4D96B8
0x4D96A6: mov     edx, [esi]
0x4D96A8: mov     eax, [edx+170h]
0x4D96AE: mov     ecx, esi
0x4D96B0: call    eax
0x4D96B2: cmp     byte ptr [eax+4], 1Ah
0x4D96B6: jnz     short loc_4D96DF
0x4D96B8: add     esi, 44h ; 'D'
0x4D96BB: mov     ecx, esi
0x4D96BD: call    sub_41E960
0x4D96C2: mov     edi, eax
0x4D96C4: test    edi, edi
0x4D96C6: jz      short loc_4D96DF
0x4D96C8: mov     ecx, edi
0x4D96CA: call    sub_6B7240
0x4D96CF: mov     ecx, edi
0x4D96D1: call    sub_6B73C0
0x4D96D6: push    5Bh ; '['
0x4D96D8: mov     ecx, esi
0x4D96DA: call    BaseExtraList_RemoveExtraByType
0x4D96DF: pop     edi
0x4D96E0: pop     esi
0x4D96E1: pop     ebp
0x4D96E2: pop     ebx
0x4D96E3: retn    4
