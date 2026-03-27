0x56B820: push    0FFFFFFFFh
0x56B822: push    offset SEH_56B820
0x56B827: mov     eax, large fs:0
0x56B82D: push    eax
0x56B82E: push    ecx
0x56B82F: push    ebp
0x56B830: push    esi
0x56B831: push    edi
0x56B832: mov     eax, ds:0B30AACh
0x56B837: xor     eax, esp
0x56B839: push    eax
0x56B83A: lea     eax, [esp+20h+var_C]
0x56B83E: mov     large fs:0, eax
0x56B844: mov     edi, ecx
0x56B846: mov     [esp+20h+var_10], edi
0x56B84A: mov     dword ptr [edi], offset ??_7BSTECreateTask@@6B@; const BSTECreateTask::`vftable'
0x56B850: mov     esi, [edi+0Ch]
0x56B853: test    esi, esi
0x56B855: mov     ebp, ds:0A2807Ch
0x56B85B: mov     [esp+20h+var_4], 1
0x56B863: jz      short loc_56B884
0x56B865: lea     eax, [esi+4]
0x56B868: push    eax; lpAddend
0x56B869: call    ebp ; InterlockedDecrement
0x56B86B: test    eax, eax
0x56B86D: jnz     short loc_56B87D
0x56B86F: test    esi, esi
0x56B871: jz      short loc_56B87D
0x56B873: mov     edx, [esi]
0x56B875: mov     eax, [edx]
0x56B877: push    1
0x56B879: mov     ecx, esi
0x56B87B: call    eax
0x56B87D: mov     dword ptr [edi+0Ch], 0
0x56B884: mov     esi, [edi+0Ch]
0x56B887: test    esi, esi
0x56B889: mov     byte ptr [esp+20h+var_4], 0
0x56B88E: jz      short loc_56B8A8
0x56B890: lea     ecx, [esi+4]
0x56B893: push    ecx; lpAddend
0x56B894: call    ebp ; InterlockedDecrement
0x56B896: test    eax, eax
0x56B898: jnz     short loc_56B8A8
0x56B89A: test    esi, esi
0x56B89C: jz      short loc_56B8A8
0x56B89E: mov     edx, [esi]
0x56B8A0: mov     eax, [edx]
0x56B8A2: push    1
0x56B8A4: mov     ecx, esi
0x56B8A6: call    eax
0x56B8A8: mov     ecx, edi
0x56B8AA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x56B8B2: mov     dword ptr [edi], offset ??_7NiTask@@6B@; const NiTask::`vftable'
0x56B8B8: call    NiRefObject_destr
0x56B8BD: mov     ecx, [esp+20h+var_C]
0x56B8C1: mov     large fs:0, ecx
0x56B8C8: pop     ecx
0x56B8C9: pop     edi
0x56B8CA: pop     esi
0x56B8CB: pop     ebp
0x56B8CC: add     esp, 10h
0x56B8CF: retn
