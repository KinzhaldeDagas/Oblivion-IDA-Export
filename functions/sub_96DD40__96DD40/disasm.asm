0x96DD40: push    esi
0x96DD41: mov     esi, ecx
0x96DD43: mov     ecx, [esi+8]
0x96DD46: test    ecx, ecx
0x96DD48: jz      short loc_96DD91
0x96DD4A: mov     eax, [ecx]
0x96DD4C: mov     edx, [eax+0Ch]
0x96DD4F: push    edi
0x96DD50: call    edx
0x96DD52: mov     edi, eax
0x96DD54: test    edi, edi
0x96DD56: jz      short loc_96DD90
0x96DD58: cmp     dword ptr [esi+40h], 0
0x96DD5C: jz      short loc_96DD90
0x96DD5E: cmp     byte ptr [esi+48h], 0
0x96DD62: jz      short loc_96DD90
0x96DD64: mov     ecx, [edi+0B4h]
0x96DD6A: mov     eax, [ecx]
0x96DD6C: mov     edx, [eax+50h]
0x96DD6F: push    ebx
0x96DD70: mov     ebx, [ecx+1Ch]
0x96DD73: call    edx
0x96DD75: mov     ecx, [esi+40h]
0x96DD78: add     edi, 64h ; 'd'
0x96DD7B: push    edi
0x96DD7C: push    ecx
0x96DD7D: movzx   eax, ax
0x96DD80: push    ebx
0x96DD81: push    eax
0x96DD82: call    dword ptr ds:0B27168h
0x96DD88: add     esp, 10h
0x96DD8B: mov     byte ptr [esi+48h], 0
0x96DD8F: pop     ebx
0x96DD90: pop     edi
0x96DD91: pop     esi
0x96DD92: retn
