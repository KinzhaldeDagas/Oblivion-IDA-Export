0x422C40: push    ebx
0x422C41: push    55h ; 'U'; a2
0x422C43: or      bl, 0FFh
0x422C46: call    BaseExtraList_GetExtraData
0x422C4B: test    eax, eax
0x422C4D: jz      short loc_422C54
0x422C4F: mov     al, [eax+0Ch]
0x422C52: pop     ebx
0x422C53: retn
0x422C54: mov     al, bl
0x422C56: pop     ebx
0x422C57: retn
