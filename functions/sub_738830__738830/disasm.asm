0x738830: push    0FFFFFFFFh
0x738832: push    offset SEH_8C62B0
0x738837: mov     eax, large fs:0
0x73883D: push    eax
0x73883E: push    ecx
0x73883F: push    esi
0x738840: mov     eax, ds:0B30AACh
0x738845: xor     eax, esp
0x738847: push    eax
0x738848: lea     eax, [esp+18h+var_C]
0x73884C: mov     large fs:0, eax
0x738852: push    0C0h ; 'À'; Size
0x738857: call    FormHeapAlloc
0x73885C: mov     esi, eax
0x73885E: add     esp, 4
0x738861: mov     [esp+18h+var_10], esi
0x738865: xor     eax, eax
0x738867: cmp     esi, eax
0x738869: mov     [esp+18h+var_4], eax
0x73886D: jz      short loc_73887E
0x73886F: mov     ecx, esi
0x738871: call    sub_717590
0x738876: mov     dword ptr [esi], offset ??_7NiScreenGeometry@@6B@; const NiScreenGeometry::`vftable'
0x73887C: mov     eax, esi
0x73887E: mov     ecx, [esp+18h+var_C]
0x738882: mov     large fs:0, ecx
0x738889: pop     ecx
0x73888A: pop     esi
0x73888B: add     esp, 10h
0x73888E: retn
