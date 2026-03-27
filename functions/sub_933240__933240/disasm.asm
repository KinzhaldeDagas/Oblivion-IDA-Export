0x933240: push    ebp
0x933241: mov     ebp, esp
0x933243: and     esp, 0FFFFFFF0h
0x933246: sub     esp, 34h
0x933249: push    ebx
0x93324A: mov     ebx, [ebp+arg_8]
0x93324D: test    ebx, ebx
0x93324F: push    esi
0x933250: mov     esi, [ebp+arg_10]
0x933253: push    edi
0x933254: mov     dword ptr [esi+4], 0
0x93325B: jle     short loc_933296
0x93325D: mov     edi, [ebp+arg_4]
0x933260: mov     eax, [esi+8]
0x933263: mov     ecx, [esi+4]
0x933266: and     eax, 3FFFFFFFh
0x93326B: cmp     ecx, eax
0x93326D: jnz     short loc_93327A
0x93326F: push    10h
0x933271: push    esi
0x933272: call    sub_8A6EE0
0x933277: add     esp, 8
0x93327A: mov     ecx, [esi+4]
0x93327D: mov     edx, [esi]
0x93327F: mov     eax, ecx
0x933281: shl     eax, 4
0x933284: add     eax, edx
0x933286: inc     ecx
0x933287: mov     [esi+4], ecx
0x93328A: movaps  xmm0, xmmword ptr [edi]
0x93328D: add     edi, 10h
0x933290: dec     ebx
0x933291: movaps  xmmword ptr [eax], xmm0
0x933294: jnz     short loc_933260
0x933296: mov     ebx, [ebp+arg_0]
0x933299: mov     al, [ebx+1]
0x93329C: test    al, al
0x93329E: jz      short loc_9332B3
0x9332A0: lea     ecx, [esp+40h+var_20]
0x9332A4: push    ecx
0x9332A5: lea     edx, [esp+44h+var_10]
0x9332A9: push    edx
0x9332AA: push    esi
0x9332AB: call    sub_92E860
0x9332B0: add     esp, 0Ch
0x9332B3: mov     eax, [esi+4]
0x9332B6: cmp     eax, 1
0x9332B9: jle     short loc_9332CF
0x9332BB: push    offset sub_92C9B0
0x9332C0: dec     eax
0x9332C1: push    eax
0x9332C2: mov     eax, [esi]
0x9332C4: push    0
0x9332C6: push    eax
0x9332C7: call    sub_92B640
0x9332CC: add     esp, 10h
0x9332CF: mov     edx, [ebx+4]
0x9332D2: lea     ecx, [esp+40h+var_28]
0x9332D6: push    ecx; int
0x9332D7: push    esi; int
0x9332D8: push    edx; float
0x9332D9: call    sub_92DCA0
0x9332DE: mov     al, [ebx+2]
0x9332E1: add     esp, 0Ch
0x9332E4: test    al, al
0x9332E6: jz      short loc_933300
0x9332E8: cmp     [esp+40h+var_28], 12Ch
0x9332F0: jge     short loc_933300
0x9332F2: push    3A83126Fh; float
0x9332F7: push    esi; int
0x9332F8: call    sub_92FBD0
0x9332FD: add     esp, 8
0x933300: mov     edi, [ebp+arg_C]
0x933303: mov     al, 1
0x933305: mov     byte ptr [esp+40h+var_28], al
0x933309: xor     cl, cl
0x93330B: jmp     short loc_933310
0x93330D: align 10h
0x933310: test    cl, cl
0x933312: jz      short loc_933318
0x933314: test    al, al
0x933316: jz      short loc_93338D
0x933318: mov     ecx, [esi+4]
0x93331B: test    al, al
0x93331D: setz    [esp+40h+var_24]
0x933322: xor     ebx, ebx
0x933324: xor     eax, eax
0x933326: cmp     ecx, ebx
0x933328: jle     short loc_933341
0x93332A: xor     ecx, ecx
0x93332C: lea     esp, [esp+0]
0x933330: mov     edx, [esi]
0x933332: mov     [ecx+edx+0Ch], ebx
0x933336: mov     edx, [esi+4]
0x933339: inc     eax
0x93333A: add     ecx, 10h
0x93333D: cmp     eax, edx
0x93333F: jl      short loc_933330
0x933341: mov     ecx, [ebp+arg_0]
0x933344: mov     [edi+8], ebx
0x933347: mov     eax, [esi+4]
0x93334A: push    edi
0x93334B: dec     eax
0x93334C: push    eax
0x93334D: push    ebx
0x93334E: push    esi
0x93334F: push    ecx
0x933350: call    sub_932D60
0x933355: push    esi
0x933356: push    edi
0x933357: call    sub_930FC0
0x93335C: push    esi
0x93335D: call    sub_92EB50
0x933362: mov     eax, [ebp+arg_0]
0x933365: mov     ecx, [esi+4]
0x933368: lea     edx, [esp+60h+var_28]
0x93336C: push    edx
0x93336D: push    eax
0x93336E: dec     ecx
0x93336F: push    ecx
0x933370: push    ebx
0x933371: push    edi
0x933372: call    sub_92DE30
0x933377: push    esi
0x933378: call    sub_92EB50
0x93337D: mov     al, byte ptr [esp+78h+var_28]
0x933381: mov     cl, [esp+78h+var_24]
0x933385: mov     ebx, [ebp+arg_0]
0x933388: add     esp, 38h
0x93338B: jmp     short loc_933310
0x93338D: mov     al, [ebx+1]
0x933390: test    al, al
0x933392: jz      short loc_9333A7
0x933394: lea     edx, [esp+40h+var_20]
0x933398: push    edx
0x933399: lea     eax, [esp+44h+var_10]
0x93339D: push    eax
0x93339E: push    esi
0x93339F: call    sub_92EA40
0x9333A4: add     esp, 0Ch
0x9333A7: pop     edi
0x9333A8: pop     esi
0x9333A9: pop     ebx
0x9333AA: mov     esp, ebp
0x9333AC: pop     ebp
0x9333AD: retn
