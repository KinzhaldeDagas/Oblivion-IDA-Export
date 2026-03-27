0x482090: push    ebx
0x482091: push    ebp
0x482092: mov     ebp, [esp+8+arg_0]
0x482096: push    esi
0x482097: push    edi
0x482098: mov     edi, [esp+10h+arg_4]
0x48209C: push    edi
0x48209D: push    ebp
0x48209E: mov     esi, ecx
0x4820A0: xor     bl, bl
0x4820A2: call    sub_482050
0x4820A7: test    al, al
0x4820A9: jz      short loc_4820E3
0x4820AB: shl     ebp, 0Ch
0x4820AE: mov     [esp+10h+arg_4], ebp
0x4820B2: fild    [esp+10h+arg_4]
0x4820B6: lea     eax, [esi+14h]
0x4820B9: shl     edi, 0Ch
0x4820BC: mov     [esp+10h+arg_4], edi
0x4820C0: fstp    dword ptr [eax]
0x4820C2: push    eax
0x4820C3: fild    [esp+14h+arg_4]
0x4820C7: fstp    dword ptr [esi+18h]
0x4820CA: fldz
0x4820CC: fstp    dword ptr [esi+1Ch]
0x4820CF: call    sub_4CCCC0
0x4820D4: add     esp, 4
0x4820D7: pop     edi
0x4820D8: mov     [esi+20h], bl
0x4820DB: pop     esi
0x4820DC: pop     ebp
0x4820DD: mov     al, 1
0x4820DF: pop     ebx
0x4820E0: retn    8
0x4820E3: pop     edi
0x4820E4: pop     esi
0x4820E5: pop     ebp
0x4820E6: mov     al, bl
0x4820E8: pop     ebx
0x4820E9: retn    8
