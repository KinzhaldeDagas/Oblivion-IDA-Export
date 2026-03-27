0x480B00: mov     eax, [esp+arg_0]
0x480B04: test    eax, eax
0x480B06: jnz     short loc_480B0B
0x480B08: fldz
0x480B0A: retn
0x480B0B: mov     eax, [eax+0Ch]
0x480B0E: push    ebx
0x480B0F: push    ebp
0x480B10: push    esi
0x480B11: push    edi
0x480B12: push    eax
0x480B13: push    offset stru_B3CAC0
0x480B18: call    NiRTTI_Cast
0x480B1D: add     esp, 8
0x480B20: test    eax, eax
0x480B22: jz      short loc_480B93
0x480B24: mov     edx, [esp+10h+arg_4]
0x480B28: lea     ecx, [esp+10h+arg_0]
0x480B2C: push    ecx
0x480B2D: push    edx
0x480B2E: lea     ecx, [eax+58h]
0x480B31: call    NiTMap_GetAt
0x480B36: test    al, al
0x480B38: jz      short loc_480B93
0x480B3A: mov     eax, [esp+10h+arg_0]
0x480B3E: test    eax, eax
0x480B40: jz      short loc_480B93
0x480B42: mov     eax, [eax+20h]
0x480B45: mov     edi, [eax+10h]
0x480B48: mov     ebx, [eax+0Ch]
0x480B4B: mov     eax, [esp+10h+Str2]
0x480B4F: mov     [esp+10h+arg_0], edi
0x480B53: lea     edx, [eax+1]
0x480B56: mov     cl, [eax]
0x480B58: add     eax, 1
0x480B5B: test    cl, cl
0x480B5D: jnz     short loc_480B56
0x480B5F: sub     eax, edx
0x480B61: mov     ebp, eax
0x480B63: jz      short loc_480B93
0x480B65: xor     esi, esi
0x480B67: test    ebx, ebx
0x480B69: jbe     short loc_480B93
0x480B6B: add     edi, 4
0x480B6E: mov     edi, edi
0x480B70: mov     eax, [edi]
0x480B72: test    eax, eax
0x480B74: jz      short loc_480B89
0x480B76: mov     ecx, [esp+10h+Str2]
0x480B7A: push    ebp; MaxCount
0x480B7B: push    ecx; Str2
0x480B7C: push    eax; Str1
0x480B7D: call    __strnicmp
0x480B82: add     esp, 0Ch
0x480B85: test    eax, eax
0x480B87: jz      short loc_480B9A
0x480B89: add     esi, 1
0x480B8C: add     edi, 8
0x480B8F: cmp     esi, ebx
0x480B91: jb      short loc_480B70
0x480B93: fldz
0x480B95: pop     edi
0x480B96: pop     esi
0x480B97: pop     ebp
0x480B98: pop     ebx
0x480B99: retn
0x480B9A: mov     edx, [esp+10h+arg_0]
0x480B9E: fld     dword ptr [edx+esi*8]
0x480BA1: pop     edi
0x480BA2: pop     esi
0x480BA3: pop     ebp
0x480BA4: pop     ebx
0x480BA5: retn
