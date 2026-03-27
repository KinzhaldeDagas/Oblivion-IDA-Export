0x6BDDC0: mov     edx, [esp+arg_C]
0x6BDDC4: test    edx, edx
0x6BDDC6: jz      short loc_6BDE2F
0x6BDDC8: fld     [esp+arg_0]
0x6BDDCC: mov     ecx, [esp+arg_4]
0x6BDDD0: fld     dword ptr [ecx]
0x6BDDD2: fcomp   st(1)
0x6BDDD4: fnstsw  ax
0x6BDDD6: test    ah, 41h
0x6BDDD9: jnz     short loc_6BDDE1
0x6BDDDB: fstp    st
0x6BDDDD: mov     al, [ecx+4]
0x6BDDE0: retn
0x6BDDE1: push    ebx
0x6BDDE2: mov     ebx, dword ptr [esp+4+arg_10]
0x6BDDE6: push    esi
0x6BDDE7: movzx   esi, bl
0x6BDDEA: lea     eax, [edx-1]
0x6BDDED: imul    eax, esi
0x6BDDF0: fld     dword ptr [eax+ecx]
0x6BDDF3: fcomp   st(1)
0x6BDDF5: fnstsw  ax
0x6BDDF7: test    ah, 5
0x6BDDFA: jp      short loc_6BDE0B
0x6BDDFC: add     edx, 0FFFFFFFFh
0x6BDDFF: fstp    st
0x6BDE01: imul    edx, esi
0x6BDE04: mov     al, [edx+ecx+4]
0x6BDE08: pop     esi
0x6BDE09: pop     ebx
0x6BDE0A: retn
0x6BDE0B: push    ebx; char
0x6BDE0C: lea     eax, [esp+0Ch+arg_C]
0x6BDE10: push    eax; int
0x6BDE11: push    edx; int
0x6BDE12: mov     edx, [esp+14h+arg_8]
0x6BDE16: push    edx; int
0x6BDE17: push    ecx; int
0x6BDE18: push    ecx
0x6BDE19: fstp    [esp+20h+var_20]; float
0x6BDE1C: mov     [esp+20h+arg_C], 0
0x6BDE24: call    sub_6BDBA0
0x6BDE29: add     esp, 18h
0x6BDE2C: pop     esi
0x6BDE2D: pop     ebx
0x6BDE2E: retn
0x6BDE2F: mov     al, ds:0B3C468h
0x6BDE34: retn
