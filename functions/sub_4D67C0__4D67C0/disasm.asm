0x4D67C0: push    0FFFFFFFFh
0x4D67C2: push    offset ??1Extra@Tile@@UAE@XZ_SEH
0x4D67C7: mov     eax, large fs:0
0x4D67CD: push    eax
0x4D67CE: push    ecx
0x4D67CF: push    esi
0x4D67D0: mov     eax, ds:0B30AACh
0x4D67D5: xor     eax, esp
0x4D67D7: push    eax
0x4D67D8: lea     eax, [esp+18h+var_C]
0x4D67DC: mov     large fs:0, eax
0x4D67E2: mov     esi, ecx
0x4D67E4: mov     [esp+18h+var_10], esi
0x4D67E8: call    sub_721350
0x4D67ED: push    offset off_A3CEB0; Src
0x4D67F2: mov     ecx, esi
0x4D67F4: mov     [esp+1Ch+var_4], 0
0x4D67FC: mov     dword ptr [esi], offset ??_7TESObjectExtraData@@6B@; const TESObjectExtraData::`vftable'
0x4D6802: call    sub_721440
0x4D6807: mov     eax, [esp+18h+arg_0]
0x4D680B: mov     [esi+0Ch], eax
0x4D680E: mov     eax, esi
0x4D6810: mov     ecx, [esp+18h+var_C]
0x4D6814: mov     large fs:0, ecx
0x4D681B: pop     ecx
0x4D681C: pop     esi
0x4D681D: add     esp, 10h
0x4D6820: retn    4
