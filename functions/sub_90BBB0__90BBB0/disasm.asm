0x90BBB0: mov     ecx, [esp+arg_4]
0x90BBB4: or      eax, 0FFFFFFFFh
0x90BBB7: cmp     ecx, 1Ch; switch 29 cases
0x90BBBA: ja      def_90BBC7; jumptable 0090BBC7 default case, case 23
0x90BBC0: movzx   ecx, ds:byte_90BC5C[ecx]
0x90BBC7: jmp     ds:jpt_90BBC7[ecx*4]; switch jump
0x90BBCE: mov     ecx, [esp+arg_0]; jumptable 0090BBC7 cases 0-18,24
0x90BBD2: jmp     sub_940C50
0x90BBD7: mov     eax, [esp+arg_8]; jumptable 0090BBC7 cases 20-22,26-28
0x90BBDB: retn
0x90BBDC: mov     eax, [esp+arg_0]; jumptable 0090BBC7 case 19
0x90BBE0: movzx   ecx, byte ptr [eax+0Dh]
0x90BBE4: mov     [esp+arg_4], ecx
0x90BBE8: mov     [esp+arg_0], eax
0x90BBEC: jmp     sub_90BBB0
0x90BBF1: mov     ecx, [esp+arg_0]; jumptable 0090BBC7 case 25
0x90BBF5: push    ebx
0x90BBF6: push    esi
0x90BBF7: push    edi
0x90BBF8: mov     ebx, 1
0x90BBFD: call    sub_90D1F0
0x90BC02: mov     edi, eax
0x90BC04: mov     ecx, edi
0x90BC06: xor     esi, esi
0x90BC08: call    sub_90D240
0x90BC0D: test    eax, eax
0x90BC0F: jle     short loc_90BC40
0x90BC11: push    ebp
0x90BC12: mov     ebp, [esp+10h+arg_8]
0x90BC16: push    esi
0x90BC17: mov     ecx, edi
0x90BC19: call    sub_90D260
0x90BC1E: movzx   edx, byte ptr [eax+0Ch]
0x90BC22: push    ebp
0x90BC23: push    edx
0x90BC24: push    eax
0x90BC25: call    sub_90BBB0
0x90BC2A: add     esp, 0Ch
0x90BC2D: cmp     eax, ebx
0x90BC2F: jle     short loc_90BC33
0x90BC31: mov     ebx, eax
0x90BC33: mov     ecx, edi
0x90BC35: inc     esi
0x90BC36: call    sub_90D240
0x90BC3B: cmp     esi, eax
0x90BC3D: jl      short loc_90BC16
0x90BC3F: pop     ebp
0x90BC40: pop     edi
0x90BC41: pop     esi
0x90BC42: mov     eax, ebx
0x90BC44: pop     ebx
0x90BC45: retn; jumptable 0090BBC7 default case, case 23
