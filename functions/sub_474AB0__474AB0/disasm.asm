0x474AB0: push    ebx
0x474AB1: push    ebp
0x474AB2: push    esi
0x474AB3: push    edi
0x474AB4: mov     edi, [esp+10h+arg_0]
0x474AB8: mov     eax, edi
0x474ABA: sub     eax, 5
0x474ABD: mov     esi, ecx
0x474ABF: mov     ebx, edi
0x474AC1: jz      short loc_474ACF
0x474AC3: sub     eax, 1
0x474AC6: jnz     short loc_474AD1
0x474AC8: mov     ebx, 3
0x474ACD: jmp     short loc_474AD1
0x474ACF: xor     ebx, ebx
0x474AD1: cmp     [esp+10h+arg_8], 0FFFFFFFFh
0x474AD6: jnz     loc_474B5E
0x474ADC: fldz
0x474ADE: push    ecx
0x474ADF: fstp    [esp+14h+var_14]; float
0x474AE2: push    ebx; int
0x474AE3: call    sub_470FC0
0x474AE8: mov     ebp, [esp+10h+arg_4]
0x474AEC: cmp     bp, 0FFh
0x474AF1: jz      loc_474BAE
0x474AF7: mov     ecx, [esi+9Ch]
0x474AFD: lea     eax, [esp+10h+arg_4]
0x474B01: push    eax
0x474B02: push    ebp
0x474B03: call    sub_470960
0x474B08: test    al, al
0x474B0A: jz      loc_474BAE
0x474B10: mov     edi, [esp+10h+arg_4]
0x474B14: mov     edx, [edi]
0x474B16: mov     eax, [esp+10h+arg_10]
0x474B1A: mov     edx, [edx+10h]
0x474B1D: push    eax
0x474B1E: mov     ecx, edi
0x474B20: call    edx
0x474B22: test    eax, eax
0x474B24: jz      loc_474BAE
0x474B2A: mov     ecx, [esp+10h+arg_10]
0x474B2E: mov     eax, [edi]
0x474B30: mov     edx, [eax+10h]
0x474B33: push    ecx
0x474B34: mov     ecx, edi
0x474B36: call    edx
0x474B38: fldz
0x474B3A: push    0; int
0x474B3C: push    0; int
0x474B3E: sub     esp, 8
0x474B41: fstp    [esp+20h+var_1C]; float
0x474B45: mov     ecx, eax
0x474B47: fld1
0x474B49: mov     [esi+ebx*4+0A0h], eax
0x474B50: fstp    [esp+20h+var_20]; float
0x474B53: push    0; char
0x474B55: push    0; int
0x474B57: call    sub_6C9BA0
0x474B5C: jmp     short loc_474BAE
0x474B5E: mov     ebp, [esp+10h+arg_4]
0x474B62: mov     ecx, [esi+9Ch]
0x474B68: lea     eax, [esp+10h+arg_4]
0x474B6C: push    eax
0x474B6D: push    ebp
0x474B6E: call    sub_470960
0x474B73: test    al, al
0x474B75: jz      short loc_474BAE
0x474B77: lea     ecx, [esp+10h+arg_4]
0x474B7B: push    ecx
0x474B7C: mov     ecx, [esi+9Ch]
0x474B82: push    ebp
0x474B83: call    sub_470960
0x474B88: test    al, al
0x474B8A: jz      short loc_474BA6
0x474B8C: mov     ecx, [esp+10h+arg_4]
0x474B90: mov     edx, [ecx]
0x474B92: mov     eax, [esp+10h+arg_10]
0x474B96: mov     edx, [edx+10h]
0x474B99: push    eax
0x474B9A: call    edx
0x474B9C: push    edi
0x474B9D: push    ebp
0x474B9E: push    eax
0x474B9F: mov     ecx, esi
0x474BA1: call    sub_474530
0x474BA6: mov     eax, [esp+10h+arg_8]
0x474BAA: mov     [esi+ebx*4+48h], eax
0x474BAE: fld     [esp+10h+arg_C]
0x474BB2: mov     [esi+ebx*2+3Ch], bp
0x474BB7: pop     edi
0x474BB8: fstp    dword ptr [esi+94h]
0x474BBE: pop     esi
0x474BBF: pop     ebp
0x474BC0: pop     ebx
0x474BC1: retn    14h
