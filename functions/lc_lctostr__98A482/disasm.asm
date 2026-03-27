0x98A482: push    ebp
0x98A483: mov     ebp, esp
0x98A485: push    ebx
0x98A486: push    esi; Src
0x98A487: mov     esi, [ebp+Src]
0x98A48A: push    esi; Src
0x98A48B: push    [ebp+SizeInBytes]; SizeInBytes
0x98A48E: push    [ebp+Dst]; Dst
0x98A491: call    _strcpy_s
0x98A496: add     esp, 0Ch
0x98A499: xor     ebx, ebx
0x98A49B: test    eax, eax
0x98A49D: jz      short loc_98A4AC
0x98A49F: push    ebx
0x98A4A0: push    ebx
0x98A4A1: push    ebx
0x98A4A2: push    ebx
0x98A4A3: push    ebx
0x98A4A4: call    __invoke_watson
0x98A4A9: add     esp, 14h
0x98A4AC: lea     eax, [esi+40h]
0x98A4AF: cmp     [eax], bl
0x98A4B1: jz      short loc_98A4C9
0x98A4B3: push    eax
0x98A4B4: push    offset a__0
0x98A4B9: push    2; int
0x98A4BB: push    [ebp+SizeInBytes]; SizeInBytes
0x98A4BE: push    [ebp+Dst]; Dst
0x98A4C1: call    __strcats
0x98A4C6: add     esp, 14h
0x98A4C9: lea     eax, [esi+80h]
0x98A4CF: cmp     [eax], bl
0x98A4D1: pop     esi
0x98A4D2: pop     ebx
0x98A4D3: jz      short loc_98A4EB
0x98A4D5: push    eax
0x98A4D6: push    offset Delim
0x98A4DB: push    2; int
0x98A4DD: push    [ebp+SizeInBytes]; SizeInBytes
0x98A4E0: push    [ebp+Dst]; Dst
0x98A4E3: call    __strcats
0x98A4E8: add     esp, 14h
0x98A4EB: pop     ebp
0x98A4EC: retn
