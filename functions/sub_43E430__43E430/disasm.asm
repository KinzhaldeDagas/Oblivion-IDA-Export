0x43E430: push    0FFFFFFFFh
0x43E432: push    offset SEH_43D630
0x43E437: mov     eax, large fs:0
0x43E43D: push    eax
0x43E43E: push    ebx
0x43E43F: push    esi
0x43E440: push    edi
0x43E441: mov     eax, ___security_cookie
0x43E446: xor     eax, esp
0x43E448: push    eax
0x43E449: lea     eax, [esp+1Ch+var_C]
0x43E44D: mov     large fs:0, eax
0x43E453: mov     edi, ecx
0x43E455: mov     ebx, [edi+14h]
0x43E458: mov     eax, [ebx+4]
0x43E45B: push    eax; dwTlsIndex
0x43E45C: mov     [esp+20h+var_4], 0
0x43E464: call    ds:TlsGetValue
0x43E46A: test    eax, eax
0x43E46C: jnz     short loc_43E476
0x43E46E: push    edi; a2
0x43E46F: mov     ecx, ebx; this
0x43E471: call    ThreadSpecificInterfaceManager_AddInterface
0x43E476: mov     edx, dword ptr [esp+1Ch+arg_8]
0x43E47A: mov     esi, eax
0x43E47C: mov     ecx, [esi]
0x43E47E: push    edx; char
0x43E47F: mov     edx, [ecx]
0x43E481: lea     eax, [esp+20h+arg_4]
0x43E485: push    eax; int
0x43E486: mov     eax, [esp+24h+Comperand]
0x43E48A: push    eax; Comperand
0x43E48B: push    eax
0x43E48C: mov     eax, [edx+1Ch]
0x43E48F: call    eax
0x43E491: push    eax; LONG
0x43E492: mov     ecx, esi
0x43E494: call    sub_643000
0x43E499: mov     esi, [esp+1Ch+arg_4]
0x43E49D: test    esi, esi
0x43E49F: mov     bl, al
0x43E4A1: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x43E4A9: jz      short loc_43E4C3
0x43E4AB: lea     ecx, [esi+8]
0x43E4AE: push    ecx; lpAddend
0x43E4AF: call    ds:InterlockedDecrement
0x43E4B5: test    eax, eax
0x43E4B7: jnz     short loc_43E4C3
0x43E4B9: mov     edx, [esi]
0x43E4BB: mov     eax, [edx]
0x43E4BD: push    1
0x43E4BF: mov     ecx, esi
0x43E4C1: call    eax
0x43E4C3: mov     al, bl
0x43E4C5: mov     ecx, dword ptr [esp+1Ch+var_C]
0x43E4C9: mov     large fs:0, ecx
0x43E4D0: pop     ecx
0x43E4D1: pop     edi
0x43E4D2: pop     esi
0x43E4D3: pop     ebx
0x43E4D4: add     esp, 0Ch
0x43E4D7: retn    0Ch
