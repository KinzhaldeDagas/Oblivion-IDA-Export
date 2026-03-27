0x4BCEF0: sub     esp, 10h
0x4BCEF3: push    ebx
0x4BCEF4: push    edi
0x4BCEF5: mov     edi, [esp+18h+arg_0]
0x4BCEF9: xor     ebx, ebx
0x4BCEFB: cmp     edi, ebx
0x4BCEFD: jz      loc_4BD043
0x4BCF03: cmp     [edi+28h], bl
0x4BCF06: jz      loc_4BD043
0x4BCF0C: cmp     [edi+20h], ebx
0x4BCF0F: jz      loc_4BD043
0x4BCF15: cmp     [edi+1Ch], ebx
0x4BCF18: jz      loc_4BD043
0x4BCF1E: movzx   eax, word ptr [edi+4]
0x4BCF22: movzx   ecx, word ptr [edi]
0x4BCF25: push    ebp
0x4BCF26: push    esi
0x4BCF27: push    eax
0x4BCF28: push    ecx
0x4BCF29: call    sub_7B2110
0x4BCF2E: movzx   edx, word ptr [edi+4]
0x4BCF32: mov     [esp+28h+var_4], eax
0x4BCF36: movzx   eax, word ptr [edi]
0x4BCF39: push    edx
0x4BCF3A: push    eax
0x4BCF3B: call    sub_4EF1D0
0x4BCF40: lea     ebp, [edi+0Ch]
0x4BCF43: add     esp, 10h
0x4BCF46: mov     ecx, ebp
0x4BCF48: mov     [esp+20h+var_8], eax
0x4BCF4C: call    sub_6A9030
0x4BCF51: cmp     eax, ebx
0x4BCF53: mov     [esp+20h+var_C], eax
0x4BCF57: jz      loc_4BD006
0x4BCF5D: lea     ecx, [ecx+0]
0x4BCF60: lea     ecx, [esp+20h+var_10]
0x4BCF64: push    ecx
0x4BCF65: lea     edx, [esp+24h+arg_0]
0x4BCF69: push    edx
0x4BCF6A: lea     eax, [esp+28h+var_C]
0x4BCF6E: push    eax
0x4BCF6F: mov     ecx, ebp
0x4BCF71: mov     [esp+2Ch+arg_0], ebx
0x4BCF75: mov     [esp+2Ch+var_10], ebx
0x4BCF79: call    sub_452600
0x4BCF7E: mov     ecx, [esp+20h+arg_0]
0x4BCF82: cmp     ecx, ebx
0x4BCF84: mov     esi, [esp+20h+var_10]
0x4BCF88: jz      short loc_4BCFC0
0x4BCF8A: cmp     esi, ebx
0x4BCF8C: jz      short loc_4BCFFC
0x4BCF8E: mov     eax, [esi+30h]
0x4BCF91: cmp     eax, ebx
0x4BCF93: jz      short loc_4BCFC0
0x4BCF95: mov     ebx, [edi+20h]
0x4BCF98: mov     edx, [ecx]
0x4BCF9A: mov     edx, [edx+11Ch]
0x4BCFA0: push    ebx
0x4BCFA1: mov     ebx, [edi+1Ch]
0x4BCFA4: push    ebx
0x4BCFA5: mov     ebx, [esp+28h+var_8]
0x4BCFA9: push    ebx
0x4BCFAA: mov     ebx, [esp+2Ch+var_4]
0x4BCFAE: push    ebx
0x4BCFAF: push    eax
0x4BCFB0: mov     eax, [esi+24h]
0x4BCFB3: push    eax
0x4BCFB4: mov     eax, [esi+4]
0x4BCFB7: push    eax
0x4BCFB8: mov     eax, [esi+14h]
0x4BCFBB: push    eax
0x4BCFBC: call    edx
0x4BCFBE: xor     ebx, ebx
0x4BCFC0: cmp     esi, ebx
0x4BCFC2: jz      short loc_4BCFFC
0x4BCFC4: mov     eax, [esi+24h]
0x4BCFC7: push    eax
0x4BCFC8: mov     dword ptr [esi+20h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4BCFCF: call    FormHeapFree
0x4BCFD4: mov     ecx, [esi+14h]
0x4BCFD7: push    ecx
0x4BCFD8: mov     dword ptr [esi+10h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4BCFDF: call    FormHeapFree
0x4BCFE4: mov     edx, [esi+4]
0x4BCFE7: push    edx
0x4BCFE8: mov     dword ptr [esi], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4BCFEE: call    FormHeapFree
0x4BCFF3: push    esi
0x4BCFF4: call    FormHeapFree
0x4BCFF9: add     esp, 10h
0x4BCFFC: cmp     [esp+20h+var_C], ebx
0x4BD000: jnz     loc_4BCF60
0x4BD006: mov     ecx, ebp
0x4BD008: call    NiTMap_Clear
0x4BD00D: mov     edi, [edi+20h]
0x4BD010: cmp     dword ptr [edi+4], 2
0x4BD014: mov     esi, ds:0B34424h
0x4BD01A: jbe     short loc_4BD02B
0x4BD01C: mov     eax, [esi]
0x4BD01E: mov     edx, [eax+84h]
0x4BD024: push    1
0x4BD026: push    edi
0x4BD027: mov     ecx, esi
0x4BD029: call    edx
0x4BD02B: fldz
0x4BD02D: push    1; a3
0x4BD02F: push    ecx
0x4BD030: fstp    [esp+28h+a2]; a2
0x4BD033: mov     ecx, esi; this
0x4BD035: call    NiAVObject_UpdateNiAVObject
0x4BD03A: mov     ecx, esi; this
0x4BD03C: call    NiAVObject_InitializePropertyState
0x4BD041: pop     esi
0x4BD042: pop     ebp
0x4BD043: pop     edi
0x4BD044: pop     ebx
0x4BD045: add     esp, 10h
0x4BD048: retn    4
