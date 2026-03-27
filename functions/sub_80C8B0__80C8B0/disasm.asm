0x80C8B0: push    0FFFFFFFFh
0x80C8B2: push    offset SEH_80C8B0
0x80C8B7: mov     eax, large fs:0
0x80C8BD: push    eax
0x80C8BE: sub     esp, 20h
0x80C8C1: push    ebx
0x80C8C2: push    esi
0x80C8C3: push    edi
0x80C8C4: mov     eax, ds:0B30AACh
0x80C8C9: xor     eax, esp
0x80C8CB: push    eax
0x80C8CC: lea     eax, [esp+3Ch+var_C]
0x80C8D0: mov     large fs:0, eax
0x80C8D6: lea     edi, [ecx+9Ch]
0x80C8DC: mov     [esp+3Ch+var_28], 2
0x80C8E4: mov     ebx, 1
0x80C8E9: lea     esp, [esp+0]
0x80C8F0: lea     eax, [esp+3Ch+var_24]
0x80C8F4: push    eax
0x80C8F5: call    sub_7606A0
0x80C8FA: add     esp, 4
0x80C8FD: mov     esi, eax
0x80C8FF: mov     ecx, [edi]
0x80C901: cmp     ecx, [esi]
0x80C903: mov     [esp+3Ch+var_4], 0
0x80C90B: jz      short loc_80C927
0x80C90D: test    ecx, ecx
0x80C90F: jz      short loc_80C91C
0x80C911: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x80C915: jnz     short loc_80C91C
0x80C917: call    sub_7604D0
0x80C91C: mov     eax, [esi]
0x80C91E: test    eax, eax
0x80C920: mov     [edi], eax
0x80C922: jz      short loc_80C927
0x80C924: add     [eax+60h], ebx
0x80C927: mov     eax, [esp+3Ch+var_24]
0x80C92B: test    eax, eax
0x80C92D: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x80C935: jz      short loc_80C94A
0x80C937: add     dword ptr [eax+60h], 0FFFFFFFFh
0x80C93B: mov     ecx, eax
0x80C93D: add     eax, 60h ; '`'
0x80C940: cmp     dword ptr [eax], 0
0x80C943: jnz     short loc_80C94A
0x80C945: call    sub_7604D0
0x80C94A: lea     ecx, [esp+3Ch+a3]
0x80C94E: push    ecx
0x80C94F: call    sub_772630
0x80C954: mov     edx, [esp+40h+a3]
0x80C958: push    2
0x80C95A: push    ebx
0x80C95B: push    0
0x80C95D: push    edx
0x80C95E: mov     [esp+50h+var_4], ebx
0x80C962: call    sub_801110
0x80C967: mov     ecx, [edi]; this
0x80C969: mov     eax, [esp+50h+a3]
0x80C96D: mov     edx, [ecx+14h]
0x80C970: add     esp, 14h
0x80C973: push    eax; a3
0x80C974: push    edx; a2
0x80C975: call    sub_760010
0x80C97A: lea     eax, [esp+3Ch+var_20]
0x80C97E: push    eax
0x80C97F: call    sub_772630
0x80C984: add     esp, 4
0x80C987: mov     esi, eax
0x80C989: mov     eax, [esp+3Ch+a3]
0x80C98D: cmp     eax, [esi]
0x80C98F: mov     byte ptr [esp+3Ch+var_4], 2
0x80C994: jz      short loc_80C9BE
0x80C996: test    eax, eax
0x80C998: jz      short loc_80C9AD
0x80C99A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80C99E: mov     ecx, eax
0x80C9A0: add     eax, 5Ch ; '\'
0x80C9A3: cmp     dword ptr [eax], 0
0x80C9A6: jnz     short loc_80C9AD
0x80C9A8: call    sub_772560
0x80C9AD: mov     eax, [esi]
0x80C9AF: test    eax, eax
0x80C9B1: mov     [esp+3Ch+a3], eax
0x80C9B5: jz      short loc_80C9BE
0x80C9B7: add     [eax+5Ch], ebx
0x80C9BA: mov     eax, [esp+3Ch+a3]
0x80C9BE: mov     ecx, [esp+3Ch+var_20]
0x80C9C2: test    ecx, ecx
0x80C9C4: mov     byte ptr [esp+3Ch+var_4], bl
0x80C9C8: jz      short loc_80C9E0
0x80C9CA: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x80C9CE: cmp     dword ptr [ecx+5Ch], 0
0x80C9D2: lea     eax, [ecx+5Ch]
0x80C9D5: jnz     short loc_80C9DC
0x80C9D7: call    sub_772560
0x80C9DC: mov     eax, [esp+3Ch+a3]
0x80C9E0: push    2
0x80C9E2: push    ebx
0x80C9E3: push    ebx
0x80C9E4: push    eax
0x80C9E5: call    sub_801110
0x80C9EA: mov     ecx, [edi]; this
0x80C9EC: mov     edx, [esp+4Ch+a3]
0x80C9F0: mov     eax, [ecx+14h]
0x80C9F3: add     esp, 10h
0x80C9F6: push    edx; a3
0x80C9F7: push    eax; a2
0x80C9F8: call    sub_760010
0x80C9FD: lea     ecx, [esp+3Ch+var_1C]
0x80CA01: push    ecx
0x80CA02: call    sub_772630
0x80CA07: add     esp, 4
0x80CA0A: mov     esi, eax
0x80CA0C: mov     eax, [esp+3Ch+a3]
0x80CA10: cmp     eax, [esi]
0x80CA12: mov     byte ptr [esp+3Ch+var_4], 3
0x80CA17: jz      short loc_80CA41
0x80CA19: test    eax, eax
0x80CA1B: jz      short loc_80CA30
0x80CA1D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80CA21: mov     ecx, eax
0x80CA23: add     eax, 5Ch ; '\'
0x80CA26: cmp     dword ptr [eax], 0
0x80CA29: jnz     short loc_80CA30
0x80CA2B: call    sub_772560
0x80CA30: mov     eax, [esi]
0x80CA32: test    eax, eax
0x80CA34: mov     [esp+3Ch+a3], eax
0x80CA38: jz      short loc_80CA41
0x80CA3A: add     [eax+5Ch], ebx
0x80CA3D: mov     eax, [esp+3Ch+a3]
0x80CA41: mov     ecx, [esp+3Ch+var_1C]
0x80CA45: test    ecx, ecx
0x80CA47: mov     byte ptr [esp+3Ch+var_4], bl
0x80CA4B: jz      short loc_80CA63
0x80CA4D: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x80CA51: cmp     dword ptr [ecx+5Ch], 0
0x80CA55: lea     eax, [ecx+5Ch]
0x80CA58: jnz     short loc_80CA5F
0x80CA5A: call    sub_772560
0x80CA5F: mov     eax, [esp+3Ch+a3]
0x80CA63: push    2
0x80CA65: push    ebx
0x80CA66: push    2
0x80CA68: push    eax
0x80CA69: call    sub_801110
0x80CA6E: mov     ecx, [edi]; this
0x80CA70: mov     edx, [esp+4Ch+a3]
0x80CA74: mov     eax, [ecx+14h]
0x80CA77: add     esp, 10h
0x80CA7A: push    edx; a3
0x80CA7B: push    eax; a2
0x80CA7C: call    sub_760010
0x80CA81: lea     ecx, [esp+3Ch+var_18]
0x80CA85: push    ecx
0x80CA86: call    sub_772630
0x80CA8B: add     esp, 4
0x80CA8E: mov     esi, eax
0x80CA90: mov     eax, [esp+3Ch+a3]
0x80CA94: cmp     eax, [esi]
0x80CA96: mov     byte ptr [esp+3Ch+var_4], 4
0x80CA9B: jz      short loc_80CAC5
0x80CA9D: test    eax, eax
0x80CA9F: jz      short loc_80CAB4
0x80CAA1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80CAA5: mov     ecx, eax
0x80CAA7: add     eax, 5Ch ; '\'
0x80CAAA: cmp     dword ptr [eax], 0
0x80CAAD: jnz     short loc_80CAB4
0x80CAAF: call    sub_772560
0x80CAB4: mov     eax, [esi]
0x80CAB6: test    eax, eax
0x80CAB8: mov     [esp+3Ch+a3], eax
0x80CABC: jz      short loc_80CAC5
0x80CABE: add     [eax+5Ch], ebx
0x80CAC1: mov     eax, [esp+3Ch+a3]
0x80CAC5: mov     ecx, [esp+3Ch+var_18]
0x80CAC9: test    ecx, ecx
0x80CACB: mov     byte ptr [esp+3Ch+var_4], bl
0x80CACF: jz      short loc_80CAE7
0x80CAD1: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x80CAD5: cmp     dword ptr [ecx+5Ch], 0
0x80CAD9: lea     eax, [ecx+5Ch]
0x80CADC: jnz     short loc_80CAE3
0x80CADE: call    sub_772560
0x80CAE3: mov     eax, [esp+3Ch+a3]
0x80CAE7: push    2
0x80CAE9: push    3
0x80CAEB: push    3
0x80CAED: push    eax
0x80CAEE: call    sub_801110
0x80CAF3: mov     ecx, [edi]; this
0x80CAF5: mov     edx, [esp+4Ch+a3]
0x80CAF9: mov     eax, [ecx+14h]
0x80CAFC: add     esp, 10h
0x80CAFF: push    edx; a3
0x80CB00: push    eax; a2
0x80CB01: call    sub_760010
0x80CB06: lea     ecx, [esp+3Ch+var_14]
0x80CB0A: push    ecx
0x80CB0B: call    sub_772630
0x80CB10: add     esp, 4
0x80CB13: mov     esi, eax
0x80CB15: mov     eax, [esp+3Ch+a3]
0x80CB19: cmp     eax, [esi]
0x80CB1B: mov     byte ptr [esp+3Ch+var_4], 5
0x80CB20: jz      short loc_80CB4A
0x80CB22: test    eax, eax
0x80CB24: jz      short loc_80CB39
0x80CB26: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80CB2A: mov     ecx, eax
0x80CB2C: add     eax, 5Ch ; '\'
0x80CB2F: cmp     dword ptr [eax], 0
0x80CB32: jnz     short loc_80CB39
0x80CB34: call    sub_772560
0x80CB39: mov     eax, [esi]
0x80CB3B: test    eax, eax
0x80CB3D: mov     [esp+3Ch+a3], eax
0x80CB41: jz      short loc_80CB4A
0x80CB43: add     [eax+5Ch], ebx
0x80CB46: mov     eax, [esp+3Ch+a3]
0x80CB4A: mov     ecx, [esp+3Ch+var_14]
0x80CB4E: test    ecx, ecx
0x80CB50: mov     byte ptr [esp+3Ch+var_4], bl
0x80CB54: jz      short loc_80CB6C
0x80CB56: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x80CB5A: cmp     dword ptr [ecx+5Ch], 0
0x80CB5E: lea     eax, [ecx+5Ch]
0x80CB61: jnz     short loc_80CB68
0x80CB63: call    sub_772560
0x80CB68: mov     eax, [esp+3Ch+a3]
0x80CB6C: push    2
0x80CB6E: push    ebx
0x80CB6F: push    4
0x80CB71: push    eax
0x80CB72: call    sub_801110
0x80CB77: mov     ecx, [edi]; this
0x80CB79: mov     edx, [esp+4Ch+a3]
0x80CB7D: mov     eax, [ecx+14h]
0x80CB80: add     esp, 10h
0x80CB83: push    edx; a3
0x80CB84: push    eax; a2
0x80CB85: call    sub_760010
0x80CB8A: push    0
0x80CB8C: call    sub_404F00
0x80CB91: add     esp, 4
0x80CB94: cmp     eax, 2
0x80CB97: jl      loc_80CC22
0x80CB9D: lea     ecx, [esp+3Ch+var_10]
0x80CBA1: push    ecx
0x80CBA2: call    sub_772630
0x80CBA7: add     esp, 4
0x80CBAA: mov     esi, eax
0x80CBAC: mov     eax, [esp+3Ch+a3]
0x80CBB0: cmp     eax, [esi]
0x80CBB2: mov     byte ptr [esp+3Ch+var_4], 6
0x80CBB7: jz      short loc_80CBE1
0x80CBB9: test    eax, eax
0x80CBBB: jz      short loc_80CBD0
0x80CBBD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80CBC1: mov     ecx, eax
0x80CBC3: add     eax, 5Ch ; '\'
0x80CBC6: cmp     dword ptr [eax], 0
0x80CBC9: jnz     short loc_80CBD0
0x80CBCB: call    sub_772560
0x80CBD0: mov     eax, [esi]
0x80CBD2: test    eax, eax
0x80CBD4: mov     [esp+3Ch+a3], eax
0x80CBD8: jz      short loc_80CBE1
0x80CBDA: add     [eax+5Ch], ebx
0x80CBDD: mov     eax, [esp+3Ch+a3]
0x80CBE1: mov     ecx, [esp+3Ch+var_10]
0x80CBE5: test    ecx, ecx
0x80CBE7: mov     byte ptr [esp+3Ch+var_4], bl
0x80CBEB: jz      short loc_80CC03
0x80CBED: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x80CBF1: cmp     dword ptr [ecx+5Ch], 0
0x80CBF5: lea     eax, [ecx+5Ch]
0x80CBF8: jnz     short loc_80CBFF
0x80CBFA: call    sub_772560
0x80CBFF: mov     eax, [esp+3Ch+a3]
0x80CC03: push    2
0x80CC05: push    3
0x80CC07: push    5
0x80CC09: push    eax
0x80CC0A: call    sub_801110
0x80CC0F: mov     ecx, [edi]; this
0x80CC11: mov     edx, [esp+4Ch+a3]
0x80CC15: mov     eax, [ecx+14h]
0x80CC18: add     esp, 10h
0x80CC1B: push    edx; a3
0x80CC1C: push    eax; a2
0x80CC1D: call    sub_760010
0x80CC22: mov     eax, [esp+3Ch+a3]
0x80CC26: test    eax, eax
0x80CC28: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x80CC30: jz      short loc_80CC45
0x80CC32: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80CC36: mov     ecx, eax
0x80CC38: add     eax, 5Ch ; '\'
0x80CC3B: cmp     dword ptr [eax], 0
0x80CC3E: jnz     short loc_80CC45
0x80CC40: call    sub_772560
0x80CC45: add     edi, 4
0x80CC48: sub     [esp+3Ch+var_28], ebx
0x80CC4C: jnz     loc_80C8F0
0x80CC52: mov     dword ptr ds:0B43EA0h, 20082h
0x80CC5C: mov     dword ptr ds:0B44530h, 10Ch
0x80CC66: mov     dword ptr ds:0B43EA4h, 23982h
0x80CC70: mov     dword ptr ds:0B44534h, 13Ch
0x80CC7A: mov     al, bl
0x80CC7C: mov     ecx, [esp+3Ch+var_C]
0x80CC80: mov     large fs:0, ecx
0x80CC87: pop     ecx
0x80CC88: pop     edi
0x80CC89: pop     esi
0x80CC8A: pop     ebx
0x80CC8B: add     esp, 2Ch
0x80CC8E: retn
