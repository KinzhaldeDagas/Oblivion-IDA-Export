0x742130: push    0FFFFFFFFh
0x742132: push    offset SEH_8C8970
0x742137: mov     eax, large fs:0
0x74213D: push    eax
0x74213E: push    ecx
0x74213F: push    esi
0x742140: push    edi
0x742141: mov     eax, ds:0B30AACh
0x742146: xor     eax, esp
0x742148: push    eax
0x742149: lea     eax, [esp+1Ch+var_C]
0x74214D: mov     large fs:0, eax
0x742153: mov     edi, ecx
0x742155: push    0C0h ; 'À'; Size
0x74215A: call    FormHeapAlloc
0x74215F: mov     esi, eax
0x742161: add     esp, 4
0x742164: mov     [esp+1Ch+var_10], esi
0x742168: test    esi, esi
0x74216A: mov     [esp+1Ch+var_4], 0
0x742172: jz      short loc_742183
0x742174: mov     ecx, esi
0x742176: call    NiGeometry__NiGeometry_0
0x74217B: mov     dword ptr [esi], offset ??_7NiParticles@@6B@; const NiParticles::`vftable'
0x742181: jmp     short loc_742185
0x742183: xor     esi, esi
0x742185: mov     eax, [esp+1Ch+arg_0]
0x742189: push    eax
0x74218A: push    esi
0x74218B: mov     ecx, edi
0x74218D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x742195: call    sub_723020
0x74219A: mov     eax, esi
0x74219C: mov     ecx, [esp+1Ch+var_C]
0x7421A0: mov     large fs:0, ecx
0x7421A7: pop     ecx
0x7421A8: pop     edi
0x7421A9: pop     esi
0x7421AA: add     esp, 10h
0x7421AD: retn    4
