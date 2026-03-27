0x61D7E0: sub     esp, 8
0x61D7E3: push    esi
0x61D7E4: mov     esi, ecx
0x61D7E6: cmp     dword ptr [esi+70h], 8
0x61D7EA: jnz     loc_61D9AB
0x61D7F0: mov     ecx, [esi+3Ch]
0x61D7F3: call    sub_5E0F50
0x61D7F8: mov     edx, [eax]
0x61D7FA: mov     ecx, eax
0x61D7FC: mov     eax, [edx+154h]
0x61D802: call    eax
0x61D804: fstp    [esp+0Ch+var_8]
0x61D808: fldz
0x61D80A: fcomp   [esp+0Ch+var_8]
0x61D80E: fnstsw  ax
0x61D810: test    ah, 5
0x61D813: jp      short loc_61D82A
0x61D815: mov     eax, [esi+6Ch]
0x61D818: cmp     eax, 0Eh
0x61D81B: jz      loc_61D9AB
0x61D821: cmp     eax, 10h
0x61D824: jz      loc_61D9AB
0x61D82A: mov     ecx, [esi+3Ch]
0x61D82D: mov     edx, [ecx]
0x61D82F: mov     eax, [edx+164h]
0x61D835: push    1
0x61D837: call    eax
0x61D839: mov     ecx, eax
0x61D83B: call    ActorAnimData_GetAnimGroupFromField8Value
0x61D840: push    eax
0x61D841: call    sub_51AC80
0x61D846: mov     ecx, [esi+8Ch]
0x61D84C: add     esp, 4
0x61D84F: test    ecx, ecx
0x61D851: mov     dl, al
0x61D853: jz      loc_61D973
0x61D859: fld     dword ptr [esi+44h]
0x61D85C: fsub    dword ptr [esi+104h]
0x61D862: fld     dword ptr [esi+108h]
0x61D868: fcompp
0x61D86A: fnstsw  ax
0x61D86C: test    ah, 5
0x61D86F: jp      loc_61D9AB
0x61D875: test    dl, dl
0x61D877: jnz     loc_61D9AB
0x61D87D: fldz
0x61D87F: fcomp   [esp+0Ch+var_8]
0x61D883: fnstsw  ax
0x61D885: test    ah, 5
0x61D888: jp      short loc_61D8BF
0x61D88A: cmp     ecx, [esi+94h]
0x61D890: jz      short loc_61D8BF
0x61D892: cmp     ecx, [esi+98h]
0x61D898: jz      short loc_61D8BF
0x61D89A: cmp     ecx, [esi+9Ch]
0x61D8A0: jz      short loc_61D8BF
0x61D8A2: mov     ecx, esi
0x61D8A4: call    sub_615980
0x61D8A9: fld     [esp+0Ch+var_8]
0x61D8AD: fcompp
0x61D8AF: fnstsw  ax
0x61D8B1: test    ah, 41h
0x61D8B4: jnz     short loc_61D8BF
0x61D8B6: mov     byte ptr [esi+1ADh], 1
0x61D8BD: jmp     short loc_61D8DE
0x61D8BF: mov     ecx, [esi+8Ch]
0x61D8C5: push    0
0x61D8C7: push    ecx
0x61D8C8: mov     ecx, esi
0x61D8CA: call    sub_617340
0x61D8CF: test    al, al
0x61D8D1: mov     byte ptr [esi+1ADh], 0
0x61D8D8: jz      loc_61D9AB
0x61D8DE: fld     dword ptr [esi+44h]
0x61D8E1: mov     ecx, offset flt_B37288
0x61D8E6: fstp    [esp+0Ch+var_8]
0x61D8EA: call    GameSetting_GetSafeFloatPointer
0x61D8EF: fld     dword ptr [eax]
0x61D8F1: mov     ecx, offset unk_B372E8
0x61D8F6: fstp    [esp+0Ch+var_4]
0x61D8FA: fld     [esp+0Ch+var_8]
0x61D8FE: fstp    dword ptr [esi+134h]
0x61D904: fld     [esp+0Ch+var_4]
0x61D908: fstp    dword ptr [esi+138h]
0x61D90E: fld     dword ptr ds:0A30634h
0x61D914: fstp    dword ptr [esi+13Ch]
0x61D91A: fld     dword ptr [esi+44h]
0x61D91D: fstp    [esp+0Ch+var_4]
0x61D921: call    GameSetting_GetSafeFloatPointer
0x61D926: fld     dword ptr [eax]
0x61D928: mov     eax, 0Dh
0x61D92D: fstp    [esp+0Ch+var_8]
0x61D931: fld     [esp+0Ch+var_4]
0x61D935: fstp    dword ptr [esi+104h]
0x61D93B: fld     [esp+0Ch+var_8]
0x61D93F: fstp    dword ptr [esi+108h]
0x61D945: fld     dword ptr ds:0A30634h
0x61D94B: fst     dword ptr [esi+10Ch]
0x61D951: cmp     [esi+70h], eax
0x61D954: mov     dword ptr [esi+8Ch], 0
0x61D95E: jnz     short loc_61D999
0x61D960: push    0
0x61D962: fstp    st
0x61D964: mov     ecx, esi
0x61D966: mov     [esi+70h], eax
0x61D969: call    sub_619920
0x61D96E: pop     esi
0x61D96F: add     esp, 8
0x61D972: retn
0x61D973: test    dl, dl
0x61D975: jnz     short loc_61D9AB
0x61D977: mov     eax, [esi+3Ch]
0x61D97A: mov     edx, [eax+5Ch]
0x61D97D: lea     ecx, [eax+5Ch]
0x61D980: mov     eax, [edx+30h]
0x61D983: call    eax
0x61D985: test    eax, eax
0x61D987: jnz     short loc_61D9AB
0x61D989: mov     eax, 0Dh
0x61D98E: cmp     [esi+70h], eax
0x61D991: jz      short loc_61D99F
0x61D993: fld     dword ptr ds:0A30634h
0x61D999: fstp    dword ptr [esi+188h]
0x61D99F: push    0
0x61D9A1: mov     ecx, esi
0x61D9A3: mov     [esi+70h], eax
0x61D9A6: call    sub_619920
0x61D9AB: pop     esi
0x61D9AC: add     esp, 8
0x61D9AF: retn
