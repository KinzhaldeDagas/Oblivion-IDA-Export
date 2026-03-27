0x6C2590: push    0FFFFFFFFh
0x6C2592: push    offset SEH_6CF490
0x6C2597: mov     eax, large fs:0
0x6C259D: push    eax
0x6C259E: push    ebx
0x6C259F: push    ebp
0x6C25A0: push    esi
0x6C25A1: push    edi
0x6C25A2: mov     eax, ds:0B30AACh
0x6C25A7: xor     eax, esp
0x6C25A9: push    eax
0x6C25AA: lea     eax, [esp+20h+var_C]
0x6C25AE: mov     large fs:0, eax
0x6C25B4: mov     edi, [esp+20h+size]
0x6C25B8: xor     ecx, ecx
0x6C25BA: mov     eax, edi
0x6C25BC: mov     edx, 8
0x6C25C1: mul     edx
0x6C25C3: seto    cl
0x6C25C6: neg     ecx
0x6C25C8: or      ecx, eax
0x6C25CA: xor     eax, eax
0x6C25CC: add     ecx, 4
0x6C25CF: setb    al
0x6C25D2: neg     eax
0x6C25D4: or      eax, ecx
0x6C25D6: push    eax; Size
0x6C25D7: call    FormHeapAlloc
0x6C25DC: add     esp, 4
0x6C25DF: mov     [esp+20h+size], eax
0x6C25E3: test    eax, eax
0x6C25E5: mov     [esp+20h+var_4], 0
0x6C25ED: jz      short loc_6C260B
0x6C25EF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C25F4: push    offset sub_7616D0; a4
0x6C25F9: push    edi; size
0x6C25FA: lea     esi, [eax+4]
0x6C25FD: push    8; a2
0x6C25FF: push    esi; a1
0x6C2600: mov     [eax], edi
0x6C2602: call    ArrayConstructor
0x6C2607: mov     ebp, esi
0x6C2609: jmp     short loc_6C260D
0x6C260B: xor     ebp, ebp
0x6C260D: test    edi, edi
0x6C260F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C2617: jbe     short loc_6C2630
0x6C2619: mov     ebx, [esp+20h+arg_0]
0x6C261D: mov     esi, ebp
0x6C261F: nop
0x6C2620: push    ebx
0x6C2621: mov     ecx, esi
0x6C2623: call    sub_6BB5E0
0x6C2628: add     esi, 8
0x6C262B: sub     edi, 1
0x6C262E: jnz     short loc_6C2620
0x6C2630: mov     eax, ebp
0x6C2632: mov     ecx, [esp+20h+var_C]
0x6C2636: mov     large fs:0, ecx
0x6C263D: pop     ecx
0x6C263E: pop     edi
0x6C263F: pop     esi
0x6C2640: pop     ebp
0x6C2641: pop     ebx
0x6C2642: add     esp, 0Ch
0x6C2645: retn
