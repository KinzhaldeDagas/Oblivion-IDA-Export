0x507800: sub     esp, 10h
0x507803: mov     ecx, [esp+10h+l]
0x507807: mov     edx, [esp+10h+arg_10]
0x50780B: lea     eax, [esp+10h+var_10]
0x50780E: push    eax; UInt16
0x50780F: mov     eax, [esp+14h+arg_C]
0x507813: push    ecx; l
0x507814: mov     ecx, [esp+18h+a4]
0x507818: push    edx; a6
0x507819: mov     edx, [esp+1Ch+a3]
0x50781D: push    eax; a5
0x50781E: mov     eax, [esp+20h+arg_4]
0x507822: push    ecx; a4
0x507823: mov     ecx, [esp+24h+a1]
0x507827: push    edx; a3
0x507828: push    eax; a2
0x507829: push    ecx; a1
0x50782A: mov     dword ptr [esp+30h+var_10], 1
0x507832: call    Script_ExtractArgs
0x507837: add     esp, 20h
0x50783A: test    al, al
0x50783C: jnz     short loc_507842
0x50783E: add     esp, 10h
0x507841: retn
0x507842: mov     ecx, ds:0B333C4h; this
0x507848: push    esi
0x507849: call    TESObjectREFR_GetWorldSpace
0x50784E: mov     esi, eax
0x507850: test    esi, esi
0x507852: jz      short loc_507860
0x507854: mov     ecx, esi
0x507856: call    sub_4F1A60
0x50785B: cmp     byte ptr [eax], 0
0x50785E: jnz     short loc_50789D
0x507860: mov     edx, ds:0B3F9A8h
0x507866: mov     ecx, ds:0B3F9B0h
0x50786C: mov     eax, ds:0B3F9ACh
0x507871: mov     dword ptr [esp+14h+var_C], edx
0x507875: push    0
0x507877: lea     edx, [esp+18h+var_C]
0x50787B: mov     [esp+18h+var_4], ecx
0x50787F: mov     ecx, ds:0B333C4h; this
0x507885: push    edx
0x507886: mov     dword ptr [esp+1Ch+var_C+4], eax
0x50788A: call    TESObjectREFR_GetParentCell
0x50788F: mov     ecx, ds:0B33A98h
0x507895: push    eax
0x507896: call    sub_44EE00
0x50789B: mov     esi, eax
0x50789D: test    esi, esi
0x50789F: jz      short loc_507909
0x5078A1: push    edi
0x5078A2: mov     ecx, esi
0x5078A4: call    sub_4F0620
0x5078A9: mov     edi, eax
0x5078AB: test    edi, edi
0x5078AD: mov     esi, edi
0x5078AF: jz      short loc_5078F8
0x5078B1: mov     ecx, [esi]
0x5078B3: test    ecx, ecx
0x5078B5: jz      short loc_5078F8
0x5078B7: cmp     dword ptr [esp+18h+var_10], 0
0x5078BC: setnle  al
0x5078BF: push    eax
0x5078C0: call    sub_4D7730
0x5078C5: mov     ecx, eax
0x5078C7: call    AddMapMarker
0x5078CC: cmp     dword ptr [esp+18h+var_10], 0
0x5078D1: mov     ecx, [esi]
0x5078D3: setnle  dl
0x5078D6: push    edx
0x5078D7: call    sub_4D7730
0x5078DC: mov     ecx, eax
0x5078DE: call    sub_42B350
0x5078E3: mov     ecx, [esi]
0x5078E5: mov     eax, [ecx]
0x5078E7: mov     edx, [eax+40h]
0x5078EA: push    400h
0x5078EF: call    edx
0x5078F1: mov     esi, [esi+4]
0x5078F4: test    esi, esi
0x5078F6: jnz     short loc_5078B1
0x5078F8: mov     ecx, edi
0x5078FA: call    BSSimpleList_Clear
0x5078FF: push    edi
0x507900: call    FormHeapFree
0x507905: add     esp, 4
0x507908: pop     edi
0x507909: cmp     dword ptr [esp+14h+var_10], 0
0x50790E: pop     esi
0x50790F: mov     eax, offset aShown_; "shown."
0x507914: jg      short loc_50791B
0x507916: mov     eax, offset aHidden_; "hidden."
0x50791B: push    eax
0x50791C: push    offset aAllMapMarkersS; "All map markers %s"
0x507921: call    Interface_ConsolePrint
0x507926: add     esp, 8
0x507929: mov     al, 1
0x50792B: add     esp, 10h
0x50792E: retn
