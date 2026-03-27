0x536F90: push    0FFFFFFFFh
0x536F92: push    offset ??1hkAllCdBodyPairCollector@@UAE@XZ_SEH
0x536F97: mov     eax, large fs:0
0x536F9D: push    eax
0x536F9E: push    ecx
0x536F9F: push    esi
0x536FA0: mov     eax, ds:0B30AACh
0x536FA5: xor     eax, esp
0x536FA7: push    eax
0x536FA8: lea     eax, [esp+18h+var_C]
0x536FAC: mov     large fs:0, eax
0x536FB2: mov     esi, ecx
0x536FB4: mov     [esp+18h+var_10], esi
0x536FB8: mov     dword ptr [esi], offset ??_7hkAllCdBodyPairCollector@@6B@; const hkAllCdBodyPairCollector::`vftable'
0x536FBE: mov     eax, [esi+10h]
0x536FC1: test    eax, eax
0x536FC3: mov     [esp+18h+var_4], 0
0x536FCB: js      short loc_537001
0x536FCD: mov     ecx, ds:0BA9DE4h
0x536FD3: mov     edx, large fs:2Ch
0x536FDA: mov     ecx, [edx+ecx*4]
0x536FDD: mov     ecx, [ecx+19Ch]
0x536FE3: test    ecx, ecx
0x536FE5: jnz     short loc_536FED
0x536FE7: mov     ecx, ds:0BA7D9Ch
0x536FED: mov     edx, [esi+8]
0x536FF0: and     eax, 3FFFFFFFh
0x536FF5: push    14h
0x536FF7: shl     eax, 4
0x536FFA: push    eax
0x536FFB: push    edx
0x536FFC: call    sub_8A75D0
0x537001: mov     dword ptr [esi], offset ??_7hkCdBodyPairCollector@@6B@; const hkCdBodyPairCollector::`vftable'
0x537007: mov     ecx, [esp+18h+var_C]
0x53700B: mov     large fs:0, ecx
0x537012: pop     ecx
0x537013: pop     esi
0x537014: add     esp, 10h
0x537017: retn
