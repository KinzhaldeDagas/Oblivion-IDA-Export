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
0x9842E3: cmp     ecx, edi
0x9842E5: jz      short loc_9842EA
0x9842E7: mov     byte ptr [ecx], 0
0x9842EA: and     [ebp+var_4], edi
0x9842ED: cmp     byte ptr [ebx], 0
0x9842F0: mov     esi, ebx
0x9842F2: jz      short loc_984347
0x9842F4: movsx   eax, byte ptr [esi]
0x9842F7: push    eax; unsigned int
0x9842F8: call    __ismbblead
0x9842FD: test    eax, eax
0x9842FF: pop     ecx
0x984300: jz      short loc_984305
0x984302: inc     esi
0x984303: jmp     short loc_98431B
0x984305: mov     al, [esi]
0x984307: cmp     al, 2Fh ; '/'
0x984309: jz      short loc_984318
0x98430B: cmp     al, 5Ch ; '\'
0x98430D: jz      short loc_984318
0x98430F: cmp     al, 2Eh ; '.'
0x984311: jnz     short loc_98431B
0x984313: mov     [ebp+var_4], esi
0x984316: jmp     short loc_98431B
0x984318: lea     edi, [esi+1]
0x98431B: inc     esi
0x98431C: cmp     byte ptr [esi], 0
0x98431F: jnz     short loc_9842F4
0x984321: test    edi, edi
0x984323: jz      short loc_984347
0x984325: cmp     [ebp+arg_8], 0
0x984329: jz      short loc_984343
0x98432B: mov     eax, edi
0x98432D: sub     eax, ebx
0x98432F: cmp     [ebp+arg_C], eax
0x984332: jbe     short loc_9843B1
0x984334: push    eax
0x984335: push    ebx
0x984336: push    0FFFFFFFFh
0x984338: push    [ebp+arg_8]
0x98433B: call    __mbsnbcpy_s
0x984340: add     esp, 10h
0x984343: mov     ebx, edi
0x984345: jmp     short loc_984351
0x984347: mov     eax, [ebp+arg_8]
0x98434A: test    eax, eax
0x98434C: jz      short loc_984351
0x98434E: mov     byte ptr [eax], 0
0x984351: mov     eax, [ebp+var_4]
0x984354: test    eax, eax
0x984356: jz      short loc_9843A0
0x984358: cmp     eax, ebx
0x98435A: jb      short loc_9843A0
0x98435C: cmp     [ebp+arg_10], 0
0x984360: jz      short loc_984378
0x984362: sub     eax, ebx
0x984364: cmp     [ebp+arg_14], eax
0x984367: jbe     short loc_9843B1
0x984369: push    eax
0x98436A: push    ebx
0x98436B: push    0FFFFFFFFh
0x98436D: push    [ebp+arg_10]
0x984370: call    __mbsnbcpy_s
0x984375: add     esp, 10h
0x984378: cmp     [ebp+arg_18], 0
0x98437C: jz      loc_984435
0x984382: sub     esi, [ebp+var_4]
0x984385: cmp     [ebp+arg_1C], esi
0x984388: jbe     short loc_9843B1
0x98438A: push    esi
0x98438B: push    [ebp+var_4]
0x98438E: push    0FFFFFFFFh
0x984390: push    [ebp+arg_18]
0x984393: call    __mbsnbcpy_s
0x984398: add     esp, 10h
0x98439B: jmp     loc_984435
0x9843A0: cmp     [ebp+arg_10], 0
0x9843A4: jz      loc_98442B
0x9843AA: sub     esi, ebx
0x9843AC: cmp     [ebp+arg_14], esi
0x9843AF: ja      short loc_98441C
0x9843B1: xor     edi, edi
