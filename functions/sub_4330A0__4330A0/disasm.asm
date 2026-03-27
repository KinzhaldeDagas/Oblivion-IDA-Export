0x4330A0: push    ecx
0x4330A1: push    ebx
0x4330A2: push    edi
0x4330A3: mov     ebx, ecx
0x4330A5: xor     edi, edi
0x4330A7: cmp     [ebx], edi
0x4330A9: jbe     short loc_4330F3
0x4330AB: push    esi
0x4330AC: lea     esp, [esp+0]
0x4330B0: mov     eax, [ebx+8]
0x4330B3: mov     ecx, [eax+edi*8+4]
0x4330B7: mov     [esp+10h+var_4], ecx
0x4330BB: mov     edx, [esp+10h+var_4]
0x4330BF: mov     [esp+10h+var_4], edx
0x4330C3: mov     eax, [esp+10h+var_4]
0x4330C7: test    eax, eax
0x4330C9: jz      short loc_4330EB
0x4330CB: mov     esi, [esp+10h+var_4]
0x4330CF: cmp     dword ptr [esi+0Ch], 0
0x4330D3: jz      short loc_4330E2
0x4330D5: mov     ecx, esi
0x4330D7: call    sub_432740
0x4330DC: cmp     dword ptr [esi+0Ch], 0
0x4330E0: jnz     short loc_4330D5
0x4330E2: push    esi
0x4330E3: call    FormHeapFree
0x4330E8: add     esp, 4
0x4330EB: add     edi, 1
0x4330EE: cmp     edi, [ebx]
0x4330F0: jb      short loc_4330B0
0x4330F2: pop     esi
0x4330F3: mov     ecx, [ebx+8]
0x4330F6: push    ecx
0x4330F7: call    FormHeapFree
0x4330FC: mov     edx, [ebx+4]
0x4330FF: add     esp, 4
0x433102: push    edx; dwTlsIndex
0x433103: call    ds:TlsFree
0x433109: pop     edi
0x43310A: pop     ebx
0x43310B: pop     ecx
0x43310C: retn
