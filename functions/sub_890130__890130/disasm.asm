0x890130: push    ebp
0x890131: mov     ebp, esp
0x890133: and     esp, 0FFFFFFF0h
0x890136: sub     esp, 1Ch
0x890139: mov     eax, [ebp+arg_0]
0x89013C: fld     [ebp+arg_4]
0x89013F: push    esi
0x890140: mov     esi, ecx
0x890142: mov     dword ptr [esi], offset ??_7bhkCharacterListener@@6B@; const bhkCharacterListener::`vftable'
0x890148: movaps  xmm0, xmmword ptr [eax]
0x89014B: movaps  xmmword ptr [esi+10h], xmm0
0x89014F: call    __CIcos
0x890154: fstp    [esp+20h+var_10]
0x890158: fld     [esp+20h+var_10]
0x89015C: xor     eax, eax
0x89015E: fstp    dword ptr [esi+20h]
0x890161: xorps   xmm0, xmm0
0x890164: fld     [ebp+arg_8]
0x890167: mov     [esi+4], eax
0x89016A: fst     dword ptr [esi+58h]
0x89016D: mov     dword ptr [esi+24h], 1Fh
0x890174: fld     dword ptr ds:0A96588h
0x89017A: mov     [esi+28h], eax
0x89017D: fst     dword ptr [esi+54h]
0x890180: movaps  xmmword ptr [esi+30h], xmm0
0x890184: fstp    dword ptr [esi+50h]
0x890187: mov     [esi+60h], al
0x89018A: mov     [esi+64h], eax
0x89018D: fstp    [esp+20h+var_8]
0x890191: mov     [esi+61h], al
0x890194: fld     [ebp+arg_4]
0x890197: call    __CIsin
0x89019C: fstp    [esp+20h+var_C]
0x8901A0: fld     [esp+20h+var_C]
0x8901A4: mov     eax, esi
0x8901A6: fdivr   [esp+20h+var_8]
0x8901AA: fmul    [esp+20h+var_10]
0x8901AE: fstp    dword ptr [esi+5Ch]
0x8901B1: pop     esi
0x8901B2: mov     esp, ebp
0x8901B4: pop     ebp
0x8901B5: retn    0Ch
