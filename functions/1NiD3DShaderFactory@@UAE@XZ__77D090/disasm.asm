0x77D090: sub     esp, 0Ch
0x77D093: push    esi
0x77D094: mov     esi, ecx
0x77D096: mov     ecx, [esi+18h]
0x77D099: push    edi
0x77D09A: mov     dword ptr [esi], offset ??_7NiD3DShaderFactory@@6B@; const NiD3DShaderFactory::`vftable'
0x77D0A0: call    NiTMap_Clear
0x77D0A5: mov     ecx, esi
0x77D0A7: call    sub_77CEC0
0x77D0AC: mov     ecx, [esi+18h]
0x77D0AF: test    ecx, ecx
0x77D0B1: jz      short loc_77D0BB
0x77D0B3: mov     eax, [ecx]
0x77D0B5: mov     edx, [eax]
0x77D0B7: push    1
0x77D0B9: call    edx
0x77D0BB: mov     ecx, [esi+20h]
0x77D0BE: test    ecx, ecx
0x77D0C0: jz      short loc_77D0CA
0x77D0C2: mov     eax, [ecx]
0x77D0C4: mov     edx, [eax]
0x77D0C6: push    1
0x77D0C8: call    edx
0x77D0CA: mov     edx, [esi+28h]
0x77D0CD: lea     edi, [esi+24h]
0x77D0D0: xor     eax, eax
0x77D0D2: test    edx, edx
0x77D0D4: push    ebx
0x77D0D5: jbe     short loc_77D0EF
0x77D0D7: mov     ebx, [edi+8]
0x77D0DA: mov     ecx, ebx
0x77D0DC: lea     esp, [esp+0]
0x77D0E0: cmp     dword ptr [ecx], 0
0x77D0E3: jnz     short loc_77D153
0x77D0E5: add     eax, 1
0x77D0E8: add     ecx, 4
0x77D0EB: cmp     eax, edx
0x77D0ED: jb      short loc_77D0E0
0x77D0EF: xor     eax, eax
0x77D0F1: test    eax, eax
0x77D0F3: mov     [esp+18h+var_8], eax
0x77D0F7: pop     ebx
0x77D0F8: jz      short loc_77D139
0x77D0FA: lea     ebx, [ebx+0]
0x77D100: lea     eax, [esp+14h+var_C]
0x77D104: push    eax
0x77D105: lea     ecx, [esp+18h+var_4]
0x77D109: push    ecx
0x77D10A: lea     edx, [esp+1Ch+var_8]
0x77D10E: push    edx
0x77D10F: mov     ecx, edi
0x77D111: mov     [esp+20h+var_C], 0
0x77D119: call    sub_452600
0x77D11E: cmp     [esp+14h+var_C], 0
0x77D123: jz      short loc_77D132
0x77D125: mov     eax, [esp+14h+var_4]
0x77D129: push    eax
0x77D12A: call    sub_77CB50
0x77D12F: add     esp, 4
0x77D132: cmp     [esp+14h+var_8], 0
0x77D137: jnz     short loc_77D100
0x77D139: mov     ecx, edi
0x77D13B: mov     dword ptr [esi+14h], 0
0x77D142: call    ??1?$NiTStringMap@PAVNiD3DGlobalConstantEntry@@@@UAE@XZ; NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>(void)
0x77D147: pop     edi
0x77D148: mov     ecx, esi; this
0x77D14A: pop     esi
0x77D14B: add     esp, 0Ch
0x77D14E: jmp     ??1NiShaderFactory@@UAE@XZ; NiShaderFactory::~NiShaderFactory(void)
0x77D153: mov     eax, [ebx+eax*4]
0x77D156: jmp     short loc_77D0F1
