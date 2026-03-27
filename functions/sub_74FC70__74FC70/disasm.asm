0x74FC70: sub     esp, 8
0x74FC73: push    esi
0x74FC74: mov     esi, ecx
0x74FC76: mov     al, [esi+8]
0x74FC79: shr     al, 5
0x74FC7C: test    al, 1
0x74FC7E: jnz     short loc_74FCDF
0x74FC80: mov     ecx, [esi+3Ch]
0x74FC83: mov     edx, [ecx]
0x74FC85: mov     eax, [edx+80h]
0x74FC8B: push    ebx
0x74FC8C: push    edi
0x74FC8D: lea     ebx, [esi+18h]
0x74FC90: push    ebx
0x74FC91: lea     edi, [esi+14h]
0x74FC94: push    edi
0x74FC95: call    eax
0x74FC97: mov     ecx, [esi+48h]
0x74FC9A: mov     edx, [ecx]
0x74FC9C: mov     edx, [edx+80h]
0x74FCA2: lea     eax, [esp+14h+var_4]
0x74FCA6: push    eax
0x74FCA7: lea     eax, [esp+18h+var_8]
0x74FCAB: push    eax
0x74FCAC: call    edx
0x74FCAE: fld     [esp+14h+var_8]
0x74FCB2: fld     dword ptr [edi]
0x74FCB4: fcomp   st(1)
0x74FCB6: fnstsw  ax
0x74FCB8: test    ah, 41h
0x74FCBB: jnz     short loc_74FCC1
0x74FCBD: fstp    dword ptr [edi]
0x74FCBF: jmp     short loc_74FCC3
0x74FCC1: fstp    st
0x74FCC3: fld     [esp+14h+var_4]
0x74FCC7: fld     dword ptr [ebx]
0x74FCC9: fcomp   st(1)
0x74FCCB: fnstsw  ax
0x74FCCD: test    ah, 5
0x74FCD0: jp      short loc_74FCDB
0x74FCD2: pop     edi
0x74FCD3: fstp    dword ptr [ebx]
0x74FCD5: pop     ebx
0x74FCD6: pop     esi
0x74FCD7: add     esp, 8
0x74FCDA: retn
0x74FCDB: pop     edi
0x74FCDC: fstp    st
0x74FCDE: pop     ebx
0x74FCDF: pop     esi
0x74FCE0: add     esp, 8
0x74FCE3: retn
