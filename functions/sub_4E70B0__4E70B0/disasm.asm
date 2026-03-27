0x4E70B0: push    0FFFFFFFFh
0x4E70B2: push    offset SEH_8C8970
0x4E70B7: mov     eax, large fs:0
0x4E70BD: push    eax
0x4E70BE: push    ecx
0x4E70BF: push    esi
0x4E70C0: push    edi
0x4E70C1: mov     eax, ds:0B30AACh
0x4E70C6: xor     eax, esp
0x4E70C8: push    eax
0x4E70C9: lea     eax, [esp+1Ch+var_C]
0x4E70CD: mov     large fs:0, eax
0x4E70D3: mov     eax, ds:0B35F8Ch
0x4E70D8: test    eax, eax
0x4E70DA: jnz     loc_4E7181
0x4E70E0: push    1Ch; Size
0x4E70E2: call    FormHeapAlloc
0x4E70E7: mov     esi, eax
0x4E70E9: add     esp, 4
0x4E70EC: mov     [esp+1Ch+var_10], esi
0x4E70F0: test    esi, esi
0x4E70F2: mov     [esp+1Ch+var_4], 0
0x4E70FA: jz      short loc_4E7111
0x4E70FC: mov     ecx, esi; this
0x4E70FE: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x4E7103: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x4E7109: mov     word ptr [esi+18h], 8
0x4E710F: jmp     short loc_4E7113
0x4E7111: xor     esi, esi
0x4E7113: mov     eax, ds:0B35F8Ch
0x4E7118: cmp     eax, esi
0x4E711A: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4E7122: jz      short loc_4E7160
0x4E7124: test    eax, eax
0x4E7126: jz      short loc_4E7146
0x4E7128: mov     edi, eax
0x4E712A: add     eax, 4
0x4E712D: push    eax; lpAddend
0x4E712E: call    dword ptr ds:0A2807Ch
0x4E7134: test    eax, eax
0x4E7136: jnz     short loc_4E7146
0x4E7138: test    edi, edi
0x4E713A: jz      short loc_4E7146
0x4E713C: mov     eax, [edi]
0x4E713E: mov     edx, [eax]
0x4E7140: push    1
0x4E7142: mov     ecx, edi
0x4E7144: call    edx
0x4E7146: test    esi, esi
0x4E7148: mov     eax, esi
0x4E714A: mov     ds:0B35F8Ch, eax
0x4E714F: jz      short loc_4E7160
0x4E7151: add     esi, 4
0x4E7154: push    esi; lpAddend
0x4E7155: call    dword ptr ds:0A28078h
0x4E715B: mov     eax, ds:0B35F8Ch
0x4E7160: mov     cx, [eax+18h]
0x4E7164: and     cx, 0FFDFh
0x4E7169: or      cx, 10h
0x4E716D: mov     [eax+18h], cx
0x4E7171: mov     eax, ds:0B35F8Ch
0x4E7176: and     word ptr [eax+18h], 0FFF7h
0x4E717C: mov     eax, ds:0B35F8Ch
0x4E7181: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4E7185: mov     large fs:0, ecx
0x4E718C: pop     ecx
0x4E718D: pop     edi
0x4E718E: pop     esi
0x4E718F: add     esp, 10h
0x4E7192: retn
