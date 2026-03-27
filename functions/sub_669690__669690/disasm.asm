0x669690: push    0FFFFFFFFh
0x669692: push    offset SEH_596FE0
0x669697: mov     eax, large fs:0
0x66969D: push    eax
0x66969E: sub     esp, 8
0x6696A1: push    ebx
0x6696A2: push    esi
0x6696A3: push    edi
0x6696A4: mov     eax, ds:0B30AACh
0x6696A9: xor     eax, esp
0x6696AB: push    eax
0x6696AC: lea     eax, [esp+24h+var_C]
0x6696B0: mov     large fs:0, eax
0x6696B6: mov     esi, [esp+24h+a5]
0x6696BA: xor     ebx, ebx
0x6696BC: cmp     esi, ebx
0x6696BE: jnz     short loc_6696D7
0x6696C0: xor     al, al
0x6696C2: mov     ecx, [esp+24h+var_C]
0x6696C6: mov     large fs:0, ecx
0x6696CD: pop     ecx
0x6696CE: pop     edi
0x6696CF: pop     esi
0x6696D0: pop     ebx
0x6696D1: add     esp, 14h
0x6696D4: retn    0Ch
0x6696D7: lea     edi, [ecx+5E4h]
0x6696DD: mov     eax, edi
0x6696DF: cmp     eax, ebx
0x6696E1: jz      short loc_6696F4
0x6696E3: mov     ecx, [eax]
0x6696E5: cmp     ecx, ebx
0x6696E7: jz      short loc_6696F4
0x6696E9: cmp     ecx, esi
0x6696EB: jz      short loc_6696C0
0x6696ED: mov     eax, [eax+4]
0x6696F0: cmp     eax, ebx
0x6696F2: jnz     short loc_6696E3
0x6696F4: push    esi
0x6696F5: mov     ecx, edi
0x6696F7: call    BSSimpleList_PushFront
0x6696FC: cmp     [esp+24h+a7], bl
0x669700: jz      short loc_66976D
0x669702: call    sub_578FE0
0x669707: cmp     eax, 3F1h
0x66970C: jz      short loc_66976D
0x66970E: mov     [esp+24h+string], ebx
0x669712: mov     [esp+24h+var_10], bx
0x669717: mov     [esp+24h+var_E], bx
0x66971C: mov     eax, [esi+1Ch]
0x66971F: cmp     eax, ebx
0x669721: mov     [esp+24h+var_4], ebx
0x669725: jnz     short loc_66972C
0x669727: mov     eax, offset EmptyString
0x66972C: push    eax
0x66972D: mov     eax, ds:0B382E0h
0x669732: push    eax; ArgList
0x669733: lea     ecx, [esp+2Ch+string]
0x669737: push    offset aSS_5; "%s: %s"
0x66973C: push    ecx; int
0x66973D: call    BSStringT_Static_Format
0x669742: fld     dword ptr ds:0A31C80h
0x669748: mov     esi, [esp+34h+string]
0x66974C: fstp    [esp+34h+duration]; duration
0x669750: add     esp, 0Ch
0x669753: push    1; unk2
0x669755: push    ebx; unk1
0x669756: push    esi; string
0x669757: call    GameUI_QueueMessage
0x66975C: push    esi
0x66975D: mov     [esp+38h+var_4], 0FFFFFFFFh
0x669765: call    FormHeapFree
0x66976A: add     esp, 14h
0x66976D: cmp     [esp+24h+a6], bl
0x669771: jz      short loc_66977C
0x669773: push    edi
0x669774: call    sub_52F6D0
0x669779: add     esp, 4
0x66977C: mov     al, 1
0x66977E: mov     ecx, [esp+24h+var_C]
0x669782: mov     large fs:0, ecx
0x669789: pop     ecx
0x66978A: pop     edi
0x66978B: pop     esi
0x66978C: pop     ebx
0x66978D: add     esp, 14h
0x669790: retn    0Ch
