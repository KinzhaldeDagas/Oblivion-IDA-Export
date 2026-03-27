0x98A31B: push    ebx
0x98A31C: push    edi
0x98A31D: mov     edi, [esp+8+arg_8]
0x98A321: xor     ebx, ebx
0x98A323: cmp     edi, ebx
0x98A325: jle     short loc_98A356
0x98A327: push    esi; Src
0x98A328: lea     esi, [esp+0Ch+arg_8]
0x98A32C: add     esi, 4
0x98A32F: push    dword ptr [esi]; Src
0x98A331: push    [esp+10h+SizeInBytes]; SizeInBytes
0x98A335: push    [esp+14h+Dst]; Dst
0x98A339: call    _strcat_s
0x98A33E: add     esp, 0Ch
0x98A341: test    eax, eax
0x98A343: jz      short loc_98A352
0x98A345: push    ebx
0x98A346: push    ebx
0x98A347: push    ebx
0x98A348: push    ebx
0x98A349: push    ebx
0x98A34A: call    __invoke_watson
0x98A34F: add     esp, 14h
0x98A352: dec     edi
0x98A353: jnz     short loc_98A32C
0x98A355: pop     esi
0x98A356: pop     edi
0x98A357: pop     ebx
0x98A358: retn
