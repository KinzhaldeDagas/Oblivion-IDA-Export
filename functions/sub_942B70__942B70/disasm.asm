0x942B70: push    esi
0x942B71: mov     esi, ecx
0x942B73: mov     ecx, ds:0BA7D98h
0x942B79: mov     eax, [ecx]
0x942B7B: push    14h
0x942B7D: push    0C0h ; 'À'
0x942B82: call    dword ptr [eax+10h]
0x942B85: push    40h ; '@'
0x942B87: push    0FFh
0x942B8C: push    eax
0x942B8D: mov     [esi], eax
0x942B8F: call    sub_8B18C0
0x942B94: add     esp, 0Ch
0x942B97: mov     dword ptr [esi+4], 0
0x942B9E: mov     dword ptr [esi+8], 0Fh
0x942BA5: mov     eax, esi
0x942BA7: pop     esi
0x942BA8: retn
