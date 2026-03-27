0x533EE0: push    0FFFFFFFFh
0x533EE2: push    offset ??0HavokFileStreambufWriter@@QAE@XZ_SEH
0x533EE7: mov     eax, large fs:0
0x533EED: push    eax
0x533EEE: sub     esp, 8
0x533EF1: push    esi
0x533EF2: mov     eax, ds:0B30AACh
0x533EF7: xor     eax, esp
0x533EF9: push    eax
0x533EFA: lea     eax, [esp+1Ch+var_C]
0x533EFE: mov     large fs:0, eax
0x533F04: mov     esi, ecx
0x533F06: mov     [esp+1Ch+var_14], esi
0x533F0A: mov     word ptr [esi+6], 1
0x533F10: push    154h; Size
0x533F15: mov     [esp+20h+var_4], 0
0x533F1D: mov     dword ptr [esi], offset ??_7HavokFileStreambufWriter@@6B@; const HavokFileStreambufWriter::`vftable'
0x533F23: mov     byte ptr [esi+0Ch], 1
0x533F27: call    FormHeapAlloc
0x533F2C: add     esp, 4
0x533F2F: mov     [esp+1Ch+var_10], eax
0x533F33: test    eax, eax
0x533F35: mov     byte ptr [esp+1Ch+var_4], 1
0x533F3A: jz      short loc_533F53
0x533F3C: mov     ecx, [esp+1Ch+arg_0]
0x533F40: push    0
0x533F42: push    2800h
0x533F47: push    1
0x533F49: push    ecx
0x533F4A: mov     ecx, eax
0x533F4C: call    BSFile_constr
0x533F51: jmp     short loc_533F55
0x533F53: xor     eax, eax
0x533F55: mov     [esi+8], eax
0x533F58: mov     eax, esi
0x533F5A: mov     ecx, [esp+1Ch+var_C]
0x533F5E: mov     large fs:0, ecx
0x533F65: pop     ecx
0x533F66: pop     esi
0x533F67: add     esp, 14h
0x533F6A: retn    4
