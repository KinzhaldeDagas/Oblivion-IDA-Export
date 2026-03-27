0x45EC50: sub     esp, 0Ch
0x45EC53: push    ebp
0x45EC54: push    esi
0x45EC55: push    edi
0x45EC56: mov     esi, ecx
0x45EC58: call    sub_57BAC0
0x45EC5D: xor     ebp, ebp
0x45EC5F: test    al, al
0x45EC61: jnz     short loc_45EC78
0x45EC63: mov     ecx, ds:0B333A0h
0x45EC69: push    ebp
0x45EC6A: push    ebp
0x45EC6B: push    1
0x45EC6D: call    sub_440AF0
0x45EC72: mov     ds:0B33B08h, ebp
0x45EC78: mov     ecx, ds:0B33A98h
0x45EC7E: call    sub_446C20
0x45EC83: mov     ecx, large fs:2Ch
0x45EC8A: mov     eax, ds:0BA9DE4h
0x45EC8F: mov     eax, [ecx+eax*4]
0x45EC92: mov     dl, [eax+184h]
0x45EC98: mov     byte ptr [eax+184h], 1
0x45EC9F: or      dword ptr [esi+18h], 1004h
0x45ECA6: mov     ecx, ds:0B333A0h
0x45ECAC: mov     [esp+18h+var_4], eax
0x45ECB0: mov     [esp+18h+var_9], dl
0x45ECB4: call    sub_4415C0
0x45ECB9: mov     ecx, ds:0B33A98h
0x45ECBF: xor     edi, edi
0x45ECC1: call    sub_446B10
0x45ECC6: test    eax, eax
0x45ECC8: jbe     short loc_45ECFB
0x45ECCA: lea     ebx, [ebx+0]
0x45ECD0: mov     ecx, ds:0B33A98h
0x45ECD6: push    ebp
0x45ECD7: push    edi
0x45ECD8: call    sub_446B20
0x45ECDD: mov     ecx, ds:0B33A98h
0x45ECE3: push    eax
0x45ECE4: call    TESDataHandler_LoadFile
0x45ECE9: mov     ecx, ds:0B33A98h
0x45ECEF: add     edi, 1
0x45ECF2: call    sub_446B10
0x45ECF7: cmp     edi, eax
0x45ECF9: jb      short loc_45ECD0
0x45ECFB: mov     eax, ds:0B33398h
0x45ED00: mov     edi, [eax+10h]
0x45ED03: push    ebx
0x45ED04: call    dword ptr ds:0A2808Ch
0x45ED0A: cmp     eax, edi
0x45ED0C: jnz     short loc_45ED13
0x45ED0E: mov     bl, [esi+18h]
0x45ED11: jmp     short loc_45ED19
0x45ED13: mov     ebx, [esi+18h]
0x45ED16: shr     ebx, 12h
0x45ED19: mov     ecx, ds:0B33398h
0x45ED1F: mov     edi, [ecx+10h]
0x45ED22: and     bl, 1
0x45ED25: call    dword ptr ds:0A2808Ch
0x45ED2B: cmp     eax, edi
0x45ED2D: jnz     short loc_45ED35
0x45ED2F: and     dword ptr [esi+18h], 0FFFFFFFEh
0x45ED33: jmp     short loc_45ED3C
0x45ED35: and     dword ptr [esi+18h], 0FFFBFFFFh
0x45ED3C: mov     edx, [esi+0ACh]
0x45ED42: xor     edi, edi
0x45ED44: cmp     [edx+0Ch], ebp
0x45ED47: jbe     short loc_45EDAC
0x45ED49: lea     esp, [esp+0]
0x45ED50: mov     eax, [esi+0ACh]
0x45ED56: mov     ecx, [eax+4]
0x45ED59: mov     ecx, [ecx+edi*4]
0x45ED5C: cmp     ecx, ebp
0x45ED5E: jz      short loc_45ED9E
0x45ED60: mov     al, [ecx+4]
0x45ED63: cmp     al, 30h ; '0'
0x45ED65: jz      short loc_45ED9E
0x45ED67: cmp     al, 31h ; '1'
0x45ED69: jz      short loc_45ED9E
0x45ED6B: cmp     al, 33h ; '3'
0x45ED6D: jz      short loc_45ED9E
0x45ED6F: cmp     al, 32h ; '2'
0x45ED71: jz      short loc_45ED9E
0x45ED73: cmp     al, 35h ; '5'
0x45ED75: jz      short loc_45ED9E
0x45ED77: mov     edx, [ecx+8]
0x45ED7A: shr     edx, 3
0x45ED7D: test    dl, 1
0x45ED80: jnz     short loc_45ED89
0x45ED82: mov     eax, [ecx]
0x45ED84: mov     edx, [eax+6Ch]
0x45ED87: call    edx
0x45ED89: mov     ecx, [esi+0ACh]
0x45ED8F: lea     eax, [esp+1Ch+var_8]
0x45ED93: push    eax
0x45ED94: push    edi
0x45ED95: mov     [esp+24h+var_8], ebp
0x45ED99: call    sub_446C50
0x45ED9E: mov     ecx, [esi+0ACh]
0x45EDA4: add     edi, 1
0x45EDA7: cmp     edi, [ecx+0Ch]
0x45EDAA: jb      short loc_45ED50
0x45EDAC: mov     edx, [esi+0ACh]
0x45EDB2: xor     edi, edi
0x45EDB4: cmp     [edx+0Ch], ebp
0x45EDB7: jbe     short loc_45EDF0
0x45EDB9: lea     esp, [esp+0]
0x45EDC0: mov     eax, [esi+0ACh]
0x45EDC6: mov     ecx, [eax+4]
0x45EDC9: mov     ecx, [ecx+edi*4]
0x45EDCC: cmp     ecx, ebp
0x45EDCE: jz      short loc_45EDE2
0x45EDD0: mov     edx, [ecx+8]
0x45EDD3: shr     edx, 3
0x45EDD6: test    dl, 1
0x45EDD9: jnz     short loc_45EDE2
0x45EDDB: mov     eax, [ecx]
0x45EDDD: mov     edx, [eax+6Ch]
0x45EDE0: call    edx
0x45EDE2: mov     eax, [esi+0ACh]
0x45EDE8: add     edi, 1
0x45EDEB: cmp     edi, [eax+0Ch]
0x45EDEE: jb      short loc_45EDC0
0x45EDF0: mov     ecx, ds:0B33398h
0x45EDF6: mov     edi, [ecx+10h]
0x45EDF9: call    dword ptr ds:0A2808Ch
0x45EDFF: cmp     eax, edi
0x45EE01: jnz     short loc_45EE13
0x45EE03: test    bl, bl
0x45EE05: jz      short loc_45EE0D
0x45EE07: or      dword ptr [esi+18h], 1
0x45EE0B: jmp     short loc_45EE27
0x45EE0D: and     dword ptr [esi+18h], 0FFFFFFFEh
0x45EE11: jmp     short loc_45EE27
0x45EE13: test    bl, bl
0x45EE15: jz      short loc_45EE20
0x45EE17: or      dword ptr [esi+18h], 40000h
0x45EE1E: jmp     short loc_45EE27
0x45EE20: and     dword ptr [esi+18h], 0FFFBFFFFh
0x45EE27: mov     eax, [esi+0ACh]
0x45EE2D: xor     ecx, ecx
0x45EE2F: cmp     [eax+0Ch], ebp
0x45EE32: pop     ebx
0x45EE33: jbe     short loc_45EE43
0x45EE35: mov     edx, [eax+4]
0x45EE38: mov     [edx+ecx*4], ebp
0x45EE3B: add     ecx, 1
0x45EE3E: cmp     ecx, [eax+0Ch]
0x45EE41: jb      short loc_45EE35
0x45EE43: mov     [eax+0Ch], ebp
0x45EE46: mov     [eax+10h], ebp
0x45EE49: mov     ecx, [esi+0ACh]
0x45EE4F: cmp     ecx, ebp
0x45EE51: jz      short loc_45EE5B
0x45EE53: mov     eax, [ecx]
0x45EE55: mov     edx, [eax]
0x45EE57: push    1
0x45EE59: call    edx
0x45EE5B: mov     [esi+0ACh], ebp
0x45EE61: mov     eax, ds:0B33A98h
0x45EE66: mov     eax, [eax+0BCh]
0x45EE6C: cmp     eax, ebp
0x45EE6E: jz      short loc_45EE9F
0x45EE70: lea     edi, [eax+4]
0x45EE73: cmp     edi, ebp
0x45EE75: jz      short loc_45EE9F
0x45EE77: mov     eax, [edi]
0x45EE79: cmp     eax, ebp
0x45EE7B: jz      short loc_45EE9F
0x45EE7D: mov     ecx, [eax+8]
0x45EE80: shr     ecx, 6
0x45EE83: test    cl, 1
0x45EE86: jz      short loc_45EE98
0x45EE88: mov     eax, [eax+20h]
0x45EE8B: cmp     eax, ebp
0x45EE8D: jz      short loc_45EE98
0x45EE8F: push    1
0x45EE91: mov     ecx, eax
0x45EE93: call    sub_4EF170
0x45EE98: mov     edi, [edi+4]
0x45EE9B: cmp     edi, ebp
0x45EE9D: jnz     short loc_45EE77
0x45EE9F: mov     ecx, ds:0B333C4h; this
0x45EEA5: call    TESObjectREFR_GetParentCell
0x45EEAA: mov     ecx, ds:0B333C4h; this
0x45EEB0: push    ebp; a2
0x45EEB1: mov     edi, eax
0x45EEB3: call    TESObjectREFR_ChangeCell
0x45EEB8: mov     ecx, ds:0B33A98h
0x45EEBE: call    sub_447CA0
0x45EEC3: mov     ecx, ds:0B333C4h; this
0x45EEC9: push    edi; a2
0x45EECA: call    TESObjectREFR_ChangeCell
0x45EECF: and     dword ptr [esi+18h], 0FFFFEFFBh
0x45EED6: mov     dl, [esp+18h+var_9]
0x45EEDA: mov     eax, [esp+18h+var_4]
0x45EEDE: pop     edi
0x45EEDF: mov     [eax+184h], dl
0x45EEE5: mov     byte ptr [esi+0A8h], 1
0x45EEEC: pop     esi
0x45EEED: pop     ebp
0x45EEEE: add     esp, 0Ch
0x45EEF1: retn
