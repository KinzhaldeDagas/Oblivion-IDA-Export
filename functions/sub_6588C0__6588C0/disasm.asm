0x6588C0: push    ecx
0x6588C1: push    ebx
0x6588C2: push    esi
0x6588C3: mov     esi, ecx
0x6588C5: mov     ecx, offset TimeGlobals
0x6588CA: call    TimeGlobals_GetGameHour
0x6588CF: fstp    [esp+0Ch+var_4]
0x6588D3: mov     ebx, [esp+0Ch+arg_4]
0x6588D7: test    bl, bl
0x6588D9: jnz     short loc_6588F2
0x6588DB: cmp     dword ptr [esi+8], 0
0x6588DF: jz      short loc_6588F2
0x6588E1: fld     [esp+0Ch+var_4]
0x6588E5: call    Double_To_SInt32
0x6588EA: cmp     [esi+90h], eax
0x6588F0: jz      short loc_658918
0x6588F2: mov     eax, [esp+0Ch+arg_0]
0x6588F6: push    ebx
0x6588F7: push    eax
0x6588F8: mov     ecx, esi
0x6588FA: call    sub_649340
0x6588FF: fld     [esp+0Ch+var_4]
0x658903: mov     bl, al
0x658905: call    Double_To_SInt32
0x65890A: mov     [esi+90h], eax
0x658910: pop     esi
0x658911: mov     al, bl
0x658913: pop     ebx
0x658914: pop     ecx
0x658915: retn    8
0x658918: pop     esi
0x658919: xor     al, al
0x65891B: pop     ebx
0x65891C: pop     ecx
0x65891D: retn    8
