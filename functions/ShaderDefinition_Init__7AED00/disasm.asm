0x7AED00: push    0FFFFFFFFh
0x7AED02: push    offset SEH_7B7170
0x7AED07: mov     eax, large fs:0
0x7AED0D: push    eax
0x7AED0E: push    ecx
0x7AED0F: push    ebp
0x7AED10: push    esi
0x7AED11: push    edi
0x7AED12: mov     eax, ds:0B30AACh
0x7AED17: xor     eax, esp
0x7AED19: push    eax
0x7AED1A: lea     eax, [esp+20h+var_C]
0x7AED1E: mov     large fs:0, eax
0x7AED24: mov     esi, ecx
0x7AED26: mov     [esp+20h+var_10], esi
0x7AED2A: mov     dword ptr [esi], 0
0x7AED30: mov     [esp+20h+var_4], 0
0x7AED38: mov     dword ptr [esi+4], 0
0x7AED3F: mov     edi, [esi]
0x7AED41: test    edi, edi
0x7AED43: mov     ebp, ds:0A2807Ch
0x7AED49: mov     byte ptr [esp+20h+var_4], 1
0x7AED4E: jz      short loc_7AED6E
0x7AED50: lea     eax, [edi+4]
0x7AED53: push    eax; lpAddend
0x7AED54: call    ebp ; InterlockedDecrement
0x7AED56: test    eax, eax
0x7AED58: jnz     short loc_7AED68
0x7AED5A: test    edi, edi
0x7AED5C: jz      short loc_7AED68
0x7AED5E: mov     edx, [edi]
0x7AED60: mov     eax, [edx]
0x7AED62: push    1
0x7AED64: mov     ecx, edi
0x7AED66: call    eax
0x7AED68: mov     dword ptr [esi], 0
0x7AED6E: mov     edi, [esi+4]
0x7AED71: test    edi, edi
0x7AED73: jz      short loc_7AED94
0x7AED75: lea     ecx, [edi+4]
0x7AED78: push    ecx; lpAddend
0x7AED79: call    ebp ; InterlockedDecrement
0x7AED7B: test    eax, eax
0x7AED7D: jnz     short loc_7AED8D
0x7AED7F: test    edi, edi
0x7AED81: jz      short loc_7AED8D
0x7AED83: mov     edx, [edi]
0x7AED85: mov     eax, [edx]
0x7AED87: push    1
0x7AED89: mov     ecx, edi
0x7AED8B: call    eax
0x7AED8D: mov     dword ptr [esi+4], 0
0x7AED94: mov     eax, esi
0x7AED96: mov     ecx, dword ptr [esp+20h+var_C]
0x7AED9A: mov     large fs:0, ecx
0x7AEDA1: pop     ecx
0x7AEDA2: pop     edi
0x7AEDA3: pop     esi
0x7AEDA4: pop     ebp
0x7AEDA5: add     esp, 10h
0x7AEDA8: retn
