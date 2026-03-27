0x997782: push    ebx
0x997783: xor     ebx, ebx
0x997785: cmp     dword_BABC14, ebx
0x99778B: push    esi
0x99778C: push    edi
0x99778D: jnz     short loc_997794
0x99778F: call    ___initmbctable
0x997794: mov     esi, dword_BA9DF8
0x99779A: xor     edi, edi
0x99779C: cmp     esi, ebx
0x99779E: jnz     short loc_9977B8
0x9977A0: or      eax, 0FFFFFFFFh
0x9977A3: jmp     loc_997843
0x9977A8: cmp     al, 3Dh ; '='
0x9977AA: jz      short loc_9977AD
0x9977AC: inc     edi
0x9977AD: push    esi; Str
0x9977AE: call    _strlen
0x9977B3: pop     ecx
0x9977B4: lea     esi, [esi+eax+1]
0x9977B8: mov     al, [esi]
0x9977BA: cmp     al, bl
0x9977BC: jnz     short loc_9977A8
0x9977BE: push    4
0x9977C0: inc     edi
0x9977C1: push    edi
0x9977C2: call    unknown_libname_74
0x9977C7: mov     edi, eax
0x9977C9: cmp     edi, ebx
0x9977CB: pop     ecx
0x9977CC: pop     ecx
0x9977CD: mov     dword_BA9DB4, edi
0x9977D3: jz      short loc_9977A0
0x9977D5: mov     esi, dword_BA9DF8
0x9977DB: push    ebp; Src
0x9977DC: jmp     short loc_99781E
0x9977DE: push    esi; Str
0x9977DF: call    _strlen
0x9977E4: mov     ebp, eax
0x9977E6: inc     ebp
0x9977E7: cmp     byte ptr [esi], 3Dh ; '='
0x9977EA: pop     ecx
0x9977EB: jz      short loc_99781C
0x9977ED: push    1
0x9977EF: push    ebp
0x9977F0: call    unknown_libname_74
0x9977F5: cmp     eax, ebx
0x9977F7: pop     ecx
0x9977F8: pop     ecx
0x9977F9: mov     [edi], eax
0x9977FB: jz      short loc_997847
0x9977FD: push    esi; Src
0x9977FE: push    ebp; SizeInBytes
0x9977FF: push    eax; Dst
0x997800: call    _strcpy_s
0x997805: add     esp, 0Ch
0x997808: test    eax, eax
0x99780A: jz      short loc_997819
0x99780C: push    ebx
0x99780D: push    ebx
0x99780E: push    ebx
0x99780F: push    ebx
0x997810: push    ebx
0x997811: call    __invoke_watson
0x997816: add     esp, 14h
0x997819: add     edi, 4
0x99781C: add     esi, ebp
0x99781E: cmp     [esi], bl
0x997820: jnz     short loc_9977DE
0x997822: push    dword_BA9DF8; Memory
0x997828: call    _free
0x99782D: mov     dword_BA9DF8, ebx
0x997833: mov     [edi], ebx
0x997835: mov     dword_BABC08, 1
0x99783F: xor     eax, eax
0x997841: pop     ecx
0x997842: pop     ebp
0x997843: pop     edi
0x997844: pop     esi
0x997845: pop     ebx
0x997846: retn
0x997847: push    dword_BA9DB4; Memory
0x99784D: call    _free
0x997852: mov     dword_BA9DB4, ebx
0x997858: or      eax, 0FFFFFFFFh
0x99785B: jmp     short loc_997841
