0x70BC70: push    0FFFFFFFFh
0x70BC72: push    offset SEH_70BC70
0x70BC77: mov     eax, large fs:0
0x70BC7D: push    eax
0x70BC7E: push    esi
0x70BC7F: push    edi
0x70BC80: mov     eax, ds:0B30AACh
0x70BC85: xor     eax, esp
0x70BC87: push    eax
0x70BC88: lea     eax, [esp+18h+var_C]
0x70BC8C: mov     large fs:0, eax
0x70BC92: mov     edi, [esp+18h+arg_C]
0x70BC96: cmp     dword ptr [edi+4], 0Fh
0x70BC9A: jnz     short loc_70BCFE
0x70BC9C: push    18h; Size
0x70BC9E: call    FormHeapAlloc
0x70BCA3: mov     esi, eax
0x70BCA5: add     esp, 4
0x70BCA8: mov     [esp+18h+arg_C], esi
0x70BCAC: test    esi, esi
0x70BCAE: mov     [esp+18h+var_4], 0
0x70BCB6: jz      short loc_70BCCE
0x70BCB8: mov     ecx, esi
0x70BCBA: call    sub_731EA0
0x70BCBF: mov     dword ptr [esi], offset ??_7NiDepthStencilBuffer@@6B@; const NiDepthStencilBuffer::`vftable'
0x70BCC5: mov     dword ptr [esi+14h], 0
0x70BCCC: jmp     short loc_70BCD0
0x70BCCE: xor     esi, esi
0x70BCD0: mov     eax, [esp+18h+arg_0]
0x70BCD4: mov     ecx, [esp+18h+arg_4]
0x70BCD8: mov     edx, [esi]
0x70BCDA: mov     [esi+8], eax
0x70BCDD: mov     eax, [edx+54h]
0x70BCE0: mov     [esi+0Ch], ecx
0x70BCE3: push    edi
0x70BCE4: mov     ecx, esi
0x70BCE6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x70BCEE: call    eax
0x70BCF0: test    al, al
0x70BCF2: jnz     short loc_70BD12
0x70BCF4: mov     edx, [esi]
0x70BCF6: mov     eax, [edx]
0x70BCF8: push    1
0x70BCFA: mov     ecx, esi
0x70BCFC: call    eax
0x70BCFE: xor     eax, eax
0x70BD00: mov     ecx, dword ptr [esp+18h+var_C]
0x70BD04: mov     large fs:0, ecx
0x70BD0B: pop     ecx
0x70BD0C: pop     edi
0x70BD0D: pop     esi
0x70BD0E: add     esp, 0Ch
0x70BD11: retn
0x70BD12: movzx   eax, byte ptr [edi+1]
0x70BD16: shr     eax, 3
0x70BD19: imul    eax, [esi+0Ch]
0x70BD1D: imul    eax, [esi+8]
0x70BD21: mov     [esi+14h], eax
0x70BD24: add     ds:0B3FAB8h, eax
0x70BD2A: mov     ecx, [esi+14h]
0x70BD2D: mov     eax, ecx
0x70BD2F: and     eax, 0FFFFF000h
0x70BD34: xor     edx, edx
0x70BD36: cmp     eax, ecx
0x70BD38: jz      short loc_70BD43
0x70BD3A: sub     eax, ecx
0x70BD3C: add     eax, 1000h
0x70BD41: mov     edx, eax
0x70BD43: add     ds:0B3FABCh, edx
0x70BD49: mov     eax, esi
0x70BD4B: mov     ecx, dword ptr [esp+18h+var_C]
0x70BD4F: mov     large fs:0, ecx
0x70BD56: pop     ecx
0x70BD57: pop     edi
0x70BD58: pop     esi
0x70BD59: add     esp, 0Ch
0x70BD5C: retn
