0x98FFAA: push    ebp
0x98FFAB: mov     ebp, esp
0x98FFAD: sub     esp, 2Ch
0x98FFB0: mov     eax, ___security_cookie
0x98FFB5: xor     eax, ebp
0x98FFB7: mov     [ebp+var_4], eax
0x98FFBA: mov     eax, [ebp+arg_0]
0x98FFBD: push    ebx
0x98FFBE: push    esi
0x98FFBF: push    edi
0x98FFC0: mov     edi, [ebp+arg_4]
0x98FFC3: push    16h
0x98FFC5: pop     esi
0x98FFC6: push    esi; SizeInBytes
0x98FFC7: lea     ecx, [ebp+var_1C]
0x98FFCA: push    ecx; int
0x98FFCB: lea     ecx, [ebp+var_2C]
0x98FFCE: push    ecx; int
0x98FFCF: push    dword ptr [eax+4]; int
0x98FFD2: push    dword ptr [eax]; char
0x98FFD4: call    __fltout2
0x98FFD9: xor     ebx, ebx
0x98FFDB: add     esp, 14h
0x98FFDE: cmp     edi, ebx
0x98FFE0: jnz     short loc_98FFFA
0x98FFE2: call    __errno
0x98FFE7: push    ebx
0x98FFE8: push    ebx
0x98FFE9: push    ebx
0x98FFEA: push    ebx
0x98FFEB: push    ebx
0x98FFEC: mov     [eax], esi
0x98FFEE: call    __invalid_parameter
0x98FFF3: add     esp, 14h
0x98FFF6: mov     eax, esi
0x98FFF8: jmp     short loc_990069
0x98FFFA: mov     eax, [ebp+arg_8]
0x98FFFD: cmp     eax, ebx
0x98FFFF: jbe     short loc_98FFE2
0x990001: cmp     eax, 0FFFFFFFFh
0x990004: mov     esi, [ebp+arg_C]
0x990007: jnz     short loc_99000E
0x990009: or      eax, 0FFFFFFFFh
0x99000C: jmp     short loc_990022
0x99000E: xor     ecx, ecx
0x990010: cmp     [ebp+var_2C], 2Dh ; '-'
0x990014: setz    cl
0x990017: sub     eax, ecx
0x990019: xor     ecx, ecx
0x99001B: cmp     esi, ebx
0x99001D: setnle  cl
0x990020: sub     eax, ecx
0x990022: lea     ecx, [ebp+var_2C]
0x990025: push    ecx
0x990026: lea     ecx, [esi+1]
0x990029: push    ecx
0x99002A: push    eax
0x99002B: xor     eax, eax
0x99002D: cmp     [ebp+var_2C], 2Dh ; '-'
0x990031: setz    al
0x990034: xor     ecx, ecx
0x990036: cmp     esi, ebx
0x990038: setnle  cl
0x99003B: add     eax, edi
0x99003D: add     ecx, eax
0x99003F: push    ecx
0x990040: call    __fptostr
0x990045: add     esp, 10h
0x990048: cmp     eax, ebx
0x99004A: jz      short loc_990050
0x99004C: mov     [edi], bl
0x99004E: jmp     short loc_990069
0x990050: push    [ebp+arg_14]; struct localeinfo_struct *
0x990053: lea     eax, [ebp+var_2C]
0x990056: push    ebx; char
0x990057: push    eax; int
0x990058: push    [ebp+arg_10]; int
0x99005B: mov     eax, edi
0x99005D: push    esi; int
0x99005E: push    [ebp+arg_8]; int
0x990061: call    __cftoe2_l
0x990066: add     esp, 18h
0x990069: mov     ecx, [ebp+var_4]
0x99006C: pop     edi
0x99006D: pop     esi
0x99006E: xor     ecx, ebp
0x990070: pop     ebx
0x990071: call    @__security_check_cookie@4
0x990076: leave
0x990077: retn
