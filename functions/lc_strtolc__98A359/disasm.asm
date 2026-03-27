0x98A359: push    ebp
0x98A35A: mov     ebp, esp
0x98A35C: push    ebx
0x98A35D: push    esi
0x98A35E: push    edi; MaxCount
0x98A35F: mov     edi, [ebp+arg_0]
0x98A362: push    90h
0x98A367: xor     ebx, ebx
0x98A369: push    ebx
0x98A36A: push    edi
0x98A36B: call    __memset
0x98A370: mov     esi, [ebp+Str]
0x98A373: mov     al, [esi]
0x98A375: add     esp, 0Ch
0x98A378: test    al, al
0x98A37A: jnz     short loc_98A383
0x98A37C: xor     eax, eax
0x98A37E: jmp     loc_98A47D
0x98A383: cmp     al, 2Eh ; '.'
0x98A385: jnz     short loc_98A3BB
0x98A387: lea     eax, [esi+1]
0x98A38A: cmp     [eax], bl
0x98A38C: jz      short loc_98A3BB
0x98A38E: push    0Fh; Src
0x98A390: push    eax; Src
0x98A391: lea     eax, [edi+80h]
0x98A397: push    10h; SizeInBytes
0x98A399: push    eax; Dst
0x98A39A: call    _strncpy_s
0x98A39F: add     esp, 10h
0x98A3A2: test    eax, eax
0x98A3A4: jz      short loc_98A3B3
0x98A3A6: push    ebx
0x98A3A7: push    ebx
0x98A3A8: push    ebx
0x98A3A9: push    ebx
0x98A3AA: push    ebx
0x98A3AB: call    __invoke_watson
0x98A3B0: add     esp, 14h
0x98A3B3: mov     [edi+8Fh], bl
0x98A3B9: jmp     short loc_98A37C
0x98A3BB: push    offset a___0
0x98A3C0: push    esi; Str
0x98A3C1: mov     [ebp+Str], ebx
0x98A3C4: call    _strcspn
0x98A3C9: cmp     eax, ebx
0x98A3CB: jmp     loc_98A472
0x98A3D0: cmp     [ebp+Str], 0
0x98A3D4: lea     edi, [eax+esi]
0x98A3D7: mov     bl, [edi]
0x98A3D9: jnz     short loc_98A3F6
0x98A3DB: cmp     eax, 40h ; '@'
0x98A3DE: jnb     loc_98A47A
0x98A3E4: cmp     bl, 2Eh ; '.'
0x98A3E7: jz      loc_98A47A
0x98A3ED: push    eax
0x98A3EE: push    esi
0x98A3EF: push    40h ; '@'
0x98A3F1: push    [ebp+arg_0]
0x98A3F4: jmp     short loc_98A433
0x98A3F6: cmp     [ebp+Str], 1
0x98A3FA: jnz     short loc_98A412
0x98A3FC: cmp     eax, 40h ; '@'
0x98A3FF: jnb     short loc_98A47A
0x98A401: cmp     bl, 5Fh ; '_'
0x98A404: jz      short loc_98A47A
0x98A406: push    eax
0x98A407: mov     eax, [ebp+arg_0]
0x98A40A: push    esi
0x98A40B: push    40h ; '@'
0x98A40D: add     eax, 40h ; '@'
0x98A410: jmp     short loc_98A432
0x98A412: cmp     [ebp+Str], 2
0x98A416: jnz     short loc_98A47A
0x98A418: cmp     eax, 10h
0x98A41B: jnb     short loc_98A47A
0x98A41D: test    bl, bl
0x98A41F: jz      short loc_98A426
0x98A421: cmp     bl, 2Ch ; ','
0x98A424: jnz     short loc_98A47A
0x98A426: push    eax; Src
0x98A427: mov     eax, [ebp+arg_0]
0x98A42A: push    esi; Src
0x98A42B: push    10h; SizeInBytes
0x98A42D: add     eax, 80h ; '€'
0x98A432: push    eax; Dst
0x98A433: call    _strncpy_s
0x98A438: add     esp, 10h
0x98A43B: test    eax, eax
0x98A43D: jz      short loc_98A44E
0x98A43F: xor     eax, eax
0x98A441: push    eax
0x98A442: push    eax
0x98A443: push    eax
0x98A444: push    eax
0x98A445: push    eax
0x98A446: call    __invoke_watson
0x98A44B: add     esp, 14h
0x98A44E: cmp     bl, 2Ch ; ','
0x98A451: jz      loc_98A37C
0x98A457: test    bl, bl
0x98A459: jz      loc_98A37C
0x98A45F: inc     [ebp+Str]
0x98A462: lea     esi, [edi+1]
0x98A465: push    offset a___0
0x98A46A: push    esi; Str
0x98A46B: call    _strcspn
0x98A470: test    eax, eax
0x98A472: pop     ecx
0x98A473: pop     ecx
0x98A474: jnz     loc_98A3D0
0x98A47A: or      eax, 0FFFFFFFFh
0x98A47D: pop     edi
0x98A47E: pop     esi
0x98A47F: pop     ebx
0x98A480: pop     ebp
0x98A481: retn
