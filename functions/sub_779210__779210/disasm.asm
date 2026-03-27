0x779210: sub     esp, 0Ch
0x779213: push    esi
0x779214: mov     esi, [esp+10h+arg_0]
0x779218: test    esi, esi
0x77921A: push    edi
0x77921B: mov     edi, ecx
0x77921D: jnz     short loc_779229
0x77921F: pop     edi
0x779220: xor     eax, eax
0x779222: pop     esi
0x779223: add     esp, 0Ch
0x779226: retn    4
0x779229: mov     eax, [esi]
0x77922B: mov     edx, [eax+4Ch]
0x77922E: push    ebp
0x77922F: mov     ecx, esi
0x779231: call    edx
0x779233: mov     [edi+58h], eax
0x779236: mov     [edi+54h], eax
0x779239: mov     dword ptr [edi+5Ch], 1
0x779240: mov     eax, [esi+18h]
0x779243: mov     ecx, [esi+1Ch]
0x779246: mov     edx, [esi+20h]
0x779249: mov     [esp+14h+var_8], eax
0x77924D: mov     eax, [edi+8]
0x779250: add     eax, 7FCh
0x779255: push    eax
0x779256: lea     eax, [esp+18h+var_8]
0x77925A: push    eax
0x77925B: mov     [esp+1Ch+var_4], ecx
0x77925F: mov     [esp+1Ch], edx
0x779263: call    sub_773960
0x779268: add     esp, 8
0x77926B: cmp     byte ptr [esi+34h], 0
0x77926F: mov     ebp, eax
0x779271: mov     ecx, [ebp+0Ch]
0x779274: jz      short loc_779279
0x779276: mov     ecx, [esi+38h]
0x779279: mov     edx, [edi+8]
0x77927C: mov     eax, [edx+280h]
0x779282: push    0
0x779284: lea     esi, [esp+18h+arg_4]
0x779288: push    esi
0x779289: push    0
0x77928B: push    ecx
0x77928C: mov     ecx, [edi+54h]
0x77928F: push    1
0x779291: push    1
0x779293: mov     [esp+2Ch+arg_4], 0
0x77929B: mov     edx, [eax]
0x77929D: mov     edx, [edx+64h]
0x7792A0: push    ecx
0x7792A1: push    eax
0x7792A2: call    edx
0x7792A4: test    eax, eax
0x7792A6: jge     short loc_7792CE
0x7792A8: push    eax
0x7792A9: call    sub_7736F0
0x7792AE: push    eax
0x7792AF: push    offset aNidx9renderedc; "NiDX9RenderedCubeMapData::CreateSurf> F"...
0x7792B4: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7792B9: add     esp, 0Ch
0x7792BC: pop     ebp
0x7792BD: mov     dword ptr [edi+50h], 0
0x7792C4: pop     edi
0x7792C5: xor     eax, eax
0x7792C7: pop     esi
0x7792C8: add     esp, 0Ch
0x7792CB: retn    4
0x7792CE: mov     eax, [esp+18h+arg_0]
0x7792D2: mov     [edi+50h], eax
0x7792D5: mov     eax, ebp
0x7792D7: pop     ebp
0x7792D8: pop     edi
0x7792D9: pop     esi
0x7792DA: add     esp, 0Ch
0x7792DD: retn    4
