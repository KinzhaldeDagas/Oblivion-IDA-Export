0x5D3EB0: push    0FFFFFFFFh
0x5D3EB2: push    offset ??0SigilStoneMenu@@QAE@XZ_SEH
0x5D3EB7: mov     eax, large fs:0
0x5D3EBD: push    eax
0x5D3EBE: sub     esp, 8
0x5D3EC1: push    esi
0x5D3EC2: push    edi
0x5D3EC3: mov     eax, ds:0B30AACh
0x5D3EC8: xor     eax, esp
0x5D3ECA: push    eax
0x5D3ECB: lea     eax, [esp+20h+var_C]
0x5D3ECF: mov     large fs:0, eax
0x5D3ED5: mov     esi, ecx
0x5D3ED7: mov     [esp+20h+var_14], esi
0x5D3EDB: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5D3EE0: xor     edi, edi
0x5D3EE2: push    28h ; '('; Size
0x5D3EE4: mov     [esp+24h+var_4], edi
0x5D3EE8: mov     dword ptr [esi], offset ??_7SigilStoneMenu@@6B@; const SigilStoneMenu::`vftable'
0x5D3EEE: mov     [esi+30h], edi
0x5D3EF1: mov     [esi+34h], edi
0x5D3EF4: mov     [esi+38h], edi
0x5D3EF7: mov     [esi+3Ch], edi
0x5D3EFA: mov     [esi+40h], edi
0x5D3EFD: mov     [esi+44h], edi
0x5D3F00: mov     [esi+48h], edi
0x5D3F03: mov     [esi+4Ch], edi
0x5D3F06: mov     [esi+50h], edi
0x5D3F09: mov     [esi+54h], edi
0x5D3F0C: mov     [esi+58h], edi
0x5D3F0F: mov     [esi+5Ch], edi
0x5D3F12: mov     [esi+60h], edi
0x5D3F15: mov     [esi+2Ch], edi
0x5D3F18: mov     byte ptr [esi+78h], 1
0x5D3F1C: mov     [esi+6Ch], edi
0x5D3F1F: mov     [esi+28h], edi
0x5D3F22: mov     [esi+70h], edi
0x5D3F25: mov     [esi+64h], edi
0x5D3F28: mov     [esi+68h], edi
0x5D3F2B: call    FormHeapAlloc
0x5D3F30: add     esp, 4
0x5D3F33: mov     [esp+20h+var_10], eax
0x5D3F37: cmp     eax, edi
0x5D3F39: mov     byte ptr [esp+20h+var_4], 1
0x5D3F3E: jz      short loc_5D3F49
0x5D3F40: mov     ecx, eax
0x5D3F42: call    sub_57FE70
0x5D3F47: jmp     short loc_5D3F4B
0x5D3F49: xor     eax, eax
0x5D3F4B: mov     [esi+74h], eax
0x5D3F4E: mov     [esi+7Ch], edi
0x5D3F51: mov     eax, esi
0x5D3F53: mov     ecx, [esp+20h+var_C]
0x5D3F57: mov     large fs:0, ecx
0x5D3F5E: pop     ecx
0x5D3F5F: pop     edi
0x5D3F60: pop     esi
0x5D3F61: add     esp, 14h
0x5D3F64: retn
