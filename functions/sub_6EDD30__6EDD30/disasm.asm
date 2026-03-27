0x6EDD30: sub     esp, 18h
0x6EDD33: push    ebx
0x6EDD34: push    ebp
0x6EDD35: mov     ebp, [esp+20h+arg_0]
0x6EDD39: cmp     ebp, 5
0x6EDD3C: push    esi
0x6EDD3D: push    edi
0x6EDD3E: mov     edi, ecx
0x6EDD40: jl      short loc_6EDD54
0x6EDD42: push    0BBh ; '»'; int
0x6EDD47: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EDD4C: call    sub_6ED6D0
0x6EDD51: add     esp, 8
0x6EDD54: mov     ebx, [esp+28h+arg_4]
0x6EDD58: cmp     ebx, 2
0x6EDD5B: jl      short loc_6EDD6F
0x6EDD5D: push    0BCh ; '¼'; int
0x6EDD62: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EDD67: call    sub_6ED6D0
0x6EDD6C: add     esp, 8
0x6EDD6F: mov     esi, [esp+28h+arg_8]
0x6EDD73: cmp     esi, 2
0x6EDD76: jl      short loc_6EDD8A
0x6EDD78: push    0BDh ; '½'; int
0x6EDD7D: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EDD82: call    sub_6ED6D0
0x6EDD87: add     esp, 8
0x6EDD8A: cmp     byte ptr [edi], 0
0x6EDD8D: jnz     short loc_6EDD9B
0x6EDD8F: fldz
0x6EDD91: pop     edi
0x6EDD92: pop     esi
0x6EDD93: pop     ebp
0x6EDD94: pop     ebx
0x6EDD95: add     esp, 18h
0x6EDD98: retn    10h
0x6EDD9B: lea     eax, [ebx+ebp*2]
0x6EDD9E: lea     edx, [esi+esi*2]
0x6EDDA1: lea     ecx, [esi+eax*2]
0x6EDDA4: shl     edx, 4
0x6EDDA7: add     edx, [esp+28h+arg_C]
0x6EDDAB: shl     ecx, 5
0x6EDDAE: add     edi, ecx
0x6EDDB0: push    edx
0x6EDDB1: lea     eax, [esp+2Ch+var_18]
0x6EDDB5: push    eax
0x6EDDB6: lea     ecx, [edi+25Ch]
0x6EDDBC: call    sub_5523C0
0x6EDDC1: mov     esi, eax
0x6EDDC3: mov     eax, [esi+0Ch]
0x6EDDC6: test    eax, eax
0x6EDDC8: jz      short loc_6EDDD4
0x6EDDCA: mov     ecx, [esi+10h]
0x6EDDCD: sub     ecx, eax
0x6EDDCF: sar     ecx, 2
0x6EDDD2: jnz     short loc_6EDDD9
0x6EDDD4: call    __invalid_parameter_noinfo
0x6EDDD9: mov     edx, [esi+0Ch]
0x6EDDDC: mov     eax, [esp+28h+var_C]
0x6EDDE0: fld     dword ptr [edx]
0x6EDDE2: test    eax, eax
0x6EDDE4: fstp    [esp+28h+arg_0]
0x6EDDE8: jz      short loc_6EDDF3
0x6EDDEA: push    eax
0x6EDDEB: call    FormHeapFree
0x6EDDF0: add     esp, 4
0x6EDDF3: fld     dword ptr [edi+278h]
0x6EDDF9: pop     edi
0x6EDDFA: fadd    [esp+24h+arg_0]
0x6EDDFE: pop     esi
0x6EDDFF: pop     ebp
0x6EDE00: pop     ebx
0x6EDE01: fstp    [esp+18h+arg_0]
0x6EDE05: fld     [esp+18h+arg_0]
0x6EDE09: add     esp, 18h
0x6EDE0C: retn    10h
