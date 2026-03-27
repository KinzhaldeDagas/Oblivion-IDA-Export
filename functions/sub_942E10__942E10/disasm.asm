0x942E10: push    esi
0x942E11: mov     esi, ecx
0x942E13: mov     ecx, [esi+8]
0x942E16: mov     dword ptr [esi], offset off_AA2444
0x942E1C: cmp     word ptr [ecx+4], 0
0x942E21: push    edi
0x942E22: jz      short loc_942E35
0x942E24: dec     word ptr [ecx+6]
0x942E28: cmp     word ptr [ecx+6], 0
0x942E2D: jnz     short loc_942E35
0x942E2F: mov     eax, [ecx]
0x942E31: push    1
0x942E33: call    dword ptr [eax]
0x942E35: mov     edi, [esi+0Ch]
0x942E38: test    edi, edi
0x942E3A: jz      short loc_942E53
0x942E3C: mov     ecx, edi
0x942E3E: call    sub_8B0E60
0x942E43: mov     ecx, ds:0BA7D98h
0x942E49: mov     edx, [ecx]
0x942E4B: push    5
0x942E4D: push    0Ch
0x942E4F: push    edi
0x942E50: call    dword ptr [edx+14h]
0x942E53: pop     edi
0x942E54: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x942E5A: pop     esi
0x942E5B: retn
