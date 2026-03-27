0x405370: push    esi
0x405371: mov     esi, ecx
0x405373: call    ds:GetActiveWindow
0x405379: cmp     eax, [esi+8]
0x40537C: jnz     short loc_4053D8
0x40537E: call    InterfaceManager_IsMenuMode
0x405383: test    al, al
0x405385: jz      short loc_4053D8
0x405387: mov     eax, [esi+20h]
0x40538A: test    eax, eax
0x40538C: jz      short loc_4053D8
0x40538E: test    byte ptr [eax], 8
0x405391: jz      short loc_4053D8
0x405393: cmp     g_bFullScreen, 0
0x40539A: jnz     short loc_4053D8
0x40539C: fild    [esp+4+a7]
0x4053A0: sub     esp, 8
0x4053A3: fidiv   nHeight
0x4053A9: fstp    [esp+0Ch+a7]
0x4053AD: fld     [esp+0Ch+a7]
0x4053B1: fstp    [esp+0Ch+var_8]; float
0x4053B5: fild    [esp+0Ch+a6]
0x4053B9: fidiv   nWidth
0x4053BF: fstp    [esp+0Ch+a7]
0x4053C3: fld     [esp+0Ch+a7]
0x4053C7: fstp    [esp+0Ch+var_C]; float
0x4053CA: call    sub_579320
0x4053CF: add     esp, 8
0x4053D2: mov     al, 1
0x4053D4: pop     esi
0x4053D5: retn    8
0x4053D8: xor     al, al
0x4053DA: pop     esi
0x4053DB: retn    8
