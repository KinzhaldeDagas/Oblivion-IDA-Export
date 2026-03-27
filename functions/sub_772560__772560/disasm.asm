0x772560: push    ecx
0x772561: push    ebx
0x772562: push    esi
0x772563: mov     esi, ecx
0x772565: xor     ebx, ebx
0x772567: cmp     [esi+5Bh], bl
0x77256A: push    edi
0x77256B: jnz     short loc_7725BD
0x77256D: mov     eax, [esi+14h]
0x772570: cmp     eax, ebx
0x772572: jz      short loc_772580
0x772574: mov     eax, [eax+8]
0x772577: push    eax
0x772578: call    sub_77CB50
0x77257D: add     esp, 4
0x772580: mov     ecx, [esi+0Ch]
0x772583: push    ecx
0x772584: call    sub_773620
0x772589: mov     edi, [esi+4]
0x77258C: add     esp, 4
0x77258F: cmp     edi, ebx
0x772591: jz      short loc_7725AF
0x772593: lea     edx, [edi+4]
0x772596: push    edx; lpAddend
0x772597: call    dword ptr ds:0A2807Ch
0x77259D: test    eax, eax
0x77259F: jnz     short loc_7725AF
0x7725A1: cmp     edi, ebx
0x7725A3: jz      short loc_7725AF
0x7725A5: mov     eax, [edi]
0x7725A7: mov     edx, [eax]
0x7725A9: push    1
0x7725AB: mov     ecx, edi
0x7725AD: call    edx
0x7725AF: push    esi
0x7725B0: call    FormHeapFree
0x7725B5: add     esp, 4
0x7725B8: pop     edi
0x7725B9: pop     esi
0x7725BA: pop     ebx
0x7725BB: pop     ecx
0x7725BC: retn
0x7725BD: mov     edi, [esi+4]
0x7725C0: cmp     edi, ebx
0x7725C2: jz      short loc_7725E3
0x7725C4: lea     eax, [edi+4]
0x7725C7: push    eax; lpAddend
0x7725C8: call    dword ptr ds:0A2807Ch
0x7725CE: test    eax, eax
0x7725D0: jnz     short loc_7725E0
0x7725D2: cmp     edi, ebx
0x7725D4: jz      short loc_7725E0
0x7725D6: mov     edx, [edi]
0x7725D8: mov     eax, [edx]
0x7725DA: push    1
0x7725DC: mov     ecx, edi
0x7725DE: call    eax
0x7725E0: mov     [esi+4], ebx
0x7725E3: mov     ecx, [esi+0Ch]
0x7725E6: call    sub_773240
0x7725EB: mov     ecx, [esi+0Ch]
0x7725EE: call    sub_773270
0x7725F3: mov     eax, [esi+14h]
0x7725F6: cmp     eax, ebx
0x7725F8: jz      short loc_772606
0x7725FA: mov     ecx, [eax+8]
0x7725FD: push    ecx
0x7725FE: call    sub_77CB50
0x772603: add     esp, 4
0x772606: lea     edx, [esp+10h+a2]
0x77260A: mov     [esi+14h], ebx
0x77260D: mov     [esi], ebx
0x77260F: mov     [esi+8], ebx
0x772612: mov     [esi+10h], ebx
0x772615: mov     [esi+5Ah], bl
0x772618: mov     ecx, ds:0B4275Ch; this
0x77261E: push    edx; a2
0x77261F: mov     [esp+14h+a2], esi
0x772623: call    sub_73A5E0
0x772628: pop     edi
0x772629: pop     esi
0x77262A: pop     ebx
0x77262B: pop     ecx
0x77262C: retn
