0x947C00: mov     ecx, ds:0BA7D98h
0x947C06: mov     eax, [ecx]
0x947C08: push    32h ; '2'
0x947C0A: push    1Ch
0x947C0C: call    dword ptr [eax+10h]
0x947C0F: mov     word ptr [eax+4], 1Ch
0x947C15: mov     ecx, eax
0x947C17: jmp     loc_947B00
0x947B00: push    esi
0x947B01: mov     esi, ecx
0x947B03: mov     word ptr [esi+6], 1
0x947B09: mov     dword ptr [esi], offset off_AA2A0C
0x947B0F: mov     dword ptr [esi+8], 0
0x947B16: push    edi
0x947B17: mov     dword ptr [esi+0Ch], 0
0x947B1E: mov     dword ptr [esi+10h], 0
0x947B25: mov     dword ptr [esi+14h], 80000000h
0x947B2C: mov     ecx, ds:0BA7D98h
0x947B32: mov     eax, [ecx]
0x947B34: push    12h
0x947B36: push    18h
0x947B38: call    dword ptr [eax+10h]
0x947B3B: mov     edi, eax
0x947B3D: test    edi, edi
0x947B3F: jz      short loc_947B55
0x947B41: push    7D0h; dwSpinCount
0x947B46: push    edi; lpCriticalSection
0x947B47: call    dword ptr ds:0A2818Ch
0x947B4D: mov     [esi+18h], edi
0x947B50: pop     edi
0x947B51: mov     eax, esi
0x947B53: pop     esi
0x947B54: retn
0x947B55: xor     eax, eax
0x947B57: mov     [esi+18h], eax
0x947B5A: pop     edi
0x947B5B: mov     eax, esi
0x947B5D: pop     esi
0x947B5E: retn
