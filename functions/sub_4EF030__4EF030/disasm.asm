0x4EF030: sub     esp, 8
0x4EF033: push    esi
0x4EF034: mov     esi, ecx
0x4EF036: cmp     dword ptr [esi+0A8h], 0
0x4EF03D: jz      loc_4EF0E8
0x4EF043: cmp     [esp+0Ch+arg_0], 0
0x4EF048: jz      loc_4EF0E8
0x4EF04E: fld     dword ptr [esi+0B0h]
0x4EF054: push    ebx
0x4EF055: push    ebp
0x4EF056: push    edi
0x4EF057: call    Double_To_SInt32
0x4EF05C: fld     dword ptr [esi+0B4h]
0x4EF062: mov     edi, eax
0x4EF064: sar     edi, 0Ch
0x4EF067: mov     [esp+18h+var_8], edi
0x4EF06B: call    Double_To_SInt32
0x4EF070: fld     dword ptr [esi+0B8h]
0x4EF076: sar     eax, 0Ch
0x4EF079: mov     [esp+18h+var_4], eax
0x4EF07D: call    Double_To_SInt32
0x4EF082: fld     dword ptr [esi+0ACh]
0x4EF088: mov     ebp, eax
0x4EF08A: sar     ebp, 0Ch
0x4EF08D: call    Double_To_SInt32
0x4EF092: mov     ebx, eax
0x4EF094: sar     ebx, 0Ch
0x4EF097: cmp     ebx, [esp+18h+var_4]
0x4EF09B: jg      short loc_4EF0E5
0x4EF09D: jmp     short loc_4EF0A4
0x4EF09F: align 10h
0x4EF0A0: mov     edi, [esp+18h+var_8]
0x4EF0A4: cmp     [esp+18h+var_8], ebp
0x4EF0A8: jg      short loc_4EF0DC
0x4EF0AA: lea     ebx, [ebx+0]
0x4EF0B0: push    edi; a3
0x4EF0B1: push    ebx; a2
0x4EF0B2: mov     ecx, esi; this
0x4EF0B4: call    TESWorldSpace__GetIndexForCellCoord
0x4EF0B9: test    eax, eax
0x4EF0BB: jl      short loc_4EF0D5
0x4EF0BD: mov     ecx, [esi+0A8h]
0x4EF0C3: cmp     dword ptr [ecx+eax*4], 0
0x4EF0C7: jz      short loc_4EF0D5
0x4EF0C9: mov     edx, ecx
0x4EF0CB: mov     ecx, [esp+18h+arg_0]
0x4EF0CF: add     [edx+eax*4], ecx
0x4EF0D2: lea     eax, [edx+eax*4]
0x4EF0D5: add     edi, 1
0x4EF0D8: cmp     edi, ebp
0x4EF0DA: jle     short loc_4EF0B0
0x4EF0DC: add     ebx, 1
0x4EF0DF: cmp     ebx, [esp+18h+var_4]
0x4EF0E3: jle     short loc_4EF0A0
0x4EF0E5: pop     edi
0x4EF0E6: pop     ebp
0x4EF0E7: pop     ebx
0x4EF0E8: pop     esi
0x4EF0E9: add     esp, 8
0x4EF0EC: retn    4
