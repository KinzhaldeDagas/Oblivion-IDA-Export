0x54A0B0: sub     esp, 8
0x54A0B3: fldz
0x54A0B5: push    ebx
0x54A0B6: push    esi
0x54A0B7: fstp    [esp+10h+var_8]
0x54A0BB: push    edi
0x54A0BC: or      ebx, 0FFFFFFFFh
0x54A0BF: mov     edi, ecx
0x54A0C1: or      esi, 0FFFFFFFFh
0x54A0C4: mov     eax, [edi]
0x54A0C6: mov     edx, [eax+54h]
0x54A0C9: push    esi
0x54A0CA: mov     ecx, edi
0x54A0CC: call    edx
0x54A0CE: fstp    [esp+14h+var_4]
0x54A0D2: fldz
0x54A0D4: fld     [esp+14h+var_4]
0x54A0D8: fcom    st(1)
0x54A0DA: fnstsw  ax
0x54A0DC: fstp    st(1)
0x54A0DE: test    ah, 41h
0x54A0E1: jnz     short loc_54A103
0x54A0E3: fld1
0x54A0E5: fcomp   st(1)
0x54A0E7: fnstsw  ax
0x54A0E9: test    ah, 1
0x54A0EC: jnz     short loc_54A103
0x54A0EE: fld     [esp+14h+var_8]
0x54A0F2: fcomp   st(1)
0x54A0F4: fnstsw  ax
0x54A0F6: test    ah, 5
0x54A0F9: jp      short loc_54A103
0x54A0FB: fstp    [esp+14h+var_8]
0x54A0FF: mov     ebx, esi
0x54A101: jmp     short loc_54A105
0x54A103: fstp    st
0x54A105: add     esi, 1
0x54A108: cmp     esi, 0Dh
0x54A10B: jl      short loc_54A0C4
0x54A10D: pop     edi
0x54A10E: pop     esi
0x54A10F: mov     eax, ebx
0x54A111: pop     ebx
0x54A112: add     esp, 8
0x54A115: retn
