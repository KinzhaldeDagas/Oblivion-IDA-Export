0x633130: fldz
0x633132: mov     dword ptr [ecx+2BCh], 6
0x63313C: fcomp   dword ptr [ecx+2C0h]
0x633142: mov     dword ptr [ecx+2C4h], 0
0x63314C: fnstsw  ax
0x63314E: test    ah, 1
0x633151: jnz     short loc_63315B
0x633153: fld1
0x633155: fstp    dword ptr [ecx+2C0h]
0x63315B: mov     ecx, ds:0B333C4h; this
0x633161: push    ebx
0x633162: push    esi
0x633163: mov     esi, dword ptr [esp+8+arg_0]
0x633167: cmp     esi, ecx
0x633169: mov     bl, 1
0x63316B: jnz     short loc_63317E
0x63316D: mov     bl, [ecx+588h]
0x633173: test    bl, bl
0x633175: jnz     short loc_63317E
0x633177: push    0; a1
0x633179: call    TogglePOV
0x63317E: push    3Fh ; '?'
0x633180: mov     ecx, esi
0x633182: call    sub_5E05F0
0x633187: fld1
0x633189: sub     esp, 8
0x63318C: fst     [esp+10h+var_C]; int
0x633190: mov     ecx, esi
0x633192: fstp    [esp+10h+var_10]; float
0x633195: call    Actor_ProcessAction
0x63319A: pop     esi
0x63319B: test    bl, bl
0x63319D: pop     ebx
0x63319E: jnz     short locret_6331B3
0x6331A0: mov     ecx, ds:0B333C4h; this
0x6331A6: mov     dword ptr [esp+arg_0], 1; a1
0x6331AE: jmp     TogglePOV
0x6331B3: retn    4
