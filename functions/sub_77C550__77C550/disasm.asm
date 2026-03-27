0x77C550: sub     esp, 0Ch
0x77C553: push    edi
0x77C554: mov     edi, ecx
0x77C556: cmp     dword ptr [edi+14h], 0
0x77C55A: jz      short loc_77C5D1
0x77C55C: mov     ecx, [edi+18h]
0x77C55F: test    ecx, ecx
0x77C561: jz      short loc_77C5D1
0x77C563: mov     [esp+10h+var_C], 0
0x77C56B: call    sub_6A9030
0x77C570: test    eax, eax
0x77C572: mov     [esp+10h+var_8], eax
0x77C576: jz      short loc_77C5D1
0x77C578: push    esi
0x77C579: lea     esp, [esp+0]
0x77C580: lea     eax, [esp+14h+var_C]
0x77C584: push    eax
0x77C585: lea     ecx, [esp+18h+var_4]
0x77C589: push    ecx
0x77C58A: mov     ecx, [edi+18h]
0x77C58D: lea     edx, [esp+1Ch+var_8]
0x77C591: push    edx
0x77C592: call    sub_452600
0x77C597: mov     esi, [esp+14h+var_C]
0x77C59B: test    esi, esi
0x77C59D: jz      short loc_77C5C9
0x77C59F: mov     eax, [esi]
0x77C5A1: mov     edx, [eax+20h]
0x77C5A4: mov     ecx, esi
0x77C5A6: call    edx
0x77C5A8: test    al, al
0x77C5AA: jnz     short loc_77C5C9
0x77C5AC: mov     eax, [edi+14h]
0x77C5AF: push    eax; a2
0x77C5B0: mov     ecx, esi; this
0x77C5B2: call    NiD3DShaderInterface__SetDX9Renderer
0x77C5B7: mov     edx, [esi]
0x77C5B9: mov     eax, [edx+64h]
0x77C5BC: mov     ecx, esi
0x77C5BE: call    eax
0x77C5C0: mov     ecx, [edi+14h]
0x77C5C3: push    esi
0x77C5C4: call    sub_769B10
0x77C5C9: cmp     [esp+14h+var_8], 0
0x77C5CE: jnz     short loc_77C580
0x77C5D0: pop     esi
0x77C5D1: pop     edi
0x77C5D2: add     esp, 0Ch
0x77C5D5: retn
