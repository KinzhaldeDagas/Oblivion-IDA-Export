0x6C2270: push    0FFFFFFFFh
0x6C2272: push    offset SEH_6CF490
0x6C2277: mov     eax, large fs:0
0x6C227D: push    eax
0x6C227E: push    ebx
0x6C227F: push    ebp
0x6C2280: push    esi
0x6C2281: push    edi
0x6C2282: mov     eax, ds:0B30AACh
0x6C2287: xor     eax, esp
0x6C2289: push    eax
0x6C228A: lea     eax, [esp+20h+var_C]
0x6C228E: mov     large fs:0, eax
0x6C2294: mov     edi, [esp+20h+size]
0x6C2298: xor     ecx, ecx
0x6C229A: mov     eax, edi
0x6C229C: mov     edx, 14h
0x6C22A1: mul     edx
0x6C22A3: seto    cl
0x6C22A6: neg     ecx
0x6C22A8: or      ecx, eax
0x6C22AA: xor     eax, eax
0x6C22AC: add     ecx, 4
0x6C22AF: setb    al
0x6C22B2: neg     eax
0x6C22B4: or      eax, ecx
0x6C22B6: push    eax; Size
0x6C22B7: call    FormHeapAlloc
0x6C22BC: add     esp, 4
0x6C22BF: mov     [esp+20h+size], eax
0x6C22C3: test    eax, eax
0x6C22C5: mov     [esp+20h+var_4], 0
0x6C22CD: jz      short loc_6C22EB
0x6C22CF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C22D4: push    offset sub_6C1F90; a4
0x6C22D9: push    edi; size
0x6C22DA: lea     esi, [eax+4]
0x6C22DD: push    14h; a2
0x6C22DF: push    esi; a1
0x6C22E0: mov     [eax], edi
0x6C22E2: call    ArrayConstructor
0x6C22E7: mov     ebp, esi
0x6C22E9: jmp     short loc_6C22ED
0x6C22EB: xor     ebp, ebp
0x6C22ED: test    edi, edi
0x6C22EF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C22F7: jbe     short loc_6C2310
0x6C22F9: mov     ebx, [esp+20h+arg_0]
0x6C22FD: mov     esi, ebp
0x6C22FF: nop
0x6C2300: push    ebx
0x6C2301: mov     ecx, esi
0x6C2303: call    sub_6BD510
0x6C2308: add     esi, 14h
0x6C230B: sub     edi, 1
0x6C230E: jnz     short loc_6C2300
0x6C2310: mov     eax, ebp
0x6C2312: mov     ecx, [esp+20h+var_C]
0x6C2316: mov     large fs:0, ecx
0x6C231D: pop     ecx
0x6C231E: pop     edi
0x6C231F: pop     esi
0x6C2320: pop     ebp
0x6C2321: pop     ebx
0x6C2322: add     esp, 0Ch
0x6C2325: retn
