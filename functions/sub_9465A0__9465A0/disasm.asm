0x9465A0: sub     esp, 30h
0x9465A3: push    ebx
0x9465A4: push    ebp
0x9465A5: push    esi
0x9465A6: push    edi
0x9465A7: mov     ebx, ecx
0x9465A9: push    offset unk_A9C288
0x9465AE: lea     ecx, [esp+44h+var_30]
0x9465B2: call    sub_90BBA0
0x9465B7: mov     ecx, [ebx+2Ch]
0x9465BA: mov     edi, [esp+40h+arg_4]
0x9465BE: mov     ebp, [esp+40h+arg_0]
0x9465C2: xor     eax, eax
0x9465C4: mov     [esp+40h+var_2C], eax
0x9465C8: mov     [esp+40h+var_28], eax
0x9465CC: mov     [esp+40h+var_24], 80000000h
0x9465D4: cmp     [ecx+48h], eax
0x9465D7: mov     esi, edi
0x9465D9: jz      short loc_946600
0x9465DB: lea     edx, [esp+40h+arg_4]
0x9465DF: push    edx
0x9465E0: mov     ecx, edi
0x9465E2: call    sub_90D380
0x9465E7: cmp     byte ptr [eax], 0
0x9465EA: jz      short loc_946600
0x9465EC: mov     eax, [ebx+2Ch]
0x9465EF: mov     ecx, [eax+48h]
0x9465F2: mov     edx, [ecx]
0x9465F4: push    ebp
0x9465F5: call    dword ptr [edx+0Ch]
0x9465F8: mov     esi, eax
0x9465FA: test    esi, esi
0x9465FC: jnz     short loc_946600
0x9465FE: mov     esi, edi
0x946600: mov     al, byte ptr [esp+40h+arg_8]
0x946604: test    al, al
0x946606: mov     edi, [esp+40h+arg_C]
0x94660A: jz      loc_9466A8
0x946610: mov     edx, [edi+4]
0x946613: xor     eax, eax
0x946615: test    edx, edx
0x946617: jle     short loc_94662D
0x946619: mov     ecx, [edi]
0x94661B: jmp     short loc_946620
0x94661D: align 10h
0x946620: cmp     [ecx], ebp
0x946622: jz      short loc_94662D
0x946624: inc     eax
0x946625: add     ecx, 8
0x946628: cmp     eax, [edi+4]
0x94662B: jl      short loc_946620
0x94662D: cmp     eax, edx
0x94662F: jge     short loc_946680
0x946631: mov     eax, [esp+40h+var_24]
0x946635: test    eax, eax
0x946637: js      short loc_946674
0x946639: mov     ecx, large fs:2Ch
0x946640: mov     eax, ds:0BA9DE4h
0x946645: mov     edx, [ecx+eax*4]
0x946648: mov     ecx, [edx+19Ch]
0x94664E: test    ecx, ecx
0x946650: jnz     short loc_946658
0x946652: mov     ecx, ds:0BA7D9Ch
0x946658: mov     eax, [esp+40h+var_24]
0x94665C: mov     edx, [esp+40h+var_2C]
0x946660: and     eax, 3FFFFFFFh
0x946665: lea     eax, [eax+eax*2]
0x946668: push    14h
0x94666A: shl     eax, 3
0x94666D: push    eax
0x94666E: push    edx
0x94666F: call    sub_8A75D0
0x946674: xor     eax, eax
0x946676: pop     edi
0x946677: pop     esi
0x946678: pop     ebp
0x946679: pop     ebx
0x94667A: add     esp, 30h
0x94667D: retn    10h
0x946680: mov     eax, [edi+8]
0x946683: and     eax, 3FFFFFFFh
0x946688: cmp     edx, eax
0x94668A: jnz     short loc_946697
0x94668C: push    8
0x94668E: push    edi
0x94668F: call    sub_8A6EE0
0x946694: add     esp, 8
0x946697: mov     eax, [edi+4]
0x94669A: mov     ecx, [edi]
0x94669C: lea     ecx, [ecx+eax*8]
0x94669F: inc     eax
0x9466A0: mov     [edi+4], eax
0x9466A3: mov     [ecx], ebp
0x9466A5: mov     [ecx+4], esi
0x9466A8: xor     eax, eax
0x9466AA: push    1
0x9466AC: lea     edx, [esp+44h+var_20]
0x9466B0: push    edx
0x9466B1: lea     ecx, [esp+48h+var_14]
0x9466B5: mov     [esp+48h+var_20], eax
0x9466B9: mov     [esp+48h+var_1C], eax
0x9466BD: mov     [esp+48h+var_18], 80000000h
0x9466C5: call    sub_8BC030
0x9466CA: lea     eax, [esp+40h+var_2C]
0x9466CE: push    eax
0x9466CF: push    esi
0x9466D0: push    ebp
0x9466D1: push    0
0x9466D3: push    ebp
0x9466D4: lea     ecx, [esp+54h+var_30]
0x9466D8: push    ecx
0x9466D9: lea     edx, [esp+58h+var_14]
0x9466DD: push    edx
0x9466DE: call    sub_9582E0
0x9466E3: mov     ecx, [esp+5Ch+var_1C]
0x9466E7: add     esp, 1Ch
0x9466EA: cmp     eax, ecx
0x9466EC: jnz     loc_9467F6
0x9466F2: cmp     eax, 1
0x9466F5: jl      loc_9467F6
0x9466FB: mov     ecx, [ebx+14h]
0x9466FE: lea     esi, [eax+1]
0x946701: push    esi
0x946702: mov     [esp+44h+arg_4], esi
0x946706: call    sub_918440
0x94670B: mov     ecx, [ebx+14h]
0x94670E: push    24h ; '$'
0x946710: call    sub_9181B0
0x946715: mov     eax, [esp+40h+var_1C]
0x946719: mov     ecx, [esp+40h+var_20]
0x94671D: push    eax
0x94671E: push    ecx
0x94671F: mov     ecx, [ebx+14h]
0x946722: call    sub_918390
0x946727: mov     al, byte ptr [esp+40h+arg_8]
0x94672B: test    al, al
0x94672D: jz      short loc_946774
0x94672F: mov     eax, [esp+40h+var_28]
0x946733: xor     ebp, ebp
0x946735: test    eax, eax
0x946737: jle     short loc_946774
0x946739: xor     esi, esi
0x94673B: jmp     short loc_946740
0x94673D: align 10h
0x946740: mov     eax, [esp+40h+var_2C]
0x946744: mov     ecx, [esi+eax+8]
0x946748: mov     eax, [esi+eax+10h]
0x94674C: push    edi
0x94674D: push    ecx
0x94674E: mov     edx, esp
0x946750: push    eax
0x946751: push    ecx
0x946752: mov     ecx, ebx
0x946754: mov     byte ptr [edx], 1
0x946757: call    sub_9465A0
0x94675C: mov     ecx, [esp+40h+arg_4]
0x946760: add     ecx, eax
0x946762: mov     eax, [esp+40h+var_28]
0x946766: inc     ebp
0x946767: add     esi, 18h
0x94676A: cmp     ebp, eax
0x94676C: mov     [esp+40h+arg_4], ecx
0x946770: jl      short loc_946740
0x946772: mov     esi, ecx
0x946774: lea     ecx, [esp+40h+var_14]
0x946778: call    sub_8BC2E0
0x94677D: mov     eax, [esp+40h+var_18]
0x946781: test    eax, eax
0x946783: mov     edi, ds:0BA9DE4h
0x946789: mov     ebx, large fs:2Ch
0x946790: js      short loc_9467B7
0x946792: mov     edx, [ebx+edi*4]
0x946795: mov     ecx, [edx+19Ch]
0x94679B: test    ecx, ecx
0x94679D: jnz     short loc_9467A5
0x94679F: mov     ecx, ds:0BA7D9Ch
0x9467A5: push    14h
0x9467A7: and     eax, 3FFFFFFFh
0x9467AC: push    eax
0x9467AD: mov     eax, [esp+48h+var_20]
0x9467B1: push    eax
0x9467B2: call    sub_8A75D0
0x9467B7: mov     eax, [esp+40h+var_24]
0x9467BB: test    eax, eax
0x9467BD: js      short loc_9467EA
0x9467BF: mov     ecx, [ebx+edi*4]
0x9467C2: mov     ecx, [ecx+19Ch]
0x9467C8: test    ecx, ecx
0x9467CA: jnz     short loc_9467D2
0x9467CC: mov     ecx, ds:0BA7D9Ch
0x9467D2: and     eax, 3FFFFFFFh
0x9467D7: lea     edx, [eax+eax*2]
0x9467DA: mov     eax, [esp+40h+var_2C]
0x9467DE: push    14h
0x9467E0: shl     edx, 3
0x9467E3: push    edx
0x9467E4: push    eax
0x9467E5: call    sub_8A75D0
0x9467EA: mov     eax, esi
0x9467EC: pop     edi
0x9467ED: pop     esi
0x9467EE: pop     ebp
0x9467EF: pop     ebx
0x9467F0: add     esp, 30h
0x9467F3: retn    10h
0x9467F6: lea     ecx, [esp+40h+var_14]
0x9467FA: call    sub_8BC2E0
0x9467FF: mov     eax, [esp+40h+var_18]
0x946803: test    eax, eax
0x946805: mov     esi, ds:0BA9DE4h
0x94680B: mov     edi, large fs:2Ch
0x946812: js      short loc_946839
0x946814: mov     ecx, [edi+esi*4]
0x946817: mov     ecx, [ecx+19Ch]
0x94681D: test    ecx, ecx
0x94681F: jnz     short loc_946827
0x946821: mov     ecx, ds:0BA7D9Ch
0x946827: mov     edx, [esp+40h+var_20]
0x94682B: push    14h
0x94682D: and     eax, 3FFFFFFFh
0x946832: push    eax
0x946833: push    edx
0x946834: call    sub_8A75D0
0x946839: mov     eax, [esp+40h+var_24]
0x94683D: test    eax, eax
0x94683F: js      short loc_94686C
0x946841: mov     ecx, [edi+esi*4]
0x946844: mov     ecx, [ecx+19Ch]
0x94684A: test    ecx, ecx
0x94684C: jnz     short loc_946854
0x94684E: mov     ecx, ds:0BA7D9Ch
0x946854: and     eax, 3FFFFFFFh
0x946859: lea     edx, [eax+eax*2]
0x94685C: mov     eax, [esp+40h+var_2C]
0x946860: push    14h
0x946862: shl     edx, 3
0x946865: push    edx
0x946866: push    eax
0x946867: call    sub_8A75D0
0x94686C: pop     edi
0x94686D: pop     esi
0x94686E: pop     ebp
0x94686F: or      eax, 0FFFFFFFFh
0x946872: pop     ebx
0x946873: add     esp, 30h
0x946876: retn    10h
