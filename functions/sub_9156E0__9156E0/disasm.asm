0x9156E0: push    ebp
0x9156E1: mov     ebp, esp
0x9156E3: and     esp, 0FFFFFFF0h
0x9156E6: sub     esp, 224h
0x9156EC: mov     eax, ds:0B30AACh
0x9156F1: mov     edx, ds:0BA9DE4h
0x9156F7: push    ebx
0x9156F8: push    esi
0x9156F9: mov     esi, ecx
0x9156FB: mov     ecx, large fs:2Ch
0x915702: mov     [esp+22Ch+var_4], eax
0x915709: mov     eax, [ecx+edx*4]
0x91570C: mov     ebx, [eax+1A8h]
0x915712: push    edi
0x915713: mov     edi, [eax+1A4h]
0x915719: cmp     edi, ebx
0x91571B: jnb     short loc_915741
0x91571D: mov     edi, eax
0x91571F: mov     ecx, [edi+1A4h]
0x915725: mov     dword ptr [ecx], offset aTtrcshpcollect; "TtrcShpCollect"
0x91572B: rdtsc
0x91572D: mov     [esp+230h+var_21C], eax
0x915731: mov     eax, [esp+230h+var_21C]
0x915735: mov     [ecx+4], eax
0x915738: add     ecx, 0Ch
0x91573B: mov     [edi+1A4h], ecx
0x915741: mov     ebx, [ebp+arg_4]
0x915744: mov     eax, [ebx+24h]
0x915747: test    eax, eax
0x915749: mov     edx, [esi]
0x91574B: mov     byte ptr [esp+230h+var_21C], 0
0x915750: mov     ecx, esi
0x915752: jnz     short loc_9157A1
0x915754: call    dword ptr [edx+20h]
0x915757: mov     edi, eax
0x915759: cmp     edi, 0FFFFFFFFh
0x91575C: jz      loc_915801
0x915762: mov     eax, [esi]
0x915764: lea     ecx, [esp+230h+var_210]
0x915768: push    ecx
0x915769: push    edi
0x91576A: mov     ecx, esi
0x91576C: call    dword ptr [eax+28h]
0x91576F: mov     ecx, [ebp+arg_8]
0x915772: mov     edx, [eax]
0x915774: push    ecx
0x915775: push    ebx
0x915776: lea     ecx, [esp+238h+var_21D]
0x91577A: push    ecx
0x91577B: mov     ecx, eax
0x91577D: call    dword ptr [edx+14h]
0x915780: cmp     byte ptr [eax], 0
0x915783: jz      short loc_915790
0x915785: mov     edx, [ebp+arg_8]
0x915788: mov     byte ptr [esp+230h+var_21C], 1
0x91578D: mov     [edx+10h], edi
0x915790: mov     eax, [esi]
0x915792: push    edi
0x915793: mov     ecx, esi
0x915795: call    dword ptr [eax+24h]
0x915798: mov     edi, eax
0x91579A: cmp     edi, 0FFFFFFFFh
0x91579D: jnz     short loc_915762
0x91579F: jmp     short loc_915801
0x9157A1: call    dword ptr [edx+20h]
0x9157A4: mov     edi, eax
0x9157A6: cmp     edi, 0FFFFFFFFh
0x9157A9: jz      short loc_915801
0x9157AB: jmp     short loc_9157B0
0x9157AD: align 10h
0x9157B0: mov     ecx, [ebx+24h]
0x9157B3: mov     eax, [ecx]
0x9157B5: push    edi
0x9157B6: push    esi
0x9157B7: push    ebx
0x9157B8: lea     edx, [esp+23Ch+var_21D]
0x9157BC: push    edx
0x9157BD: call    dword ptr [eax]
0x9157BF: cmp     byte ptr [eax], 0
0x9157C2: jz      short loc_9157F2
0x9157C4: mov     eax, [esi]
0x9157C6: lea     ecx, [esp+230h+var_210]
0x9157CA: push    ecx
0x9157CB: push    edi
0x9157CC: mov     ecx, esi
0x9157CE: call    dword ptr [eax+28h]
0x9157D1: mov     ecx, [ebp+arg_8]
0x9157D4: mov     edx, [eax]
0x9157D6: push    ecx
0x9157D7: push    ebx
0x9157D8: lea     ecx, [esp+238h+var_215]
0x9157DC: push    ecx
0x9157DD: mov     ecx, eax
0x9157DF: call    dword ptr [edx+14h]
0x9157E2: cmp     byte ptr [eax], 0
0x9157E5: jz      short loc_9157F2
0x9157E7: mov     edx, [ebp+arg_8]
0x9157EA: mov     byte ptr [esp+230h+var_21C], 1
0x9157EF: mov     [edx+10h], edi
0x9157F2: mov     eax, [esi]
0x9157F4: push    edi
0x9157F5: mov     ecx, esi
0x9157F7: call    dword ptr [eax+24h]
0x9157FA: mov     edi, eax
0x9157FC: cmp     edi, 0FFFFFFFFh
0x9157FF: jnz     short loc_9157B0
0x915801: mov     ecx, large fs:2Ch
0x915808: mov     edx, ds:0BA9DE4h
0x91580E: mov     eax, [ecx+edx*4]
0x915811: mov     esi, [eax+1A4h]
0x915817: cmp     esi, [eax+1A8h]
0x91581D: jnb     short loc_915861
0x91581F: mov     esi, eax
0x915821: mov     ecx, [esi+1A4h]
0x915827: mov     dword ptr [ecx], offset aEt; "Et"
0x91582D: rdtsc
0x91582F: mov     [esp+230h+var_214], eax
0x915833: mov     edx, [esp+230h+var_214]
0x915837: mov     eax, [ebp+arg_0]
0x91583A: mov     [ecx+4], edx
0x91583D: add     ecx, 0Ch
0x915840: mov     [esi+1A4h], ecx
0x915846: mov     cl, byte ptr [esp+230h+var_21C]
0x91584A: mov     [eax], cl
0x91584C: mov     ecx, [esp+230h+var_4]
0x915853: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915858: pop     edi
0x915859: pop     esi
0x91585A: pop     ebx
0x91585B: mov     esp, ebp
0x91585D: pop     ebp
0x91585E: retn    0Ch
0x915861: mov     eax, [ebp+arg_0]
0x915864: mov     dl, byte ptr [esp+230h+var_21C]
0x915868: mov     ecx, [esp+230h+var_4]
0x91586F: mov     [eax], dl
0x915871: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915876: pop     edi
0x915877: pop     esi
0x915878: pop     ebx
0x915879: mov     esp, ebp
0x91587B: pop     ebp
0x91587C: retn    0Ch
