0x7C1FF0: push    0FFFFFFFFh
0x7C1FF2: push    offset BSTextureManager_Create_SEH
0x7C1FF7: mov     eax, large fs:0
0x7C1FFD: push    eax
0x7C1FFE: push    ecx
0x7C1FFF: push    ebx
0x7C2000: push    esi
0x7C2001: push    edi
0x7C2002: mov     eax, ds:0B30AACh
0x7C2007: xor     eax, esp
0x7C2009: push    eax
0x7C200A: lea     eax, [esp+20h+var_C]
0x7C200E: mov     large fs:0, eax
0x7C2014: mov     esi, ecx
0x7C2016: mov     [esp+20h+var_10], esi
0x7C201A: xor     edi, edi
0x7C201C: mov     [esi+0Ch], edi
0x7C201F: mov     [esi+4], edi
0x7C2022: mov     [esi+8], edi
0x7C2025: mov     dword ptr [esi], offset ??_7?$NiTPointerList@PAURenderedTextureData@BSTextureManager@@@@6B@
0x7C202B: mov     [esp+20h+var_4], edi
0x7C202F: mov     [esi+1Ch], edi
0x7C2032: mov     [esi+14h], edi
0x7C2035: mov     [esi+18h], edi
0x7C2038: mov     dword ptr [esi+10h], offset ??_7?$NiTPointerList@PAURenderedTextureData@BSTextureManager@@@@6B@
0x7C203F: mov     eax, offset ??_7?$NiTPointerList@V?$NiPointer@VBSRenderedTexture@@@@@@6B@
0x7C2044: mov     [esi+2Ch], edi
0x7C2047: mov     [esi+24h], edi
0x7C204A: mov     [esi+28h], edi
0x7C204D: mov     [esi+20h], eax
0x7C2050: mov     [esi+3Ch], edi
0x7C2053: mov     [esi+34h], edi
0x7C2056: mov     [esi+38h], edi
0x7C2059: mov     [esi+30h], eax
0x7C205C: lea     ebx, [esi+40h]
0x7C205F: mov     [ebx], edi
0x7C2061: mov     [esi+44h], edi
0x7C2064: mov     ecx, ds:0B3F928h
0x7C206A: mov     eax, [ecx]
0x7C206C: mov     edx, [eax+7Ch]
0x7C206F: mov     byte ptr [esp+20h+var_4], 5
0x7C2074: call    edx
0x7C2076: cmp     dword ptr ds:0B34FC0h, 2
0x7C207D: mov     ecx, eax
0x7C207F: jl      short loc_7C20B2
0x7C2081: mov     eax, ds:0B3F928h
0x7C2086: mov     ds:0B294ECh, edi
0x7C208C: mov     edx, [ecx]
0x7C208E: push    eax
0x7C208F: mov     eax, [edx+70h]
0x7C2092: push    edi
0x7C2093: call    eax
0x7C2095: push    eax
0x7C2096: call    sub_70BE00
0x7C209B: add     esp, 8
0x7C209E: push    eax; a2
0x7C209F: mov     ecx, ebx; this
0x7C20A1: call    NiSmartPointer_Set??
0x7C20A6: mov     dword ptr ds:0B294ECh, 1
0x7C20B0: jmp     short loc_7C20C1
0x7C20B2: mov     edx, [ecx]
0x7C20B4: mov     eax, [edx+74h]
0x7C20B7: call    eax
0x7C20B9: push    eax; a2
0x7C20BA: mov     ecx, ebx; this
0x7C20BC: call    NiSmartPointer_Set??
0x7C20C1: mov     ebx, [esi+44h]
0x7C20C4: cmp     ebx, edi
0x7C20C6: jz      short loc_7C20E7
0x7C20C8: lea     ecx, [ebx+4]
0x7C20CB: push    ecx; lpAddend
0x7C20CC: call    dword ptr ds:0A2807Ch
0x7C20D2: test    eax, eax
0x7C20D4: jnz     short loc_7C20E4
0x7C20D6: cmp     ebx, edi
0x7C20D8: jz      short loc_7C20E4
0x7C20DA: mov     edx, [ebx]
0x7C20DC: mov     eax, [edx]
0x7C20DE: push    1
0x7C20E0: mov     ecx, ebx
0x7C20E2: call    eax
0x7C20E4: mov     [esi+44h], edi
0x7C20E7: mov     eax, esi
0x7C20E9: mov     ecx, dword ptr [esp+20h+var_C]
0x7C20ED: mov     large fs:0, ecx
0x7C20F4: pop     ecx
0x7C20F5: pop     edi
0x7C20F6: pop     esi
0x7C20F7: pop     ebx
0x7C20F8: add     esp, 10h
0x7C20FB: retn
