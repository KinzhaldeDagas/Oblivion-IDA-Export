0x7F5120: sub     esp, 18h
0x7F5123: push    ebx
0x7F5124: push    ebp
0x7F5125: mov     ebx, ecx
0x7F5127: mov     ecx, ds:0B3F928h
0x7F512D: mov     eax, [ecx]
0x7F512F: mov     edx, [eax+7Ch]
0x7F5132: push    esi
0x7F5133: push    edi
0x7F5134: call    edx
0x7F5136: mov     edi, [esp+28h+arg_4]
0x7F513A: mov     esi, eax
0x7F513C: mov     eax, [edi]
0x7F513E: mov     ecx, [eax+20h]
0x7F5141: test    ecx, ecx
0x7F5143: jz      short loc_7F5150
0x7F5145: mov     eax, [ecx]
0x7F5147: mov     edx, [eax+4Ch]
0x7F514A: call    edx
0x7F514C: mov     ebp, eax
0x7F514E: jmp     short loc_7F5152
0x7F5150: xor     ebp, ebp
0x7F5152: mov     eax, [esi]
0x7F5154: mov     edx, [eax+4Ch]
0x7F5157: push    0
0x7F5159: mov     ecx, esi
0x7F515B: call    edx
0x7F515D: test    eax, eax
0x7F515F: mov     [esp+28h+arg_4], eax
0x7F5163: fild    [esp+28h+arg_4]
0x7F5167: jge     short loc_7F516F
0x7F5169: fadd    dword ptr ds:0A2FC78h
0x7F516F: test    ebp, ebp
0x7F5171: mov     [esp+28h+arg_4], ebp
0x7F5175: fild    [esp+28h+arg_4]
0x7F5179: jge     short loc_7F5181
0x7F517B: fadd    dword ptr ds:0A2FC78h
0x7F5181: fdivp   st(1), st
0x7F5183: mov     ecx, ds:0B3F928h
0x7F5189: mov     eax, [ecx]
0x7F518B: mov     edx, [eax+7Ch]
0x7F518E: fstp    [esp+28h+arg_4]
0x7F5192: call    edx
0x7F5194: mov     esi, eax
0x7F5196: mov     eax, [edi]
0x7F5198: mov     ecx, [eax+20h]
0x7F519B: test    ecx, ecx
0x7F519D: jz      short loc_7F51AA
0x7F519F: mov     eax, [ecx]
0x7F51A1: mov     edx, [eax+50h]
0x7F51A4: call    edx
0x7F51A6: mov     ebp, eax
0x7F51A8: jmp     short loc_7F51AC
0x7F51AA: xor     ebp, ebp
0x7F51AC: mov     eax, [esi]
0x7F51AE: mov     edx, [eax+50h]
0x7F51B1: push    0
0x7F51B3: mov     ecx, esi
0x7F51B5: call    edx
0x7F51B7: test    eax, eax
0x7F51B9: mov     [esp+28h+var_14], eax
0x7F51BD: fild    [esp+28h+var_14]
0x7F51C1: jge     short loc_7F51C9
0x7F51C3: fadd    dword ptr ds:0A2FC78h
0x7F51C9: test    ebp, ebp
0x7F51CB: mov     [esp+28h+var_14], ebp
0x7F51CF: fild    [esp+28h+var_14]
0x7F51D3: jge     short loc_7F51DB
0x7F51D5: fadd    dword ptr ds:0A2FC78h
0x7F51DB: cmp     byte ptr ds:0B42E96h, 0
0x7F51E2: fdivp   st(1), st
0x7F51E4: fstp    [esp+28h+var_18]
0x7F51E8: fldz
0x7F51EA: fst     [esp+28h+var_10]
0x7F51EE: fld1
0x7F51F0: fst     [esp+28h+var_C]
0x7F51F4: fst     [esp+28h+var_8]
0x7F51F8: fxch    st(1)
0x7F51FA: fstp    [esp+28h+var_4]
0x7F51FE: jz      short loc_7F5208
0x7F5200: fst     [esp+28h+arg_4]
0x7F5204: fst     [esp+28h+var_18]
0x7F5208: mov     dword ptr [ebx+98h], 0
0x7F5212: mov     eax, [edi]
0x7F5214: mov     ecx, [eax+20h]
0x7F5217: test    ecx, ecx
0x7F5219: jz      short loc_7F5228
0x7F521B: mov     eax, [ecx]
0x7F521D: fstp    st
0x7F521F: mov     edx, [eax+4Ch]
0x7F5222: call    edx
0x7F5224: fld1
0x7F5226: jmp     short loc_7F522A
0x7F5228: xor     eax, eax
0x7F522A: test    eax, eax
0x7F522C: mov     [esp+28h+var_14], eax
0x7F5230: fild    [esp+28h+var_14]
0x7F5234: jge     short loc_7F523C
0x7F5236: fadd    dword ptr ds:0A2FC78h
0x7F523C: fdivr   qword ptr ds:0A2FAA0h
0x7F5242: mov     eax, [edi]
0x7F5244: mov     ecx, [eax+20h]
0x7F5247: test    ecx, ecx
0x7F5249: fstp    [esp+28h+var_14]
0x7F524D: jz      short loc_7F525C
0x7F524F: mov     eax, [ecx]
0x7F5251: fstp    st
0x7F5253: mov     edx, [eax+50h]
0x7F5256: call    edx
0x7F5258: fld1
0x7F525A: jmp     short loc_7F525E
0x7F525C: xor     eax, eax
0x7F525E: test    eax, eax
0x7F5260: fld     [esp+28h+arg_4]
0x7F5264: fst     dword ptr [ebx+0A0h]
0x7F526A: mov     [esp+28h+arg_4], eax
0x7F526E: fld     [esp+28h+var_18]
0x7F5272: fst     dword ptr [ebx+0A4h]
0x7F5278: fld     [esp+28h+var_14]
0x7F527C: fldz
0x7F527E: fadd    st(1), st
0x7F5280: fxch    st(1)
0x7F5282: fstp    dword ptr [ebx+0A8h]
0x7F5288: fild    [esp+28h+arg_4]
0x7F528C: jge     short loc_7F5294
0x7F528E: fadd    dword ptr ds:0A2FC78h
0x7F5294: cmp     [esp+28h+arg_C], 0
0x7F5299: fdivr   qword ptr ds:0A2FAA0h
0x7F529F: fstp    [esp+28h+arg_4]
0x7F52A3: fadd    [esp+28h+arg_4]
0x7F52A7: fstp    dword ptr [ebx+0ACh]
0x7F52AD: jz      short loc_7F52B9
0x7F52AF: fstp    st(1)
0x7F52B1: fstp    st
0x7F52B3: fst     [esp+28h+var_C]
0x7F52B7: jmp     short loc_7F52BF
0x7F52B9: fstp    st(2)
0x7F52BB: fstp    [esp+28h+var_C]
0x7F52BF: mov     eax, [edi]
0x7F52C1: fstp    [esp+28h+var_8]
0x7F52C5: push    eax; a2
0x7F52C6: mov     ecx, ebx; this
0x7F52C8: call    sub_802890
0x7F52CD: mov     esi, [esp+28h+arg_8]
0x7F52D1: mov     ecx, [esi]
0x7F52D3: test    ecx, ecx
0x7F52D5: jz      short loc_7F52EA
0x7F52D7: call    BSRenderedTexture__UseTextureToRender
0x7F52DC: push    eax; a2
0x7F52DD: mov     ebx, 1
0x7F52E2: push    ebx; a1
0x7F52E3: call    NiRenderer_BeginScene
0x7F52E8: jmp     short loc_7F52F7
0x7F52EA: push    0; a2
0x7F52EC: mov     ebx, 1
0x7F52F1: push    ebx; a1
0x7F52F2: call    NiRenderer_BeginScene1
0x7F52F7: mov     ecx, ds:0B3F928h
0x7F52FD: add     esp, 8
0x7F5300: cmp     [ecx+200h], ebx
0x7F5306: jz      short loc_7F5310
0x7F5308: cmp     [ecx+204h], ebx
0x7F530E: jnz     short loc_7F532D
0x7F5310: cmp     [ecx+20Ch], bl
0x7F5316: jnz     short loc_7F532D
0x7F5318: mov     edx, [ecx]
0x7F531A: mov     edx, [edx+144h]
0x7F5320: lea     eax, [esp+28h+var_10]
0x7F5324: push    eax
0x7F5325: call    edx
0x7F5327: mov     ecx, ds:0B3F928h
0x7F532D: push    ecx
0x7F532E: mov     ecx, [esp+2Ch+arg_0]; this
0x7F5332: call    sub_709C60
0x7F5337: cmp     dword ptr [esi], 0
0x7F533A: pop     edi
0x7F533B: pop     esi
0x7F533C: pop     ebp
0x7F533D: pop     ebx
0x7F533E: jz      short loc_7F5345
0x7F5340: call    NiRenderer_EndScene
0x7F5345: add     esp, 18h
0x7F5348: retn    10h
