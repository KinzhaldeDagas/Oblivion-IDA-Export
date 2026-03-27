0x442630: push    esi
0x442631: mov     esi, ecx
0x442633: cmp     dword ptr [esi+7Ch], 0
0x442637: push    edi
0x442638: jz      short loc_442656
0x44263A: lea     ebx, [ebx+0]
0x442640: mov     eax, [esi+7Ch]
0x442643: mov     edi, [eax+4]
0x442646: push    eax
0x442647: call    FormHeapFree
0x44264C: add     esp, 4
0x44264F: test    edi, edi
0x442651: mov     [esi+7Ch], edi
0x442654: jnz     short loc_442640
0x442656: push    ebx
0x442657: mov     ebx, dword ptr [esp+0Ch+a2]
0x44265B: test    bl, bl
0x44265D: mov     dword ptr [esi+78h], 0
0x442664: jz      short loc_44266C
0x442666: cmp     dword ptr [esi+34h], 0
0x44266A: jz      short loc_442673
0x44266C: mov     ecx, esi; this
0x44266E: call    sub_4425D0
0x442673: test    bl, bl
0x442675: jnz     short loc_442688
0x442677: push    0
0x442679: call    GetShadowSceneNode
0x44267E: add     esp, 4
0x442681: mov     ecx, eax
0x442683: call    sub_7C7E50
0x442688: mov     eax, ds:0B33398h
0x44268D: mov     ecx, [eax+24h]
0x442690: test    ecx, ecx
0x442692: jz      short loc_442699
0x442694: call    sub_6AC210
0x442699: push    0
0x44269B: push    ebx
0x44269C: mov     ecx, esi
0x44269E: call    sub_43FFF0
0x4426A3: mov     edi, [esi+34h]
0x4426A6: test    edi, edi
0x4426A8: jz      short loc_4426C6
0x4426AA: test    bl, bl
0x4426AC: jnz     short loc_4426C6
0x4426AE: push    edi; a2
0x4426AF: mov     ecx, esi; this
0x4426B1: call    TES__IsInteriorCellPreloaded
0x4426B6: test    al, al
0x4426B8: jnz     short loc_4426C6
0x4426BA: mov     ecx, ds:0B33A98h
0x4426C0: push    edi; a1
0x4426C1: call    sub_447BA0
0x4426C6: push    ebx
0x4426C7: mov     ecx, esi
0x4426C9: call    sub_43FE30
0x4426CE: test    bl, bl
0x4426D0: pop     ebx
0x4426D1: mov     byte ptr [esi+0A8h], 1
0x4426D8: jnz     short loc_4426E8
0x4426DA: cmp     [esp+8+a3], 0
0x4426DF: jnz     short loc_4426E8
0x4426E1: mov     dword ptr [esi+34h], 0
0x4426E8: pop     edi
0x4426E9: pop     esi
0x4426EA: retn    8
