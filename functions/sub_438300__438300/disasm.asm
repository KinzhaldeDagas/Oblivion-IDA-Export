0x438300: push    0FFFFFFFFh
0x438302: push    offset SEH_43A5F0
0x438307: mov     eax, large fs:0
0x43830D: push    eax
0x43830E: push    esi
0x43830F: push    edi
0x438310: mov     eax, ___security_cookie
0x438315: xor     eax, esp
0x438317: push    eax
0x438318: lea     eax, [esp+18h+var_C]
0x43831C: mov     large fs:0, eax
0x438322: mov     edi, [esp+18h+arg_0]
0x438326: test    edi, edi
0x438328: jz      short loc_438397
0x43832A: mov     esi, [esp+18h+arg_4]
0x43832E: test    esi, esi
0x438330: jz      short loc_438397
0x438332: push    28h ; '('; Size
0x438334: call    FormHeapAlloc
0x438339: add     esp, 4
0x43833C: test    eax, eax
0x43833E: jz      short loc_438352
0x438340: mov     ecx, [esp+18h+arg_8]
0x438344: push    ecx
0x438345: push    esi
0x438346: push    edi
0x438347: mov     ecx, eax
0x438349: call    sub_437760
0x43834E: mov     esi, eax
0x438350: jmp     short loc_438354
0x438352: xor     esi, esi
0x438354: test    esi, esi
0x438356: mov     [esp+18h+arg_0], esi
0x43835A: jz      short loc_438366
0x43835C: lea     edx, [esi+8]
0x43835F: push    edx; lpAddend
0x438360: call    ds:InterlockedIncrement
0x438366: mov     eax, [esi]
0x438368: mov     edx, [eax+20h]
0x43836B: mov     ecx, esi
0x43836D: mov     [esp+18h+var_4], 0
0x438375: call    edx
0x438377: lea     eax, [esi+8]
0x43837A: push    eax; lpAddend
0x43837B: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x438383: call    ds:InterlockedDecrement
0x438389: test    eax, eax
0x43838B: jnz     short loc_438397
0x43838D: mov     edx, [esi]
0x43838F: mov     eax, [edx]
0x438391: push    1
0x438393: mov     ecx, esi
0x438395: call    eax
0x438397: mov     ecx, dword ptr [esp+18h+var_C]
0x43839B: mov     large fs:0, ecx
0x4383A2: pop     ecx
0x4383A3: pop     edi
0x4383A4: pop     esi
0x4383A5: add     esp, 0Ch
0x4383A8: retn    0Ch
