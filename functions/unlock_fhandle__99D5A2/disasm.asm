0x99D5A2: mov     eax, [esp+arg_0]
0x99D5A6: mov     ecx, eax
0x99D5A8: and     eax, 1Fh
0x99D5AB: imul    eax, 28h ; '('
0x99D5AE: sar     ecx, 5
0x99D5B1: mov     ecx, dword_BAAAC0[ecx*4]
0x99D5B8: lea     eax, [ecx+eax+0Ch]
0x99D5BC: push    eax; lpCriticalSection
0x99D5BD: call    ds:LeaveCriticalSection
0x99D5C3: retn
