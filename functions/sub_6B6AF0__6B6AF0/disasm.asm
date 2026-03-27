0x6B6AF0: push    ecx
0x6B6AF1: cmp     dword ptr [ecx+50h], 0
0x6B6AF5: jz      short loc_6B6B0D
0x6B6AF7: mov     eax, [ecx+50h]
0x6B6AFA: mov     ecx, [eax]
0x6B6AFC: lea     edx, [esp+4+var_4]
0x6B6AFF: push    edx
0x6B6B00: push    eax
0x6B6B01: mov     eax, [ecx+24h]
0x6B6B04: call    eax
0x6B6B06: mov     al, byte ptr [esp+4+var_4]
0x6B6B09: and     al, 1
0x6B6B0B: pop     ecx
0x6B6B0C: retn
0x6B6B0D: xor     al, al
0x6B6B0F: pop     ecx
0x6B6B10: retn
