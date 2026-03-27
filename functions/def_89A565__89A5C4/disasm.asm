0x89A5C4: fld     dword ptr ds:0A47E78h; jumptable 0089A565 default case
0x89A5CA: mov     [esp+arg_18], 3ECCCCCDh
0x89A5D2: fld     dword ptr ds:0A43328h
0x89A5D8: fild    dword ptr [esi+26Ch]
0x89A5DE: shl     eax, 5
0x89A5E1: lea     ecx, [eax+esi+1A4h]
0x89A5E8: mov     [esp+arg_14], ecx
0x89A5EC: fmul    st, st(1)
0x89A5EE: fmul    dword ptr ds:0A96D00h
0x89A5F4: call    __ftol2
0x89A5F9: fstp    st
0x89A5FB: fmul    st, st(2)
0x89A5FD: mov     ecx, [esp+arg_14]
0x89A601: fld     dword ptr ds:0A2F948h
0x89A607: mov     [ecx+10h], eax
0x89A60A: fdiv    st, st(1)
0x89A60C: fld     [esp+arg_18]
0x89A610: fmul    st, st(1)
0x89A612: fmul    st, st(4)
0x89A614: fmul    dword ptr [esi+270h]
0x89A61A: fmul    dword ptr ds:0A96CFCh
0x89A620: fsubr   dword ptr ds:0A2F948h
0x89A626: fstp    dword ptr [ecx+8]
0x89A629: fstp    dword ptr [ecx]
0x89A62B: fmul    st, st(1)
0x89A62D: fdivr   dword ptr ds:0A2F948h
0x89A633: fstp    dword ptr [ecx+4]
0x89A636: fld     [esp+arg_18]
0x89A63A: fcomp   dword ptr ds:0A2FAA8h
0x89A640: fnstsw  ax
0x89A642: test    ah, 41h
0x89A645: jnz     short loc_89A65C
0x89A647: fld     dword ptr [esi+270h]
0x89A64D: fdiv    [esp+arg_18]
0x89A651: fmul    dword ptr ds:0A96CFCh
0x89A657: fstp    dword ptr [ecx+0Ch]
0x89A65A: jmp     short loc_89A663
0x89A65C: mov     dword ptr [ecx+0Ch], 7D7FFFFFh
0x89A663: mov     eax, [esp+arg_10]
0x89A667: inc     eax
0x89A668: cmp     eax, 6
0x89A66B: mov     [esp+arg_10], eax
0x89A66F: jl      loc_89A55B
0x89A675: mov     eax, [edi+60h]
0x89A678: fstp    st
0x89A67A: cmp     eax, ebx
0x89A67C: fstp    st
0x89A67E: mov     [esi+60h], eax
0x89A681: jz      short loc_89A68D
0x89A683: cmp     [eax+4], bx
0x89A687: jz      short loc_89A68D
0x89A689: inc     word ptr [eax+6]
0x89A68D: mov     dl, [edi+96h]
0x89A693: mov     [esi+0A4h], dl
0x89A699: mov     al, [edi+94h]
0x89A69F: mov     cl, dl
0x89A6A1: cmp     cl, bl
0x89A6A3: mov     [esi+0A5h], al
0x89A6A9: jnz     short loc_89A6B5
0x89A6AB: cmp     al, bl
0x89A6AD: jz      short loc_89A6B5
0x89A6AF: mov     [esi+0A5h], bl
0x89A6B5: movaps  xmm0, xmmword ptr [edi+30h]
0x89A6B9: lea     eax, [esi+280h]
0x89A6BF: movaps  xmmword ptr [eax], xmm0
0x89A6C2: movaps  xmm0, xmmword ptr [edi+40h]
0x89A6C6: lea     ecx, [esi+290h]
0x89A6CC: movaps  xmmword ptr [ecx], xmm0
0x89A6CF: mov     edx, [edi+64h]
0x89A6D2: mov     [esi+2A0h], edx
0x89A6D8: mov     edx, [edi+64h]
0x89A6DB: push    edx
0x89A6DC: push    ecx
0x89A6DD: push    eax
0x89A6DE: call    dword ptr ds:0B2FC80h
0x89A6E4: mov     [esi+64h], eax
0x89A6E7: mov     eax, [edi+20h]
0x89A6EA: mov     [esi+2A4h], eax
0x89A6F0: cdq
0x89A6F1: sub     eax, edx
0x89A6F3: sar     eax, 1
0x89A6F5: add     esp, 0Ch
0x89A6F8: mov     [esi+2A8h], eax
0x89A6FE: mov     ecx, ds:0BA7D98h
0x89A704: mov     eax, [ecx]
0x89A706: push    24h ; '$'
0x89A708: push    104h
0x89A70D: call    dword ptr [eax+10h]
0x89A710: cmp     eax, ebx
0x89A712: jz      short loc_89A71D
0x89A714: mov     ecx, eax
0x89A716: call    sub_8D8450
0x89A71B: jmp     short loc_89A71F
0x89A71D: xor     eax, eax
0x89A71F: mov     [esi+68h], eax
0x89A722: mov     ecx, ds:0BA7D98h
0x89A728: mov     edx, [ecx]
0x89A72A: push    1Eh
0x89A72C: push    8
0x89A72E: call    dword ptr [edx+10h]
0x89A731: mov     word ptr [eax+4], 8
0x89A737: mov     word ptr [eax+6], 1
0x89A73D: mov     dword ptr [eax], offset off_A96AA4
0x89A743: mov     [esi+6Ch], eax
0x89A746: mov     ecx, ds:0BA7D98h
0x89A74C: mov     eax, [ecx]
0x89A74E: push    1Eh
0x89A750: push    0Ch
0x89A752: call    dword ptr [eax+10h]
0x89A755: push    esi
0x89A756: mov     ecx, eax
0x89A758: mov     word ptr [eax+4], 0Ch
0x89A75E: call    sub_8E0980
0x89A763: mov     ecx, [esi+68h]
0x89A766: mov     [esi+70h], eax
0x89A769: mov     eax, [esi+6Ch]
0x89A76C: mov     [ecx+28h], eax
0x89A76F: mov     eax, [esi+6Ch]
0x89A772: mov     ecx, [esi+68h]
0x89A775: mov     [ecx+44h], eax
0x89A778: mov     eax, [esi+6Ch]
0x89A77B: mov     ecx, [esi+68h]
0x89A77E: mov     [ecx+48h], eax
0x89A781: mov     ecx, [esi+68h]
0x89A784: mov     eax, [esi+70h]
0x89A787: mov     [ecx+24h], eax
0x89A78A: mov     ecx, ds:0BA7D98h
0x89A790: mov     edx, [ecx]
0x89A792: push    1Fh
0x89A794: push    0Ch
0x89A796: call    dword ptr [edx+10h]
0x89A799: push    esi
0x89A79A: mov     ecx, eax
0x89A79C: mov     word ptr [eax+4], 0Ch
0x89A7A2: call    sub_8DBB90
0x89A7A7: mov     ecx, ds:0BA7D98h
0x89A7AD: push    24h ; '$'
0x89A7AF: mov     [esp+4+arg_10], eax
0x89A7B3: mov     eax, [ecx]
0x89A7B5: push    1C28h
0x89A7BA: call    dword ptr [eax+10h]
0x89A7BD: mov     ecx, [esp+arg_10]
0x89A7C1: push    ecx
0x89A7C2: push    offset sub_8E0970
0x89A7C7: mov     ecx, eax
0x89A7C9: mov     word ptr [eax+4], 1C28h
0x89A7CF: call    sub_8DAC20
0x89A7D4: mov     ecx, [esp+arg_10]
0x89A7D8: mov     [esi+7Ch], eax
0x89A7DB: cmp     [ecx+4], bx
0x89A7DF: jz      short loc_89A7F1
0x89A7E1: dec     word ptr [ecx+6]
0x89A7E5: cmp     [ecx+6], bx
0x89A7E9: jnz     short loc_89A7F1
0x89A7EB: mov     edx, [ecx]
0x89A7ED: push    1
0x89A7EF: call    dword ptr [edx]
0x89A7F1: mov     eax, [edi+54h]
0x89A7F4: cmp     eax, ebx
0x89A7F6: jnz     short loc_89A856
0x89A7F8: mov     ecx, ds:0BA7D98h
0x89A7FE: mov     eax, [ecx]
0x89A800: push    24h ; '$'
0x89A802: push    18h
0x89A804: call    dword ptr [eax+10h]
0x89A807: mov     word ptr [eax+4], 18h
0x89A80D: mov     word ptr [eax+6], 1
0x89A813: mov     dword ptr [eax+8], offset ??_7hkCollidableCollidableFilter@@6B@; const hkCollidableCollidableFilter::`vftable'
0x89A81A: mov     dword ptr [eax+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x89A821: mov     dword ptr [eax+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x89A828: mov     dword ptr [eax+14h], offset ??_7hkRayCollidableFilter@@6B@; const hkRayCollidableFilter::`vftable'
0x89A82F: mov     dword ptr [eax], offset off_A96B78
0x89A835: mov     dword ptr [eax+8], offset off_A96B64
0x89A83C: mov     dword ptr [eax+0Ch], offset off_A96B70
0x89A843: mov     dword ptr [eax+10h], offset off_A96B68
0x89A84A: mov     dword ptr [eax+14h], offset off_A96B64
0x89A851: mov     [esi+78h], eax
0x89A854: jmp     short loc_89A863
0x89A856: mov     [esi+78h], eax
0x89A859: cmp     [eax+4], bx
0x89A85D: jz      short loc_89A863
0x89A85F: inc     word ptr [eax+6]
0x89A863: mov     ecx, ds:0BA7D98h
0x89A869: mov     edx, [ecx]
0x89A86B: push    1Ch
0x89A86D: push    2Ch ; ','
0x89A86F: call    dword ptr [edx+10h]
0x89A872: mov     ecx, [esi+7Ch]
0x89A875: mov     [esi+74h], eax
0x89A878: mov     [eax], ecx
0x89A87A: mov     edx, [edi+50h]
0x89A87D: mov     [eax+8], edx
0x89A880: mov     ecx, [esi+78h]
0x89A883: cmp     ecx, ebx
0x89A885: mov     [esp+arg_14], eax
0x89A889: jz      short loc_89A890
0x89A88B: add     ecx, 0Ch
0x89A88E: jmp     short loc_89A892
0x89A890: xor     ecx, ecx
0x89A892: mov     [eax+4], ecx
0x89A895: mov     ecx, ds:0BA7D98h
0x89A89B: mov     eax, [ecx]
0x89A89D: push    1Ch
0x89A89F: push    8
0x89A8A1: call    dword ptr [eax+10h]
0x89A8A4: cmp     eax, ebx
0x89A8A6: jz      short loc_89A8B9
0x89A8A8: mov     dword ptr [eax], 3C23D70Ah
0x89A8AE: mov     dword ptr [eax+4], 14h
0x89A8B5: mov     ecx, eax
0x89A8B7: jmp     short loc_89A8BB
0x89A8B9: xor     ecx, ecx
0x89A8BB: mov     eax, [esp+arg_14]
0x89A8BF: mov     [eax+20h], ecx
0x89A8C2: mov     cl, [edi+68h]
0x89A8C5: mov     [esi+2ACh], cl
0x89A8CB: mov     edx, [eax+20h]
0x89A8CE: mov     ecx, [edi+7Ch]
0x89A8D1: mov     [edx], ecx
0x89A8D3: mov     edx, [eax+20h]
0x89A8D6: mov     ecx, [edi+80h]
0x89A8DC: mov     [edx+4], ecx
0x89A8DF: mov     [eax+0Ch], bl
0x89A8E2: mov     edx, [eax]
0x89A8E4: add     edx, 1A50h
0x89A8EA: mov     [eax+28h], edx
0x89A8ED: mov     eax, [esi+7Ch]
0x89A8F0: push    eax
0x89A8F1: mov     eax, esi
0x89A8F3: call    sub_8993F0
0x89A8F8: mov     eax, [esi+0B4h]
0x89A8FE: mov     dl, [edi+95h]
0x89A904: add     esp, 4
0x89A907: cmp     dl, al
0x89A909: setnz   al
0x89A90C: cmp     al, bl
0x89A90E: jz      loc_89AAC8
0x89A914: mov     ecx, [esi+8]
0x89A917: cmp     ecx, ebx
0x89A919: jz      short loc_89A921
0x89A91B: mov     eax, [ecx]
0x89A91D: push    1
0x89A91F: call    dword ptr [eax]
0x89A921: movsx   eax, byte ptr [edi+95h]
0x89A928: mov     [esi+0B4h], eax
0x89A92E: dec     eax; switch 9 cases
0x89A92F: cmp     eax, 8
0x89A932: ja      def_89A938
0x89A938: jmp     ds:jpt_89A938[eax*4]; switch jump
0x89A93F: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 1
0x89A945: mov     edx, [ecx]
0x89A947: push    12h
0x89A949: push    0Ch
0x89A94B: call    dword ptr [edx+10h]
0x89A94E: mov     word ptr [eax+4], 0Ch
0x89A954: mov     word ptr [eax+6], 1
0x89A95A: mov     dword ptr [eax], offset off_A96AF0
0x89A960: jmp     loc_89AAC5
0x89A965: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 3
0x89A96B: mov     eax, [ecx]
0x89A96D: push    12h
0x89A96F: push    10h
0x89A971: call    dword ptr [eax+10h]
0x89A974: mov     ecx, eax
0x89A976: mov     word ptr [eax+4], 10h
0x89A97C: call    sub_8E0950
0x89A981: jmp     loc_89AAC5
0x89A986: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 2
0x89A98C: mov     edx, [ecx]
0x89A98E: push    12h
0x89A990: push    0Ch
0x89A992: call    dword ptr [edx+10h]
0x89A995: mov     word ptr [eax+4], 0Ch
0x89A99B: mov     word ptr [eax+6], 1
0x89A9A1: mov     dword ptr [eax], offset off_A96B1C
0x89A9A7: jmp     loc_89AAC5
0x89A9AC: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 5
0x89A9B2: mov     eax, [ecx]
0x89A9B4: push    12h
0x89A9B6: push    28h ; '('
0x89A9B8: call    dword ptr [eax+10h]
0x89A9BB: push    1
0x89A9BD: jmp     loc_89AAB8
0x89A9C2: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 6
0x89A9C8: mov     edx, [ecx]
0x89A9CA: push    12h
0x89A9CC: push    28h ; '('
0x89A9CE: call    dword ptr [edx+10h]
0x89A9D1: push    2
0x89A9D3: jmp     loc_89AAB8
0x89A9D8: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 7
0x89A9DE: mov     eax, [ecx]
0x89A9E0: push    12h
0x89A9E2: push    2Ch ; ','
0x89A9E4: call    dword ptr [eax+10h]
0x89A9E7: push    1
0x89A9E9: mov     ecx, eax
0x89A9EB: mov     [esp+4+arg_14], eax
0x89A9EF: mov     word ptr [eax+4], 2Ch ; ','
0x89A9F5: call    sub_8D3330
0x89A9FA: mov     eax, [esp+arg_14]
0x89A9FE: mov     dword ptr [eax], offset off_A96A74
0x89AA04: mov     [eax+28h], ebx
0x89AA07: jmp     loc_89AAC5
0x89AA0C: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 8
0x89AA12: mov     edx, [ecx]
0x89AA14: push    12h
0x89AA16: push    2Ch ; ','
0x89AA18: call    dword ptr [edx+10h]
0x89AA1B: push    1
0x89AA1D: mov     ecx, eax
0x89AA1F: mov     [esp+4+arg_14], eax
0x89AA23: mov     word ptr [eax+4], 2Ch ; ','
0x89AA29: call    sub_8D3330
0x89AA2E: mov     eax, [esp+arg_14]
0x89AA32: mov     dword ptr [eax], offset off_A96A74
0x89AA38: mov     dword ptr [eax+28h], 1
0x89AA3F: jmp     loc_89AAC5
0x89AA44: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 9
0x89AA4A: mov     eax, [ecx]
0x89AA4C: push    12h
0x89AA4E: push    18h
0x89AA50: call    dword ptr [eax+10h]
0x89AA53: cmp     eax, ebx
0x89AA55: mov     [esp+arg_14], eax
0x89AA59: jz      short loc_89AA6D
0x89AA5B: push    0FA0h; dwSpinCount
0x89AA60: push    eax; lpCriticalSection
0x89AA61: call    dword ptr ds:0A2818Ch
0x89AA67: mov     eax, [esp+arg_14]
0x89AA6B: jmp     short loc_89AA6F
0x89AA6D: xor     eax, eax
0x89AA6F: mov     [esi+0A0h], eax
0x89AA75: mov     ecx, ds:0BA7D98h
0x89AA7B: mov     edx, [ecx]
0x89AA7D: push    12h
0x89AA7F: push    200h
0x89AA84: call    dword ptr [edx+10h]
0x89AA87: push    esi
0x89AA88: mov     ecx, eax
0x89AA8A: mov     word ptr [eax+4], 200h
0x89AA90: call    sub_8E0300
0x89AA95: jmp     short loc_89AAC5
