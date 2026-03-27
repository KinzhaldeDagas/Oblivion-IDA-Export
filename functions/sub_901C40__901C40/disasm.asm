0x901C40: push    esi
0x901C41: mov     esi, ecx
0x901C43: mov     al, [esi+84h]
0x901C49: test    al, al
0x901C4B: lea     ecx, [esi+30h]
0x901C4E: jz      short loc_901C67
0x901C50: mov     eax, [esi+8]
0x901C53: push    eax
0x901C54: push    ecx
0x901C55: call    sub_939B60
0x901C5A: mov     edx, [esi]
0x901C5C: add     esp, 8
0x901C5F: push    1
0x901C61: mov     ecx, esi
0x901C63: call    dword ptr [edx]
0x901C65: pop     esi
0x901C66: retn
0x901C67: mov     edx, [esi+8]
0x901C6A: mov     eax, [esi+80h]
0x901C70: push    edx
0x901C71: push    eax
0x901C72: push    ecx
0x901C73: call    sub_934100
0x901C78: mov     edx, [esi]
0x901C7A: add     esp, 0Ch
0x901C7D: push    1
0x901C7F: mov     ecx, esi
0x901C81: call    dword ptr [edx]
0x901C83: pop     esi
0x901C84: retn
