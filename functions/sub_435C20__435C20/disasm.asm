0x435C20: push    0FFFFFFFFh
0x435C22: push    offset SEH_43C8C0
0x435C27: mov     eax, large fs:0
0x435C2D: push    eax
0x435C2E: push    ecx
0x435C2F: push    ebx
0x435C30: push    ebp
0x435C31: push    esi
0x435C32: push    edi
0x435C33: mov     eax, ___security_cookie
0x435C38: xor     eax, esp
0x435C3A: push    eax
0x435C3B: lea     eax, [esp+24h+var_C]
0x435C3F: mov     large fs:0, eax
0x435C45: mov     edi, ecx
0x435C47: xor     eax, eax
0x435C49: xor     ebx, ebx
0x435C4B: cmp     [edi+0Ah], ax
0x435C4F: jbe     short loc_435C9F
0x435C51: mov     [esp+24h+var_10], eax
0x435C55: mov     edx, [edi+4]
0x435C58: movzx   ecx, bx
0x435C5B: mov     esi, [edx+ecx*4]
0x435C5E: cmp     esi, eax
0x435C60: lea     ebp, [edx+ecx*4]
0x435C63: mov     [esp+24h+var_4], eax
0x435C67: jz      short loc_435C8E
0x435C69: lea     eax, [esi+8]
0x435C6C: push    eax; lpAddend
0x435C6D: call    ds:InterlockedDecrement
0x435C73: test    eax, eax
0x435C75: jnz     short loc_435C85
0x435C77: test    esi, esi
0x435C79: jz      short loc_435C85
0x435C7B: mov     edx, [esi]
0x435C7D: mov     eax, [edx]
0x435C7F: push    1
0x435C81: mov     ecx, esi
0x435C83: call    eax
0x435C85: mov     dword ptr [ebp+0], 0
0x435C8C: xor     eax, eax
0x435C8E: add     ebx, 1
0x435C91: cmp     bx, [edi+0Ah]
0x435C95: mov     [esp+24h+var_4], 0FFFFFFFFh
0x435C9D: jb      short loc_435C55
0x435C9F: mov     [edi+0Ch], ax
0x435CA3: mov     [edi+0Ah], ax
0x435CA7: mov     ecx, dword ptr [esp+24h+var_C]
0x435CAB: mov     large fs:0, ecx
0x435CB2: pop     ecx
0x435CB3: pop     edi
0x435CB4: pop     esi
0x435CB5: pop     ebp
0x435CB6: pop     ebx
0x435CB7: add     esp, 10h
0x435CBA: retn
