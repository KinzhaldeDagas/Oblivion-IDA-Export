0x619D40: sub     esp, 8
0x619D43: push    ebp
0x619D44: push    esi
0x619D45: mov     esi, [esp+10h+arg_0]
0x619D49: mov     ebp, ecx
0x619D4B: mov     eax, [ebp+40h]
0x619D4E: push    edi
0x619D4F: xor     edi, edi
0x619D51: test    eax, eax
0x619D53: jz      short loc_619D6E
0x619D55: mov     ecx, [eax+4]
0x619D58: test    ecx, ecx
0x619D5A: jnz     short loc_619D60
0x619D5C: cmp     [eax], ecx
0x619D5E: jz      short loc_619D6E
0x619D60: mov     edi, [eax]
0x619D62: cmp     [edi], esi
0x619D64: jz      short loc_619D6E
0x619D66: mov     eax, ecx
0x619D68: xor     edi, edi
0x619D6A: test    eax, eax
0x619D6C: jnz     short loc_619D55
0x619D6E: push    ebx
0x619D6F: mov     ebx, [esi+58h]
0x619D72: test    ebx, ebx
0x619D74: jz      loc_619F67
0x619D7A: mov     eax, [ebp+3Ch]
0x619D7D: mov     ecx, [eax+58h]
0x619D80: mov     edx, [ecx]
0x619D82: mov     eax, [edx+8]
0x619D85: call    eax
0x619D87: mov     edx, [ebx]
0x619D89: mov     edx, [edx+8]
0x619D8C: mov     ecx, ebx
0x619D8E: mov     [esp+18h+arg_0], eax
0x619D92: call    edx
0x619D94: mov     ecx, [esp+18h+arg_0]
0x619D98: cmp     eax, ecx
0x619D9A: jnz     loc_619F5A
0x619DA0: mov     eax, [esi]
0x619DA2: mov     edx, [eax+284h]
0x619DA8: push    4
0x619DAA: mov     ecx, esi
0x619DAC: mov     bl, 1
0x619DAE: call    edx
0x619DB0: test    eax, eax
0x619DB2: jnz     short loc_619DB6
0x619DB4: xor     bl, bl
0x619DB6: test    edi, edi
0x619DB8: fldz
0x619DBA: fstp    dword ptr [esp+1Ch]
0x619DBE: jz      loc_619F6E
0x619DC4: cmp     byte ptr [edi+8], 0
0x619DC8: jnz     loc_619F6E
0x619DCE: mov     eax, [ebp+70h]
0x619DD1: cmp     eax, 4; switch 5 cases
0x619DD4: ja      short def_619DD6
0x619DD6: jmp     ds:jpt_619DD6[eax*4]; switch jump
0x619DDD: mov     ecx, ebp; jumptable 00619DD6 cases 0,1,3
0x619DDF: call    sub_6135F0
0x619DE4: cmp     esi, eax
0x619DE6: jnz     short loc_619DF0
0x619DE8: fld     dword ptr ds:0A2FE7Ch
0x619DEE: jmp     short loc_619E2A
0x619DF0: mov     ecx, [ebp+3Ch]
0x619DF3: push    0
0x619DF5: push    esi
0x619DF6: call    TesObjectREF_GetDistance
0x619DFB: jmp     short loc_619E2A
0x619DFD: mov     ecx, [ebp+3Ch]; jumptable 00619DD6 cases 2,4
0x619E00: push    0; char
0x619E02: push    0; int
0x619E04: push    1; char
0x619E06: push    esi; int
0x619E07: push    0; int
0x619E09: call    sub_5F2820
0x619E0E: test    al, al
0x619E10: mov     ecx, [ebp+3Ch]
0x619E13: push    0
0x619E15: push    esi
0x619E16: jz      short loc_619E1F
0x619E18: call    TesObjectREF_GetDistance
0x619E1D: jmp     short loc_619E2A
0x619E1F: call    TesObjectREF_GetDistance
0x619E24: fadd    qword ptr ds:0A3F450h
0x619E2A: fstp    dword ptr [esp+1Ch]
