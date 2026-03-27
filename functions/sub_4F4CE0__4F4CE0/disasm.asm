0x4F4CE0: fldz
0x4F4CE2: push    ebx
0x4F4CE3: mov     ebx, [esp+4+arg_C]
0x4F4CE7: fstp    qword ptr [ebx]
0x4F4CE9: push    esi
0x4F4CEA: push    edi
0x4F4CEB: mov     edi, [esp+0Ch+arg_4]
0x4F4CEF: xor     esi, esi
0x4F4CF1: test    edi, edi
0x4F4CF3: jz      short loc_4F4D07
0x4F4CF5: mov     eax, [edi]
0x4F4CF7: mov     edx, [eax+0A4h]
0x4F4CFD: mov     ecx, edi
0x4F4CFF: call    edx
0x4F4D01: test    al, al
0x4F4D03: jz      short loc_4F4D07
0x4F4D05: mov     esi, edi
0x4F4D07: mov     ecx, [esp+0Ch+arg_0]
0x4F4D0B: test    ecx, ecx
0x4F4D0D: jz      short loc_4F4D25
0x4F4D0F: test    esi, esi
0x4F4D11: jz      short loc_4F4D25
0x4F4D13: mov     eax, [ecx]
0x4F4D15: mov     edx, [eax+170h]
0x4F4D1B: call    edx
0x4F4D1D: cmp     eax, esi
0x4F4D1F: jnz     short loc_4F4D25
0x4F4D21: fld1
0x4F4D23: fstp    qword ptr [ebx]
0x4F4D25: cmp     byte ptr ds:0B361ACh, 0
0x4F4D2C: jz      short loc_4F4D43
0x4F4D2E: fld     qword ptr [ebx]
0x4F4D30: sub     esp, 8
0x4F4D33: fstp    [esp+14h+var_14]
0x4F4D36: push    offset aGetisid0_2f; "GetIsID >> %0.2f"
0x4F4D3B: call    Interface_ConsolePrint
0x4F4D40: add     esp, 0Ch
0x4F4D43: pop     edi
0x4F4D44: pop     esi
0x4F4D45: mov     al, 1
0x4F4D47: pop     ebx
0x4F4D48: retn
