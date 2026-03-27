0x4106C0: mov     eax, [esp+arg_0]
0x4106C4: push    ebp
0x4106C5: push    eax
0x4106C6: mov     ebp, ecx
0x4106C8: call    sub_410390
0x4106CD: add     esp, 4
0x4106D0: test    al, al
0x4106D2: jnz     short loc_4106D8
0x4106D4: pop     ebp
0x4106D5: retn    8
0x4106D8: cmp     byte_B33424, 0
0x4106DF: push    esi
0x4106E0: jnz     short loc_410730
0x4106E2: mov     ecx, [ebp+0]
0x4106E5: push    ecx
0x4106E6: call    ds:_BinkWait@4; BinkWait(x)
0x4106EC: test    eax, eax
0x4106EE: jnz     loc_4107ED
0x4106F4: mov     esi, [ebp+8]
0x4106F7: push    edi
0x4106F8: mov     edi, [ebp+0]
0x4106FB: push    eax
0x4106FC: call    sub_40FCA0
0x410701: add     esp, 4
0x410704: test    al, al
0x410706: pop     edi
0x410707: jz      short loc_410722
0x410709: add     dword ptr [ebp+10h], 1
0x41070D: mov     eax, [ebp+10h]
0x410710: mov     edx, [ebp+0Ch]
0x410713: push    eax
0x410714: push    edx; ArgList
0x410715: push    offset aBinkPlaybackSk; "Bink playback: Skipped frame #%i.  Tota"...
0x41071A: call    sub_40FEC0
0x41071F: add     esp, 0Ch
0x410722: mov     eax, [ebp+0]
0x410725: push    eax
0x410726: call    ds:_BinkNextFrame@4; BinkNextFrame(x)
0x41072C: add     dword ptr [ebp+0Ch], 1
0x410730: mov     eax, [ebp+4]
0x410733: fld1
0x410735: mov     ecx, [eax]
0x410737: mov     edx, [ecx+0ACh]
0x41073D: mov     esi, dword_B350D8
0x410743: push    0
0x410745: push    ecx
0x410746: fstp    [esp+10h+var_10]
0x410749: push    0FF000000h
0x41074E: push    1
0x410750: push    0
0x410752: push    0
0x410754: push    eax
0x410755: call    edx
0x410757: cmp     dword ptr [esi+200h], 1
0x41075E: jz      short loc_41076E
0x410760: mov     eax, [ebp+4]
0x410763: mov     ecx, [eax]
0x410765: mov     edx, [ecx+0A4h]
0x41076B: push    eax
0x41076C: call    edx
0x41076E: fld     dword ptr [ebp+14h]
0x410771: mov     eax, [ebp+8]
0x410774: sub     esp, 10h
0x410777: fstp    [esp+18h+var_C]; float
0x41077B: fld     dword ptr [ebp+14h]
0x41077E: fstp    [esp+18h+var_10]; float
0x410782: fld     dword ptr [ebp+1Ch]
0x410785: fstp    [esp+18h+var_14]; float
0x410789: fld     dword ptr [ebp+18h]
0x41078C: fstp    [esp+18h+var_18]; float
0x41078F: push    eax; int
0x410790: call    sub_40FA20
0x410795: add     esp, 14h
0x410798: cmp     dword ptr [esi+200h], 1
0x41079F: jz      short loc_4107AF
0x4107A1: mov     eax, [ebp+4]
0x4107A4: mov     ecx, [eax]
0x4107A6: mov     edx, [ecx+0A8h]
0x4107AC: push    eax
0x4107AD: call    edx
0x4107AF: cmp     dword ptr [ebp+20h], 2
0x4107B3: jz      short loc_4107C8
0x4107B5: mov     eax, [ebp+4]
0x4107B8: mov     ecx, [eax]
0x4107BA: mov     edx, [ecx+44h]
0x4107BD: push    0
0x4107BF: push    0
0x4107C1: push    0
0x4107C3: push    0
0x4107C5: push    eax
0x4107C6: call    edx
0x4107C8: push    104h
0x4107CD: mov     ecx, esi
0x4107CF: call    sub_768960
0x4107D4: mov     eax, [ebp+0]
0x4107D7: mov     ecx, [ebp+0Ch]
0x4107DA: cmp     ecx, [eax+8]
0x4107DD: jb      short loc_4107FF
0x4107DF: cmp     [esp+8+arg_4], 0
0x4107E4: jnz     short loc_4107FF
0x4107E6: pop     esi
0x4107E7: xor     al, al
0x4107E9: pop     ebp
0x4107EA: retn    8
0x4107ED: cmp     dword ptr [ebp+20h], 2
0x4107F1: jz      loc_410730
0x4107F7: push    1; dwMilliseconds
0x4107F9: call    ds:Sleep
0x4107FF: pop     esi
0x410800: mov     al, 1
0x410802: pop     ebp
0x410803: retn    8
