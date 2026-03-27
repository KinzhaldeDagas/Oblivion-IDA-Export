0x6E4520: push    0FFFFFFFFh
0x6E4522: push    offset SEH_8C8970
0x6E4527: mov     eax, large fs:0
0x6E452D: push    eax
0x6E452E: push    ecx
0x6E452F: push    esi
0x6E4530: push    edi
0x6E4531: mov     eax, ds:0B30AACh
0x6E4536: xor     eax, esp
0x6E4538: push    eax
0x6E4539: lea     eax, [esp+1Ch+var_C]
0x6E453D: mov     large fs:0, eax
0x6E4543: push    18h; Size
0x6E4545: call    FormHeapAlloc
0x6E454A: mov     esi, eax
0x6E454C: add     esp, 4
0x6E454F: mov     [esp+1Ch+var_10], esi
0x6E4553: xor     edi, edi
0x6E4555: cmp     esi, edi
0x6E4557: mov     [esp+1Ch+var_4], edi
0x6E455B: jz      short loc_6E4587
0x6E455D: mov     ecx, esi
0x6E455F: call    NiObject_constr
0x6E4564: mov     dword ptr [esi], offset ??_7NiColorData@@6B@; const NiColorData::`vftable'
0x6E456A: mov     [esi+8], edi
0x6E456D: mov     [esi+0Ch], edi
0x6E4570: mov     [esi+10h], edi
0x6E4573: mov     eax, esi
0x6E4575: mov     ecx, [esp+1Ch+var_C]
0x6E4579: mov     large fs:0, ecx
0x6E4580: pop     ecx
0x6E4581: pop     edi
0x6E4582: pop     esi
0x6E4583: add     esp, 10h
0x6E4586: retn
0x6E4587: xor     eax, eax
0x6E4589: mov     ecx, [esp+1Ch+var_C]
0x6E458D: mov     large fs:0, ecx
0x6E4594: pop     ecx
0x6E4595: pop     edi
0x6E4596: pop     esi
0x6E4597: add     esp, 10h
0x6E459A: retn
