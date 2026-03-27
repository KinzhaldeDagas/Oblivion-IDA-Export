0x7423C0: mov     eax, [esp+arg_8]
0x7423C4: push    edi
0x7423C5: xor     edi, edi
0x7423C7: cmp     eax, edi
0x7423C9: jz      loc_742484
0x7423CF: cmp     byte ptr [eax], 31h ; '1'
0x7423D2: jnz     loc_742484
0x7423D8: cmp     [esp+4+arg_C], 38h ; '8'
0x7423DD: jnz     loc_742484
0x7423E3: push    esi
0x7423E4: mov     esi, [esp+8+arg_0]
0x7423E8: cmp     esi, edi
0x7423EA: jz      loc_74247C
0x7423F0: cmp     [esi+20h], edi
0x7423F3: mov     [esi+18h], edi
0x7423F6: jnz     short loc_742402
0x7423F8: mov     dword ptr [esi+20h], offset sub_744FE0
0x7423FF: mov     [esi+28h], edi
0x742402: cmp     [esi+24h], edi
0x742405: jnz     short loc_74240E
0x742407: mov     dword ptr [esi+24h], offset sub_745000
0x74240E: mov     eax, [esi+28h]
0x742411: mov     ecx, [esi+20h]
0x742414: push    1BA8h
0x742419: push    1
0x74241B: push    eax
0x74241C: call    ecx
0x74241E: add     esp, 0Ch
0x742421: cmp     eax, edi
0x742423: jnz     short loc_74242D
0x742425: pop     esi
0x742426: mov     eax, 0FFFFFFFCh
0x74242B: pop     edi
0x74242C: retn
0x74242D: mov     ecx, [esp+8+arg_4]
0x742431: cmp     ecx, edi
0x742433: mov     [esi+1Ch], eax
0x742436: jge     short loc_74243F
0x742438: mov     [eax+8], edi
0x74243B: neg     ecx
0x74243D: jmp     short loc_742452
0x74243F: mov     edx, ecx
0x742441: sar     edx, 4
0x742444: add     edx, 1
0x742447: cmp     ecx, 30h ; '0'
0x74244A: mov     [eax+8], edx
0x74244D: jge     short loc_742452
0x74244F: and     ecx, 0Fh
0x742452: lea     edx, [ecx-8]
0x742455: cmp     edx, 7
0x742458: ja      short loc_74246C
0x74245A: push    esi
0x74245B: mov     [eax+1Ch], ecx
0x74245E: mov     [eax+2Ch], edi
0x742461: call    sub_742370
0x742466: add     esp, 4
0x742469: pop     esi
0x74246A: pop     edi
0x74246B: retn
0x74246C: mov     ecx, [esi+24h]
0x74246F: push    eax
0x742470: mov     eax, [esi+28h]
0x742473: push    eax
0x742474: call    ecx
0x742476: add     esp, 8
0x742479: mov     [esi+1Ch], edi
0x74247C: pop     esi
0x74247D: mov     eax, 0FFFFFFFEh
0x742482: pop     edi
0x742483: retn
0x742484: mov     eax, 0FFFFFFFAh
0x742489: pop     edi
0x74248A: retn
