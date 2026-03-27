0x986236: push    ebp
0x986237: mov     ebp, esp
0x986239: sub     esp, 20h
0x98623C: push    edi
0x98623D: push    esi; Str
0x98623E: call    _strlen
0x986243: xor     edi, edi
0x986245: cmp     esi, edi
0x986247: pop     ecx
0x986248: jnz     short loc_986267
0x98624A: call    __errno
0x98624F: push    edi
0x986250: push    edi
0x986251: push    edi
0x986252: push    edi
0x986253: push    edi
0x986254: mov     dword ptr [eax], 16h
0x98625A: call    __invalid_parameter
0x98625F: add     esp, 14h
0x986262: or      eax, 0FFFFFFFFh
0x986265: jmp     short loc_98629B
0x986267: cmp     [ebp+arg_4], edi
0x98626A: jz      short loc_98624A
0x98626C: mov     ecx, 7FFFFFFFh
0x986271: cmp     eax, ecx
0x986273: mov     [ebp+var_14], 49h ; 'I'
0x98627A: mov     [ebp+var_18], esi
0x98627D: mov     [ebp+var_20], esi
0x986280: mov     [ebp+var_1C], ecx
0x986283: ja      short loc_986288
0x986285: mov     [ebp+var_1C], eax
0x986288: push    [ebp+arg_C]
0x98628B: lea     eax, [ebp+var_20]
0x98628E: push    [ebp+arg_8]
0x986291: push    [ebp+arg_4]
0x986294: push    eax
0x986295: call    [ebp+arg_0]
0x986298: add     esp, 10h
0x98629B: pop     edi
0x98629C: leave
0x98629D: retn
