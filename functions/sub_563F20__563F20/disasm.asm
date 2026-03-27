0x563F20: cmp     byte ptr ds:0B125E8h, 0
0x563F27: push    esi
0x563F28: mov     esi, ecx
0x563F2A: jz      short loc_563F7F
0x563F2C: push    1
0x563F2E: call    sub_55F7E0
0x563F33: add     esp, 4
0x563F36: cmp     byte ptr [eax+20h], 0
0x563F3A: jz      short loc_563F7F
0x563F3C: fldz
0x563F3E: fcomp   [esp+4+arg_0]
0x563F42: fnstsw  ax
0x563F44: test    ah, 5
0x563F47: jp      short loc_563F5C
0x563F49: mov     eax, ds:0B39E00h
0x563F4E: push    eax
0x563F4F: push    esi
0x563F50: call    sub_47F7B0
0x563F55: add     esp, 8
0x563F58: test    al, al
0x563F5A: jz      short loc_563F7F
0x563F5C: mov     edx, [esi]
0x563F5E: fld     [esp+4+arg_0]
0x563F62: mov     eax, [edx+0E0h]
0x563F68: push    ecx
0x563F69: mov     ecx, esi
0x563F6B: fstp    [esp+8+var_8]
0x563F6E: call    eax
0x563F70: fld     [esp+4+arg_0]
0x563F74: push    ecx
0x563F75: mov     ecx, esi
0x563F77: fstp    [esp+8+var_8]; float
0x563F7A: call    sub_70A190
0x563F7F: pop     esi
0x563F80: retn    4
