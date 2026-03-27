0x8A02C0: push    ecx
0x8A02C1: push    esi
0x8A02C2: push    edi
0x8A02C3: mov     edi, ecx
0x8A02C5: mov     eax, [edi]
0x8A02C7: mov     edx, [eax+74h]
0x8A02CA: lea     ecx, [esp+0Ch+var_1]
0x8A02CE: push    ecx
0x8A02CF: mov     ecx, edi
0x8A02D1: call    edx
0x8A02D3: test    eax, eax
0x8A02D5: jz      short loc_8A02DC
0x8A02D7: lea     esi, [eax-4]
0x8A02DA: jmp     short loc_8A02DE
0x8A02DC: xor     esi, esi
0x8A02DE: mov     eax, [esp+0Ch+arg_0]
0x8A02E2: cmp     dword ptr [eax+4], 6
0x8A02E6: mov     edx, [esi]
0x8A02E8: mov     ecx, esi
0x8A02EA: jnb     short loc_8A02F6
0x8A02EC: push    0
0x8A02EE: push    eax
0x8A02EF: mov     eax, [edx+0Ch]
0x8A02F2: call    eax
0x8A02F4: jmp     short loc_8A02FC
0x8A02F6: push    eax
0x8A02F7: mov     eax, [edx+4]
0x8A02FA: call    eax
0x8A02FC: mov     ecx, [esi+4]
0x8A02FF: mov     dword ptr [ecx+8], 0
0x8A0306: mov     edx, [edi]
0x8A0308: mov     eax, [edx+68h]
0x8A030B: mov     ecx, edi
0x8A030D: call    eax
0x8A030F: pop     edi
0x8A0310: pop     esi
0x8A0311: pop     ecx
0x8A0312: retn    4
