0x4F4E20: fldz
0x4F4E22: push    ebp
0x4F4E23: mov     ebp, [esp+4+arg_C]
0x4F4E27: fstp    qword ptr [ebp+0]
0x4F4E2A: push    esi
0x4F4E2B: push    edi
0x4F4E2C: mov     edi, [esp+0Ch+arg_0]
0x4F4E30: xor     esi, esi
0x4F4E32: test    edi, edi
0x4F4E34: jz      short loc_4F4E48
0x4F4E36: mov     eax, [edi]
0x4F4E38: mov     edx, [eax+190h]
0x4F4E3E: mov     ecx, edi
0x4F4E40: call    edx
0x4F4E42: test    al, al
0x4F4E44: jz      short loc_4F4E48
0x4F4E46: mov     esi, edi
0x4F4E48: push    ebx
0x4F4E49: mov     ebx, [esp+10h+arg_4]
0x4F4E4D: xor     edi, edi
0x4F4E4F: test    ebx, ebx
0x4F4E51: jz      short loc_4F4E65
0x4F4E53: mov     eax, [ebx]
0x4F4E55: mov     edx, [eax+190h]
0x4F4E5B: mov     ecx, ebx
0x4F4E5D: call    edx
0x4F4E5F: test    al, al
0x4F4E61: jz      short loc_4F4E65
0x4F4E63: mov     edi, ebx
0x4F4E65: test    esi, esi
0x4F4E67: pop     ebx
0x4F4E68: jz      short loc_4F4EE2
0x4F4E6A: test    edi, edi
0x4F4E6C: jz      short loc_4F4EE2
0x4F4E6E: cmp     esi, ds:0B36180h
0x4F4E74: jnz     short loc_4F4E89
0x4F4E76: cmp     edi, ds:0B36184h
0x4F4E7C: jnz     short loc_4F4E89
0x4F4E7E: fld     dword ptr ds:0B36188h
0x4F4E84: fstp    qword ptr [ebp+0]
0x4F4E87: jmp     short loc_4F4EB3
0x4F4E89: mov     eax, [esi]
0x4F4E8B: mov     edx, [eax+224h]
0x4F4E91: push    edi
0x4F4E92: mov     ecx, esi
0x4F4E94: call    edx
0x4F4E96: mov     [esp+0Ch+arg_C], eax
0x4F4E9A: fild    [esp+0Ch+arg_C]
0x4F4E9E: mov     ds:0B36184h, edi
0x4F4EA4: mov     ds:0B36180h, esi
0x4F4EAA: fst     qword ptr [ebp+0]
0x4F4EAD: fstp    dword ptr ds:0B36188h
0x4F4EB3: cmp     byte ptr ds:0B361ACh, 0
0x4F4EBA: jz      short loc_4F4EE2
0x4F4EBC: fld     qword ptr [ebp+0]
0x4F4EBF: sub     esp, 8
0x4F4EC2: mov     ecx, edi; this
0x4F4EC4: fstp    [esp+14h+var_18+4]
0x4F4EC7: call    TESObjectREFR_GetName
0x4F4ECC: push    eax
0x4F4ECD: mov     ecx, esi; this
0x4F4ECF: call    TESObjectREFR_GetName
0x4F4ED4: push    eax
0x4F4ED5: push    offset a_20sDispositio; "%.20s disposition to %.20s is %.1f"
0x4F4EDA: call    Interface_ConsolePrint
0x4F4EDF: add     esp, 14h
0x4F4EE2: pop     edi
0x4F4EE3: pop     esi
0x4F4EE4: mov     al, 1
0x4F4EE6: pop     ebp
0x4F4EE7: retn
