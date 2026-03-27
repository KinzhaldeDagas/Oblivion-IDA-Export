0x6C0EC0: push    esi
0x6C0EC1: mov     esi, [esp+4+arg_4]
0x6C0EC5: cmp     esi, 2
0x6C0EC8: jb      short loc_6C0F35
0x6C0ECA: mov     eax, [esp+4+arg_8]
0x6C0ECE: push    ebx
0x6C0ECF: push    edi
0x6C0ED0: mov     edi, [esp+0Ch+arg_0]
0x6C0ED4: push    eax
0x6C0ED5: push    esi
0x6C0ED6: push    edi
0x6C0ED7: call    sub_6BD310
0x6C0EDC: add     esp, 0Ch
0x6C0EDF: lea     ecx, [edi+40h]
0x6C0EE2: push    ecx
0x6C0EE3: push    edi
0x6C0EE4: mov     ecx, edi
0x6C0EE6: call    sub_6C0C40
0x6C0EEB: lea     ebx, [esi-1]
0x6C0EEE: cmp     ebx, 1
0x6C0EF1: jbe     short loc_6C0F1E
0x6C0EF3: push    ebp
0x6C0EF4: mov     eax, edi
0x6C0EF6: lea     ebp, [ebx-1]
0x6C0EF9: lea     esp, [esp+0]
0x6C0F00: lea     edx, [eax+80h]
0x6C0F06: lea     esi, [eax+40h]
0x6C0F09: push    edx
0x6C0F0A: push    eax
0x6C0F0B: mov     ecx, esi
0x6C0F0D: call    sub_6C0C40
0x6C0F12: sub     ebp, 1
0x6C0F15: mov     eax, esi
0x6C0F17: jnz     short loc_6C0F00
0x6C0F19: mov     esi, [esp+10h+arg_4]
0x6C0F1D: pop     ebp
0x6C0F1E: add     esi, 0FFFFFFFEh
0x6C0F21: shl     ebx, 6
0x6C0F24: lea     ecx, [ebx+edi]
0x6C0F27: shl     esi, 6
0x6C0F2A: push    ecx
0x6C0F2B: add     esi, edi
0x6C0F2D: push    esi
0x6C0F2E: call    sub_6C0C40
0x6C0F33: pop     edi
0x6C0F34: pop     ebx
0x6C0F35: pop     esi
0x6C0F36: retn
