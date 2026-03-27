0x662A3E: cmp     dword ptr [ebx+650h], 0; jumptable 006629E1 default case
0x662A45: pop     edi
0x662A46: pop     esi
0x662A47: pop     ebp
0x662A48: jnz     short Actor_GetDefaultClass___Return_CurrentClass
0x662A4A: mov     eax, ds:0B37C48h
0x662A4F: mov     ecx, ds:0B33A98h
0x662A55: push    eax
0x662A56: call    TESDataHandler_LookupTESClassByFormID
0x662A5B: mov     [ebx+650h], eax
