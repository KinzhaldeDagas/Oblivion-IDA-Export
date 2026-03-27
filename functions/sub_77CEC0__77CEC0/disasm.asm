0x77CEC0: sub     esp, 8
0x77CEC3: push    edi
0x77CEC4: mov     edi, ecx
0x77CEC6: call    sub_77C9C0
0x77CECB: test    eax, eax
0x77CECD: jz      short loc_77CF33
0x77CECF: push    ebp
0x77CED0: mov     ebp, ds:0A2807Ch
0x77CED6: push    esi
0x77CED7: mov     ecx, eax
0x77CED9: call    sub_452A60
0x77CEDE: mov     ecx, [edi+20h]
0x77CEE1: push    eax
0x77CEE2: call    NiTMap_RemoveAt
0x77CEE7: mov     ecx, [edi+20h]
0x77CEEA: test    ecx, ecx
0x77CEEC: jz      short loc_77CF31
0x77CEEE: cmp     dword ptr [edi+1Ch], 0
0x77CEF2: lea     eax, [edi+1Ch]
0x77CEF5: jz      short loc_77CF31
0x77CEF7: lea     edx, [esp+14h+var_8]
0x77CEFB: push    edx
0x77CEFC: lea     edx, [esp+18h+var_4]
0x77CF00: push    edx
0x77CF01: push    eax
0x77CF02: mov     [esp+20h+var_8], 0
0x77CF0A: call    sub_7B2600
0x77CF0F: mov     esi, [esp+14h+var_8]
0x77CF13: test    esi, esi
0x77CF15: jz      short loc_77CF2B
0x77CF17: lea     eax, [esi+4]
0x77CF1A: push    eax; lpAddend
0x77CF1B: call    ebp ; InterlockedDecrement
0x77CF1D: test    eax, eax
0x77CF1F: jnz     short loc_77CF2B
0x77CF21: mov     edx, [esi]
0x77CF23: mov     eax, [edx]
0x77CF25: push    1
0x77CF27: mov     ecx, esi
0x77CF29: call    eax
0x77CF2B: test    esi, esi
0x77CF2D: mov     eax, esi
0x77CF2F: jnz     short loc_77CED7
0x77CF31: pop     esi
0x77CF32: pop     ebp
0x77CF33: mov     ecx, [edi+20h]
0x77CF36: pop     edi
0x77CF37: add     esp, 8
0x77CF3A: jmp     NiTMap_Clear
