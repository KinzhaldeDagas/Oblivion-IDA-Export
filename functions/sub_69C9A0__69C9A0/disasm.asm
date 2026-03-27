0x69C9A0: sub     esp, 0Ch
0x69C9A3: push    ebx
0x69C9A4: mov     ebx, [esp+10h+arg_0]
0x69C9A8: test    ebx, ebx
0x69C9AA: push    edi
0x69C9AB: mov     edi, ecx
0x69C9AD: fld     dword ptr [edi+80h]
0x69C9B3: fmul    dword ptr ds:0B37EF8h
0x69C9B9: fstp    [esp+14h+var_C]
0x69C9BD: fld     dword ptr [edi+84h]
0x69C9C3: fmul    dword ptr ds:0B37F08h
0x69C9C9: fstp    [esp+14h+var_4]
0x69C9CD: fld     dword ptr [edi+84h]
0x69C9D3: fmul    dword ptr ds:0B37F00h
0x69C9D9: fstp    [esp+14h+var_8]
0x69C9DD: jz      loc_69CB28
0x69C9E3: mov     eax, [ebx]
0x69C9E5: mov     edx, [eax+4]
0x69C9E8: push    esi
0x69C9E9: mov     ecx, ebx
0x69C9EB: call    edx
0x69C9ED: test    eax, eax
0x69C9EF: jz      short loc_69C9FF
0x69C9F1: cmp     eax, offset dword_B40864
0x69C9F6: jz      short loc_69CA30
0x69C9F8: mov     eax, [eax+4]
0x69C9FB: test    eax, eax
0x69C9FD: jnz     short loc_69C9F1
0x69C9FF: mov     eax, [ebx]
0x69CA01: mov     edx, [eax+8]
0x69CA04: mov     ecx, ebx
0x69CA06: call    edx
0x69CA08: test    eax, eax
0x69CA0A: jz      loc_69CB27
0x69CA10: movzx   eax, word ptr [ebx+0B6h]
0x69CA17: xor     esi, esi
0x69CA19: test    eax, eax
0x69CA1B: jbe     loc_69CB27
0x69CA21: cmp     eax, esi
0x69CA23: ja      loc_69CB08
0x69CA29: xor     eax, eax
0x69CA2B: jmp     loc_69CB11
0x69CA30: mov     eax, [ebx+0D0h]
0x69CA36: xor     edi, edi
0x69CA38: test    eax, eax
0x69CA3A: jbe     loc_69CB27
0x69CA40: cmp     edi, eax
0x69CA42: jnb     loc_69CAE6
0x69CA48: mov     eax, [ebx+0C8h]
0x69CA4E: xor     ecx, ecx
0x69CA50: test    eax, eax
0x69CA52: jz      loc_69CAE6
0x69CA58: mov     esi, [eax+8]
0x69CA5B: lea     edx, [eax+8]
0x69CA5E: mov     eax, [eax]
0x69CA60: mov     edx, ecx
0x69CA62: add     ecx, 1
0x69CA65: cmp     edx, edi
0x69CA67: jz      short loc_69CA6F
0x69CA69: test    eax, eax
0x69CA6B: jnz     short loc_69CA58
0x69CA6D: jmp     short loc_69CAE6
0x69CA6F: test    esi, esi
0x69CA71: jz      short loc_69CAE6
0x69CA73: mov     eax, [esi]
0x69CA75: mov     edx, [eax+4]
0x69CA78: mov     ecx, esi
0x69CA7A: call    edx
0x69CA7C: test    eax, eax
0x69CA7E: jz      short loc_69CA8E
0x69CA80: cmp     eax, offset dword_B40C84
0x69CA85: jz      short loc_69CB00
0x69CA87: mov     eax, [eax+4]
0x69CA8A: test    eax, eax
0x69CA8C: jnz     short loc_69CA80
0x69CA8E: xor     al, al
0x69CA90: neg     al
0x69CA92: sbb     eax, eax
0x69CA94: and     eax, esi
0x69CA96: jz      short loc_69CAA2
0x69CA98: fld     dword ptr [eax+2Ch]
0x69CA9B: fmul    [esp+18h+var_C]
0x69CA9F: fstp    dword ptr [eax+2Ch]
0x69CAA2: mov     eax, [esi]
0x69CAA4: mov     edx, [eax+4]
0x69CAA7: mov     ecx, esi
0x69CAA9: call    edx
0x69CAAB: test    eax, eax
0x69CAAD: jz      short loc_69CABE
0x69CAAF: nop
0x69CAB0: cmp     eax, offset dword_B40B50
0x69CAB5: jz      short loc_69CB04
0x69CAB7: mov     eax, [eax+4]
0x69CABA: test    eax, eax
0x69CABC: jnz     short loc_69CAB0
0x69CABE: xor     al, al
0x69CAC0: neg     al
0x69CAC2: sbb     eax, eax
0x69CAC4: and     eax, esi
0x69CAC6: jz      short loc_69CAE6
0x69CAC8: fld     dword ptr [eax+48h]
0x69CACB: fmul    [esp+18h+var_C]
0x69CACF: fstp    dword ptr [eax+48h]
0x69CAD2: fld     [esp+18h+var_8]
0x69CAD6: fmul    dword ptr [eax+18h]
0x69CAD9: fstp    dword ptr [eax+18h]
0x69CADC: fld     [esp+18h+var_4]
0x69CAE0: fmul    dword ptr [eax+40h]
0x69CAE3: fstp    dword ptr [eax+40h]
0x69CAE6: mov     eax, [ebx+0D0h]
0x69CAEC: add     edi, 1
0x69CAEF: cmp     edi, eax
0x69CAF1: jb      loc_69CA48
0x69CAF7: pop     esi
0x69CAF8: pop     edi
0x69CAF9: pop     ebx
0x69CAFA: add     esp, 0Ch
0x69CAFD: retn    4
0x69CB00: mov     al, 1
0x69CB02: jmp     short loc_69CA90
0x69CB04: mov     al, 1
0x69CB06: jmp     short loc_69CAC0
0x69CB08: mov     eax, [ebx+0B0h]
0x69CB0E: mov     eax, [eax+esi*4]
0x69CB11: push    eax
0x69CB12: mov     ecx, edi
0x69CB14: call    sub_69C9A0
0x69CB19: movzx   eax, word ptr [ebx+0B6h]
0x69CB20: add     esi, 1
0x69CB23: cmp     eax, esi
0x69CB25: ja      short loc_69CB08
0x69CB27: pop     esi
0x69CB28: pop     edi
0x69CB29: pop     ebx
0x69CB2A: add     esp, 0Ch
0x69CB2D: retn    4
