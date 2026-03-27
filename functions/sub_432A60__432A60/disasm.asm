0x432A60: sub     esp, 0Ch
0x432A63: mov     edx, [esp+0Ch+Comperand]
0x432A67: push    ebx
0x432A68: mov     ebx, [esp+10h+arg_8]
0x432A6C: push    ebp
0x432A6D: push    esi
0x432A6E: mov     esi, ecx
0x432A70: mov     eax, [esi]
0x432A72: mov     ecx, [eax+0Ch]
0x432A75: lea     eax, [ecx+edx*4]
0x432A78: push    edi
0x432A79: mov     [esp+1Ch+var_4], eax
0x432A7D: lea     ecx, [ecx+0]
0x432A80: mov     ecx, [esp+1Ch+var_4]
0x432A84: mov     [esi+10h], ecx
0x432A87: mov     edx, ecx
0x432A89: mov     eax, [edx]
0x432A8B: mov     [esi+14h], eax
0x432A8E: mov     ecx, [esi+14h]
0x432A91: mov     edx, [esi+8]
0x432A94: and     ecx, 0FFFFFFFEh
0x432A97: mov     [edx], ecx
0x432A99: mov     eax, [esi+14h]
0x432A9C: and     eax, 0FFFFFFFEh
0x432A9F: mov     [esp+1Ch+var_C], eax
0x432AA3: mov     eax, [esp+1Ch+var_C]
0x432AA7: and     eax, 0FFFFFFFEh
0x432AAA: mov     [esp+1Ch+var_C], eax
0x432AAE: mov     eax, [esi+10h]
0x432AB1: mov     eax, [eax]
0x432AB3: mov     ecx, [esp+1Ch+var_C]
0x432AB7: cmp     eax, ecx
0x432AB9: jnz     short loc_432A80
0x432ABB: jmp     short loc_432AC0
0x432ABD: align 10h
0x432AC0: mov     edx, [esi+14h]
0x432AC3: test    edx, 0FFFFFFFEh
0x432AC9: jz      loc_432BFA
0x432ACF: mov     eax, [esi+14h]
0x432AD2: and     eax, 0FFFFFFFEh
0x432AD5: mov     ecx, [eax+0Ch]
0x432AD8: mov     [esi+18h], ecx
0x432ADB: mov     edx, [esi+18h]
0x432ADE: mov     eax, [esi+4]
0x432AE1: and     edx, 0FFFFFFFEh
0x432AE4: mov     [eax], edx
0x432AE6: mov     ecx, [esi+18h]
0x432AE9: mov     eax, [esi+14h]
0x432AEC: and     eax, 0FFFFFFFEh
0x432AEF: mov     edx, [eax+0Ch]
0x432AF2: cmp     ecx, edx
0x432AF4: jnz     short loc_432A80
0x432AF6: mov     eax, [esi+14h]
0x432AF9: and     eax, 0FFFFFFFEh
0x432AFC: mov     edi, [eax]
0x432AFE: mov     ebp, [eax+4]
0x432B01: mov     eax, [esi+14h]
0x432B04: and     eax, 0FFFFFFFEh
0x432B07: mov     [esp+1Ch+Comperand], eax
0x432B0B: mov     eax, [esp+1Ch+Comperand]
0x432B0F: and     eax, 0FFFFFFFEh
0x432B12: mov     [esp+1Ch+Comperand], eax
0x432B16: mov     eax, [esi+10h]
0x432B19: mov     eax, [eax]
0x432B1B: mov     ecx, [esp+1Ch+Comperand]
0x432B1F: cmp     eax, ecx
0x432B21: jnz     loc_432A80
0x432B27: mov     edx, [esi+18h]
0x432B2A: test    dl, 1
0x432B2D: jnz     short loc_432B64
0x432B2F: mov     edx, [esp+1Ch+arg_4]
0x432B33: mov     ecx, [esi]
0x432B35: mov     eax, [ecx]
0x432B37: mov     eax, [eax+28h]
0x432B3A: push    ebx
0x432B3B: push    edx
0x432B3C: push    ebp
0x432B3D: push    edi
0x432B3E: call    eax
0x432B40: test    al, al
0x432B42: jnz     loc_432C06
0x432B48: mov     ecx, [esi+14h]
0x432B4B: and     ecx, 0FFFFFFFEh
0x432B4E: add     ecx, 0Ch
0x432B51: mov     [esi+10h], ecx
0x432B54: mov     edx, [esi+14h]
0x432B57: mov     eax, [esi+0Ch]
0x432B5A: and     edx, 0FFFFFFFEh
0x432B5D: mov     [eax], edx
0x432B5F: jmp     loc_432BE4
0x432B64: mov     eax, [esi+18h]
0x432B67: and     eax, 0FFFFFFFEh
0x432B6A: mov     [esp+1Ch+Exchange], eax
0x432B6E: mov     ecx, [esp+1Ch+Exchange]
0x432B72: mov     edi, [esp+1Ch+Comperand]
0x432B76: and     ecx, 0FFFFFFFEh
0x432B79: mov     [esp+1Ch+Exchange], ecx
0x432B7D: mov     eax, [esp+1Ch+Exchange]
0x432B81: mov     ecx, [esi+10h]
0x432B84: push    edi; Comperand
0x432B85: push    eax; Exchange
0x432B86: push    ecx; Destination
0x432B87: call    ds:InterlockedCompareExchange
0x432B8D: cmp     eax, edi
0x432B8F: jnz     loc_432A80
0x432B95: mov     edi, [esi+14h]
0x432B98: and     edi, 0FFFFFFFEh
0x432B9B: mov     ebp, [edi+8]
0x432B9E: test    ebp, ebp
0x432BA0: jz      short loc_432BC6
0x432BA2: lea     edx, [ebp+8]
0x432BA5: push    edx; lpAddend
0x432BA6: call    ds:InterlockedDecrement
0x432BAC: test    eax, eax
0x432BAE: jnz     short loc_432BBF
0x432BB0: test    ebp, ebp
0x432BB2: jz      short loc_432BBF
0x432BB4: mov     eax, [ebp+0]
0x432BB7: mov     edx, [eax]
0x432BB9: push    1
0x432BBB: mov     ecx, ebp
0x432BBD: call    edx
0x432BBF: mov     dword ptr [edi+8], 0
0x432BC6: mov     eax, [esi+1Ch]
0x432BC9: mov     [edi+8], eax
0x432BCC: add     dword ptr [esi+20h], 1
0x432BD0: mov     eax, [esi+20h]
0x432BD3: mov     ecx, [esi]
0x432BD5: mov     [esi+1Ch], edi
0x432BD8: cmp     eax, [ecx+10h]
0x432BDB: jnz     short loc_432BE4
0x432BDD: mov     ecx, esi
0x432BDF: call    sub_4328B0
0x432BE4: mov     edx, [esi+18h]
0x432BE7: mov     [esi+14h], edx
0x432BEA: mov     eax, [esi+18h]
0x432BED: mov     ecx, [esi+8]
0x432BF0: and     eax, 0FFFFFFFEh
0x432BF3: mov     [ecx], eax
0x432BF5: jmp     loc_432AC0
0x432BFA: pop     edi
0x432BFB: pop     esi
0x432BFC: pop     ebp
0x432BFD: xor     al, al
0x432BFF: pop     ebx
0x432C00: add     esp, 0Ch
0x432C03: retn    0Ch
0x432C06: mov     eax, [esp+1Ch+arg_4]
0x432C0A: mov     ecx, [esi]
0x432C0C: mov     edx, [ecx]
0x432C0E: mov     edx, [edx+2Ch]
0x432C11: push    ebx
0x432C12: push    eax
0x432C13: push    ebp
0x432C14: push    edi
0x432C15: call    edx
0x432C17: pop     edi
0x432C18: pop     esi
0x432C19: pop     ebp
0x432C1A: pop     ebx
0x432C1B: add     esp, 0Ch
0x432C1E: retn    0Ch
