0x633460: fldz
0x633462: push    esi
0x633463: mov     esi, ecx
0x633465: fcomp   dword ptr [esi+1E0h]
0x63346B: fnstsw  ax
0x63346D: test    ah, 5
0x633470: jp      short loc_6334C0
0x633472: fld     dword ptr [esi+1E0h]
0x633478: mov     eax, [esi]
0x63347A: fsub    dword ptr ds:0B33E9Ch
0x633480: mov     edx, [eax+36Ch]
0x633486: fstp    dword ptr [esi+1E0h]
0x63348C: call    edx
0x63348E: test    eax, eax
0x633490: jnz     short loc_6334A1
0x633492: movsx   ax, byte ptr [esi+1E4h]
0x63349A: or      [esi+1FCh], ax
0x6334A1: fldz
0x6334A3: fcomp   dword ptr [esi+1E0h]
0x6334A9: fnstsw  ax
0x6334AB: test    ah, 1
0x6334AE: jnz     short loc_6334C0
0x6334B0: mov     edx, [esi]
0x6334B2: mov     eax, [edx+2C4h]
0x6334B8: push    0
0x6334BA: push    30h ; '0'
0x6334BC: mov     ecx, esi
0x6334BE: call    eax
0x6334C0: pop     esi
0x6334C1: retn
