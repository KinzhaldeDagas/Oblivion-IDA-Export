0x904040: push    ebp
0x904041: mov     ebp, esp
0x904043: and     esp, 0FFFFFFF0h
0x904046: sub     esp, 0C4h
0x90404C: mov     ecx, ds:0BA7D98h
0x904052: mov     eax, [ecx]
0x904054: push    ebx
0x904055: push    esi
0x904056: push    edi
0x904057: push    1Ch
0x904059: push    10h
0x90405B: call    dword ptr [eax+10h]
0x90405E: mov     ecx, [ebp+arg_C]
0x904061: mov     edi, [ebp+arg_0]
0x904064: mov     esi, eax
0x904066: mov     [esi+8], ecx
0x904069: mov     word ptr [esi+4], 10h
0x90406F: mov     word ptr [esi+6], 1
0x904075: mov     dword ptr [esi], offset off_A9BD4C
0x90407B: mov     eax, [edi]
0x90407D: mov     ebx, [eax+0Ch]
0x904080: mov     eax, [edi+8]
0x904083: push    eax
0x904084: lea     ecx, [esp+0D4h+var_B0]
0x904088: call    sub_903FA0
0x90408D: mov     eax, [edi]
0x90408F: add     eax, 20h ; ' '
0x904092: push    eax
0x904093: mov     eax, [edi+8]
0x904096: push    eax
0x904097: lea     ecx, [esp+0D8h+var_B0]
0x90409B: call    sub_8B1F70
0x9040A0: mov     [esp+0D0h+var_B4], edi
0x9040A4: lea     edx, [esp+0D0h+var_B0]
0x9040A8: mov     [esp+0D0h+var_B8], edx
0x9040AC: mov     eax, [edi+4]
0x9040AF: mov     edi, [ebp+arg_8]
0x9040B2: mov     ecx, [edi]
0x9040B4: mov     [esp+0D0h+var_BC], eax
0x9040B8: mov     [esp+0D0h+var_C0], ebx
0x9040BC: mov     edx, [ebx]
0x9040BE: mov     [esp+0D0h+var_C4], ecx
0x9040C2: mov     ecx, ebx
0x9040C4: call    dword ptr [edx+8]
0x9040C7: mov     ebx, eax
0x9040C9: mov     eax, [ebp+arg_4]
0x9040CC: mov     ecx, [eax]
0x9040CE: mov     edx, [ecx]
0x9040D0: call    dword ptr [edx+8]
0x9040D3: mov     cl, [edi+0Ch]
0x9040D6: test    cl, cl
0x9040D8: mov     ecx, [esp+0D0h+var_C4]
0x9040DC: jz      short loc_9040E6
0x9040DE: add     ecx, 590h
0x9040E4: jmp     short loc_9040EC
0x9040E6: add     ecx, 190h
0x9040EC: mov     edx, [ebp+arg_C]
0x9040EF: shl     ebx, 5
0x9040F2: add     ebx, ecx
0x9040F4: movzx   eax, byte ptr [ebx+eax]
0x9040F8: mov     ecx, [esp+0D0h+var_C4]
0x9040FC: push    edx
0x9040FD: lea     eax, [eax+eax*4]
0x904100: mov     eax, [ecx+eax*4+990h]
0x904107: mov     ecx, [ebp+arg_4]
0x90410A: push    edi
0x90410B: push    ecx
0x90410C: lea     edx, [esp+0DCh+var_C0]
0x904110: push    edx
0x904111: call    eax
0x904113: add     esp, 10h
0x904116: mov     [esi+0Ch], eax
0x904119: pop     edi
0x90411A: mov     eax, esi
0x90411C: pop     esi
0x90411D: pop     ebx
0x90411E: mov     esp, ebp
0x904120: pop     ebp
0x904121: retn
