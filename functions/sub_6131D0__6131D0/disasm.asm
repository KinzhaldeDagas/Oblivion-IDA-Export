0x6131D0: sub     esp, 0Ch
0x6131D3: push    ebx
0x6131D4: push    esi
0x6131D5: mov     esi, [esp+14h+arg_0]
0x6131D9: mov     eax, [esi]
0x6131DB: mov     edx, [eax+174h]
0x6131E1: push    edi
0x6131E2: mov     ecx, esi
0x6131E4: xor     bl, bl
0x6131E6: call    edx
0x6131E8: mov     ecx, [esp+18h+arg_4]
0x6131EC: mov     edi, eax
0x6131EE: mov     eax, [ecx]
0x6131F0: mov     edx, [eax+174h]
0x6131F6: call    edx
0x6131F8: fld     dword ptr [eax+4]
0x6131FB: fsub    dword ptr [edi+4]
0x6131FE: fstp    [esp+18h+arg_0]
0x613202: fld     dword ptr [eax+8]
0x613205: fsub    dword ptr [edi+8]
0x613208: fstp    [esp+18h+arg_4]
0x61320C: fld     dword ptr [eax]
0x61320E: lea     eax, [esp+18h+var_C]
0x613212: fsub    dword ptr [edi]
0x613214: push    eax
0x613215: fstp    [esp+1Ch+var_C]
0x613219: fld     [esp+1Ch+arg_0]
0x61321D: fstp    [esp+1Ch+var_8]
0x613221: fld     [esp+1Ch+arg_4]
0x613225: fstp    [esp+1Ch+var_4]
0x613229: call    sub_683CB0
0x61322E: mov     edx, [esi]
0x613230: fstp    [esp+1Ch+arg_0]
0x613234: mov     eax, [edx+1E0h]
0x61323A: add     esp, 4
0x61323D: mov     ecx, esi
0x61323F: call    eax
0x613241: fsub    [esp+18h+arg_0]
0x613245: fstp    [esp+18h+arg_0]
0x613249: fld     [esp+18h+arg_0]
0x61324D: fabs
0x61324F: fstp    [esp+18h+arg_0]
0x613253: fld     [esp+18h+arg_0]
0x613257: fmul    qword ptr ds:0A30DC8h
0x61325D: fstp    [esp+18h+arg_0]
0x613261: fld     dword ptr ds:0A3F420h
0x613267: fld     [esp+18h+arg_0]
0x61326B: fcom    st(1)
0x61326D: fnstsw  ax
0x61326F: fstp    st(1)
0x613271: test    ah, 41h
0x613274: jnz     short loc_613296
0x613276: fsub    qword ptr ds:0A56CA0h
0x61327C: fstp    [esp+18h+arg_0]
0x613280: fld     [esp+18h+arg_0]
0x613284: fabs
0x613286: fstp    [esp+18h+arg_0]
0x61328A: fld     [esp+18h+arg_0]
0x61328E: fstp    [esp+18h+arg_0]
0x613292: fld     [esp+18h+arg_0]
0x613296: fld     dword ptr ds:0B36F28h
0x61329C: fcomp   st(1)
0x61329E: fnstsw  ax
0x6132A0: test    ah, 41h
0x6132A3: jnz     short loc_6132A7
0x6132A5: mov     bl, 1
0x6132A7: mov     eax, [esp+18h+arg_8]
0x6132AB: test    eax, eax
0x6132AD: jz      short loc_6132BA
0x6132AF: pop     edi
0x6132B0: fstp    dword ptr [eax]
0x6132B2: pop     esi
0x6132B3: mov     al, bl
0x6132B5: pop     ebx
0x6132B6: add     esp, 0Ch
0x6132B9: retn
0x6132BA: pop     edi
0x6132BB: fstp    st
0x6132BD: pop     esi
0x6132BE: mov     al, bl
0x6132C0: pop     ebx
0x6132C1: add     esp, 0Ch
0x6132C4: retn
