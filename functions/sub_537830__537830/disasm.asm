0x537830: push    0FFFFFFFFh
0x537832: push    offset SEH_537E40
0x537837: mov     eax, large fs:0
0x53783D: push    eax
0x53783E: push    ecx
0x53783F: push    esi
0x537840: mov     eax, ds:0B30AACh
0x537845: xor     eax, esp
0x537847: push    eax
0x537848: lea     eax, [esp+18h+var_C]
0x53784C: mov     large fs:0, eax
0x537852: mov     esi, ecx
0x537854: mov     [esp+18h+var_10], esi
0x537858: call    sub_8B2170
0x53785D: fld1
0x53785F: fstp    dword ptr [esi+14h]
0x537862: mov     dword ptr [esi], offset ??_7TESWaterListener@@6B@; const TESWaterListener::`vftable'
0x537868: mov     eax, ds:0B06A2Ch
0x53786D: mov     [esi+20h], eax
0x537870: imul    eax, eax
0x537873: xor     ecx, ecx
0x537875: mov     edx, 4
0x53787A: mul     edx
0x53787C: seto    cl
0x53787F: mov     [esp+18h+var_4], 0
0x537887: neg     ecx
0x537889: or      ecx, eax
0x53788B: push    ecx; Size
0x53788C: call    FormHeapAlloc
0x537891: mov     [esi+18h], eax
0x537894: add     esp, 4
0x537897: mov     eax, esi
0x537899: mov     ecx, [esp+18h+var_C]
0x53789D: mov     large fs:0, ecx
0x5378A4: pop     ecx
0x5378A5: pop     esi
0x5378A6: add     esp, 10h
0x5378A9: retn
