0x644B10: sub     esp, 0Ch
0x644B13: push    ebx
0x644B14: push    esi
0x644B15: mov     esi, ecx
0x644B17: mov     eax, [esi+8]
0x644B1A: test    eax, eax
0x644B1C: push    edi
0x644B1D: mov     edi, [esp+18h+arg_0]
0x644B21: mov     ebx, 1
0x644B26: jz      short loc_644B62
0x644B28: test    [eax+1Eh], bl
0x644B2B: jz      short loc_644B62
0x644B2D: mov     ecx, ds:0B333C4h
0x644B33: push    edi
0x644B34: call    sub_663A60
0x644B39: test    al, al
0x644B3B: jnz     loc_644CD1
0x644B41: mov     ecx, ds:0B333C4h
0x644B47: call    sub_663A00
0x644B4C: cmp     eax, ds:0B36A80h
0x644B52: jge     loc_644CD1
0x644B58: mov     ecx, [esi+8]
0x644B5B: push    0
0x644B5D: call    sub_5668E0
0x644B62: cmp     dword ptr [esi+2Ch], 0
0x644B66: jnz     short loc_644B7B
0x644B68: mov     eax, [esi]
0x644B6A: mov     edx, [eax+558h]
0x644B70: push    edi
0x644B71: mov     ecx, esi
0x644B73: call    edx
0x644B75: cmp     dword ptr [esi+2Ch], 0
0x644B79: jz      short loc_644BA2
0x644B7B: mov     ecx, [esi+8]
0x644B7E: cmp     dword ptr [ecx+24h], 0
0x644B82: jz      short loc_644BE7
0x644B84: fld     dword ptr ds:0A30634h
0x644B8A: push    ecx
0x644B8B: fstp    [esp+1Ch+var_1C]; float
0x644B8E: push    0; char
0x644B90: push    edi; int
0x644B91: call    sub_566DC0
0x644B96: test    al, al
0x644B98: jz      short loc_644BE7
0x644B9A: mov     eax, [esi+8]
0x644B9D: cmp     [eax+20h], bl
0x644BA0: jnz     short loc_644BE7
0x644BA2: mov     edx, [esi]
0x644BA4: mov     eax, [edx+188h]
0x644BAA: push    ebx
0x644BAB: push    edi
0x644BAC: mov     ecx, esi
0x644BAE: call    eax
0x644BB0: mov     ecx, [esi+8]
0x644BB3: call    sub_5660A0
0x644BB8: test    al, al
0x644BBA: jz      short loc_644BE7
0x644BBC: mov     ecx, [esi+8]
0x644BBF: test    ecx, ecx
0x644BC1: mov     dword ptr [esi+8], 0
0x644BC8: jz      short loc_644BD2
0x644BCA: mov     edx, [ecx]
0x644BCC: mov     eax, [edx+10h]
0x644BCF: push    ebx
0x644BD0: call    eax
0x644BD2: mov     edx, [esi]
0x644BD4: mov     eax, [edx+18h]
0x644BD7: push    0
0x644BD9: push    edi
0x644BDA: mov     ecx, esi
0x644BDC: call    eax
0x644BDE: pop     edi
0x644BDF: pop     esi
0x644BE0: pop     ebx
0x644BE1: add     esp, 0Ch
0x644BE4: retn    10h
0x644BE7: push    3Ah ; ':'; a1
0x644BE9: call    TESForm_LookupByFormID
0x644BEE: add     esp, 4
0x644BF1: mov     ecx, offset TimeGlobals
0x644BF6: mov     ebx, eax
0x644BF8: call    TimeGlobals_GetGameHour
0x644BFD: fstp    [esp+18h+arg_0]
0x644C01: fld     [esp+18h+arg_0]
0x644C05: mov     ecx, edi; this
0x644C07: fstp    [esp+18h+var_C+4]
0x644C0B: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x644C10: fcomp   [esp+18h+var_C+4]
0x644C14: fnstsw  ax
0x644C16: test    ah, 41h
0x644C19: jnz     short loc_644C29
0x644C1B: fld     [esp+18h+arg_0]
0x644C1F: fadd    qword ptr ds:0A2F920h
0x644C25: fstp    [esp+18h+arg_0]
0x644C29: fld     [esp+18h+arg_0]
0x644C2D: mov     ecx, edi; this
0x644C2F: fstp    [esp+18h+var_C+4]
0x644C33: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x644C38: fsubr   [esp+18h+var_C+4]
0x644C3C: mov     ecx, [esi+8]
0x644C3F: push    2
0x644C41: push    edi
0x644C42: fstp    dword ptr [esp+20h+var_C+4]
0x644C46: fld     dword ptr [ebx+24h]
0x644C49: fstp    dword ptr [esp+20h+var_C]
0x644C4D: call    sub_5677B0
0x644C52: mov     eax, [esi+2Ch]
0x644C55: fstp    [esp+18h+arg_0]
0x644C59: test    eax, eax
0x644C5B: jz      short loc_644CD1
0x644C5D: push    0; unk000
0x644C5F: push    eax; a2
0x644C60: mov     ecx, edi; this
0x644C62: call    TesObjectREF_GetDistance
0x644C67: fld     [esp+18h+arg_0]
0x644C6B: fcom    st(1)
0x644C6D: fnstsw  ax
0x644C6F: fstp    st(1)
0x644C71: test    ah, 5
0x644C74: jp      short loc_644CCF
0x644C76: push    ebp
0x644C77: sub     esp, 8
0x644C7A: fstp    [esp+24h+var_20]
0x644C7E: mov     ebx, [esi+2Ch]
0x644C81: fld     dword ptr [esp+24h+var_C]
0x644C85: mov     ebp, [esi]
0x644C87: fdivr   qword ptr ds:0A2F938h
0x644C8D: mov     ecx, ebx; this
0x644C8F: fmul    dword ptr [esp+24h+var_C+4]
0x644C93: fstp    [esp+24h+arg_0]
0x644C97: fld     [esp+24h+arg_0]
0x644C9B: fstp    [esp+24h+var_24]
0x644C9E: call    TESObjectREFR_GetWorldSpace
0x644CA3: mov     ecx, [esi+2Ch]; this
0x644CA6: push    eax
0x644CA7: call    TESObjectREFR_GetParentCell
0x644CAC: mov     edx, [ebx]
0x644CAE: push    eax
0x644CAF: mov     eax, [edx+174h]
0x644CB5: mov     ecx, ebx
0x644CB7: call    eax
0x644CB9: mov     edx, [ebp+418h]
0x644CBF: push    eax
0x644CC0: push    edi
0x644CC1: mov     ecx, esi
0x644CC3: call    edx
0x644CC5: pop     ebp
0x644CC6: pop     edi
0x644CC7: pop     esi
0x644CC8: pop     ebx
0x644CC9: add     esp, 0Ch
0x644CCC: retn    10h
0x644CCF: fstp    st
0x644CD1: pop     edi
0x644CD2: pop     esi
0x644CD3: pop     ebx
0x644CD4: add     esp, 0Ch
0x644CD7: retn    10h
