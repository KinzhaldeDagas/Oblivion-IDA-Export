0x64EC50: push    esi
0x64EC51: mov     esi, ecx
0x64EC53: cmp     dword ptr [esi+2Ch], 0
0x64EC57: push    edi
0x64EC58: mov     edi, [esp+8+arg_0]
0x64EC5C: jnz     short loc_64EC69
0x64EC5E: mov     eax, [esi]
0x64EC60: mov     edx, [eax+558h]
0x64EC66: push    edi
0x64EC67: call    edx
0x64EC69: mov     eax, [esi+2Ch]
0x64EC6C: test    eax, eax
0x64EC6E: jz      loc_64EDFB
0x64EC74: mov     eax, [eax+8]
0x64EC77: shr     eax, 5
0x64EC7A: test    al, 1
0x64EC7C: jnz     loc_64EDFB
0x64EC82: mov     edx, [esi]
0x64EC84: mov     eax, [edx+184h]
0x64EC8A: push    ebx
0x64EC8B: mov     ecx, esi
0x64EC8D: call    eax
0x64EC8F: mov     ebx, eax
0x64EC91: test    ebx, ebx
0x64EC93: mov     [esp+0Ch+arg_0], ebx
0x64EC97: jz      short loc_64ECD3
0x64EC99: test    byte ptr [ebx+1Eh], 1
0x64EC9D: jz      short loc_64ECD3
0x64EC9F: mov     ecx, ds:0B333C4h
0x64ECA5: push    edi
0x64ECA6: call    sub_663A60
0x64ECAB: test    al, al
0x64ECAD: jnz     loc_64ED6F
0x64ECB3: mov     ecx, ds:0B333C4h
0x64ECB9: call    sub_663A00
0x64ECBE: cmp     eax, ds:0B36A80h
0x64ECC4: jge     loc_64ED6F
0x64ECCA: push    0
0x64ECCC: mov     ecx, ebx
0x64ECCE: call    sub_5668E0
0x64ECD3: mov     edx, [edi]
0x64ECD5: mov     eax, [edx+334h]
0x64ECDB: push    1
0x64ECDD: mov     ecx, edi
0x64ECDF: call    eax
0x64ECE1: test    al, al
0x64ECE3: jnz     loc_64ED77
0x64ECE9: cmp     dword ptr [esi+2Ch], 0
0x64ECED: jz      short loc_64ED1C
0x64ECEF: mov     ecx, [esi+8]
0x64ECF2: mov     ecx, [ecx+24h]
0x64ECF5: test    ecx, ecx
0x64ECF7: jz      short loc_64ED77
0x64ECF9: call    sub_569740
0x64ECFE: cmp     eax, 2
0x64ED01: jge     short loc_64ED77
0x64ED03: fld     dword ptr ds:0A30634h
0x64ED09: push    ecx
0x64ED0A: mov     ecx, [esi+8]
0x64ED0D: fstp    [esp+10h+var_10]; float
0x64ED10: push    0; char
0x64ED12: push    edi; int
0x64ED13: call    sub_566DC0
0x64ED18: test    al, al
0x64ED1A: jz      short loc_64ED77
0x64ED1C: cmp     byte ptr [esp+0Ch+arg_8], 0
0x64ED21: jz      short loc_64ED32
0x64ED23: mov     edx, [esi]
0x64ED25: mov     eax, [edx+188h]
0x64ED2B: push    1
0x64ED2D: push    edi
0x64ED2E: mov     ecx, esi
0x64ED30: call    eax
0x64ED32: mov     ecx, [esi+8]
0x64ED35: call    sub_5660A0
0x64ED3A: test    al, al
0x64ED3C: jz      short loc_64ED77
0x64ED3E: mov     ecx, [esi+8]
0x64ED41: test    ecx, ecx
0x64ED43: jz      short loc_64ED4E
0x64ED45: mov     edx, [ecx]
0x64ED47: mov     eax, [edx+10h]
0x64ED4A: push    1
0x64ED4C: call    eax
0x64ED4E: mov     dword ptr [esi+8], 0
0x64ED55: mov     edx, [edi]
0x64ED57: mov     eax, [edx+44h]
0x64ED5A: push    30000h
0x64ED5F: mov     ecx, edi
0x64ED61: call    eax
0x64ED63: mov     edx, [esi]
0x64ED65: mov     eax, [edx+18h]
0x64ED68: push    0
0x64ED6A: push    edi
0x64ED6B: mov     ecx, esi
0x64ED6D: call    eax
0x64ED6F: pop     ebx
0x64ED70: pop     edi
0x64ED71: xor     al, al
0x64ED73: pop     esi
0x64ED74: retn    0Ch
0x64ED77: push    2
0x64ED79: push    edi
0x64ED7A: mov     ecx, ebx
0x64ED7C: call    sub_5677B0
0x64ED81: call    Double_To_SInt32
0x64ED86: mov     [esp+0Ch+arg_8], eax
0x64ED8A: mov     eax, [esi+2Ch]
0x64ED8D: test    eax, eax
0x64ED8F: jz      short loc_64ED6F
0x64ED91: push    0
0x64ED93: push    eax
0x64ED94: mov     ecx, edi
0x64ED96: call    TesObjectREF_GetDistance
0x64ED9B: fild    [esp+0Ch+arg_8]
0x64ED9F: fcompp
0x64EDA1: fnstsw  ax
0x64EDA3: test    ah, 5
0x64EDA6: jp      short loc_64ED6F
0x64EDA8: fld     dword ptr ds:0A30634h
0x64EDAE: mov     ebx, [esi+2Ch]
0x64EDB1: push    ebp
0x64EDB2: mov     ebp, [esi]
0x64EDB4: push    ecx
0x64EDB5: mov     ecx, [esp+14h+arg_0]
0x64EDB9: fstp    [esp+14h+var_14]
0x64EDBC: push    1
0x64EDBE: push    edi
0x64EDBF: call    sub_5677B0
0x64EDC4: push    ecx
0x64EDC5: mov     ecx, [esi+2Ch]; this
0x64EDC8: fstp    [esp+18h+var_18]
0x64EDCB: call    TESObjectREFR_GetWorldSpace
0x64EDD0: mov     ecx, [esi+2Ch]; this
0x64EDD3: push    eax
0x64EDD4: call    TESObjectREFR_GetParentCell
0x64EDD9: mov     edx, [ebx]
0x64EDDB: push    eax
0x64EDDC: mov     eax, [edx+174h]
0x64EDE2: mov     ecx, ebx
0x64EDE4: call    eax
0x64EDE6: mov     edx, [ebp+418h]
0x64EDEC: push    eax
0x64EDED: push    edi
0x64EDEE: mov     ecx, esi
0x64EDF0: call    edx
0x64EDF2: pop     ebp
0x64EDF3: pop     ebx
0x64EDF4: pop     edi
0x64EDF5: xor     al, al
0x64EDF7: pop     esi
0x64EDF8: retn    0Ch
0x64EDFB: cmp     byte ptr [esp+8+arg_8], 0
0x64EE00: jz      loc_64ED70
0x64EE06: mov     eax, [esi]
0x64EE08: mov     edx, [eax+188h]
0x64EE0E: push    1
0x64EE10: push    edi
0x64EE11: mov     ecx, esi
0x64EE13: call    edx
0x64EE15: pop     edi
0x64EE16: xor     al, al
0x64EE18: pop     esi
0x64EE19: retn    0Ch
