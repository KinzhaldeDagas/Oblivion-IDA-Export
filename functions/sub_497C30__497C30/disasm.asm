0x497C30: sub     esp, 610h
0x497C36: mov     eax, ds:0B30AACh
0x497C3B: xor     eax, esp
0x497C3D: mov     [esp+610h+var_4], eax
0x497C44: fld     dword ptr ds:0B06C2Ch
0x497C4A: push    esi
0x497C4B: push    edi
0x497C4C: fstp    dword ptr ds:0B06F64h
0x497C52: mov     byte ptr ds:0B34FA4h, 0
0x497C59: mov     [esp+618h+var_60C], 0
0x497C61: lea     esi, [esp+618h+var_404]
0x497C68: mov     edi, 100h
0x497C6D: lea     ecx, [ecx+0]
0x497C70: fild    [esp+618h+var_60C]
0x497C74: fdiv    qword ptr ds:0A3DDD8h
0x497C7A: fstp    [esp+618h+var_610]
0x497C7E: fld     [esp+618h+var_610]
0x497C82: fld     dword ptr ds:0B06C2Ch
0x497C88: call    __CIpow
0x497C8D: fstp    [esp+618h+var_610]
0x497C91: fld     [esp+618h+var_610]
0x497C95: add     [esp+618h+var_60C], 1
0x497C9A: fmul    qword ptr ds:0A3DDD0h
0x497CA0: add     esi, 2
0x497CA3: fnstcw  word ptr [esp+618h+var_610]
0x497CA7: movzx   eax, word ptr [esp+618h+var_610]
0x497CAC: fadd    qword ptr ds:0A2FAA0h
0x497CB2: or      eax, 0C00h
0x497CB7: sub     edi, 1
0x497CBA: mov     [esp+618h+var_608], eax
0x497CBE: fldcw   word ptr [esp+618h+var_608]
0x497CC2: fistp   [esp+618h+var_608]
0x497CC6: mov     ax, word ptr [esp+618h+var_608]
0x497CCB: mov     [esi-202h], ax
0x497CD2: mov     [esi-2], ax
0x497CD6: fldcw   word ptr [esp+618h+var_610]
0x497CDA: mov     [esi+1FEh], ax
0x497CE1: jnz     short loc_497C70
0x497CE3: mov     eax, ds:0B350D8h
0x497CE8: mov     eax, [eax+280h]
0x497CEE: mov     ecx, [eax]
0x497CF0: lea     edx, [esp+618h+var_604]
0x497CF4: push    edx
0x497CF5: push    1
0x497CF7: push    0
0x497CF9: push    eax
0x497CFA: mov     eax, [ecx+54h]
0x497CFD: call    eax
0x497CFF: mov     ecx, [esp+618h+var_4]
0x497D06: pop     edi
0x497D07: pop     esi
0x497D08: xor     ecx, esp
0x497D0A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x497D0F: add     esp, 610h
0x497D15: retn
