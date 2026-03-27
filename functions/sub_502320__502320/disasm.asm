0x502320: fldz
0x502322: mov     eax, [esp+arg_14]
0x502326: test    eax, eax
0x502328: mov     ecx, [esp+arg_18]
0x50232C: fstp    qword ptr [ecx]
0x50232E: jz      short loc_502344
0x502330: mov     eax, [eax+10h]
0x502333: test    eax, eax
0x502335: jz      short loc_502344
0x502337: cmp     byte ptr [eax+1], 0
0x50233B: mov     al, 1
0x50233D: jz      short locret_502346
0x50233F: fld1
0x502341: fstp    qword ptr [ecx]
0x502343: retn
0x502344: mov     al, 1
0x502346: retn
