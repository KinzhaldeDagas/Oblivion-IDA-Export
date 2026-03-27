0x69E9A0: push    ecx
0x69E9A1: push    ebx
0x69E9A2: push    esi
0x69E9A3: mov     esi, ecx
0x69E9A5: mov     eax, [esi+18h]
0x69E9A8: test    eax, eax
0x69E9AA: push    edi
0x69E9AB: jz      short loc_69E9C7
0x69E9AD: fld     dword ptr [eax+4]
0x69E9B0: fstp    dword ptr [esi+20h]
0x69E9B3: mov     eax, [eax+0Ch]
0x69E9B6: mov     ecx, [eax+1Ch]
0x69E9B9: mov     edx, [ecx+58h]
0x69E9BC: shr     edx, 0Ah
0x69E9BF: not     dl
0x69E9C1: and     dl, 1
0x69E9C4: mov     [esi+24h], dl
0x69E9C7: mov     ecx, [esi+1Ch]
0x69E9CA: test    ecx, ecx
0x69E9CC: jz      loc_69EB4C
0x69E9D2: mov     eax, [ecx]
0x69E9D4: mov     edx, [eax+154h]
0x69E9DA: call    edx
0x69E9DC: test    eax, eax
0x69E9DE: jz      loc_69EB4C
0x69E9E4: mov     eax, ds:0B333C4h
0x69E9E9: cmp     [esi+1Ch], eax
0x69E9EC: jnz     short loc_69E9F7
0x69E9EE: mov     al, [eax+588h]
0x69E9F4: mov     [esi+29h], al
0x69E9F7: mov     eax, [esi+2Ch]
0x69E9FA: test    eax, eax
0x69E9FC: jz      loc_69EB4C
0x69EA02: cmp     byte ptr [eax], 0
0x69EA05: jz      loc_69EB4C
0x69EA0B: mov     ecx, ds:0B33A1Ch
0x69EA11: push    1
0x69EA13: push    0
0x69EA15: push    0
0x69EA17: push    eax
0x69EA18: call    sub_439EB0
0x69EA1D: test    eax, eax
0x69EA1F: jz      short loc_69EA4A
0x69EA21: mov     eax, [eax+0Ch]
0x69EA24: push    eax
0x69EA25: push    offset stru_B3CAC0
0x69EA2A: call    NiRTTI_Cast
0x69EA2F: add     esp, 8
0x69EA32: test    eax, eax
0x69EA34: jz      short loc_69EA4A
0x69EA36: push    offset aSpecialidle_hi; "SpecialIdle_HitEffect"
0x69EA3B: mov     ecx, eax
0x69EA3D: call    sub_4715A0
0x69EA42: test    eax, eax
0x69EA44: jz      loc_69EB4C
0x69EA4A: mov     ecx, [esi+2Ch]
0x69EA4D: push    ecx
0x69EA4E: lea     edi, [esi+30h]
0x69EA51: call    sub_69FBF0
0x69EA56: add     esp, 4
0x69EA59: push    eax; a2
0x69EA5A: mov     ecx, edi; this
0x69EA5C: call    NiSmartPointer_Set??
0x69EA61: mov     edx, [esi+2Ch]
0x69EA64: mov     ecx, ds:0B33A1Ch
0x69EA6A: push    1
0x69EA6C: push    0
0x69EA6E: push    edx
0x69EA6F: call    QueuedModelLoader_RemoveModel
0x69EA74: cmp     dword ptr [edi], 0
0x69EA77: jz      loc_69EB4C
0x69EA7D: mov     ecx, [esi+1Ch]
0x69EA80: mov     eax, [ecx]
0x69EA82: mov     edx, [eax+154h]
0x69EA88: call    edx
0x69EA8A: test    eax, eax
0x69EA8C: jz      loc_69EB4C
0x69EA92: mov     eax, [esi]
0x69EA94: mov     edx, [eax+70h]
0x69EA97: mov     ecx, esi
0x69EA99: call    edx
0x69EA9B: mov     eax, [edi]
0x69EA9D: push    eax
0x69EA9E: call    sub_6F94E0
0x69EAA3: fild    dword ptr ds:0B33EA0h
0x69EAA9: mov     ecx, ds:0B33EA0h
0x69EAAF: add     esp, 4
0x69EAB2: test    ecx, ecx
0x69EAB4: push    1; a3
0x69EAB6: jge     short loc_69EABE
0x69EAB8: fadd    dword ptr ds:0A2FC78h
0x69EABE: fdiv    qword ptr ds:0A2FC70h
0x69EAC4: push    ecx
0x69EAC5: mov     ecx, [edi]; this
0x69EAC7: fstp    [esp+18h+var_4]
0x69EACB: fld     [esp+18h+var_4]
0x69EACF: fstp    [esp+18h+a2]; a2
0x69EAD2: call    NiAVObject_UpdateNiAVObject
0x69EAD7: mov     edx, [edi]
0x69EAD9: mov     eax, [edx+0Ch]
0x69EADC: push    eax
0x69EADD: push    offset stru_B3CAC0
0x69EAE2: call    NiRTTI_Cast
0x69EAE7: mov     edi, eax
0x69EAE9: add     esp, 8
0x69EAEC: test    edi, edi
0x69EAEE: jz      short loc_69EB4C
0x69EAF0: push    offset aSpecialidle_hi; "SpecialIdle_HitEffect"
0x69EAF5: mov     ecx, edi
0x69EAF7: call    sub_4715A0
0x69EAFC: mov     ebx, eax
0x69EAFE: test    ebx, ebx
0x69EB00: jz      short loc_69EB4C
0x69EB02: fldz
0x69EB04: push    ecx
0x69EB05: mov     ecx, edi
0x69EB07: fstp    [esp+14h+var_14]; float
0x69EB0A: call    sub_4715C0
0x69EB0F: fldz
0x69EB11: push    0; int
0x69EB13: sub     esp, 8
0x69EB16: fstp    [esp+1Ch+a2]; float
0x69EB1A: fld1
0x69EB1C: mov     ecx, edi
0x69EB1E: fstp    [esp+1Ch+var_1C]; float
0x69EB21: push    0; int
0x69EB23: push    0; int
0x69EB25: push    ebx; int
0x69EB26: call    sub_470B20
0x69EB2B: fldz
0x69EB2D: or      word ptr [edi+8], 8
0x69EB32: fcomp   dword ptr [esi+20h]
0x69EB35: fnstsw  ax
0x69EB37: test    ah, 5
0x69EB3A: jp      short loc_69EB45
0x69EB3C: fld     dword ptr [ebx+2Ch]
0x69EB3F: fadd    dword ptr [esi+20h]
0x69EB42: fstp    dword ptr [ebx+48h]
0x69EB45: pop     edi
0x69EB46: pop     esi
0x69EB47: mov     al, 1
0x69EB49: pop     ebx
0x69EB4A: pop     ecx
0x69EB4B: retn
0x69EB4C: pop     edi
0x69EB4D: pop     esi
0x69EB4E: xor     al, al
0x69EB50: pop     ebx
0x69EB51: pop     ecx
0x69EB52: retn
