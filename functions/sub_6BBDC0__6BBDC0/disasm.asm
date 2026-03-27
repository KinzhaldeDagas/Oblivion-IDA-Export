0x6BBDC0: mov     edx, [esp+arg_10]
0x6BBDC4: test    edx, edx
0x6BBDC6: jz      loc_6BBE60
0x6BBDCC: fld     [esp+arg_4]
0x6BBDD0: mov     ecx, [esp+arg_8]
0x6BBDD4: fld     dword ptr [ecx]
0x6BBDD6: fcomp   st(1)
0x6BBDD8: fnstsw  ax
0x6BBDDA: test    ah, 41h
0x6BBDDD: jnz     short loc_6BBDF7
0x6BBDDF: mov     edx, [ecx+4]
0x6BBDE2: fstp    st
0x6BBDE4: mov     eax, [esp+arg_0]
0x6BBDE8: mov     [eax], edx
0x6BBDEA: mov     edx, [ecx+8]
0x6BBDED: mov     [eax+4], edx
0x6BBDF0: mov     ecx, [ecx+0Ch]
0x6BBDF3: mov     [eax+8], ecx
0x6BBDF6: retn
0x6BBDF7: push    ebx
0x6BBDF8: mov     ebx, dword ptr [esp+4+arg_14]
0x6BBDFC: push    esi
0x6BBDFD: movzx   esi, bl
0x6BBE00: lea     eax, [edx-1]
0x6BBE03: imul    eax, esi
0x6BBE06: fld     dword ptr [eax+ecx]
0x6BBE09: fcomp   st(1)
0x6BBE0B: fnstsw  ax
0x6BBE0D: test    ah, 5
0x6BBE10: jp      short loc_6BBE35
0x6BBE12: mov     eax, [esp+8+arg_0]
0x6BBE16: fstp    st
0x6BBE18: add     edx, 0FFFFFFFFh
0x6BBE1B: imul    edx, esi
0x6BBE1E: lea     ecx, [edx+ecx+4]
0x6BBE22: mov     edx, [ecx]
0x6BBE24: mov     [eax], edx
0x6BBE26: mov     edx, [ecx+4]
0x6BBE29: mov     [eax+4], edx
0x6BBE2C: mov     ecx, [ecx+8]
0x6BBE2F: pop     esi
0x6BBE30: mov     [eax+8], ecx
0x6BBE33: pop     ebx
0x6BBE34: retn
0x6BBE35: mov     esi, [esp+8+arg_0]
0x6BBE39: push    ebx; char
0x6BBE3A: lea     eax, [esp+0Ch+arg_10]
0x6BBE3E: push    eax; int
0x6BBE3F: push    edx; int
0x6BBE40: mov     edx, [esp+14h+arg_C]
0x6BBE44: push    edx; int
0x6BBE45: push    ecx; int
0x6BBE46: push    ecx
0x6BBE47: fstp    [esp+20h+var_20]; float
0x6BBE4A: push    esi; int
0x6BBE4B: mov     [esp+24h+arg_10], 0
0x6BBE53: call    sub_6BBBA0
0x6BBE58: add     esp, 1Ch
0x6BBE5B: mov     eax, esi
0x6BBE5D: pop     esi
0x6BBE5E: pop     ebx
0x6BBE5F: retn
0x6BBE60: mov     ecx, ds:0B3C31Ch
0x6BBE66: mov     eax, [esp+arg_0]
0x6BBE6A: mov     [eax], ecx
0x6BBE6C: mov     edx, ds:0B3C320h
0x6BBE72: mov     [eax+4], edx
0x6BBE75: mov     ecx, ds:0B3C324h
0x6BBE7B: mov     [eax+8], ecx
0x6BBE7E: retn
