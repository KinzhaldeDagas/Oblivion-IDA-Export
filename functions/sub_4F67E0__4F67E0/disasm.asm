0x4F67E0: fldz
0x4F67E2: mov     eax, [esp+arg_C]
0x4F67E6: push    ebp
0x4F67E7: fstp    qword ptr [eax]
0x4F67E9: mov     ebp, [esp+4+arg_0]
0x4F67ED: test    ebp, ebp
0x4F67EF: push    edi
0x4F67F0: jz      loc_4F68E5
0x4F67F6: mov     edx, [ebp+0]
0x4F67F9: mov     eax, [edx+190h]
0x4F67FF: mov     ecx, ebp
0x4F6801: call    eax
0x4F6803: test    al, al
0x4F6805: jz      loc_4F68E5
0x4F680B: mov     edi, [esp+8+arg_8]
0x4F680F: test    edi, edi
0x4F6811: jz      loc_4F68E5
0x4F6817: push    ebx
0x4F6818: push    esi
0x4F6819: push    1; a2
0x4F681B: mov     ecx, ebp; this
0x4F681D: call    Actor_GetActorBaseForm
0x4F6822: mov     esi, eax
0x4F6824: cmp     dword ptr [esi+40h], 0
0x4F6828: jnz     short loc_4F683B
0x4F682A: cmp     dword ptr [esi+3Ch], 0
0x4F682E: jnz     short loc_4F683B
0x4F6830: push    0; a2
0x4F6832: mov     ecx, ebp; this
0x4F6834: call    Actor_GetActorBaseForm
0x4F6839: mov     esi, eax
0x4F683B: push    1; a2
0x4F683D: mov     ecx, edi; this
0x4F683F: call    Actor_GetActorBaseForm
0x4F6844: mov     ebx, eax
0x4F6846: cmp     dword ptr [ebx+40h], 0
0x4F684A: jnz     short loc_4F685D
0x4F684C: cmp     dword ptr [ebx+3Ch], 0
0x4F6850: jnz     short loc_4F685D
0x4F6852: push    0; a2
0x4F6854: mov     ecx, edi; this
0x4F6856: call    Actor_GetActorBaseForm
0x4F685B: mov     ebx, eax
0x4F685D: mov     eax, [esp+10h+arg_4]
0x4F6861: xor     edi, edi
0x4F6863: test    eax, eax
0x4F6865: jz      short loc_4F686F
0x4F6867: cmp     byte ptr [eax+4], 6
0x4F686B: jnz     short loc_4F686F
0x4F686D: mov     edi, eax
0x4F686F: test    esi, esi
0x4F6871: jz      short loc_4F68C1
0x4F6873: test    ebx, ebx
0x4F6875: jz      short loc_4F68C1
0x4F6877: test    edi, edi
0x4F6879: jz      short loc_4F68C1
0x4F687B: cmp     ebp, ds:0B333C4h
0x4F6881: setz    cl
0x4F6884: push    ecx
0x4F6885: push    edi
0x4F6886: lea     ecx, [esi+24h]
0x4F6889: call    TESActorBaseData_GetFactionRank
0x4F688E: mov     edx, [esp+10h+arg_8]
0x4F6892: cmp     edx, ds:0B333C4h
0x4F6898: mov     esi, eax
0x4F689A: setz    al
0x4F689D: lea     ecx, [ebx+24h]
0x4F68A0: push    eax
0x4F68A1: push    edi
0x4F68A2: call    TESActorBaseData_GetFactionRank
0x4F68A7: cmp     esi, 0FFFFFFFFh
0x4F68AA: jz      short loc_4F68C1
0x4F68AC: cmp     eax, 0FFFFFFFFh
0x4F68AF: jz      short loc_4F68C1
0x4F68B1: mov     ecx, [esp+10h+arg_C]
0x4F68B5: sub     esi, eax
0x4F68B7: mov     [esp+10h+arg_8], esi
0x4F68BB: fild    [esp+10h+arg_8]
0x4F68BF: fstp    qword ptr [ecx]
0x4F68C1: cmp     byte ptr ds:0B361ACh, 0
0x4F68C8: pop     esi
0x4F68C9: pop     ebx
0x4F68CA: jz      short loc_4F68E5
0x4F68CC: mov     edx, [esp+8+arg_C]
0x4F68D0: fld     qword ptr [edx]
0x4F68D2: sub     esp, 8
0x4F68D5: fstp    [esp+10h+var_10]
0x4F68D8: push    offset aGetfactionrank; "GetFactionRankDifference >> %0.2f"
0x4F68DD: call    Interface_ConsolePrint
0x4F68E2: add     esp, 0Ch
0x4F68E5: pop     edi
0x4F68E6: mov     al, 1
0x4F68E8: pop     ebp
0x4F68E9: retn
