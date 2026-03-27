0x6BEB60: push    0FFFFFFFFh
0x6BEB62: push    offset SEH_6CF490
0x6BEB67: mov     eax, large fs:0
0x6BEB6D: push    eax
0x6BEB6E: push    ebx
0x6BEB6F: push    ebp
0x6BEB70: push    esi
0x6BEB71: push    edi
0x6BEB72: mov     eax, ds:0B30AACh
0x6BEB77: xor     eax, esp
0x6BEB79: push    eax
0x6BEB7A: lea     eax, [esp+20h+var_C]
0x6BEB7E: mov     large fs:0, eax
0x6BEB84: mov     edi, [esp+20h+size]
0x6BEB88: xor     ecx, ecx
0x6BEB8A: mov     eax, edi
0x6BEB8C: mov     edx, 48h ; 'H'
0x6BEB91: mul     edx
0x6BEB93: seto    cl
0x6BEB96: neg     ecx
0x6BEB98: or      ecx, eax
0x6BEB9A: xor     eax, eax
0x6BEB9C: add     ecx, 4
0x6BEB9F: setb    al
0x6BEBA2: neg     eax
0x6BEBA4: or      eax, ecx
0x6BEBA6: push    eax; Size
0x6BEBA7: call    FormHeapAlloc
0x6BEBAC: add     esp, 4
0x6BEBAF: mov     [esp+20h+size], eax
0x6BEBB3: test    eax, eax
0x6BEBB5: mov     [esp+20h+var_4], 0
0x6BEBBD: jz      short loc_6BEBDB
0x6BEBBF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BEBC4: push    offset sub_6BE430; a4
0x6BEBC9: push    edi; size
0x6BEBCA: lea     esi, [eax+4]
0x6BEBCD: push    48h ; 'H'; a2
0x6BEBCF: push    esi; a1
0x6BEBD0: mov     [eax], edi
0x6BEBD2: call    ArrayConstructor
0x6BEBD7: mov     ebp, esi
0x6BEBD9: jmp     short loc_6BEBDD
0x6BEBDB: xor     ebp, ebp
0x6BEBDD: test    edi, edi
0x6BEBDF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6BEBE7: jbe     short loc_6BEC00
0x6BEBE9: mov     ebx, [esp+20h+arg_0]
0x6BEBED: mov     esi, ebp
0x6BEBEF: nop
0x6BEBF0: push    ebx
0x6BEBF1: mov     ecx, esi
0x6BEBF3: call    sub_6BEA00
0x6BEBF8: add     esi, 48h ; 'H'
0x6BEBFB: sub     edi, 1
0x6BEBFE: jnz     short loc_6BEBF0
0x6BEC00: mov     eax, ebp
0x6BEC02: mov     ecx, [esp+20h+var_C]
0x6BEC06: mov     large fs:0, ecx
0x6BEC0D: pop     ecx
0x6BEC0E: pop     edi
0x6BEC0F: pop     esi
0x6BEC10: pop     ebp
0x6BEC11: pop     ebx
0x6BEC12: add     esp, 0Ch
0x6BEC15: retn
