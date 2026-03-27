0x734B00: push    0FFFFFFFFh
0x734B02: push    offset SEH_734B00
0x734B07: mov     eax, large fs:0
0x734B0D: push    eax
0x734B0E: push    ecx
0x734B0F: push    ebx
0x734B10: push    ebp
0x734B11: push    esi
0x734B12: push    edi
0x734B13: mov     eax, ds:0B30AACh
0x734B18: xor     eax, esp
0x734B1A: push    eax
0x734B1B: lea     eax, [esp+24h+var_C]
0x734B1F: mov     large fs:0, eax
0x734B25: mov     ebp, ecx
0x734B27: mov     [esp+24h+var_10], ebp
0x734B2B: lea     eax, [ebp+80h]
0x734B31: mov     dword ptr [ebp+0], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x734B38: xor     ebx, ebx
0x734B3A: push    eax; lpCriticalSection
0x734B3B: mov     [eax+78h], ebx
0x734B3E: mov     [eax+7Ch], ebx
0x734B41: call    dword ptr ds:0A28064h
0x734B47: lea     edi, [ebp+11Ch]
0x734B4D: mov     ecx, edi
0x734B4F: mov     [esp+24h+var_4], ebx
0x734B53: mov     dword ptr [ebp+0], offset ??_7NiTGAReader@@6B@; const NiTGAReader::`vftable'
0x734B5A: call    InitSurfacEData
0x734B5F: mov     ecx, 11h
0x734B64: mov     esi, offset unk_B25E48
0x734B69: mov     [ebp+100h], bl
0x734B6F: mov     [ebp+101h], bl
0x734B75: mov     [ebp+102h], bl
0x734B7B: mov     [ebp+104h], bx
0x734B82: mov     [ebp+106h], bx
0x734B89: mov     [ebp+108h], bl
0x734B8F: mov     [ebp+10Ah], bx
0x734B96: mov     [ebp+10Ch], bx
0x734B9D: mov     [ebp+10Eh], bx
0x734BA4: mov     [ebp+110h], bx
0x734BAB: mov     [ebp+112h], bl
0x734BB1: mov     [ebp+113h], bl
0x734BB7: mov     [ebp+114h], bl
0x734BBD: mov     [ebp+115h], bl
0x734BC3: mov     [ebp+116h], bl
0x734BC9: mov     [ebp+117h], bl
0x734BCF: mov     [ebp+118h], bl
0x734BD5: rep movsd
0x734BD7: mov     [ebp+160h], ebx
0x734BDD: mov     [ebp+164h], ebx
0x734BE3: mov     [ebp+168h], ebx
0x734BE9: mov     [ebp+16Ch], ebx
0x734BEF: mov     [ebp+170h], ebx
0x734BF5: mov     [ebp+174h], ebx
0x734BFB: mov     [ebp+178h], bl
0x734C01: mov     [ebp+179h], bl
0x734C07: mov     [ebp+17Ah], bl
0x734C0D: mov     [ebp+17Bh], bl
0x734C13: mov     [ebp+17Ch], bl
0x734C19: mov     eax, ebp
0x734C1B: mov     ecx, [esp+24h+var_C]
0x734C1F: mov     large fs:0, ecx
0x734C26: pop     ecx
0x734C27: pop     edi
0x734C28: pop     esi
0x734C29: pop     ebp
0x734C2A: pop     ebx
0x734C2B: add     esp, 10h
0x734C2E: retn
