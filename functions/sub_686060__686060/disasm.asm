0x686060: sub     esp, 18h
0x686063: mov     eax, ds:0B333A0h
0x686068: cmp     dword ptr [eax+7Ch], 0
0x68606C: mov     [esp+18h+var_10], ecx
0x686070: jnz     short loc_68607C
0x686072: cmp     dword ptr [eax+78h], 0
0x686076: jz      loc_68614A
0x68607C: push    esi
0x68607D: lea     esi, [ecx+14h]
0x686080: lea     eax, [esp+1Ch+var_18]
0x686084: push    eax
0x686085: mov     ecx, esi
0x686087: mov     [esp+20h+var_18], 0
0x68608F: call    TESHealthForm_GetHealth
0x686094: push    eax
0x686095: mov     ecx, esi
0x686097: call    sub_68BF60
0x68609C: test    al, al
0x68609E: jz      loc_686149
0x6860A4: mov     ecx, [esp+1Ch+var_18]
0x6860A8: test    ecx, ecx
0x6860AA: jnz     short loc_6860B5
0x6860AC: mov     ecx, esi
0x6860AE: call    TESHealthForm_GetHealth
0x6860B3: mov     ecx, eax
0x6860B5: call    sub_6899C0
0x6860BA: mov     ecx, [eax]
0x6860BC: mov     edx, [eax+4]
0x6860BF: mov     eax, [eax+8]
0x6860C2: mov     [esp+1Ch+var_4], eax
0x6860C6: mov     [esp+1Ch+var_8], edx
0x6860CA: mov     [esp+1Ch+var_C], ecx
0x6860CE: push    ebp
0x6860CF: fld     [esp+20h+var_C]
0x6860D3: fistp   [esp+20h+var_14]
0x6860D7: mov     ebp, [esp+20h+var_14]
0x6860DB: sar     ebp, 0Ch
0x6860DE: fld     [esp+20h+var_8]
0x6860E2: fistp   [esp+20h+var_14]
0x6860E6: mov     eax, [esp+20h+var_14]
0x6860EA: mov     esi, ds:0B333A0h
0x6860F0: sar     eax, 0Ch
0x6860F3: add     esi, 78h ; 'x'
0x6860F6: mov     [esp+20h+var_14], eax
0x6860FA: jz      short loc_686148
0x6860FC: push    ebx
0x6860FD: push    edi
0x6860FE: mov     edi, edi
0x686100: cmp     dword ptr [esi+4], 0
0x686104: jnz     short loc_68610B
0x686106: cmp     dword ptr [esi], 0
0x686109: jz      short loc_686146
0x68610B: mov     edi, [esi]
0x68610D: mov     ecx, edi; this
0x68610F: call    TESObjectCELL_GetXCoordinate
0x686114: mov     ecx, edi; this
0x686116: mov     ebx, eax
0x686118: call    TESObjectCELL_GetYCoordinate
0x68611D: cmp     ebx, ebp
0x68611F: jnz     short loc_686127
0x686121: cmp     eax, [esp+28h+var_14]
0x686125: jz      short loc_686138
0x686127: mov     esi, [esi+4]
0x68612A: test    esi, esi
0x68612C: jnz     short loc_686100
0x68612E: pop     edi
0x68612F: pop     ebx
0x686130: pop     ebp
0x686131: pop     esi
0x686132: add     esp, 18h
0x686135: retn    4
0x686138: mov     ecx, [esp+28h+arg_0]
0x68613C: push    ecx
0x68613D: mov     ecx, [esp+2Ch+var_10]
