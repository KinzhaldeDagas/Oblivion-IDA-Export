0x6C0980: push    0FFFFFFFFh
0x6C0982: push    offset SEH_6CF490
0x6C0987: mov     eax, large fs:0
0x6C098D: push    eax
0x6C098E: push    ebx
0x6C098F: push    ebp
0x6C0990: push    esi
0x6C0991: push    edi
0x6C0992: mov     eax, ds:0B30AACh
0x6C0997: xor     eax, esp
0x6C0999: push    eax
0x6C099A: lea     eax, [esp+20h+var_C]
0x6C099E: mov     large fs:0, eax
0x6C09A4: mov     edi, [esp+20h+size]
0x6C09A8: xor     ecx, ecx
0x6C09AA: mov     eax, edi
0x6C09AC: mov     edx, 4Ch ; 'L'
0x6C09B1: mul     edx
0x6C09B3: seto    cl
0x6C09B6: neg     ecx
0x6C09B8: or      ecx, eax
0x6C09BA: xor     eax, eax
0x6C09BC: add     ecx, 4
0x6C09BF: setb    al
0x6C09C2: neg     eax
0x6C09C4: or      eax, ecx
0x6C09C6: push    eax; Size
0x6C09C7: call    FormHeapAlloc
0x6C09CC: add     esp, 4
0x6C09CF: mov     [esp+20h+size], eax
0x6C09D3: test    eax, eax
0x6C09D5: mov     [esp+20h+var_4], 0
0x6C09DD: jz      short loc_6C09FB
0x6C09DF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C09E4: push    offset sub_7616D0; a4
0x6C09E9: push    edi; size
0x6C09EA: lea     esi, [eax+4]
0x6C09ED: push    4Ch ; 'L'; a2
0x6C09EF: push    esi; a1
0x6C09F0: mov     [eax], edi
0x6C09F2: call    ArrayConstructor
0x6C09F7: mov     ebp, esi
0x6C09F9: jmp     short loc_6C09FD
0x6C09FB: xor     ebp, ebp
0x6C09FD: test    edi, edi
0x6C09FF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C0A07: jbe     short loc_6C0A20
0x6C0A09: mov     ebx, [esp+20h+arg_0]
0x6C0A0D: mov     esi, ebp
0x6C0A0F: nop
0x6C0A10: push    ebx
0x6C0A11: mov     ecx, esi
0x6C0A13: call    sub_6C0880
0x6C0A18: add     esi, 4Ch ; 'L'
0x6C0A1B: sub     edi, 1
0x6C0A1E: jnz     short loc_6C0A10
0x6C0A20: mov     eax, ebp
0x6C0A22: mov     ecx, [esp+20h+var_C]
0x6C0A26: mov     large fs:0, ecx
0x6C0A2D: pop     ecx
0x6C0A2E: pop     edi
0x6C0A2F: pop     esi
0x6C0A30: pop     ebp
0x6C0A31: pop     ebx
0x6C0A32: add     esp, 0Ch
0x6C0A35: retn
