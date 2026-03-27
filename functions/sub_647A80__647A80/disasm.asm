0x647A80: sub     esp, 0Ch
0x647A83: push    esi
0x647A84: mov     esi, ecx
0x647A86: mov     eax, [esi]
0x647A88: mov     edx, [eax+184h]
0x647A8E: push    edi
0x647A8F: call    edx
0x647A91: mov     edi, eax
0x647A93: mov     eax, [esi+2Ch]
0x647A96: test    eax, eax
0x647A98: jz      loc_647BAA
0x647A9E: mov     ecx, [eax+8]
0x647AA1: mov     edx, ecx
0x647AA3: shr     edx, 0Bh
0x647AA6: test    dl, 1
0x647AA9: jnz     loc_647BAA
0x647AAF: shr     ecx, 5
0x647AB2: test    cl, 1
0x647AB5: push    1
0x647AB7: jz      short loc_647ADC
0x647AB9: push    eax
0x647ABA: mov     ecx, edi
0x647ABC: call    sub_566870
0x647AC1: mov     ecx, [esp+14h+arg_0]
0x647AC5: mov     eax, [esi]
0x647AC7: mov     edx, [eax+188h]
0x647ACD: push    2
0x647ACF: push    ecx
0x647AD0: mov     ecx, esi
0x647AD2: call    edx
0x647AD4: pop     edi
0x647AD5: pop     esi
0x647AD6: add     esp, 0Ch
0x647AD9: retn    4
0x647ADC: mov     ecx, eax
0x647ADE: mov     eax, [ecx]
0x647AE0: mov     edx, [eax+198h]
0x647AE6: call    edx
0x647AE8: test    al, al
0x647AEA: jz      short loc_647B19
0x647AEC: cmp     dword ptr [esi+44h], 0
0x647AF0: jnz     short loc_647B19
0x647AF2: mov     eax, [esi+2Ch]
0x647AF5: push    1
0x647AF7: push    eax
0x647AF8: mov     ecx, edi
0x647AFA: call    sub_566870
0x647AFF: mov     ecx, [esp+14h+arg_0]
0x647B03: mov     eax, [esi+2Ch]
0x647B06: mov     edx, [ecx]
0x647B08: pop     edi
0x647B09: pop     esi
0x647B0A: add     esp, 0Ch
0x647B0D: mov     [esp+arg_0], eax
0x647B11: mov     edx, [edx+2F8h]
0x647B17: jmp     edx
0x647B19: fld     dword ptr ds:0A30634h
0x647B1F: push    ebx
0x647B20: mov     ebx, [esp+18h+arg_0]
0x647B24: push    ecx
0x647B25: fstp    [esp+1Ch+var_1C]; float
0x647B28: push    0; char
0x647B2A: push    ebx; int
0x647B2B: mov     ecx, edi
0x647B2D: call    sub_566DC0
0x647B32: test    al, al
0x647B34: jnz     short loc_647B4E
0x647B36: mov     eax, [esi]
0x647B38: mov     edx, [eax+188h]
0x647B3E: push    0FFFFFFFFh
0x647B40: push    ebx
0x647B41: mov     ecx, esi
0x647B43: call    edx
0x647B45: pop     ebx
0x647B46: pop     edi
0x647B47: pop     esi
0x647B48: add     esp, 0Ch
0x647B4B: retn    4
0x647B4E: mov     eax, [esi+2Ch]
0x647B51: push    0
0x647B53: push    eax
0x647B54: mov     ecx, ebx
0x647B56: call    TesObjectREF_GetDistance
0x647B5B: fcomp   qword ptr ds:0A3A5B0h
0x647B61: fnstsw  ax
0x647B63: test    ah, 44h
0x647B66: jnp     short loc_647B45
0x647B68: push    ebp
0x647B69: push    ebx
0x647B6A: lea     ecx, [esp+20h+var_C]
0x647B6E: push    ecx
0x647B6F: mov     ecx, edi
0x647B71: call    sub_566B30
0x647B76: mov     ecx, [esi+2Ch]
0x647B79: push    eax
0x647B7A: call    sub_4D7E30
0x647B7F: call    Double_To_SInt32
0x647B84: mov     ecx, edi
0x647B86: mov     ebp, eax
0x647B88: call    sub_566DB0
0x647B8D: cmp     ebp, eax
0x647B8F: pop     ebp
0x647B90: ja      short loc_647B45
0x647B92: mov     edx, [esi]
0x647B94: mov     eax, [edx+188h]
0x647B9A: push    1
0x647B9C: push    ebx
0x647B9D: mov     ecx, esi
0x647B9F: call    eax
0x647BA1: pop     ebx
0x647BA2: pop     edi
0x647BA3: pop     esi
0x647BA4: add     esp, 0Ch
0x647BA7: retn    4
0x647BAA: mov     edx, [esi]
0x647BAC: mov     eax, [esp+14h+arg_0]
0x647BB0: mov     edx, [edx+188h]
0x647BB6: push    2
0x647BB8: push    eax
0x647BB9: mov     ecx, esi
0x647BBB: call    edx
0x647BBD: pop     edi
0x647BBE: pop     esi
0x647BBF: add     esp, 0Ch
0x647BC2: retn    4
