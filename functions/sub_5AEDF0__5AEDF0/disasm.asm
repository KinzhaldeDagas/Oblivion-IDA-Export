0x5AEDF0: push    ebx
0x5AEDF1: push    esi
0x5AEDF2: push    edi
0x5AEDF3: mov     edi, ecx
0x5AEDF5: mov     eax, [edi]
0x5AEDF7: mov     edx, [eax+34h]
0x5AEDFA: call    edx
0x5AEDFC: mov     esi, eax
0x5AEDFE: call    sub_578FE0
0x5AEE03: cmp     eax, esi
0x5AEE05: jnz     loc_5AEEC7
0x5AEE0B: cmp     [esp+0Ch+arg_0], 0Bh
0x5AEE10: jnz     loc_5AEEC7
0x5AEE16: push    1; arg1
0x5AEE18: push    0; canCreate
0x5AEE1A: call    InterfaceManager_GetSingleton
0x5AEE1F: add     esp, 8
0x5AEE22: test    eax, eax
0x5AEE24: jz      short loc_5AEE2E
0x5AEE26: mov     ebx, [eax+88h]
0x5AEE2C: jmp     short loc_5AEE30
0x5AEE2E: xor     ebx, ebx
0x5AEE30: test    ebx, ebx
0x5AEE32: jz      loc_5AEEC7
0x5AEE38: push    0FA8h
0x5AEE3D: mov     ecx, ebx
0x5AEE3F: call    Tile_GetFloat
0x5AEE44: fcomp   qword ptr ds:0A6C730h
0x5AEE4A: fnstsw  ax
0x5AEE4C: test    ah, 1
0x5AEE4F: jnz     short loc_5AEEC7
0x5AEE51: mov     esi, [edi+54h]
0x5AEE54: push    0FAEh
0x5AEE59: mov     ecx, ebx
0x5AEE5B: call    Tile_GetFloat
0x5AEE60: call    Double_To_SInt32
0x5AEE65: xor     edx, edx
0x5AEE67: test    esi, esi
0x5AEE69: mov     [edi+4Ch], edx
0x5AEE6C: jz      short loc_5AEE8D
0x5AEE6E: mov     edi, edi
0x5AEE70: mov     ecx, [esi]
0x5AEE72: test    ecx, ecx
0x5AEE74: jz      short loc_5AEE8D
0x5AEE76: cmp     dword ptr [edi+4Ch], 0
0x5AEE7A: jnz     short loc_5AEE93
0x5AEE7C: cmp     eax, edx
0x5AEE7E: jnz     short loc_5AEE83
0x5AEE80: mov     [edi+4Ch], ecx
0x5AEE83: mov     esi, [esi+4]
0x5AEE86: add     edx, 1
0x5AEE89: test    esi, esi
0x5AEE8B: jnz     short loc_5AEE70
0x5AEE8D: cmp     dword ptr [edi+4Ch], 0
0x5AEE91: jz      short loc_5AEEC7
0x5AEE93: mov     [edi+58h], ebx
0x5AEE96: mov     eax, ds:0B38CF8h
0x5AEE9B: mov     ecx, ds:0B38D00h
0x5AEEA1: mov     edx, ds:0B38760h
0x5AEEA7: push    0
0x5AEEA9: push    eax
0x5AEEAA: push    ecx
0x5AEEAB: push    1
0x5AEEAD: push    offset sub_5AECA0
0x5AEEB2: push    edx
0x5AEEB3: call    ShowUIMessageBox
0x5AEEB8: add     esp, 18h
0x5AEEBB: mov     byte ptr [edi+64h], 1
0x5AEEBF: pop     edi
0x5AEEC0: pop     esi
0x5AEEC1: mov     al, 1
0x5AEEC3: pop     ebx
0x5AEEC4: retn    8
0x5AEEC7: pop     edi
0x5AEEC8: pop     esi
0x5AEEC9: xor     al, al
0x5AEECB: pop     ebx
0x5AEECC: retn    8
