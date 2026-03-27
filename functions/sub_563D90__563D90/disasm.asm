0x563D90: mov     eax, [ecx]
0x563D92: mov     edx, [esp+arg_0]
0x563D96: mov     eax, [eax+0ACh]
0x563D9C: push    edx
0x563D9D: call    eax
0x563D9F: test    eax, eax
0x563DA1: jnz     short loc_563DA8
0x563DA3: xor     al, al
0x563DA5: retn    8
0x563DA8: push    ebx
0x563DA9: mov     bl, [esp+4+arg_4]
0x563DAD: cmp     bl, 0FFh
0x563DB0: jnz     short loc_563DBD
0x563DB2: or      word ptr [eax+18h], 1
0x563DB7: mov     al, 1
0x563DB9: pop     ebx
0x563DBA: retn    8
0x563DBD: and     word ptr [eax+18h], 0FFFEh
0x563DC3: push    0
0x563DC5: mov     ecx, eax
0x563DC7: call    NiNode_GetNiPropertyByID
0x563DCC: test    eax, eax
0x563DCE: jz      short loc_563DD3
0x563DD0: mov     [eax+1Ah], bl
0x563DD3: mov     al, 1
0x563DD5: pop     ebx
0x563DD6: retn    8
