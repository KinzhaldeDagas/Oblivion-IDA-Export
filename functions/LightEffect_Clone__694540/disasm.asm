0x694540: push    0FFFFFFFFh
0x694542: push    offset SEH_8C8970
0x694547: mov     eax, large fs:0
0x69454D: push    eax
0x69454E: push    ecx
0x69454F: push    esi
0x694550: push    edi
0x694551: mov     eax, ds:0B30AACh
0x694556: xor     eax, esp
0x694558: push    eax
0x694559: lea     eax, [esp+1Ch+var_C]
0x69455D: mov     large fs:0, eax
0x694563: mov     esi, ecx
0x694565: push    3Ch ; '<'; Size
0x694567: call    FormHeapAlloc
0x69456C: add     esp, 4
0x69456F: mov     [esp+1Ch+var_10], eax
0x694573: xor     edi, edi
0x694575: cmp     eax, edi
0x694577: mov     [esp+1Ch+var_4], edi
0x69457B: jz      short loc_694592
0x69457D: mov     ecx, [esi+0Ch]
0x694580: mov     edx, [esi+8]
0x694583: push    ecx; int
0x694584: mov     ecx, [esi+24h]
0x694587: push    edx; int
0x694588: push    ecx; int
0x694589: mov     ecx, eax; this
0x69458B: call    LightEffect_constr
0x694590: mov     edi, eax
0x694592: mov     edx, [esi]
0x694594: mov     eax, [edx+2Ch]
0x694597: push    edi
0x694598: mov     ecx, esi
0x69459A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6945A2: call    eax
0x6945A4: mov     eax, edi
0x6945A6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6945AA: mov     large fs:0, ecx
0x6945B1: pop     ecx
0x6945B2: pop     edi
0x6945B3: pop     esi
0x6945B4: add     esp, 10h
0x6945B7: retn
