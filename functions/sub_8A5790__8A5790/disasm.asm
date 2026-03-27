0x8A5790: push    0FFFFFFFFh
0x8A5792: push    offset SEH_8A5790
0x8A5797: mov     eax, large fs:0
0x8A579D: push    eax
0x8A579E: push    ecx
0x8A579F: push    ebx
0x8A57A0: push    esi
0x8A57A1: mov     eax, ds:0B30AACh
0x8A57A6: xor     eax, esp
0x8A57A8: push    eax
0x8A57A9: lea     eax, [esp+1Ch+var_C]
0x8A57AD: mov     large fs:0, eax
0x8A57B3: mov     esi, ecx
0x8A57B5: mov     [esp+1Ch+var_10], esi
0x8A57B9: xor     ebx, ebx
0x8A57BB: mov     [esi+0Ch], ebx
0x8A57BE: mov     [esi+10h], ebx
0x8A57C1: mov     dword ptr [esi+14h], 80000000h
0x8A57C8: mov     al, 1
0x8A57CA: mov     [esi], ebx
0x8A57CC: mov     [esi+4], ebx
0x8A57CF: mov     [esi+8], al
0x8A57D2: mov     [esi+18h], al
0x8A57D5: mov     word ptr [esi+1Ah], 0FFFFh
0x8A57DB: lea     ecx, [esi+20h]
0x8A57DE: mov     [esp+1Ch+var_4], ebx
0x8A57E2: call    sub_8DF420
0x8A57E7: fld     dword ptr ds:0A5A04Ch
0x8A57ED: fstp    dword ptr [esi+0C4h]
0x8A57F3: mov     [esi+0D3h], bl
0x8A57F9: fld     dword ptr ds:0A97490h
0x8A57FF: mov     eax, esi
0x8A5801: fstp    dword ptr [esi+0C8h]
0x8A5807: mov     ecx, [esp+1Ch+var_C]
0x8A580B: mov     large fs:0, ecx
0x8A5812: pop     ecx
0x8A5813: pop     esi
0x8A5814: pop     ebx
0x8A5815: add     esp, 10h
0x8A5818: retn
