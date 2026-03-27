0x6DAAD0: fld     dword ptr ds:0A7DEB4h
0x6DAAD6: push    ebx
0x6DAAD7: mov     ebx, [esp+4+arg_0]
0x6DAADB: push    ebp
0x6DAADC: fstp    dword ptr [ebx]
0x6DAADE: fld     dword ptr ds:0A7DEB4h
0x6DAAE4: mov     ebp, [esp+8+arg_4]
0x6DAAE8: push    esi
0x6DAAE9: fchs
0x6DAAEB: mov     esi, ecx
0x6DAAED: fstp    dword ptr [ebp+0]
0x6DAAF0: mov     eax, [esi]
0x6DAAF2: mov     edx, [eax+9Ch]
0x6DAAF8: push    1
0x6DAAFA: call    edx
0x6DAAFC: test    eax, eax
0x6DAAFE: jbe     short loc_6DAB58
0x6DAB00: push    edi
0x6DAB01: push    1
0x6DAB03: push    0
0x6DAB05: mov     ecx, esi
0x6DAB07: call    sub_6EC260
0x6DAB0C: mov     edi, eax
0x6DAB0E: mov     eax, [esi]
0x6DAB10: mov     edx, [eax+9Ch]
0x6DAB16: push    1
0x6DAB18: push    1
0x6DAB1A: mov     ecx, esi
0x6DAB1C: call    edx
0x6DAB1E: sub     eax, 1
0x6DAB21: push    eax
0x6DAB22: mov     ecx, esi
0x6DAB24: call    sub_6EC260
0x6DAB29: test    edi, edi
0x6DAB2B: mov     ecx, eax
0x6DAB2D: jz      short loc_6DAB57
0x6DAB2F: test    ecx, ecx
0x6DAB31: jz      short loc_6DAB57
0x6DAB33: fld     dword ptr [edi]
0x6DAB35: fld     dword ptr [ebx]
0x6DAB37: fcompp
0x6DAB39: fnstsw  ax
0x6DAB3B: test    ah, 41h
0x6DAB3E: jnz     short loc_6DAB44
0x6DAB40: fld     dword ptr [edi]
0x6DAB42: fstp    dword ptr [ebx]
0x6DAB44: fld     dword ptr [ecx]
0x6DAB46: fld     dword ptr [ebp+0]
0x6DAB49: fcompp
0x6DAB4B: fnstsw  ax
0x6DAB4D: test    ah, 5
0x6DAB50: jp      short loc_6DAB57
0x6DAB52: fld     dword ptr [ecx]
0x6DAB54: fstp    dword ptr [ebp+0]
0x6DAB57: pop     edi
0x6DAB58: fld     dword ptr [ebx]
0x6DAB5A: fld     dword ptr ds:0A7DEB4h
0x6DAB60: fld     st
0x6DAB62: fucomp  st(2)
0x6DAB64: fnstsw  ax
0x6DAB66: fstp    st(1)
0x6DAB68: test    ah, 44h
0x6DAB6B: jp      short loc_6DAB8A
0x6DAB6D: fld     dword ptr [ebp+0]
0x6DAB70: fxch    st(1)
0x6DAB72: fchs
0x6DAB74: fucompp
0x6DAB76: fnstsw  ax
0x6DAB78: test    ah, 44h
0x6DAB7B: jp      short loc_6DAB8C
0x6DAB7D: fldz
0x6DAB7F: pop     esi
0x6DAB80: fst     dword ptr [ebx]
0x6DAB82: fstp    dword ptr [ebp+0]
0x6DAB85: pop     ebp
0x6DAB86: pop     ebx
0x6DAB87: retn    8
0x6DAB8A: fstp    st
0x6DAB8C: pop     esi
0x6DAB8D: pop     ebp
0x6DAB8E: pop     ebx
0x6DAB8F: retn    8
