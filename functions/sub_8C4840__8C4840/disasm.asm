0x8C4840: push    0FFFFFFFFh
0x8C4842: push    offset SEH_8C62B0
0x8C4847: mov     eax, large fs:0
0x8C484D: push    eax
0x8C484E: push    ecx
0x8C484F: push    esi
0x8C4850: mov     eax, ds:0B30AACh
0x8C4855: xor     eax, esp
0x8C4857: push    eax
0x8C4858: lea     eax, [esp+18h+var_C]
0x8C485C: mov     large fs:0, eax
0x8C4862: push    20h ; ' '; Size
0x8C4864: call    FormHeapAlloc
0x8C4869: mov     esi, eax
0x8C486B: add     esp, 4
0x8C486E: mov     [esp+18h+var_10], esi
0x8C4872: xor     eax, eax
0x8C4874: cmp     esi, eax
0x8C4876: mov     [esp+18h+var_4], eax
0x8C487A: jz      short loc_8C488B
0x8C487C: mov     ecx, esi
0x8C487E: call    NiObject_constr
0x8C4883: mov     dword ptr [esi], offset ??_7hkPackedNiTriStripsData@@6B@; const hkPackedNiTriStripsData::`vftable'
0x8C4889: mov     eax, esi
0x8C488B: mov     ecx, [esp+18h+var_C]
0x8C488F: mov     large fs:0, ecx
0x8C4896: pop     ecx
0x8C4897: pop     esi
0x8C4898: add     esp, 10h
0x8C489B: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
