0x8CDB50: push    esi
0x8CDB51: push    edi
0x8CDB52: mov     edi, [esp+8+arg_0]
0x8CDB56: mov     eax, [edi]
0x8CDB58: mov     esi, ecx
0x8CDB5A: push    esi
0x8CDB5B: push    2
0x8CDB5D: push    offset aAabbphantom; "AabbPhantom"
0x8CDB62: mov     ecx, edi
0x8CDB64: call    dword ptr [eax]
0x8CDB66: push    edi
0x8CDB67: mov     ecx, esi
0x8CDB69: call    sub_8DE790
0x8CDB6E: mov     eax, [esi+98h]
0x8CDB74: test    eax, eax
0x8CDB76: js      short loc_8CDBA0
0x8CDB78: mov     ecx, [esi+90h]
0x8CDB7E: mov     edx, [edi]
0x8CDB80: and     eax, 3FFFFFFFh
0x8CDB85: shl     eax, 2
0x8CDB88: push    eax
0x8CDB89: mov     eax, [esi+94h]
0x8CDB8F: shl     eax, 2
0x8CDB92: push    eax
0x8CDB93: push    ecx
0x8CDB94: push    8
0x8CDB96: push    offset aOvrlpcollptr; "OvrlpCollPtr"
0x8CDB9B: mov     ecx, edi
0x8CDB9D: call    dword ptr [edx+4]
0x8CDBA0: mov     edx, [edi]
0x8CDBA2: mov     ecx, edi
0x8CDBA4: call    dword ptr [edx+14h]
0x8CDBA7: pop     edi
0x8CDBA8: pop     esi
0x8CDBA9: retn    4
