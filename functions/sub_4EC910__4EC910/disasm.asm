0x4EC910: push    ebx
0x4EC911: push    esi
0x4EC912: mov     ebx, ecx
0x4EC914: mov     esi, [ebx+0BCh]
0x4EC91A: push    edi
0x4EC91B: mov     edi, [esp+0Ch+arg_0]
0x4EC91F: cmp     esi, edi
0x4EC921: jz      short loc_4EC957
0x4EC923: test    esi, esi
0x4EC925: jz      short loc_4EC943
0x4EC927: lea     eax, [esi+4]
0x4EC92A: push    eax; lpAddend
0x4EC92B: call    dword ptr ds:0A2807Ch
0x4EC931: test    eax, eax
0x4EC933: jnz     short loc_4EC943
0x4EC935: test    esi, esi
0x4EC937: jz      short loc_4EC943
0x4EC939: mov     edx, [esi]
0x4EC93B: mov     eax, [edx]
0x4EC93D: push    1
0x4EC93F: mov     ecx, esi
0x4EC941: call    eax
0x4EC943: test    edi, edi
0x4EC945: mov     [ebx+0BCh], edi
0x4EC94B: jz      short loc_4EC957
0x4EC94D: add     edi, 4
0x4EC950: push    edi; lpAddend
0x4EC951: call    dword ptr ds:0A28078h
0x4EC957: pop     edi
0x4EC958: pop     esi
0x4EC959: pop     ebx
0x4EC95A: retn    4
