0x585620: sub     esp, 8
0x585623: mov     eax, ds:0B1398Ch
0x585628: mov     edx, eax
0x58562A: imul    edx, ds:0B13980h
0x585631: push    ebx
0x585632: push    esi
0x585633: mov     esi, ds:0B3A704h
0x585639: push    edi
0x58563A: mov     edi, [ecx+8]
0x58563D: mov     ecx, [ecx+2Ch]
0x585640: sub     esi, edx
0x585642: mov     ebx, ecx
0x585644: sub     ebx, eax
0x585646: mov     [esp+14h+var_8], esi
0x58564A: mov     [esp+14h+var_4], ecx
0x58564E: jns     short loc_5856A2
0x585650: push    ebp
0x585651: mov     ebp, ebx
0x585653: neg     ebp
0x585655: add     ebx, ebp
0x585657: fld     dword ptr ds:0A30634h
0x58565D: push    0; int
0x58565F: push    ecx
0x585660: fstp    [esp+20h+var_20]; float
0x585663: push    0FFFFFFFFh; int
0x585665: fild    [esp+24h+var_8]
0x585669: push    1; int
0x58566B: sub     esp, 8
0x58566E: fstp    [esp+30h+var_2C]; float
0x585672: fild    dword ptr ds:0B3A700h
0x585678: fstp    [esp+30h+var_30]; float
0x58567B: push    0; int
0x58567D: push    1
0x58567F: call    sub_571F90
0x585684: add     esp, 4
0x585687: mov     ecx, eax
0x585689: call    sub_5723E0
0x58568E: add     esi, ds:0B13980h
0x585694: sub     ebp, 1
0x585697: mov     [esp+18h+var_8], esi
0x58569B: jnz     short loc_585657
0x58569D: mov     ecx, [esp+18h+var_4]
0x5856A1: pop     ebp
0x5856A2: test    ebx, ebx
0x5856A4: jle     short loc_5856B7
0x5856A6: mov     eax, ebx
0x5856A8: test    edi, edi
0x5856AA: jz      short loc_5856B0
0x5856AC: mov     edi, [edi]
0x5856AE: jmp     short loc_5856B2
0x5856B0: xor     edi, edi
0x5856B2: sub     eax, 1
0x5856B5: jnz     short loc_5856A8
0x5856B7: cmp     ebx, ecx
0x5856B9: jge     short loc_58570F
0x5856BB: sub     ecx, ebx
0x5856BD: mov     ebx, ecx
0x5856BF: nop
0x5856C0: mov     ecx, ds:0B13994h
0x5856C6: fld     dword ptr ds:0A30634h
0x5856CC: mov     eax, [edi+8]
0x5856CF: push    ecx; int
0x5856D0: push    ecx
0x5856D1: fstp    [esp+1Ch+var_1C]; float
0x5856D4: push    0FFFFFFFFh; int
0x5856D6: fild    [esp+20h+var_8]
0x5856DA: push    1; int
0x5856DC: sub     esp, 8
0x5856DF: fstp    [esp+2Ch+var_28]; float
0x5856E3: fild    dword ptr ds:0B3A700h
0x5856E9: fstp    [esp+2Ch+var_2C]; float
0x5856EC: push    eax; int
0x5856ED: push    1
0x5856EF: call    sub_571F90
0x5856F4: add     esp, 4
0x5856F7: mov     ecx, eax
0x5856F9: call    sub_5723E0
0x5856FE: add     esi, ds:0B13980h
0x585704: sub     ebx, 1
0x585707: mov     edi, [edi]
0x585709: mov     [esp+14h+var_8], esi
0x58570D: jnz     short loc_5856C0
0x58570F: pop     edi
0x585710: pop     esi
0x585711: pop     ebx
0x585712: add     esp, 8
0x585715: retn
