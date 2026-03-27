0x58A0A0: push    0FFFFFFFFh
0x58A0A2: push    offset SEH_58A0A0
0x58A0A7: mov     eax, large fs:0
0x58A0AD: push    eax
0x58A0AE: push    esi
0x58A0AF: push    edi
0x58A0B0: mov     eax, ds:0B30AACh
0x58A0B5: xor     eax, esp
0x58A0B7: push    eax
0x58A0B8: lea     eax, [esp+18h+var_C]
0x58A0BC: mov     large fs:0, eax
0x58A0C2: mov     edi, [esp+18h+arg_0]
0x58A0C6: test    edi, edi
0x58A0C8: jz      loc_58A1AA
0x58A0CE: mov     al, [edi]
0x58A0D0: test    al, al
0x58A0D2: jz      loc_58A1AA
0x58A0D8: cmp     al, 26h ; '&'
0x58A0DA: jnz     short loc_58A10E
0x58A0DC: mov     esi, 1Bh
0x58A0E1: push    10h; Size
0x58A0E3: call    FormHeapAlloc
0x58A0E8: add     esp, 4
0x58A0EB: mov     [esp+18h+arg_0], eax
0x58A0EF: test    eax, eax
0x58A0F1: mov     [esp+18h+var_4], 1
0x58A0F9: jz      loc_58A187
0x58A0FF: mov     ecx, [esp+18h+arg_4]
0x58A103: push    edi
0x58A104: push    ecx
0x58A105: mov     ecx, eax
0x58A107: call    sub_589EB0
0x58A10C: jmp     short loc_58A189
0x58A10E: cmp     al, 5Fh ; '_'
0x58A110: jz      short loc_58A12D
0x58A112: movsx   esi, al
0x58A115: sub     esi, 40h ; '@'
0x58A118: cmp     esi, 20h ; ' '
0x58A11B: jle     short loc_58A120
0x58A11D: sub     esi, 20h ; ' '
0x58A120: test    esi, esi
0x58A122: jl      short loc_58A129
0x58A124: cmp     esi, 1Ah
0x58A127: jle     short loc_58A0E1
0x58A129: xor     esi, esi
0x58A12B: jmp     short loc_58A0E1
0x58A12D: push    10h; Size
0x58A12F: call    FormHeapAlloc
0x58A134: add     esp, 4
0x58A137: mov     [esp+18h+arg_0], eax
0x58A13B: test    eax, eax
0x58A13D: mov     [esp+18h+var_4], 0
0x58A145: jz      short loc_58A156
0x58A147: mov     ecx, [esp+18h+arg_4]
0x58A14B: push    edi
0x58A14C: push    ecx
0x58A14D: mov     ecx, eax
0x58A14F: call    sub_589EB0
0x58A154: jmp     short loc_58A158
0x58A156: xor     eax, eax
0x58A158: lea     edx, [esp+18h+arg_4]
0x58A15C: push    edx
0x58A15D: mov     ecx, offset off_B13BC4
0x58A162: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x58A16A: mov     [esp+1Ch+arg_4], eax
0x58A16E: call    NiTArray_Add
0x58A173: mov     ecx, [esp+18h+var_C]
0x58A177: mov     large fs:0, ecx
0x58A17E: pop     ecx
0x58A17F: pop     edi
0x58A180: pop     esi
0x58A181: add     esp, 0Ch
0x58A184: retn    8
0x58A187: xor     eax, eax
0x58A189: mov     ecx, esi
0x58A18B: lea     edx, [esp+18h+arg_4]
0x58A18F: shl     ecx, 4
0x58A192: push    edx
0x58A193: add     ecx, offset unk_B3B0B0
0x58A199: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x58A1A1: mov     [esp+1Ch+arg_4], eax
0x58A1A5: call    sub_6AA320
0x58A1AA: mov     ecx, [esp+18h+var_C]
0x58A1AE: mov     large fs:0, ecx
0x58A1B5: pop     ecx
0x58A1B6: pop     edi
0x58A1B7: pop     esi
0x58A1B8: add     esp, 0Ch
0x58A1BB: retn    8
