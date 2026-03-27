0x75ED50: push    ebx
0x75ED51: mov     ebx, [esp+4+arg_4]
0x75ED55: push    esi
0x75ED56: push    edi
0x75ED57: mov     edi, [esp+0Ch+arg_0]
0x75ED5B: push    ebx
0x75ED5C: push    edi
0x75ED5D: mov     esi, ecx
0x75ED5F: call    sub_700770
0x75ED64: fld     dword ptr [esi+8]
0x75ED67: fstp    dword ptr [edi+8]
0x75ED6A: mov     al, [esi+0Ch]
0x75ED6D: mov     [edi+0Ch], al
0x75ED70: mov     cl, [esi+0Dh]
0x75ED73: mov     [edi+0Dh], cl
0x75ED76: mov     ecx, [esi+28h]
0x75ED79: test    ecx, ecx
0x75ED7B: jz      short loc_75ED8E
0x75ED7D: mov     edx, [ecx]
0x75ED7F: mov     eax, [edx+18h]
0x75ED82: push    ebx
0x75ED83: call    eax
0x75ED85: push    eax; a2
0x75ED86: lea     ecx, [edi+28h]; this
0x75ED89: call    NiSmartPointer_Set??
0x75ED8E: pop     edi
0x75ED8F: pop     esi
0x75ED90: pop     ebx
0x75ED91: retn    8
