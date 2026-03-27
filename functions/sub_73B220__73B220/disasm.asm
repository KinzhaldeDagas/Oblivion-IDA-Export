0x73B220: sub     esp, 0Ch
0x73B223: push    esi
0x73B224: push    edi
0x73B225: mov     edi, [esp+14h+Size]
0x73B229: push    edi; Size
0x73B22A: mov     esi, ecx
0x73B22C: call    sub_721610
0x73B231: cmp     dword ptr [edi+0D8h], 500000Eh
0x73B23B: jnb     short loc_73B269
0x73B23D: push    edi
0x73B23E: lea     ecx, [esp+18h+var_C]
0x73B242: call    sub_709430
0x73B247: fld     [esp+14h+var_C]
0x73B24B: fstp    dword ptr [esi+0Ch]
0x73B24E: pop     edi
0x73B24F: fld     [esp+10h+var_8]
0x73B253: fstp    dword ptr [esi+10h]
0x73B256: fld     [esp+10h+var_4]
0x73B25A: fstp    dword ptr [esi+14h]
0x73B25D: fldz
0x73B25F: fstp    dword ptr [esi+18h]
0x73B262: pop     esi
0x73B263: add     esp, 0Ch
0x73B266: retn    4
0x73B269: mov     eax, [edi+21Ch]
0x73B26F: push    ebx
0x73B270: push    1
0x73B272: lea     ecx, [esp+1Ch+Size]
0x73B276: push    ecx
0x73B277: mov     ebx, 4
0x73B27C: push    ebx
0x73B27D: lea     edx, [esi+0Ch]
0x73B280: push    edx
0x73B281: push    eax
0x73B282: mov     eax, [eax+4]
0x73B285: mov     [esp+2Ch+Size], ebx
0x73B289: call    eax
0x73B28B: mov     eax, [edi+21Ch]
0x73B291: push    1
0x73B293: lea     ecx, [esp+30h+Size]
0x73B297: push    ecx
0x73B298: push    ebx
0x73B299: lea     edx, [esi+10h]
0x73B29C: push    edx
0x73B29D: push    eax
0x73B29E: mov     eax, [eax+4]
0x73B2A1: mov     [esp+40h+Size], ebx
0x73B2A5: call    eax
0x73B2A7: mov     eax, [edi+21Ch]
0x73B2AD: push    1
0x73B2AF: lea     ecx, [esp+44h+Size]
0x73B2B3: push    ecx
0x73B2B4: push    ebx
0x73B2B5: lea     edx, [esi+14h]
0x73B2B8: push    edx
0x73B2B9: push    eax
0x73B2BA: mov     eax, [eax+4]
0x73B2BD: mov     [esp+54h+Size], ebx
0x73B2C1: call    eax
0x73B2C3: mov     edi, [edi+21Ch]
0x73B2C9: mov     edx, [edi+4]
0x73B2CC: push    1
0x73B2CE: lea     ecx, [esp+58h+Size]
0x73B2D2: push    ecx
0x73B2D3: push    ebx
0x73B2D4: add     esi, 18h
0x73B2D7: push    esi
0x73B2D8: push    edi
0x73B2D9: mov     [esp+68h+Size], ebx
0x73B2DD: call    edx
0x73B2DF: add     esp, 50h
0x73B2E2: pop     ebx
0x73B2E3: pop     edi
0x73B2E4: pop     esi
0x73B2E5: add     esp, 0Ch
0x73B2E8: retn    4
