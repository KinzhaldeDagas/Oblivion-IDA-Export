0x5EA1A0: push    ecx
0x5EA1A1: push    edi
0x5EA1A2: mov     edi, ecx
0x5EA1A4: cmp     dword ptr [edi+58h], 0
0x5EA1A8: mov     [esp+8+var_4], edi
0x5EA1AC: jz      loc_5EA267
0x5EA1B2: push    esi
0x5EA1B3: mov     esi, [esp+0Ch+a1]
0x5EA1B7: test    esi, esi
0x5EA1B9: jz      loc_5EA266
0x5EA1BF: mov     eax, [esi]
0x5EA1C1: mov     edx, [eax+8]
0x5EA1C4: push    ebx
0x5EA1C5: mov     ecx, esi
0x5EA1C7: call    edx
0x5EA1C9: mov     ebx, eax
0x5EA1CB: test    ebx, ebx
0x5EA1CD: jz      loc_5EA265
0x5EA1D3: push    ebp
0x5EA1D4: push    offset aSkinattachment; "SkinAttachment"
0x5EA1D9: push    esi; a1
0x5EA1DA: call    NiObjectNET_LookupObjectByName
0x5EA1DF: mov     ebp, eax
0x5EA1E1: add     esp, 8
0x5EA1E4: test    ebp, ebp
0x5EA1E6: jnz     short loc_5EA248
0x5EA1E8: movzx   eax, word ptr [ebx+0B6h]
0x5EA1EF: xor     edi, edi
0x5EA1F1: test    eax, eax
0x5EA1F3: jbe     short loc_5EA242
0x5EA1F5: test    ebp, ebp
0x5EA1F7: jnz     short loc_5EA244
0x5EA1F9: cmp     eax, edi
0x5EA1FB: jbe     short loc_5EA230
0x5EA1FD: mov     eax, [ebx+0B0h]
0x5EA203: mov     esi, [eax+edi*4]
0x5EA206: test    esi, esi
0x5EA208: jz      short loc_5EA230
0x5EA20A: mov     eax, [esi+8]
0x5EA20D: test    eax, eax
0x5EA20F: jz      short loc_5EA230
0x5EA211: push    3; MaxCount
0x5EA213: push    offset off_A6E684; Str2
0x5EA218: push    eax; Str1
0x5EA219: call    __strnicmp
0x5EA21E: add     esp, 0Ch
0x5EA221: test    eax, eax
0x5EA223: jz      short loc_5EA230
0x5EA225: mov     edx, [esi]
0x5EA227: mov     eax, [edx+8]
0x5EA22A: mov     ecx, esi
0x5EA22C: call    eax
0x5EA22E: mov     ebp, eax
0x5EA230: movzx   eax, word ptr [ebx+0B6h]
0x5EA237: add     edi, 1
0x5EA23A: cmp     edi, eax
0x5EA23C: jb      short loc_5EA1F5
0x5EA23E: test    ebp, ebp
0x5EA240: jnz     short loc_5EA244
0x5EA242: mov     ebp, ebx
0x5EA244: mov     edi, [esp+14h+var_4]
0x5EA248: mov     ecx, [edi+58h]
0x5EA24B: mov     esi, [ecx]
0x5EA24D: push    ebp
0x5EA24E: add     esi, 3A8h
0x5EA254: call    sub_480630
0x5EA259: mov     ecx, [edi+58h]
0x5EA25C: mov     edx, [esi]
0x5EA25E: add     esp, 4
0x5EA261: push    eax
0x5EA262: call    edx
0x5EA264: pop     ebp
0x5EA265: pop     ebx
0x5EA266: pop     esi
0x5EA267: pop     edi
0x5EA268: pop     ecx
0x5EA269: retn    4
