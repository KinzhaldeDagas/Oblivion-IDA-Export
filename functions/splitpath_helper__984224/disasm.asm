0x984224: push    ebp
0x984225: mov     ebp, esp
0x984227: push    ecx
0x984228: push    ecx
0x984229: push    ebx
0x98422A: push    esi
0x98422B: push    edi
0x98422C: xor     edi, edi
0x98422E: mov     ebx, eax
0x984230: cmp     ebx, edi
0x984232: mov     [ebp+var_8], edi
0x984235: jz      __splitpath_helper___$error_einval$25424
0x98423B: mov     ecx, [ebp+arg_0]
0x98423E: cmp     ecx, edi
0x984240: jnz     short loc_98424D
0x984242: cmp     [ebp+arg_4], edi
0x984245: jnz     __splitpath_helper___$error_einval$25424
0x98424B: jmp     short loc_984256
0x98424D: cmp     [ebp+arg_4], edi
0x984250: jz      __splitpath_helper___$error_einval$25424
0x984256: cmp     [ebp+arg_8], edi
0x984259: jnz     short loc_984262
0x98425B: cmp     [ebp+arg_C], edi
0x98425E: jnz     short __splitpath_helper___$error_einval$25424
0x984260: jmp     short loc_984267
0x984262: cmp     [ebp+arg_C], edi
0x984265: jz      short __splitpath_helper___$error_einval$25424
0x984267: cmp     [ebp+arg_10], edi
0x98426A: jnz     short loc_984273
0x98426C: cmp     [ebp+arg_14], edi
0x98426F: jnz     short __splitpath_helper___$error_einval$25424
0x984271: jmp     short loc_984278
0x984273: cmp     [ebp+arg_14], edi
0x984276: jz      short __splitpath_helper___$error_einval$25424
0x984278: cmp     [ebp+arg_18], edi
0x98427B: jnz     short loc_9842D2
0x98427D: cmp     [ebp+arg_1C], edi
0x984280: jnz     short __splitpath_helper___$error_einval$25424
0x984282: cmp     byte ptr [ebx], 5Ch ; '\'
0x984285: jnz     short loc_98429C
0x984287: cmp     byte ptr [ebx+1], 5Ch ; '\'
0x98428B: jnz     short loc_98429C
0x98428D: cmp     byte ptr [ebx+2], 3Fh ; '?'
0x984291: jnz     short loc_98429C
0x984293: cmp     byte ptr [ebx+3], 5Ch ; '\'
0x984297: jnz     short loc_98429C
0x984299: add     ebx, 4
0x98429C: xor     eax, eax
0x98429E: inc     eax
0x98429F: mov     esi, ebx
0x9842A1: cmp     byte ptr [esi], 0
0x9842A4: jz      short loc_9842AC
0x9842A6: dec     eax
0x9842A7: inc     esi
0x9842A8: cmp     eax, edi
0x9842AA: ja      short loc_9842A1
0x9842AC: cmp     byte ptr [esi], 3Ah ; ':'
0x9842AF: jnz     short loc_9842E3
0x9842B1: cmp     ecx, edi
0x9842B3: jz      short loc_9842CD
0x9842B5: cmp     [ebp+arg_4], 3
0x9842B9: jb      __splitpath_helper___$error_erange$25455
0x9842BF: push    2
0x9842C1: push    ebx
0x9842C2: push    0FFFFFFFFh
0x9842C4: push    ecx
0x9842C5: call    __mbsnbcpy_s
0x9842CA: add     esp, 10h
0x9842CD: lea     ebx, [esi+1]
0x9842D0: jmp     short loc_9842EA
0x9842D2: cmp     [ebp+arg_1C], edi
0x9842D5: jnz     short loc_984282
