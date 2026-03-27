0x889A70: push    0FFFFFFFFh
0x889A72: push    offset SEH_889A70
0x889A77: mov     eax, large fs:0
0x889A7D: push    eax
0x889A7E: push    ecx
0x889A7F: push    ebx
0x889A80: push    esi
0x889A81: push    edi
0x889A82: mov     eax, ds:0B30AACh
0x889A87: xor     eax, esp
0x889A89: push    eax
0x889A8A: lea     eax, [esp+20h+var_C]
0x889A8E: mov     large fs:0, eax
0x889A94: mov     edi, ecx
0x889A96: mov     ebx, [esp+20h+a2]
0x889A9A: test    ebx, ebx
0x889A9C: jz      loc_889B93
0x889AA2: add     ebx, 0FFFFFF60h
0x889AA8: jz      loc_889B93
0x889AAE: mov     byte ptr [ebx+94h], 1
0x889AB5: mov     ecx, ds:0BA7D98h
0x889ABB: mov     eax, [ecx]
0x889ABD: mov     edx, [eax+10h]
0x889AC0: push    2Ch ; ','
0x889AC2: push    2C0h
0x889AC7: call    edx
0x889AC9: mov     esi, eax
0x889ACB: mov     word ptr [esi+4], 2C0h
0x889AD1: mov     [esp+18h+var_8], esi
0x889AD5: push    7595h; Args
0x889ADA: push    ebx; int
0x889ADB: mov     ecx, esi
0x889ADD: mov     [esp+20h+a2], 0
0x889AE5: call    sub_89A230
0x889AEA: or      ebx, 0FFFFFFFFh
0x889AED: mov     dword ptr [esi], offset ??_7ahkWorld@@6B@; const ahkWorld::`vftable'
0x889AF3: mov     dword ptr [esi+2B0h], 0
0x889AFD: cmp     dword ptr ds:0BA7904h, 0
0x889B04: mov     [esp+20h+var_4], ebx
0x889B08: jz      short loc_889B25
0x889B0A: push    1
0x889B0C: push    0
0x889B0E: push    ecx
0x889B0F: mov     eax, esp
0x889B11: mov     byte ptr [eax], 1
0x889B14: mov     eax, ds:0BA7904h
0x889B19: mov     [esp+2Ch+var_10], esp
0x889B1D: push    eax
0x889B1E: mov     ecx, esi
0x889B20: call    sub_89D340
0x889B25: mov     edx, [edi]
0x889B27: mov     eax, [edx+4Ch]
0x889B2A: push    esi
0x889B2B: mov     ecx, edi
0x889B2D: call    eax
0x889B2F: cmp     word ptr [esi+4], 0
0x889B34: jz      short loc_889B4D
0x889B36: add     [esi+6], bx
0x889B3A: movzx   eax, word ptr [esi+6]
0x889B3E: test    ax, ax
0x889B41: jnz     short loc_889B4D
0x889B43: mov     edx, [esi]
0x889B45: mov     eax, [edx]
0x889B47: push    1
0x889B49: mov     ecx, esi
0x889B4B: call    eax
0x889B4D: mov     edx, [edi]
0x889B4F: mov     eax, [esp+20h+a2]
0x889B53: mov     edx, [edx+7Ch]
0x889B56: push    eax
0x889B57: mov     ecx, edi
0x889B59: call    edx
0x889B5B: mov     eax, [edi]
0x889B5D: mov     edx, [eax+58h]
0x889B60: mov     ecx, edi
0x889B62: call    edx
0x889B64: test    eax, eax
0x889B66: jz      short loc_889B74
0x889B68: mov     eax, [eax+7Ch]
0x889B6B: push    eax
0x889B6C: call    sub_8BBC60
0x889B71: add     esp, 4
0x889B74: mov     esi, ds:0BA7A00h
0x889B7A: test    esi, esi
0x889B7C: jz      short loc_889B93
0x889B7E: mov     edx, [edi]
0x889B80: mov     eax, [edx+58h]
0x889B83: mov     ecx, edi
0x889B85: call    eax
0x889B87: test    eax, eax
0x889B89: jz      short loc_889B93
0x889B8B: push    esi
0x889B8C: mov     ecx, eax
0x889B8E: call    sub_899D60
0x889B93: mov     ecx, [esp+20h+var_C]
0x889B97: mov     large fs:0, ecx
0x889B9E: pop     ecx
0x889B9F: pop     edi
0x889BA0: pop     esi
0x889BA1: pop     ebx
0x889BA2: add     esp, 10h
0x889BA5: retn    4
