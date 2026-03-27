0x738630: push    ebx
0x738631: mov     ebx, ecx
0x738633: mov     eax, [ebx+8]
0x738636: push    ebp
0x738637: push    eax
0x738638: call    FormHeapFree
0x73863D: mov     ebp, [esp+0Ch+Src]
0x738641: add     esp, 4
0x738644: test    ebp, ebp
0x738646: mov     dword ptr [ebx+8], 0
0x73864D: jz      short loc_73868C
0x73864F: push    esi
0x738650: push    edi
0x738651: mov     edi, offset EmptyString
0x738656: mov     esi, ebp
0x738658: mov     ecx, 1
0x73865D: xor     edx, edx
0x73865F: repe cmpsb
0x738661: jz      short loc_73868A
0x738663: mov     eax, ebp
0x738665: lea     edx, [eax+1]
0x738668: mov     cl, [eax]
0x73866A: add     eax, 1
0x73866D: test    cl, cl
0x73866F: jnz     short loc_738668
0x738671: sub     eax, edx
0x738673: lea     esi, [eax+1]
0x738676: push    esi; Size
0x738677: call    FormHeapAlloc
0x73867C: push    ebp; Src
0x73867D: push    esi; SizeInBytes
0x73867E: push    eax; Dst
0x73867F: mov     [ebx+8], eax
0x738682: call    _strcpy_s
0x738687: add     esp, 10h
0x73868A: pop     edi
0x73868B: pop     esi
0x73868C: pop     ebp
0x73868D: pop     ebx
0x73868E: retn    4
