0x70C0B0: mov     ecx, ds:0B3F928h
0x70C0B6: test    ecx, ecx
0x70C0B8: jz      short locret_70C118
0x70C0BA: push    ebx
0x70C0BB: mov     ebx, [esp+4+arg_0]
0x70C0BF: test    ebx, ebx
0x70C0C1: jz      short loc_70C117
0x70C0C3: push    ebp
0x70C0C4: mov     ebp, [esp+8+arg_4]
0x70C0C8: test    ebp, ebp
0x70C0CA: jz      short loc_70C116
0x70C0CC: push    esi
0x70C0CD: mov     esi, [esp+0Ch+arg_C]
0x70C0D1: test    esi, esi
0x70C0D3: push    edi
0x70C0D4: mov     edi, [esp+10h+arg_8]
0x70C0D8: jnz     short loc_70C0DD
0x70C0DA: mov     esi, [edi+8]
0x70C0DD: push    ebx
0x70C0DE: call    SetCameraViewProj
0x70C0E3: test    esi, esi
0x70C0E5: mov     ecx, edi
0x70C0E7: jz      short loc_70C109
0x70C0E9: push    esi
0x70C0EA: mov     dword ptr [esi+4], 0
0x70C0F1: mov     eax, [edi]
0x70C0F3: mov     edx, [eax+8]
0x70C0F6: push    ebp
0x70C0F7: push    ebx
0x70C0F8: call    edx
0x70C0FA: push    esi
0x70C0FB: push    ebx
0x70C0FC: call    sub_70C000
0x70C101: add     esp, 8
0x70C104: pop     edi
0x70C105: pop     esi
0x70C106: pop     ebp
0x70C107: pop     ebx
0x70C108: retn
0x70C109: mov     eax, [edi]
0x70C10B: mov     edx, [eax+8]
0x70C10E: push    0
0x70C110: push    ebp
0x70C111: push    ebx
0x70C112: call    edx
0x70C114: pop     edi
0x70C115: pop     esi
0x70C116: pop     ebp
0x70C117: pop     ebx
0x70C118: retn
