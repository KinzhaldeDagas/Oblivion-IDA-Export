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
