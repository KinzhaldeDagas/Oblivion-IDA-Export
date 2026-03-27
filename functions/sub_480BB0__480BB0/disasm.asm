0x480BB0: push    ebp
0x480BB1: mov     ebp, [esp+4+arg_4]
0x480BB5: test    byte ptr [ebp+18h], 1
0x480BB9: push    esi
0x480BBA: mov     esi, [esp+8+arg_0]
0x480BBE: jz      short loc_480BDF
0x480BC0: test    esi, esi
0x480BC2: jz      short loc_480BDF
0x480BC4: mov     eax, [esi]
0x480BC6: mov     edx, [eax+4]
0x480BC9: mov     ecx, esi
0x480BCB: call    edx
0x480BCD: test    eax, eax
0x480BCF: jz      short loc_480BDF
0x480BD1: cmp     eax, offset unk_B365AC
0x480BD6: jz      short loc_480C4C
0x480BD8: mov     eax, [eax+4]
0x480BDB: test    eax, eax
0x480BDD: jnz     short loc_480BD1
0x480BDF: test    byte ptr [ebp+18h], 2
0x480BE3: jz      short loc_480C48
0x480BE5: mov     ecx, esi
0x480BE7: call    sub_452A60
0x480BEC: test    eax, eax
0x480BEE: jz      short loc_480C0E
0x480BF0: mov     edx, [eax]
0x480BF2: mov     ecx, eax
0x480BF4: mov     eax, [edx+4]
0x480BF7: call    eax
0x480BF9: test    eax, eax
0x480BFB: jz      short loc_480C0E
0x480BFD: lea     ecx, [ecx+0]
0x480C00: cmp     eax, offset dword_B35288
0x480C05: jz      short loc_480C4C
0x480C07: mov     eax, [eax+4]
0x480C0A: test    eax, eax
0x480C0C: jnz     short loc_480C00
0x480C0E: test    byte ptr [ebp+18h], 2
0x480C12: jz      short loc_480C48
0x480C14: mov     ecx, esi
0x480C16: call    sub_452A60
0x480C1B: test    eax, eax
0x480C1D: jz      short loc_480C48
0x480C1F: mov     ecx, esi
0x480C21: call    sub_452A60
0x480C26: cmp     dword ptr [eax+8], 0
0x480C2A: jz      short loc_480C48
0x480C2C: push    edi
0x480C2D: mov     ecx, esi
0x480C2F: call    sub_452A60
0x480C34: mov     esi, [eax+8]
0x480C37: mov     edi, offset aArrow; "Arrow"
0x480C3C: mov     ecx, 6
0x480C41: xor     edx, edx
0x480C43: repe cmpsb
0x480C45: pop     edi
0x480C46: jz      short loc_480C4C
0x480C48: add     dword ptr [ebp+0Ch], 1
0x480C4C: pop     esi
0x480C4D: pop     ebp
0x480C4E: retn
