0x65E260: fld     [esp+arg_4]
0x65E264: push    ebx
0x65E265: mov     ebx, [esp+4+arg_8]
0x65E269: push    esi
0x65E26A: push    edi
0x65E26B: mov     edi, [esp+0Ch+a2]
0x65E26F: push    ebx; int
0x65E270: push    ecx
0x65E271: fstp    [esp+14h+var_14]; float
0x65E274: push    edi; int
0x65E275: mov     esi, ecx
0x65E277: call    sub_5E02D0
0x65E27C: fstp    [esp+0Ch+arg_4]
0x65E280: cmp     edi, 0FFFFFFFFh
0x65E283: jz      short loc_65E2AB
0x65E285: fld     [esp+0Ch+arg_4]
0x65E289: push    1; int
0x65E28B: sub     esp, 8
0x65E28E: fstp    [esp+18h+var_14]; float
0x65E292: fld     dword ptr [esi+edi*4+204h]
0x65E299: fstp    [esp+18h+var_18]; float
0x65E29C: call    Player_ModAVNode
0x65E2A1: fstp    dword ptr [esi+edi*4+204h]
0x65E2A8: add     esp, 0Ch
0x65E2AB: push    edi; a2
0x65E2AC: call    sub_57A6F0
0x65E2B1: add     esp, 4
0x65E2B4: cmp     edi, 8
0x65E2B7: jnz     short loc_65E2ED
0x65E2B9: fldz
0x65E2BB: fld     [esp+0Ch+arg_4]
0x65E2BF: fcom    st(1)
0x65E2C1: fnstsw  ax
0x65E2C3: fstp    st(1)
0x65E2C5: test    ah, 5
0x65E2C8: jp      short loc_65E2EB
0x65E2CA: mov     eax, [esi]
0x65E2CC: mov     edx, [eax+3B8h]
0x65E2D2: push    ecx
0x65E2D3: fstp    [esp+10h+var_10]
0x65E2D6: push    ebx
0x65E2D7: mov     ecx, esi
0x65E2D9: call    edx
0x65E2DB: push    0
0x65E2DD: push    edi
0x65E2DE: mov     ecx, esi
0x65E2E0: call    sub_5E2670
0x65E2E5: pop     edi
0x65E2E6: pop     esi
0x65E2E7: pop     ebx
0x65E2E8: retn    0Ch
0x65E2EB: fstp    st
0x65E2ED: push    0
0x65E2EF: push    edi
0x65E2F0: mov     ecx, esi
0x65E2F2: call    sub_5E2670
0x65E2F7: pop     edi
0x65E2F8: pop     esi
0x65E2F9: pop     ebx
0x65E2FA: retn    0Ch
