0x6DBB10: fldz
0x6DBB12: sub     esp, 8
0x6DBB15: push    edi
0x6DBB16: mov     edi, ecx
0x6DBB18: fcomp   dword ptr [edi+24h]
0x6DBB1B: fnstsw  ax
0x6DBB1D: test    ah, 41h
0x6DBB20: jnz     loc_6DBBAE
0x6DBB26: mov     eax, [edi+18h]
0x6DBB29: push    ebx
0x6DBB2A: push    ebp
0x6DBB2B: push    esi
0x6DBB2C: xor     esi, esi
0x6DBB2E: cmp     eax, esi
0x6DBB30: jz      short loc_6DBB3B
0x6DBB32: mov     ebx, [eax+8]
0x6DBB35: mov     [esp+18h+var_8], ebx
0x6DBB39: jmp     short loc_6DBB41
0x6DBB3B: mov     [esp+18h+var_8], esi
0x6DBB3F: mov     ebx, esi
0x6DBB41: mov     eax, [edi+20h]
0x6DBB44: push    eax
0x6DBB45: call    FormHeapFree
0x6DBB4A: xor     ecx, ecx
0x6DBB4C: mov     eax, ebx
0x6DBB4E: mov     edx, 4
0x6DBB53: mul     edx
0x6DBB55: seto    cl
0x6DBB58: neg     ecx
0x6DBB5A: or      ecx, eax
0x6DBB5C: push    ecx; Size
0x6DBB5D: call    FormHeapAlloc
0x6DBB62: fldz
0x6DBB64: lea     ebp, [ebx-1]
0x6DBB67: add     esp, 8
0x6DBB6A: cmp     ebp, esi
0x6DBB6C: mov     [edi+20h], eax
0x6DBB6F: fstp    dword ptr [eax]
0x6DBB71: jbe     short loc_6DBBA1
0x6DBB73: fld1
0x6DBB75: push    ecx
0x6DBB76: fstp    [esp+1Ch+var_1C]; float
0x6DBB79: lea     ebx, [esi+1]
0x6DBB7C: push    ebx; int
0x6DBB7D: push    esi; int
0x6DBB7E: mov     ecx, edi
0x6DBB80: call    sub_6DB6F0
0x6DBB85: fstp    [esp+18h+var_4]
0x6DBB89: mov     eax, [edi+20h]
0x6DBB8C: fld     dword ptr [eax+esi*4]
0x6DBB8F: fadd    [esp+18h+var_4]
0x6DBB93: fstp    dword ptr [eax+esi*4+4]
0x6DBB97: mov     esi, ebx
0x6DBB99: cmp     esi, ebp
0x6DBB9B: jb      short loc_6DBB73
0x6DBB9D: mov     ebx, [esp+18h+var_8]
0x6DBBA1: mov     eax, [edi+20h]
0x6DBBA4: fld     dword ptr [eax+ebx*4-4]
0x6DBBA8: pop     esi
0x6DBBA9: pop     ebp
0x6DBBAA: fstp    dword ptr [edi+24h]
0x6DBBAD: pop     ebx
0x6DBBAE: fld     dword ptr [edi+24h]
0x6DBBB1: pop     edi
0x6DBBB2: add     esp, 8
0x6DBBB5: retn
