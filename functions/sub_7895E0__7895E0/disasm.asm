0x7895E0: mov     edx, [esp+Src]; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x7895E4: mov     eax, edx
0x7895E6: push    esi
0x7895E7: lea     esi, [eax+1]
0x7895EA: lea     ebx, [ebx+0]
0x7895F0: mov     cl, [eax]
0x7895F2: add     eax, 1
0x7895F5: test    cl, cl
0x7895F7: jnz     short loc_7895F0
0x7895F9: sub     eax, esi
0x7895FB: push    eax; count
0x7895FC: push    edx; source
0x7895FD: mov     ecx, offset OB_g_strError_010201A0; this
0x789602: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x789607: pop     esi
0x789608: retn
