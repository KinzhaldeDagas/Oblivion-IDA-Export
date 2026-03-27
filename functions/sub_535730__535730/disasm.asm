0x535730: push    ebp
0x535731: mov     ebp, esp
0x535733: and     esp, 0FFFFFFF0h
0x535736: push    0FFFFFFFFh
0x535738: push    offset SEH_535730
0x53573D: mov     eax, large fs:0
0x535743: push    eax
0x535744: sub     esp, 68h
0x535747: push    ebx
0x535748: push    esi
0x535749: push    edi
0x53574A: mov     eax, ds:0B30AACh
0x53574F: xor     eax, esp
0x535751: push    eax
0x535752: lea     eax, [esp+84h+var_C]
0x535756: mov     large fs:0, eax
0x53575C: mov     ebx, ecx
0x53575E: push    14h; Size
0x535760: call    FormHeapAlloc
0x535765: add     esp, 4
0x535768: mov     [esp+84h+var_74], eax
0x53576C: xor     edi, edi
0x53576E: cmp     eax, edi
0x535770: mov     [esp+84h+var_4], edi
0x535777: jz      short loc_53578D
0x535779: fld     [ebp+arg_0]
0x53577C: push    1; float
0x53577E: push    ecx
0x53577F: mov     ecx, eax
0x535781: fstp    [esp+8Ch+var_8C]; float
0x535784: call    sub_532090
0x535789: mov     esi, eax
0x53578B: jmp     short loc_53578F
0x53578D: xor     esi, esi
0x53578F: lea     ecx, [esp+84h+var_70]
0x535793: call    sub_532250
0x535798: mov     ecx, [ebp+arg_4]
0x53579B: mov     eax, ecx
0x53579D: shl     eax, 10h
0x5357A0: or      eax, 1Ch
0x5357A3: cmp     esi, edi
0x5357A5: mov     [esp+84h+var_4], 1
0x5357B0: mov     [ebx+1A8h], ecx
0x5357B6: mov     [esp+84h+var_70], eax
0x5357BA: jz      short loc_5357C5
0x5357BC: mov     eax, [esi+8]
0x5357BF: mov     [esp+84h+var_6C], eax
0x5357C3: jmp     short loc_5357C9
0x5357C5: mov     [esp+84h+var_6C], edi
0x5357C9: fldz
0x5357CB: push    14h; Size
0x5357CD: fst     [esp+88h+var_4C]
0x5357D1: fst     [esp+88h+var_48]
0x5357D5: fst     [esp+88h+var_44]
0x5357D9: fst     [esp+88h+var_40]
0x5357DD: fst     [esp+88h+var_38]
0x5357E1: fst     [esp+88h+var_34]
0x5357E5: fst     [esp+88h+var_30]
0x5357E9: fst     [esp+88h+var_2C]
0x5357ED: fst     [esp+88h+var_24]
0x5357F1: fld1
0x5357F3: fst     [esp+88h+var_50]
0x5357F7: fst     [esp+88h+var_3C]
0x5357FB: fstp    [esp+88h+var_28]
0x5357FF: fst     [esp+88h+var_20]
0x535803: fst     [esp+88h+var_1C]
0x535807: fst     [esp+88h+var_18]
0x53580B: fstp    [esp+88h+var_14]
0x53580F: call    FormHeapAlloc
0x535814: add     esp, 4
0x535817: mov     [esp+84h+var_74], eax
0x53581B: cmp     eax, edi
0x53581D: mov     byte ptr [esp+84h+var_4], 2
0x535825: jz      short loc_535835
0x535827: lea     ecx, [esp+84h+var_70]
0x53582B: push    ecx
0x53582C: mov     ecx, eax
0x53582E: call    sub_531FC0
0x535833: mov     edi, eax
0x535835: mov     esi, [ebx+1A0h]
0x53583B: cmp     esi, edi
0x53583D: mov     byte ptr [esp+84h+var_4], 1
0x535845: jz      short loc_53587B
0x535847: test    esi, esi
0x535849: jz      short loc_535867
0x53584B: lea     edx, [esi+4]
0x53584E: push    edx; lpAddend
0x53584F: call    dword ptr ds:0A2807Ch
0x535855: test    eax, eax
0x535857: jnz     short loc_535867
0x535859: test    esi, esi
0x53585B: jz      short loc_535867
0x53585D: mov     eax, [esi]
0x53585F: mov     edx, [eax]
0x535861: push    1
0x535863: mov     ecx, esi
0x535865: call    edx
0x535867: test    edi, edi
0x535869: mov     [ebx+1A0h], edi
0x53586F: jz      short loc_53587B
0x535871: add     edi, 4
0x535874: push    edi; lpAddend
0x535875: call    dword ptr ds:0A28078h
0x53587B: mov     eax, [esp+84h+var_5C]
0x53587F: test    eax, eax
0x535881: mov     byte ptr [ebx+1A4h], 1
0x535888: mov     [esp+84h+var_4], 0FFFFFFFFh
0x535893: js      short loc_5358CD
0x535895: mov     ecx, ds:0BA9DE4h
0x53589B: mov     edx, large fs:2Ch
0x5358A2: mov     ecx, [edx+ecx*4]
0x5358A5: mov     ecx, [ecx+19Ch]
0x5358AB: test    ecx, ecx
0x5358AD: jnz     short loc_5358B5
0x5358AF: mov     ecx, ds:0BA7D9Ch
0x5358B5: mov     edx, [esp+84h+var_64]
0x5358B9: and     eax, 3FFFFFFFh
0x5358BE: add     eax, eax
0x5358C0: add     eax, eax
0x5358C2: push    14h
0x5358C4: add     eax, eax
0x5358C6: push    eax
0x5358C7: push    edx
0x5358C8: call    sub_8A75D0
0x5358CD: mov     ecx, dword ptr [esp+84h+var_C]
0x5358D1: mov     large fs:0, ecx
0x5358D8: pop     ecx
0x5358D9: pop     edi
0x5358DA: pop     esi
0x5358DB: pop     ebx
0x5358DC: mov     esp, ebp
0x5358DE: pop     ebp
0x5358DF: retn    8
