0x676D90: push    edi
0x676D91: add     ecx, 68h ; 'h'; this
0x676D94: call    sub_7616D0
0x676D99: mov     edi, eax
0x676D9B: test    edi, edi
0x676D9D: jz      loc_676E3C
0x676DA3: push    esi
0x676DA4: mov     ecx, [edi]
0x676DA6: test    ecx, ecx
0x676DA8: jz      loc_676E3B
0x676DAE: mov     eax, [ecx]
0x676DB0: mov     edx, [eax+190h]
0x676DB6: xor     esi, esi
0x676DB8: call    edx
0x676DBA: test    al, al
0x676DBC: jz      short loc_676DC0
0x676DBE: mov     esi, [edi]
0x676DC0: test    esi, esi
0x676DC2: mov     edi, [edi+4]
0x676DC5: jz      short loc_676E33
0x676DC7: mov     ecx, esi
0x676DC9: call    sub_5E6B40
0x676DCE: test    al, al
0x676DD0: jz      short loc_676E33
0x676DD2: mov     ecx, [esi+58h]
0x676DD5: mov     eax, [ecx]
0x676DD7: mov     edx, [eax+0CCh]
0x676DDD: call    edx
0x676DDF: test    eax, eax
0x676DE1: jz      short loc_676E33
0x676DE3: mov     ecx, [esi+58h]
0x676DE6: mov     eax, [ecx]
0x676DE8: mov     edx, [eax+0CCh]
0x676DEE: call    edx
0x676DF0: mov     edx, [eax]
0x676DF2: mov     ecx, eax
0x676DF4: mov     eax, [edx+190h]
0x676DFA: call    eax
0x676DFC: test    al, al
0x676DFE: jz      short loc_676E33
0x676E00: mov     ecx, [esi+58h]
0x676E03: mov     edx, [ecx]
0x676E05: mov     eax, [edx+0CCh]
0x676E0B: call    eax
0x676E0D: test    eax, eax
0x676E0F: jz      short loc_676E33
0x676E11: mov     ecx, eax; this
0x676E13: call    TESObjectREFR_GetName
0x676E18: push    eax
0x676E19: push    offset aIsTalkingTo; "is talking to "
0x676E1E: mov     ecx, esi; this
0x676E20: call    TESObjectREFR_GetName
0x676E25: push    eax
0x676E26: push    offset aSS_8; "%s %s%"
0x676E2B: call    Interface_ConsolePrint
0x676E30: add     esp, 10h
0x676E33: test    edi, edi
0x676E35: jnz     loc_676DA4
0x676E3B: pop     esi
0x676E3C: pop     edi
0x676E3D: retn
