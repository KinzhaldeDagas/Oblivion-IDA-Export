0x703C80: push    0FFFFFFFFh
0x703C82: push    offset ??1NiTexturingProperty@@UAE@XZ_SEH
0x703C87: mov     eax, large fs:0
0x703C8D: push    eax
0x703C8E: push    ecx
0x703C8F: push    esi
0x703C90: push    edi
0x703C91: mov     eax, ds:0B30AACh
0x703C96: xor     eax, esp
0x703C98: push    eax
0x703C99: lea     eax, [esp+1Ch+var_C]
0x703C9D: mov     large fs:0, eax
0x703CA3: mov     esi, ecx
0x703CA5: mov     [esp+1Ch+var_10], esi
0x703CA9: mov     dword ptr [esi], offset ??_7NiTexturingProperty@@6B@; const NiTexturingProperty::`vftable'
0x703CAF: xor     edi, edi
0x703CB1: cmp     [esi+26h], di
0x703CB5: mov     [esp+1Ch+var_4], 1
0x703CBD: jbe     short loc_703CDD
0x703CBF: nop
0x703CC0: mov     eax, [esi+20h]
0x703CC3: mov     ecx, [eax+edi*4]
0x703CC6: test    ecx, ecx
0x703CC8: jz      short loc_703CD2
0x703CCA: mov     edx, [ecx]
0x703CCC: mov     eax, [edx]
0x703CCE: push    1
0x703CD0: call    eax
0x703CD2: movzx   ecx, word ptr [esi+26h]
0x703CD6: add     edi, 1
0x703CD9: cmp     edi, ecx
0x703CDB: jb      short loc_703CC0
0x703CDD: mov     eax, [esi+2Ch]
0x703CE0: test    eax, eax
0x703CE2: jz      short loc_703D22
0x703CE4: xor     edi, edi
0x703CE6: cmp     [eax+0Ah], di
0x703CEA: jbe     short loc_703D13
0x703CEC: lea     esp, [esp+0]
0x703CF0: mov     edx, [esi+2Ch]
0x703CF3: mov     eax, [edx+4]
0x703CF6: mov     ecx, [eax+edi*4]
0x703CF9: test    ecx, ecx
0x703CFB: jz      short loc_703D05
0x703CFD: mov     edx, [ecx]
0x703CFF: mov     eax, [edx]
0x703D01: push    1
0x703D03: call    eax
0x703D05: mov     ecx, [esi+2Ch]
0x703D08: movzx   edx, word ptr [ecx+0Ah]
0x703D0C: add     edi, 1
0x703D0F: cmp     edi, edx
0x703D11: jb      short loc_703CF0
0x703D13: mov     ecx, [esi+2Ch]
0x703D16: test    ecx, ecx
0x703D18: jz      short loc_703D22
0x703D1A: mov     eax, [ecx]
0x703D1C: mov     edx, [eax]
0x703D1E: push    1
0x703D20: call    edx
0x703D22: mov     eax, [esi+20h]
0x703D25: push    eax
0x703D26: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@PAVMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::Map *>::`vftable'
0x703D2D: call    FormHeapFree
0x703D32: add     esp, 4
0x703D35: mov     ecx, esi; this
0x703D37: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x703D3F: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x703D44: mov     ecx, dword ptr [esp+1Ch+var_C]
0x703D48: mov     large fs:0, ecx
0x703D4F: pop     ecx
0x703D50: pop     edi
0x703D51: pop     esi
0x703D52: add     esp, 10h
0x703D55: retn
