0x622E30: sub     esp, 14h
0x622E33: push    esi
0x622E34: mov     esi, ecx
0x622E36: cmp     dword ptr [esi+6Ch], 0Bh
0x622E3A: jnz     loc_622F21
0x622E40: fldz
0x622E42: push    edi; a5
0x622E43: fcomp   dword ptr [esi+184h]
0x622E49: fnstsw  ax
0x622E4B: test    ah, 41h
0x622E4E: jnz     short loc_622E6A
0x622E50: mov     edi, [esi+3Ch]; a1
0x622E53: push    0; a4
0x622E55: call    sub_6135F0
0x622E5A: push    eax; a3
0x622E5B: push    edi; a2
0x622E5C: call    TESObjectREFR_GetDistanceBetween?
0x622E61: fstp    dword ptr [esi+184h]
0x622E67: add     esp, 0Ch
0x622E6A: fld     dword ptr [esi+184h]
0x622E70: mov     ecx, esi
0x622E72: fstp    [esp+1Ch+var_10]
0x622E76: call    sub_615520
0x622E7B: cmp     byte ptr [esi+49h], 0
0x622E7F: fstp    [esp+1Ch+var_14]
0x622E83: jnz     loc_6231CB
0x622E89: cmp     dword ptr [esi+74h], 1
0x622E8D: jz      loc_6231CB
0x622E93: mov     ecx, [esi+3Ch]
0x622E96: push    ebx
0x622E97: call    sub_5E1E90
0x622E9C: test    al, al
0x622E9E: jz      loc_622F26
0x622EA4: mov     ecx, esi
0x622EA6: call    sub_614290
0x622EAB: test    al, al
0x622EAD: setz    al
0x622EB0: mov     ecx, esi
0x622EB2: mov     [esi+116h], al
0x622EB8: call    sub_6135F0
0x622EBD: test    eax, eax
0x622EBF: jz      short loc_622EEE
0x622EC1: mov     ecx, esi
0x622EC3: call    sub_6135F0
0x622EC8: mov     ecx, eax
0x622ECA: call    Actor_IsSwimming
0x622ECF: test    al, al
0x622ED1: jz      short loc_622EEE
0x622ED3: cmp     byte ptr [esi+116h], 0
0x622EDA: jnz     short loc_622EEE
0x622EDC: mov     ecx, [esi+1A8h]
0x622EE2: cmp     ecx, ds:0B372F0h
0x622EE8: jge     loc_623006
0x622EEE: fld     dword ptr [esi+44h]
0x622EF1: fsub    dword ptr [esi+0D4h]
0x622EF7: fld     dword ptr [esi+0D8h]
0x622EFD: fcompp
0x622EFF: fnstsw  ax
0x622F01: test    ah, 5
0x622F04: jp      short loc_622F1F
0x622F06: mov     ebx, [esi+3Ch]
0x622F09: mov     edi, [ebx]
0x622F0B: mov     ecx, esi
0x622F0D: add     edi, 340h
0x622F13: call    sub_6135F0
0x622F18: mov     edx, [edi]
0x622F1A: push    eax
0x622F1B: mov     ecx, ebx
0x622F1D: call    edx
0x622F1F: pop     ebx
0x622F20: pop     edi
0x622F21: pop     esi
0x622F22: add     esp, 14h
0x622F25: retn
0x622F26: mov     ecx, [esi+3Ch]; this
0x622F29: call    sub_5E3400
0x622F2E: test    al, al
0x622F30: jnz     short loc_622F77
0x622F32: mov     ecx, esi
0x622F34: call    sub_6135F0
0x622F39: test    eax, eax
0x622F3B: jz      short loc_622F77
0x622F3D: mov     ecx, esi
0x622F3F: call    sub_6135F0
0x622F44: mov     ecx, eax
0x622F46: call    Actor_IsSwimming
0x622F4B: test    al, al
0x622F4D: jnz     short loc_622F77
0x622F4F: mov     ecx, esi
0x622F51: call    sub_614290
0x622F56: test    al, al
0x622F58: setz    al
0x622F5B: test    al, al
0x622F5D: mov     [esi+116h], al
0x622F63: jnz     short loc_622F77
0x622F65: mov     eax, [esi+1A8h]
0x622F6B: cmp     eax, ds:0B372F0h
0x622F71: jge     loc_623006
0x622F77: fld     [esp+20h+var_14]
0x622F7B: push    0; int
0x622F7D: sub     esp, 8
0x622F80: fstp    [esp+2Ch+var_28]; float
0x622F84: mov     ecx, esi
0x622F86: fld     [esp+2Ch+var_10]
0x622F8A: fstp    [esp+2Ch+var_2C]; float
0x622F8D: call    sub_613440
0x622F92: test    al, al
0x622F94: jz      short loc_622FAD
0x622F96: cmp     byte ptr [esi+116h], 0
0x622F9D: jnz     short loc_622FAD
0x622F9F: mov     ecx, [esi+1A8h]
0x622FA5: cmp     ecx, ds:0B372F0h
0x622FAB: jge     short loc_623006
0x622FAD: mov     ecx, esi
0x622FAF: call    sub_6135F0
0x622FB4: test    eax, eax
0x622FB6: jz      loc_622F1F
0x622FBC: fld     dword ptr [esi+44h]
0x622FBF: fsub    dword ptr [esi+0D4h]
0x622FC5: fld     dword ptr [esi+0D8h]
0x622FCB: fcompp
0x622FCD: fnstsw  ax
0x622FCF: test    ah, 5
0x622FD2: jp      loc_622F1F
0x622FD8: cmp     dword ptr [esi+74h], 0
0x622FDC: jz      loc_622F1F
0x622FE2: mov     ecx, esi
0x622FE4: call    sub_614290
0x622FE9: test    al, al
0x622FEB: jnz     short loc_622FF8
0x622FED: mov     ecx, esi
0x622FEF: call    loc_622820
0x622FF4: test    al, al
0x622FF6: jz      short loc_623016
0x622FF8: mov     edx, [esi+1A8h]
0x622FFE: cmp     edx, ds:0B372F0h
0x623004: jl      short loc_623016
0x623006: push    0
0x623008: mov     ecx, esi
0x62300A: call    sub_619920
0x62300F: pop     ebx
0x623010: pop     edi
0x623011: pop     esi
0x623012: add     esp, 14h
0x623015: retn
0x623016: push    1
0x623018: mov     ecx, esi
0x62301A: call    sub_6150E0
0x62301F: test    al, al
0x623021: jz      short loc_623030
0x623023: pop     ebx
0x623024: pop     edi
0x623025: mov     ecx, esi
0x623027: pop     esi
0x623028: add     esp, 14h
0x62302B: jmp     sub_61D320
0x623030: mov     edi, [esi+70h]
0x623033: push    edi
0x623034: call    sub_612690
0x623039: mov     bl, al
0x62303B: add     esp, 4
0x62303E: test    bl, bl
0x623040: jz      short loc_623058
0x623042: cmp     byte ptr [esi+158h], 0
0x623049: jz      short loc_623058
0x62304B: cmp     byte ptr [esi+15Bh], 0
0x623052: jz      loc_6231A3
0x623058: mov     dl, [esi+17Fh]
0x62305E: test    dl, dl
0x623060: jnz     short loc_62307A
0x623062: test    bl, bl
0x623064: jz      short loc_62307A
0x623066: cmp     [esi+158h], dl
0x62306C: jz      short loc_623076
0x62306E: cmp     [esi+15Bh], dl
0x623074: jz      short loc_62307A
0x623076: mov     cl, 1
0x623078: jmp     short loc_62307C
0x62307A: xor     cl, cl
0x62307C: push    edi
0x62307D: call    sub_612670
0x623082: add     esp, 4
0x623085: test    al, al
0x623087: jz      short loc_62308D
0x623089: test    dl, dl
0x62308B: jnz     short loc_6230A1
0x62308D: test    cl, cl
0x62308F: jnz     loc_623125
0x623095: test    dl, dl
0x623097: jnz     short loc_6230A1
0x623099: test    bl, bl
0x62309B: jz      loc_623125
0x6230A1: mov     edi, [esi+118h]
0x6230A7: fld     dword ptr ds:0A32048h
0x6230AD: xor     ebx, ebx
0x6230AF: fstp    [esp+20h+var_14]
0x6230B3: test    edi, edi
0x6230B5: mov     byte ptr [esi+17Fh], 0
0x6230BC: jz      short loc_623121
0x6230BE: mov     edi, edi
0x6230C0: mov     ecx, edi
0x6230C2: call    BSSimpleList_IsEmpty
0x6230C7: test    al, al
0x6230C9: jnz     short loc_623121
0x6230CB: cmp     dword ptr [edi], 0
0x6230CE: jz      short loc_62311A
0x6230D0: mov     ecx, esi
0x6230D2: call    sub_6135F0
0x6230D7: mov     ecx, [edi]
0x6230D9: mov     edx, [eax]
0x6230DB: push    ecx
0x6230DC: lea     ecx, [esp+24h+var_C]
0x6230E0: push    ecx
0x6230E1: mov     ecx, eax
0x6230E3: mov     eax, [edx+174h]
0x6230E9: call    eax
0x6230EB: mov     ecx, eax
0x6230ED: call    sub_4121A0
0x6230F2: lea     ecx, [esp+20h+var_C]
0x6230F6: call    sub_404C90
0x6230FB: fstp    [esp+20h+var_10]
0x6230FF: fld     [esp+20h+var_10]
0x623103: fld     [esp+20h+var_14]
0x623107: fcomp   st(1)
0x623109: fnstsw  ax
0x62310B: test    ah, 41h
0x62310E: jnz     short loc_623118
0x623110: mov     ebx, [edi]
0x623112: fstp    [esp+20h+var_14]
0x623116: jmp     short loc_62311A
0x623118: fstp    st
0x62311A: mov     edi, [edi+4]
0x62311D: test    edi, edi
0x62311F: jnz     short loc_6230C0
0x623121: mov     edi, ebx
0x623123: jmp     short loc_623160
0x623125: mov     edi, [esi+118h]
0x62312B: mov     ecx, edi
0x62312D: call    BSSimpleList_Count
0x623132: cmp     eax, 1
0x623135: jbe     short loc_6231A3
0x623137: mov     ecx, edi
0x623139: call    BSSimpleList_Count
0x62313E: push    0; Seed
0x623140: mov     ebx, eax
0x623142: call    GetRandomLargeInteger?
0x623147: xor     edx, edx
0x623149: div     ebx
0x62314B: add     esp, 4
0x62314E: test    edx, edx
0x623150: jle     short loc_62315A
0x623152: sub     edx, 1
0x623155: mov     edi, [edi+4]
0x623158: jnz     short loc_623152
0x62315A: test    edi, edi
0x62315C: jz      short loc_6231A3
0x62315E: mov     edi, [edi]
0x623160: test    edi, edi
0x623162: jz      short loc_6231A3
0x623164: mov     ecx, [esi+3Ch]
0x623167: mov     eax, [ecx]
0x623169: push    edi
0x62316A: lea     edx, [esp+24h+var_C]
0x62316E: push    edx
0x62316F: mov     edx, [eax+174h]
0x623175: call    edx
0x623177: mov     ecx, eax
0x623179: call    sub_4121A0
0x62317E: lea     ecx, [esp+20h+var_C]
0x623182: call    sub_404C90
0x623187: fcomp   qword ptr ds:0A309F0h
0x62318D: fnstsw  ax
0x62318F: test    ah, 41h
0x623192: jnz     short loc_6231A3
0x623194: push    edi
0x623195: mov     ecx, esi
0x623197: call    sub_61C9A0
0x62319C: pop     ebx
0x62319D: pop     edi
0x62319E: pop     esi
0x62319F: add     esp, 14h
0x6231A2: retn
0x6231A3: fld     dword ptr [esi+44h]
0x6231A6: pop     ebx
0x6231A7: fstp    dword ptr [esi+0D4h]
0x6231AD: pop     edi
0x6231AE: fld     dword ptr ds:0A46C30h
0x6231B4: fstp    dword ptr [esi+0D8h]
0x6231BA: fld     dword ptr ds:0A30634h
0x6231C0: fstp    dword ptr [esi+0DCh]
0x6231C6: pop     esi
0x6231C7: add     esp, 14h
0x6231CA: retn
0x6231CB: pop     edi
0x6231CC: mov     ecx, esi
0x6231CE: pop     esi
0x6231CF: add     esp, 14h
0x6231D2: jmp     sub_6191B0
