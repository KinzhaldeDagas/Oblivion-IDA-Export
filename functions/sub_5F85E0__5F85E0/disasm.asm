0x5F85E0: mov     eax, ds:0B33B00h
0x5F85E5: mov     eax, [eax+44h]
0x5F85E8: cmp     eax, 1FFFF000h
0x5F85ED: push    ebx
0x5F85EE: push    esi
0x5F85EF: push    edi
0x5F85F0: mov     edi, ecx
0x5F85F2: jz      short loc_5F85FB
0x5F85F4: cmp     eax, 7FFFF000h
0x5F85F9: jnz     short loc_5F8600
0x5F85FB: call    sub_5F0410
0x5F8600: mov     ecx, ds:0B33B00h
0x5F8606: mov     eax, [ecx+44h]
0x5F8609: xor     ebx, ebx
0x5F860B: cmp     eax, 1FFFF000h
0x5F8610: jz      short loc_5F861D
0x5F8612: cmp     eax, 7FFFF000h
0x5F8617: jnz     loc_5F86D4
0x5F861D: mov     ecx, ds:0B333C4h; this
0x5F8623: cmp     edi, ecx
0x5F8625: jnz     short loc_5F8675
0x5F8627: push    1; a2
0x5F8629: call    Player_GetAnimData
0x5F862E: cmp     eax, ebx
0x5F8630: jz      short loc_5F8667
0x5F8632: mov     eax, [eax+98h]
0x5F8638: cmp     eax, ebx
0x5F863A: jz      short loc_5F8667
0x5F863C: mov     ecx, [eax+7Ch]
0x5F863F: mov     edx, [ecx]
0x5F8641: mov     eax, [edx+4Ch]
0x5F8644: push    offset aMagicnode; "magicNode"
0x5F8649: call    eax
0x5F864B: cmp     eax, ebx
0x5F864D: jz      short loc_5F8667
0x5F864F: mov     edx, [eax]
0x5F8651: mov     ecx, eax
0x5F8653: mov     eax, [edx+8]
0x5F8656: call    eax
0x5F8658: cmp     eax, ebx
0x5F865A: jz      short loc_5F8667
0x5F865C: lea     ecx, [eax+0ACh]
0x5F8662: call    sub_477EF0
0x5F8667: mov     ecx, ds:0B333C4h; this
0x5F866D: push    ebx; a2
0x5F866E: call    Player_GetAnimData
0x5F8673: jmp     short loc_5F8681
0x5F8675: mov     edx, [edi]
0x5F8677: mov     eax, [edx+164h]
0x5F867D: mov     ecx, edi
0x5F867F: call    eax
0x5F8681: cmp     eax, ebx
0x5F8683: jz      short loc_5F86BA
0x5F8685: mov     eax, [eax+98h]
0x5F868B: cmp     eax, ebx
0x5F868D: jz      short loc_5F86BA
0x5F868F: mov     ecx, [eax+7Ch]
0x5F8692: mov     edx, [ecx]
0x5F8694: mov     eax, [edx+4Ch]
0x5F8697: push    offset aMagicnode; "magicNode"
0x5F869C: call    eax
0x5F869E: cmp     eax, ebx
0x5F86A0: jz      short loc_5F86BA
0x5F86A2: mov     edx, [eax]
0x5F86A4: mov     ecx, eax
0x5F86A6: mov     eax, [edx+8]
0x5F86A9: call    eax
0x5F86AB: cmp     eax, ebx
0x5F86AD: jz      short loc_5F86BA
0x5F86AF: lea     ecx, [eax+0ACh]
0x5F86B5: call    sub_477EF0
0x5F86BA: mov     esi, [edi+60h]
0x5F86BD: cmp     esi, ebx
0x5F86BF: jz      short loc_5F86D1
0x5F86C1: mov     ecx, esi; this
0x5F86C3: call    MagicCaster_CastingVFX_destr
0x5F86C8: push    esi
0x5F86C9: call    FormHeapFree
0x5F86CE: add     esp, 4
0x5F86D1: mov     [edi+60h], ebx
0x5F86D4: push    ebp
0x5F86D5: mov     ebp, [esp+10h+arg_0]
0x5F86D9: push    ebp
0x5F86DA: mov     ecx, edi
0x5F86DC: call    MobileObject_PreLoadModifiedForm
0x5F86E1: test    ebp, 8000h
0x5F86E7: jz      short loc_5F8729
0x5F86E9: lea     esi, [edi+0A4h]
0x5F86EF: cmp     esi, ebx
0x5F86F1: jz      short loc_5F8729
0x5F86F3: mov     ecx, esi
0x5F86F5: call    BSSimpleList_IsEmpty
0x5F86FA: test    al, al
0x5F86FC: jnz     short loc_5F8729
0x5F86FE: mov     ecx, [esi]
0x5F8700: push    ecx
0x5F8701: call    FormHeapFree
0x5F8706: mov     eax, [esi+4]
0x5F8709: add     esp, 4
0x5F870C: cmp     eax, ebx
0x5F870E: jz      short loc_5F8725
0x5F8710: mov     edx, [eax+4]
0x5F8713: mov     [esi+4], edx
0x5F8716: mov     ecx, [eax]
0x5F8718: push    eax
0x5F8719: mov     [esi], ecx
0x5F871B: call    FormHeapFree
0x5F8720: add     esp, 4
0x5F8723: jmp     short loc_5F86F3
0x5F8725: mov     [esi], ebx
0x5F8727: jmp     short loc_5F86F3
0x5F8729: test    ebp, 200000h
0x5F872F: pop     ebp
0x5F8730: jz      short loc_5F873D
0x5F8732: lea     ecx, [edi+88h]
0x5F8738: call    AVCollection_Clear
0x5F873D: mov     edx, ds:0B33B00h
0x5F8743: mov     eax, [edx+44h]
0x5F8746: cmp     eax, 1FFFF000h
0x5F874B: jz      short loc_5F8758
0x5F874D: cmp     eax, 7FFFF000h
0x5F8752: jnz     loc_5F87E0
0x5F8758: mov     ecx, [edi+58h]
0x5F875B: cmp     ecx, ebx
0x5F875D: jz      short loc_5F8789
0x5F875F: mov     eax, [ecx]
0x5F8761: mov     edx, [eax+0E8h]
0x5F8767: push    edi
0x5F8768: call    edx
0x5F876A: cmp     eax, ebx
0x5F876C: jz      short loc_5F8789
0x5F876E: mov     edx, [eax]
0x5F8770: fld     dword ptr ds:0A41328h
0x5F8776: push    ebx
0x5F8777: push    1
0x5F8779: push    1
0x5F877B: push    1
0x5F877D: push    ebx
0x5F877E: push    ecx
0x5F877F: mov     ecx, eax
0x5F8781: fstp    [esp+24h+var_24]
0x5F8784: mov     eax, [edx+78h]
0x5F8787: call    eax
0x5F8789: mov     ecx, [edi+58h]
0x5F878C: cmp     ecx, ebx
0x5F878E: jz      short loc_5F87AE
0x5F8790: mov     edx, [ecx]
0x5F8792: mov     eax, [edx+0E8h]
0x5F8798: push    edi
0x5F8799: call    eax
0x5F879B: cmp     eax, ebx
0x5F879D: jz      short loc_5F87AE
0x5F879F: mov     edx, [eax]
0x5F87A1: push    1
0x5F87A3: mov     ecx, eax
0x5F87A5: mov     eax, [edx+9Ch]
0x5F87AB: push    ebx
0x5F87AC: call    eax
0x5F87AE: mov     ecx, edi
0x5F87B0: call    sub_5E7B90
0x5F87B5: mov     [edi+80h], bl
0x5F87BB: mov     [edi+0CCh], ebx
0x5F87C1: mov     [edi+0C4h], ebx
0x5F87C7: mov     byte ptr [edi+0E0h], 1
0x5F87CE: mov     [edi+0FCh], bl
0x5F87D4: mov     [edi+0D8h], bl
0x5F87DA: mov     [edi+0C0h], bl
0x5F87E0: pop     edi
0x5F87E1: pop     esi
0x5F87E2: pop     ebx
0x5F87E3: retn    4
