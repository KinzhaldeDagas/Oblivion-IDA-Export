0x658B00: fld     dword ptr ds:0B36C68h
0x658B06: push    ebx
0x658B07: fmul    qword ptr ds:0A3C800h
0x658B0D: push    ebp
0x658B0E: push    esi
0x658B0F: mov     ebx, ecx
0x658B11: call    Double_To_SInt32
0x658B16: mov     ebp, eax
0x658B18: xor     esi, esi
0x658B1A: test    ebp, ebp
0x658B1C: jz      loc_658BB2
0x658B22: push    edi
0x658B23: mov     edi, [esp+10h+arg_0]
0x658B27: jmp     short loc_658B30
0x658B29: align 10h
0x658B30: mov     eax, [edi]
0x658B32: mov     edx, [eax+198h]
0x658B38: push    0
0x658B3A: mov     ecx, edi
0x658B3C: call    edx
0x658B3E: test    al, al
0x658B40: jnz     short loc_658B91
0x658B42: mov     eax, [edi]
0x658B44: mov     edx, [eax+344h]
0x658B4A: mov     ecx, edi
0x658B4C: call    edx
0x658B4E: mov     eax, [ebx+2Ch]
0x658B51: push    0; int
0x658B53: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x658B58: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x658B5D: push    0; int
0x658B5F: push    eax; void *
0x658B60: call    OblivionDynamicCast
0x658B65: mov     esi, eax
0x658B67: add     esp, 14h
0x658B6A: test    esi, esi
0x658B6C: jz      short loc_658B8C
0x658B6E: mov     edx, [esi]
0x658B70: mov     eax, [edx+198h]
0x658B76: push    0
0x658B78: mov     ecx, esi
0x658B7A: call    eax
0x658B7C: test    al, al
0x658B7E: jnz     short loc_658B8C
0x658B80: mov     edx, [esi]
0x658B82: mov     eax, [edx+344h]
0x658B88: mov     ecx, esi
0x658B8A: call    eax
0x658B8C: sub     ebp, 1
0x658B8F: jnz     short loc_658B30
0x658B91: test    esi, esi
0x658B93: pop     edi
0x658B94: jz      short loc_658BB2
0x658B96: mov     edx, [esi]
0x658B98: mov     eax, [edx+198h]
0x658B9E: push    0
0x658BA0: mov     ecx, esi
0x658BA2: call    eax
0x658BA4: test    al, al
0x658BA6: jnz     short loc_658BB2
0x658BA8: mov     ecx, [esi+58h]
0x658BAB: mov     edx, [ecx]
0x658BAD: mov     eax, [edx+20h]
0x658BB0: call    eax
0x658BB2: pop     esi
0x658BB3: pop     ebp
0x658BB4: xor     al, al
0x658BB6: pop     ebx
0x658BB7: retn    8
