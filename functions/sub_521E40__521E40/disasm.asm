0x521E40: push    esi
0x521E41: mov     esi, ecx
0x521E43: mov     eax, [esi]
0x521E45: mov     edx, [eax+128h]
0x521E4B: push    edi
0x521E4C: push    45h ; 'E'
0x521E4E: call    edx
0x521E50: test    eax, eax
0x521E52: lea     eax, [esi+168h]
0x521E58: jnz     short loc_521E60
0x521E5A: lea     eax, [esi+108h]
0x521E60: push    eax
0x521E61: call    sub_5538D0
0x521E66: push    eax
0x521E67: call    sub_5528F0
0x521E6C: mov     eax, [esi]
0x521E6E: mov     edx, [eax+128h]
0x521E74: add     esp, 8
0x521E77: push    45h ; 'E'
0x521E79: mov     ecx, esi
0x521E7B: call    edx
0x521E7D: test    eax, eax
0x521E7F: lea     eax, [esi+168h]
0x521E85: jnz     short loc_521E8D
0x521E87: lea     eax, [esi+108h]
0x521E8D: push    eax
0x521E8E: call    sub_552880
0x521E93: mov     edi, [esi+1DCh]
0x521E99: add     esp, 4
0x521E9C: test    edi, edi
0x521E9E: jz      short loc_521EC6
0x521EA0: lea     eax, [edi+4]
0x521EA3: push    eax; lpAddend
0x521EA4: call    dword ptr ds:0A2807Ch
0x521EAA: test    eax, eax
0x521EAC: jnz     short loc_521EBC
0x521EAE: test    edi, edi
0x521EB0: jz      short loc_521EBC
0x521EB2: mov     edx, [edi]
0x521EB4: mov     eax, [edx]
0x521EB6: push    1
0x521EB8: mov     ecx, edi
0x521EBA: call    eax
0x521EBC: mov     dword ptr [esi+1DCh], 0
0x521EC6: pop     edi
0x521EC7: pop     esi
0x521EC8: retn
