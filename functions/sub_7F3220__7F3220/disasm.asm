0x7F3220: fld     [esp+arg_0]
0x7F3224: push    esi
0x7F3225: mov     esi, ecx
0x7F3227: fadd    dword ptr [esi+7Ch]
0x7F322A: push    edi
0x7F322B: sub     esp, 8
0x7F322E: fstp    dword ptr [esi+7Ch]
0x7F3231: fld     [esp+10h+arg_4]
0x7F3235: fsub    dword ptr [esi+90h]
0x7F323B: fstp    [esp+10h+arg_0]
0x7F323F: fld     [esp+10h+arg_0]
0x7F3243: fdiv    dword ptr [esi+150h]
0x7F3249: fstp    [esp+10h+arg_0]
0x7F324D: fld     [esp+10h+arg_0]
0x7F3251: fstp    [esp+10h+var_10]; double
0x7F3254: call    _ceil
0x7F3259: fstp    [esp+10h+arg_0]
0x7F325D: fld     [esp+10h+arg_0]
0x7F3261: add     esp, 8
0x7F3264: call    Double_To_SInt32
0x7F3269: mov     edi, eax
0x7F326B: mov     [esp+8+arg_0], edi
0x7F326F: fild    [esp+8+arg_0]
0x7F3273: push    edi
0x7F3274: mov     ecx, esi
0x7F3276: fmul    dword ptr [esi+150h]
0x7F327C: fadd    dword ptr [esi+90h]
0x7F3282: fstp    dword ptr [esi+90h]
0x7F3288: call    sub_7F3130
0x7F328D: fld     dword ptr [esi+90h]
0x7F3293: fstp    [esp+8+arg_0]
0x7F3297: fild    dword ptr [esi+14Ch]
0x7F329D: fmul    dword ptr [esi+150h]
0x7F32A3: fstp    [esp+8+arg_4]
0x7F32A7: fld     [esp+8+arg_0]
0x7F32AB: fld     [esp+8+arg_4]
0x7F32AF: fcom    st(1)
0x7F32B1: fnstsw  ax
0x7F32B3: test    ah, 41h
0x7F32B6: jnz     short loc_7F32BC
0x7F32B8: fstp    st
0x7F32BA: jmp     short loc_7F32BE
0x7F32BC: fstp    st(1)
0x7F32BE: fstp    [esp+8+arg_0]
0x7F32C2: fld     dword ptr [esi+90h]
0x7F32C8: fsub    [esp+8+arg_0]
0x7F32CC: fstp    [esp+8+arg_0]
0x7F32D0: fld     [esp+8+arg_0]
0x7F32D4: fcom    qword ptr ds:0A2FC68h
0x7F32DA: fnstsw  ax
0x7F32DC: test    ah, 5
0x7F32DF: jp      short loc_7F32E5
0x7F32E1: fstp    st
0x7F32E3: fldz
0x7F32E5: add     [esi+194h], edi
0x7F32EB: fstp    [esp+8+arg_0]
0x7F32EF: fld     [esp+8+arg_0]
0x7F32F3: pop     edi
0x7F32F4: fstp    dword ptr [esi+18Ch]
0x7F32FA: pop     esi
0x7F32FB: retn    8
