0x704130: mov     eax, [esp+arg_0]
0x704134: test    eax, eax
0x704136: push    esi
0x704137: mov     esi, ecx
0x704139: mov     dword ptr [esi], offset ??_7Map@NiTexturingProperty@@6B@; const NiTexturingProperty::Map::`vftable'
0x70413F: mov     word ptr [esi+4], 0
0x704145: mov     [esi+8], eax
0x704148: jz      short loc_704154
0x70414A: add     eax, 4
0x70414D: push    eax; lpAddend
0x70414E: call    dword ptr ds:0A28078h
0x704154: mov     cl, [esp+4+arg_8]
0x704158: mov     eax, [esp+4+arg_10]
0x70415C: shl     cl, 4
0x70415F: or      cl, [esp+4+arg_C]
0x704163: xor     edx, edx
0x704165: mov     dh, cl
0x704167: mov     [esi+0Ch], eax
0x70416A: mov     ax, [esi+4]
0x70416E: and     ax, 0C0FFh
0x704172: or      dx, ax
0x704175: and     dx, 0FF00h
0x70417A: or      dx, [esp+4+arg_4]
0x70417F: mov     eax, esi
0x704181: mov     [esi+4], dx
0x704185: pop     esi
0x704186: retn    14h
