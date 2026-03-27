0x4F62A0: fldz
0x4F62A2: mov     eax, [esp+arg_C]
0x4F62A6: push    ebp
0x4F62A7: fstp    qword ptr [eax]
0x4F62A9: push    esi
0x4F62AA: mov     esi, [esp+8+arg_0]
0x4F62AE: xor     ebp, ebp
0x4F62B0: test    esi, esi
0x4F62B2: push    edi
0x4F62B3: jz      short loc_4F62D5
0x4F62B5: mov     edx, [esi]
0x4F62B7: mov     eax, [edx+170h]
0x4F62BD: mov     ecx, esi
0x4F62BF: call    eax
0x4F62C1: cmp     byte ptr [eax+4], 23h ; '#'
0x4F62C5: jnz     short loc_4F62D5
0x4F62C7: mov     edx, [esi]
0x4F62C9: mov     eax, [edx+170h]
0x4F62CF: mov     ecx, esi
0x4F62D1: call    eax
0x4F62D3: mov     ebp, eax
0x4F62D5: mov     esi, [esp+0Ch+arg_4]
0x4F62D9: xor     edi, edi
0x4F62DB: test    esi, esi
0x4F62DD: jz      short loc_4F62FF
0x4F62DF: mov     edx, [esi]
0x4F62E1: mov     eax, [edx+170h]
0x4F62E7: mov     ecx, esi
0x4F62E9: call    eax
0x4F62EB: cmp     byte ptr [eax+4], 23h ; '#'
0x4F62EF: jnz     short loc_4F62FF
0x4F62F1: mov     edx, [esi]
0x4F62F3: mov     eax, [edx+170h]
0x4F62F9: mov     ecx, esi
0x4F62FB: call    eax
0x4F62FD: mov     edi, eax
0x4F62FF: test    ebp, ebp
0x4F6301: jz      short loc_4F631D
0x4F6303: test    edi, edi
0x4F6305: jz      short loc_4F631D
0x4F6307: mov     ecx, [ebp+0E8h]
0x4F630D: cmp     ecx, [edi+0E8h]
0x4F6313: jnz     short loc_4F631D
0x4F6315: fld1
0x4F6317: mov     edx, [esp+0Ch+arg_C]
0x4F631B: fstp    qword ptr [edx]
0x4F631D: cmp     byte ptr ds:0B361ACh, 0
0x4F6324: pop     edi
0x4F6325: pop     esi
0x4F6326: pop     ebp
0x4F6327: jz      short loc_4F6342
0x4F6329: mov     eax, [esp+arg_C]
0x4F632D: fld     qword ptr [eax]
0x4F632F: sub     esp, 8
0x4F6332: fstp    [esp+8+var_8]
0x4F6335: push    offset aSamerace0_2f; "SameRace >> %0.2f"
0x4F633A: call    Interface_ConsolePrint
0x4F633F: add     esp, 0Ch
0x4F6342: mov     al, 1
0x4F6344: retn
