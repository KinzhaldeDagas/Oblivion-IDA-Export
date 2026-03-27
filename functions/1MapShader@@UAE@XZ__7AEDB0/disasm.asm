0x7AEDB0: push    0FFFFFFFFh
0x7AEDB2: push    offset ??0MapShader@@QAE@XZ_SEH
0x7AEDB7: mov     eax, large fs:0
0x7AEDBD: push    eax
0x7AEDBE: push    ecx
0x7AEDBF: push    ebx
0x7AEDC0: push    ebp
0x7AEDC1: push    esi
0x7AEDC2: push    edi
0x7AEDC3: mov     eax, ds:0B30AACh
0x7AEDC8: xor     eax, esp
0x7AEDCA: push    eax
0x7AEDCB: lea     eax, [esp+24h+var_C]
0x7AEDCF: mov     large fs:0, eax
0x7AEDD5: mov     esi, ecx
0x7AEDD7: mov     [esp+24h+var_10], esi
0x7AEDDB: mov     dword ptr [esi], offset ??_7MapShader@@6B@; const MapShader::`vftable'
0x7AEDE1: mov     edi, [esi+98h]
0x7AEDE7: xor     ebx, ebx
0x7AEDE9: cmp     edi, ebx
0x7AEDEB: mov     [esp+24h+var_4], 4
0x7AEDF3: jz      short loc_7AEE17
0x7AEDF5: lea     eax, [edi+4]
0x7AEDF8: push    eax; lpAddend
0x7AEDF9: call    dword ptr ds:0A2807Ch
0x7AEDFF: test    eax, eax
0x7AEE01: jnz     short loc_7AEE11
0x7AEE03: cmp     edi, ebx
0x7AEE05: jz      short loc_7AEE11
0x7AEE07: mov     edx, [edi]
0x7AEE09: mov     eax, [edx]
0x7AEE0B: push    1
0x7AEE0D: mov     ecx, edi
0x7AEE0F: call    eax
0x7AEE11: mov     [esi+98h], ebx
0x7AEE17: mov     edi, [esi+9Ch]
0x7AEE1D: cmp     edi, ebx
0x7AEE1F: jz      short loc_7AEE43
0x7AEE21: lea     ecx, [edi+4]
0x7AEE24: push    ecx; lpAddend
0x7AEE25: call    dword ptr ds:0A2807Ch
0x7AEE2B: test    eax, eax
0x7AEE2D: jnz     short loc_7AEE3D
0x7AEE2F: cmp     edi, ebx
0x7AEE31: jz      short loc_7AEE3D
0x7AEE33: mov     edx, [edi]
0x7AEE35: mov     eax, [edx]
0x7AEE37: push    1
0x7AEE39: mov     ecx, edi
0x7AEE3B: call    eax
0x7AEE3D: mov     [esi+9Ch], ebx
0x7AEE43: mov     ecx, [esi+94h]
0x7AEE49: cmp     ecx, ebx
0x7AEE4B: lea     ebp, [esi+94h]
0x7AEE51: jz      short loc_7AEE61
0x7AEE53: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7AEE57: jnz     short loc_7AEE5E
0x7AEE59: call    sub_7604D0
0x7AEE5E: mov     [ebp+0], ebx
0x7AEE61: mov     [esi+78h], bl
0x7AEE64: mov     [esi+90h], ebx
0x7AEE6A: mov     edi, ds:0B42D44h
0x7AEE70: cmp     edi, ebx
0x7AEE72: jz      short loc_7AEE96
0x7AEE74: lea     ecx, [edi+4]
0x7AEE77: push    ecx; lpAddend
0x7AEE78: call    dword ptr ds:0A2807Ch
0x7AEE7E: test    eax, eax
0x7AEE80: jnz     short loc_7AEE90
0x7AEE82: cmp     edi, ebx
0x7AEE84: jz      short loc_7AEE90
0x7AEE86: mov     edx, [edi]
0x7AEE88: mov     eax, [edx]
0x7AEE8A: push    1
0x7AEE8C: mov     ecx, edi
0x7AEE8E: call    eax
0x7AEE90: mov     ds:0B42D44h, ebx
0x7AEE96: mov     edi, [esi+0C0h]
0x7AEE9C: cmp     edi, ebx
0x7AEE9E: jz      short loc_7AEEC2
0x7AEEA0: lea     ecx, [edi+4]
0x7AEEA3: push    ecx; lpAddend
0x7AEEA4: call    dword ptr ds:0A2807Ch
0x7AEEAA: test    eax, eax
0x7AEEAC: jnz     short loc_7AEEBC
0x7AEEAE: cmp     edi, ebx
0x7AEEB0: jz      short loc_7AEEBC
0x7AEEB2: mov     edx, [edi]
0x7AEEB4: mov     eax, [edx]
0x7AEEB6: push    1
0x7AEEB8: mov     ecx, edi
0x7AEEBA: call    eax
0x7AEEBC: mov     [esi+0C0h], ebx
0x7AEEC2: mov     edi, [esi+0C0h]
0x7AEEC8: cmp     edi, ebx
0x7AEECA: mov     byte ptr [esp+24h+var_4], 3
0x7AEECF: jz      short loc_7AEEED
0x7AEED1: lea     ecx, [edi+4]
0x7AEED4: push    ecx; lpAddend
0x7AEED5: call    dword ptr ds:0A2807Ch
0x7AEEDB: test    eax, eax
0x7AEEDD: jnz     short loc_7AEEED
0x7AEEDF: cmp     edi, ebx
0x7AEEE1: jz      short loc_7AEEED
0x7AEEE3: mov     edx, [edi]
0x7AEEE5: mov     eax, [edx]
0x7AEEE7: push    1
0x7AEEE9: mov     ecx, edi
0x7AEEEB: call    eax
0x7AEEED: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7AEEF2: push    1; int
0x7AEEF4: push    4; unsigned int
0x7AEEF6: lea     eax, [esi+9Ch]
0x7AEEFC: push    eax; void *
0x7AEEFD: mov     byte ptr [esp+34h+var_4], 2
0x7AEF02: call    $LN21
0x7AEF07: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7AEF0C: push    1; int
0x7AEF0E: push    4; unsigned int
0x7AEF10: lea     eax, [esi+98h]
0x7AEF16: push    eax; void *
0x7AEF17: mov     byte ptr [esp+34h+var_4], 1
0x7AEF1C: call    $LN21
0x7AEF21: push    offset sub_4027D0; void (__thiscall *)(void *)
0x7AEF26: push    1; int
0x7AEF28: push    4; unsigned int
0x7AEF2A: push    ebp; void *
0x7AEF2B: mov     byte ptr [esp+34h+var_4], bl
0x7AEF2F: call    $LN21
0x7AEF34: mov     ecx, esi; this
0x7AEF36: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7AEF3E: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7AEF43: mov     ecx, dword ptr [esp+24h+var_C]
0x7AEF47: mov     large fs:0, ecx
0x7AEF4E: pop     ecx
0x7AEF4F: pop     edi
0x7AEF50: pop     esi
0x7AEF51: pop     ebp
0x7AEF52: pop     ebx
0x7AEF53: add     esp, 10h
0x7AEF56: retn
