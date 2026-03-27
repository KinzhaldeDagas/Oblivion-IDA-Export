0x6B9750: push    0FFFFFFFFh
0x6B9752: push    offset SEH_6B9750
0x6B9757: mov     eax, large fs:0
0x6B975D: push    eax
0x6B975E: sub     esp, 110h
0x6B9764: mov     eax, ds:0B30AACh
0x6B9769: xor     eax, esp
0x6B976B: mov     [esp+11Ch+var_10], eax
0x6B9772: push    ebx
0x6B9773: push    ebp
0x6B9774: push    esi
0x6B9775: push    edi
0x6B9776: mov     eax, ds:0B30AACh
0x6B977B: xor     eax, esp
0x6B977D: push    eax
0x6B977E: lea     eax, [esp+130h+var_C]
0x6B9785: mov     large fs:0, eax
0x6B978B: mov     ebx, [esp+130h+a2]
0x6B9792: mov     esi, [esp+130h+arg_0]
0x6B9799: xor     ebp, ebp
0x6B979B: push    ebp; a3
0x6B979C: mov     edi, ecx
0x6B979E: push    ebx; a2
0x6B979F: lea     ecx, [esp+138h+var_118]; this
0x6B97A3: mov     [esp+138h+var_118.m_data], ebp
0x6B97A7: mov     [esp+138h+var_118.m_dataLen], bp
0x6B97AC: mov     [esp+138h+var_118.m_bufLen], bp
0x6B97B1: call    BSStringT_Set
0x6B97B6: mov     eax, [edi+8]
0x6B97B9: push    eax
0x6B97BA: push    ebx
0x6B97BB: lea     eax, [esp+138h+var_110]
0x6B97BF: push    offset aSS_0; "%s%s"
0x6B97C4: push    eax
0x6B97C5: mov     [esp+140h+var_4], ebp
0x6B97CC: call    __sprintf
0x6B97D1: fild    dword ptr [esi]
0x6B97D3: add     esp, 10h
0x6B97D6: push    0FFFFFFFFh; int
0x6B97D8: push    1; int
0x6B97DA: sub     esp, 8
0x6B97DD: fstp    [esp+140h+var_13C]; float
0x6B97E1: lea     ecx, [esp+140h+var_110]
0x6B97E5: fldz
0x6B97E7: fstp    [esp+140h+var_140]; float
0x6B97EA: push    ecx; int
0x6B97EB: call    InterfaceMgr_DebugTextLine
0x6B97F0: mov     ecx, [edi+24h]
0x6B97F3: mov     eax, 51EB851Fh
0x6B97F8: mul     ecx
0x6B97FA: shr     edx, 5
0x6B97FD: push    edx
0x6B97FE: lea     edx, [esp+148h+var_110]
0x6B9802: push    offset aU_1; "%u"
0x6B9807: push    edx
0x6B9808: call    __sprintf
0x6B980D: add     esp, 20h
0x6B9810: fild    dword ptr [esi]
0x6B9812: push    0FFFFFFFFh; int
0x6B9814: push    1; int
0x6B9816: push    ecx
0x6B9817: fstp    [esp+13Ch+var_13C]; float
0x6B981A: call    sub_57D7A0
0x6B981F: fmul    qword ptr ds:0A46B08h
0x6B9825: push    ecx
0x6B9826: lea     eax, [esp+140h+var_110]
0x6B982A: fdiv    qword ptr ds:0A309F0h
0x6B9830: fstp    [esp+140h+var_11C]
0x6B9834: fld     [esp+140h+var_11C]
0x6B9838: fstp    [esp+140h+var_140]; float
0x6B983B: push    eax; int
0x6B983C: call    InterfaceMgr_DebugTextLine
0x6B9841: mov     eax, [edi+24h]
0x6B9844: mov     ebx, [esp+144h+arg_8]
0x6B984B: imul    eax, 64h ; 'd'
0x6B984E: xor     edx, edx
0x6B9850: div     ebx
0x6B9852: lea     ecx, [esp+144h+var_110]
0x6B9856: push    eax
0x6B9857: push    offset aU_1; "%u"
0x6B985C: push    ecx
0x6B985D: call    __sprintf
0x6B9862: fild    dword ptr [esi]
0x6B9864: add     esp, 20h
0x6B9867: push    0FFFFFFFFh; int
0x6B9869: push    1; int
0x6B986B: push    ecx
0x6B986C: fstp    [esp+13Ch+var_13C]; float
0x6B986F: call    sub_57D7A0
0x6B9874: fmul    qword ptr ds:0A78850h
0x6B987A: push    ecx
0x6B987B: lea     edx, [esp+140h+var_110]
0x6B987F: fdiv    qword ptr ds:0A309F0h
0x6B9885: fstp    [esp+140h+var_11C]
0x6B9889: fld     [esp+140h+var_11C]
0x6B988D: fstp    [esp+140h+var_140]; float
0x6B9890: push    edx; int
0x6B9891: call    InterfaceMgr_DebugTextLine
0x6B9896: mov     eax, [esp+144h+arg_4]
0x6B989D: add     [esi], eax
0x6B989F: add     esp, 14h
0x6B98A2: push    offset word_A403A0
0x6B98A7: lea     ecx, [esp+134h+var_118]
0x6B98AB: call    BSStringT_Append
0x6B98B0: mov     edi, [edi+14h]
0x6B98B3: cmp     edi, ebp
0x6B98B5: jz      short loc_6B98EB
0x6B98B7: mov     eax, 51EB851Fh
0x6B98BC: mul     ebx
0x6B98BE: shr     edx, 5
0x6B98C1: mov     [esp+130h+var_11C], edx
0x6B98C5: mov     ecx, [edi+8]
0x6B98C8: cmp     [ecx+24h], edx
0x6B98CB: jbe     short loc_6B98E5
0x6B98CD: mov     edx, [esp+130h+var_118.m_data]
0x6B98D1: mov     eax, [esp+130h+arg_4]
0x6B98D8: push    edx
0x6B98D9: push    ebx
0x6B98DA: push    eax
0x6B98DB: push    esi
0x6B98DC: call    sub_6B9750
0x6B98E1: mov     edx, [esp+130h+var_11C]
0x6B98E5: mov     edi, [edi]
0x6B98E7: cmp     edi, ebp
0x6B98E9: jnz     short loc_6B98C5
0x6B98EB: mov     ecx, [esp+130h+var_118.m_data]
0x6B98EF: push    ecx
0x6B98F0: call    FormHeapFree
0x6B98F5: add     esp, 4
0x6B98F8: mov     ecx, [esp+130h+var_C]
0x6B98FF: mov     large fs:0, ecx
0x6B9906: pop     ecx
0x6B9907: pop     edi
0x6B9908: pop     esi
0x6B9909: pop     ebp
0x6B990A: pop     ebx
0x6B990B: mov     ecx, [esp+11Ch+var_10]
0x6B9912: xor     ecx, esp
0x6B9914: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6B9919: add     esp, 11Ch
0x6B991F: retn    10h
