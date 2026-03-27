0x73B520: push    0FFFFFFFFh
0x73B522: push    offset SEH_8C62B0
0x73B527: mov     eax, large fs:0
0x73B52D: push    eax
0x73B52E: push    ecx
0x73B52F: push    esi
0x73B530: mov     eax, ds:0B30AACh
0x73B535: xor     eax, esp
0x73B537: push    eax
0x73B538: lea     eax, [esp+18h+var_C]
0x73B53C: mov     large fs:0, eax
0x73B542: push    54h ; 'T'; Size
0x73B544: call    FormHeapAlloc
0x73B549: mov     esi, eax
0x73B54B: add     esp, 4
0x73B54E: mov     [esp+18h+var_10], esi
0x73B552: test    esi, esi
0x73B554: mov     [esp+18h+var_4], 0
0x73B55C: jz      short loc_73B58A
0x73B55E: mov     ecx, esi
0x73B560: call    sub_719D20
0x73B565: mov     dword ptr [esi], offset ??_7NiTriStripsDynamicData@@6B@; const NiTriStripsDynamicData::`vftable'
0x73B56B: mov     word ptr [esi+50h], 0
0x73B571: mov     word ptr [esi+52h], 0
0x73B577: mov     eax, esi
0x73B579: mov     ecx, [esp+18h+var_C]
0x73B57D: mov     large fs:0, ecx
0x73B584: pop     ecx
0x73B585: pop     esi
0x73B586: add     esp, 10h
0x73B589: retn
0x73B58A: xor     eax, eax
0x73B58C: mov     ecx, [esp+18h+var_C]
0x73B590: mov     large fs:0, ecx
0x73B597: pop     ecx
0x73B598: pop     esi
0x73B599: add     esp, 10h
0x73B59C: retn
