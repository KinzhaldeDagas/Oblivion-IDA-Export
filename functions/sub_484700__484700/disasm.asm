0x484700: push    esi
0x484701: mov     esi, [ecx]
0x484703: test    esi, esi
0x484705: push    edi
0x484706: jz      short loc_48472D
0x484708: mov     edi, [esi]
0x48470A: test    edi, edi
0x48470C: jz      short loc_48472D
0x48470E: mov     ecx, edi
0x484710: call    ExtraDataList_GetOwner
0x484715: test    eax, eax
0x484717: jz      short loc_484726
0x484719: push    0
0x48471B: mov     ecx, edi
0x48471D: call    ExtraDataList_HasWorn
0x484722: test    al, al
0x484724: jnz     short loc_484732
0x484726: mov     esi, [esi+4]
0x484729: test    esi, esi
0x48472B: jnz     short loc_484708
0x48472D: pop     edi
0x48472E: xor     al, al
0x484730: pop     esi
0x484731: retn
0x484732: pop     edi
0x484733: mov     al, 1
0x484735: pop     esi
0x484736: retn
