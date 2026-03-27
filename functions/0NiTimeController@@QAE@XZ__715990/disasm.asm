0x715990: push    0FFFFFFFFh
0x715992: push    offset ??1NiPSysResetOnLoopCtlr@@UAE@XZ_SEH
0x715997: mov     eax, large fs:0
0x71599D: push    eax
0x71599E: push    ecx
0x71599F: push    ebx
0x7159A0: push    esi
0x7159A1: push    edi
0x7159A2: mov     eax, ds:0B30AACh
0x7159A7: xor     eax, esp
0x7159A9: push    eax
0x7159AA: lea     eax, [esp+20h+var_C]
0x7159AE: mov     large fs:0, eax
0x7159B4: mov     esi, ecx
0x7159B6: mov     [esp+20h+var_10], esi
0x7159BA: call    NiObject_constr
0x7159BF: xor     ebx, ebx
0x7159C1: mov     dword ptr [esi], offset ??_7NiTimeController@@6B@; const NiTimeController::`vftable'
0x7159C7: mov     [esp+20h+var_4], ebx
0x7159CB: mov     [esi+34h], ebx
0x7159CE: fld1
0x7159D0: fstp    dword ptr [esi+0Ch]
0x7159D3: mov     word ptr [esi+8], 0Ch
0x7159D9: fldz
0x7159DB: mov     byte ptr [esp+20h+var_4], 1
0x7159E0: fst     dword ptr [esi+10h]
0x7159E3: fld     dword ptr ds:0A7DEB4h
0x7159E9: fstp    dword ptr [esi+14h]
0x7159EC: fld     dword ptr ds:0A7DEB4h
0x7159F2: fchs
0x7159F4: fstp    dword ptr [esi+18h]
0x7159F7: fld     dword ptr ds:0A7DEB4h
0x7159FD: fchs
0x7159FF: fstp    dword ptr [esi+1Ch]
0x715A02: fld     dword ptr ds:0A7DEB4h
0x715A08: fchs
0x715A0A: fstp    dword ptr [esi+20h]
0x715A0D: fstp    dword ptr [esi+24h]
0x715A10: fld     dword ptr ds:0A7DEB4h
0x715A16: mov     [esi+30h], ebx
0x715A19: fchs
0x715A1B: fstp    dword ptr [esi+28h]
0x715A1E: mov     edi, [esi+34h]
0x715A21: cmp     edi, ebx
0x715A23: jz      short loc_715A44
0x715A25: lea     eax, [edi+4]
0x715A28: push    eax; lpAddend
0x715A29: call    dword ptr ds:0A2807Ch
0x715A2F: test    eax, eax
0x715A31: jnz     short loc_715A41
0x715A33: cmp     edi, ebx
0x715A35: jz      short loc_715A41
0x715A37: mov     edx, [edi]
0x715A39: mov     eax, [edx]
0x715A3B: push    1
0x715A3D: mov     ecx, edi
0x715A3F: call    eax
0x715A41: mov     [esi+34h], ebx
0x715A44: mov     byte ptr [esi+2Ch], 1
0x715A48: mov     [esi+38h], bl
0x715A4B: mov     eax, esi
0x715A4D: mov     ecx, dword ptr [esp+20h+var_C]
0x715A51: mov     large fs:0, ecx
0x715A58: pop     ecx
0x715A59: pop     edi
0x715A5A: pop     esi
0x715A5B: pop     ebx
0x715A5C: add     esp, 10h
0x715A5F: retn
