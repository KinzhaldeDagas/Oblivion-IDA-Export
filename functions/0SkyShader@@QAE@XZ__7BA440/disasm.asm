0x7BA440: push    0FFFFFFFFh
0x7BA442: push    offset ??1SkyShader@@UAE@XZ_SEH
0x7BA447: mov     eax, large fs:0
0x7BA44D: push    eax
0x7BA44E: push    ecx
0x7BA44F: push    ebx
0x7BA450: push    ebp
0x7BA451: push    esi
0x7BA452: push    edi
0x7BA453: mov     eax, ds:0B30AACh
0x7BA458: xor     eax, esp
0x7BA45A: push    eax
0x7BA45B: lea     eax, [esp+24h+var_C]
0x7BA45F: mov     large fs:0, eax
0x7BA465: mov     esi, ecx
0x7BA467: mov     [esp+24h+var_10], esi
0x7BA46B: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7BA470: xor     edi, edi
0x7BA472: mov     dword ptr [esi], offset ??_7SkyShader@@6B@; const SkyShader::`vftable'
0x7BA478: mov     [esp+24h+var_4], edi
0x7BA47C: mov     [esi+7Ch], edi
0x7BA47F: mov     [esi+80h], edi
0x7BA485: mov     [esi+84h], edi
0x7BA48B: mov     [esi+88h], edi
0x7BA491: mov     [esi+8Ch], edi
0x7BA497: mov     [esi+90h], edi
0x7BA49D: mov     [esi+94h], edi
0x7BA4A3: mov     [esi+98h], edi
0x7BA4A9: mov     [esi+9Ch], edi
0x7BA4AF: mov     [esi+0A0h], edi
0x7BA4B5: mov     [esi+0A4h], edi
0x7BA4BB: mov     [esi+0A8h], edi
0x7BA4C1: mov     [esi+0ACh], edi
0x7BA4C7: mov     [esi+0B0h], edi
0x7BA4CD: mov     [esi+0B4h], edi
0x7BA4D3: mov     [esi+0B8h], edi
0x7BA4D9: mov     [esi+0BCh], edi
0x7BA4DF: mov     [esi+0C0h], edi
0x7BA4E5: mov     [esi+0C4h], edi
0x7BA4EB: mov     [esi+0C8h], edi
0x7BA4F1: mov     [esi+0CCh], edi
0x7BA4F7: mov     [esi+0D0h], edi
0x7BA4FD: mov     [esi+0D4h], edi
0x7BA503: mov     [esi+0D8h], edi
0x7BA509: mov     ecx, [esi+0B8h]
0x7BA50F: or      ebp, 0FFFFFFFFh
0x7BA512: cmp     ecx, edi
0x7BA514: mov     byte ptr [esp+24h+var_4], 18h
0x7BA519: jz      short loc_7BA52B
0x7BA51B: add     [ecx+60h], ebp
0x7BA51E: jnz     short loc_7BA525
0x7BA520: call    sub_7604D0
0x7BA525: mov     [esi+0B8h], edi
0x7BA52B: mov     ecx, [esi+0BCh]
0x7BA531: cmp     ecx, edi
0x7BA533: jz      short loc_7BA545
0x7BA535: add     [ecx+60h], ebp
0x7BA538: jnz     short loc_7BA53F
0x7BA53A: call    sub_7604D0
0x7BA53F: mov     [esi+0BCh], edi
0x7BA545: mov     ecx, [esi+0C0h]
0x7BA54B: cmp     ecx, edi
0x7BA54D: jz      short loc_7BA55F
0x7BA54F: add     [ecx+60h], ebp
0x7BA552: jnz     short loc_7BA559
0x7BA554: call    sub_7604D0
0x7BA559: mov     [esi+0C0h], edi
0x7BA55F: mov     ebx, [esi+0C4h]
0x7BA565: cmp     ebx, edi
0x7BA567: jz      short loc_7BA58B
0x7BA569: lea     eax, [ebx+4]
0x7BA56C: push    eax; lpAddend
0x7BA56D: call    dword ptr ds:0A2807Ch
0x7BA573: test    eax, eax
0x7BA575: jnz     short loc_7BA585
0x7BA577: cmp     ebx, edi
0x7BA579: jz      short loc_7BA585
0x7BA57B: mov     edx, [ebx]
0x7BA57D: mov     eax, [edx]
0x7BA57F: push    1
0x7BA581: mov     ecx, ebx
0x7BA583: call    eax
0x7BA585: mov     [esi+0C4h], edi
0x7BA58B: mov     ebx, [esi+0C8h]
0x7BA591: cmp     ebx, edi
0x7BA593: jz      short loc_7BA5B7
0x7BA595: lea     ecx, [ebx+4]
0x7BA598: push    ecx; lpAddend
0x7BA599: call    dword ptr ds:0A2807Ch
0x7BA59F: test    eax, eax
0x7BA5A1: jnz     short loc_7BA5B1
0x7BA5A3: cmp     ebx, edi
0x7BA5A5: jz      short loc_7BA5B1
0x7BA5A7: mov     edx, [ebx]
0x7BA5A9: mov     eax, [edx]
0x7BA5AB: push    1
0x7BA5AD: mov     ecx, ebx
0x7BA5AF: call    eax
0x7BA5B1: mov     [esi+0C8h], edi
0x7BA5B7: mov     ebx, [esi+0CCh]
0x7BA5BD: cmp     ebx, edi
0x7BA5BF: jz      short loc_7BA5E3
0x7BA5C1: lea     ecx, [ebx+4]
0x7BA5C4: push    ecx; lpAddend
0x7BA5C5: call    dword ptr ds:0A2807Ch
0x7BA5CB: test    eax, eax
0x7BA5CD: jnz     short loc_7BA5DD
0x7BA5CF: cmp     ebx, edi
0x7BA5D1: jz      short loc_7BA5DD
0x7BA5D3: mov     edx, [ebx]
0x7BA5D5: mov     eax, [edx]
0x7BA5D7: push    1
0x7BA5D9: mov     ecx, ebx
0x7BA5DB: call    eax
0x7BA5DD: mov     [esi+0CCh], edi
0x7BA5E3: mov     ebx, [esi+0D0h]
0x7BA5E9: cmp     ebx, edi
0x7BA5EB: jz      short loc_7BA60F
0x7BA5ED: lea     ecx, [ebx+4]
0x7BA5F0: push    ecx; lpAddend
0x7BA5F1: call    dword ptr ds:0A2807Ch
0x7BA5F7: test    eax, eax
0x7BA5F9: jnz     short loc_7BA609
0x7BA5FB: cmp     ebx, edi
0x7BA5FD: jz      short loc_7BA609
0x7BA5FF: mov     edx, [ebx]
0x7BA601: mov     eax, [edx]
0x7BA603: push    1
0x7BA605: mov     ecx, ebx
0x7BA607: call    eax
0x7BA609: mov     [esi+0D0h], edi
0x7BA60F: mov     ebx, [esi+0D4h]
0x7BA615: cmp     ebx, edi
0x7BA617: jz      short loc_7BA63B
0x7BA619: lea     ecx, [ebx+4]
0x7BA61C: push    ecx; lpAddend
0x7BA61D: call    dword ptr ds:0A2807Ch
0x7BA623: test    eax, eax
0x7BA625: jnz     short loc_7BA635
0x7BA627: cmp     ebx, edi
0x7BA629: jz      short loc_7BA635
0x7BA62B: mov     edx, [ebx]
0x7BA62D: mov     eax, [edx]
0x7BA62F: push    1
0x7BA631: mov     ecx, ebx
0x7BA633: call    eax
0x7BA635: mov     [esi+0D4h], edi
0x7BA63B: mov     ebx, [esi+0D8h]
0x7BA641: cmp     ebx, edi
0x7BA643: jz      short loc_7BA667
0x7BA645: lea     ecx, [ebx+4]
0x7BA648: push    ecx; lpAddend
0x7BA649: call    dword ptr ds:0A2807Ch
0x7BA64F: test    eax, eax
0x7BA651: jnz     short loc_7BA661
0x7BA653: cmp     ebx, edi
0x7BA655: jz      short loc_7BA661
0x7BA657: mov     edx, [ebx]
0x7BA659: mov     eax, [edx]
0x7BA65B: push    1
0x7BA65D: mov     ecx, ebx
0x7BA65F: call    eax
0x7BA661: mov     [esi+0D8h], edi
0x7BA667: mov     ecx, [esi+0B4h]
0x7BA66D: cmp     ecx, edi
0x7BA66F: jz      short loc_7BA681
0x7BA671: add     [ecx+60h], ebp
0x7BA674: jnz     short loc_7BA67B
0x7BA676: call    sub_7604D0
0x7BA67B: mov     [esi+0B4h], edi
0x7BA681: mov     ecx, [esi+0ACh]
0x7BA687: cmp     ecx, edi
0x7BA689: jz      short loc_7BA69B
0x7BA68B: add     [ecx+60h], ebp
0x7BA68E: jnz     short loc_7BA695
0x7BA690: call    sub_7604D0
0x7BA695: mov     [esi+0ACh], edi
0x7BA69B: mov     ebx, [esi+7Ch]
0x7BA69E: cmp     ebx, edi
0x7BA6A0: mov     ebp, ds:0A2807Ch
0x7BA6A6: jz      short loc_7BA6C3
0x7BA6A8: lea     ecx, [ebx+4]
0x7BA6AB: push    ecx; lpAddend
0x7BA6AC: call    ebp ; InterlockedDecrement
0x7BA6AE: test    eax, eax
0x7BA6B0: jnz     short loc_7BA6C0
0x7BA6B2: cmp     ebx, edi
0x7BA6B4: jz      short loc_7BA6C0
0x7BA6B6: mov     edx, [ebx]
0x7BA6B8: mov     eax, [edx]
0x7BA6BA: push    1
0x7BA6BC: mov     ecx, ebx
0x7BA6BE: call    eax
0x7BA6C0: mov     [esi+7Ch], edi
0x7BA6C3: mov     ebx, [esi+80h]
0x7BA6C9: cmp     ebx, edi
0x7BA6CB: jz      short loc_7BA6EB
0x7BA6CD: lea     ecx, [ebx+4]
0x7BA6D0: push    ecx; lpAddend
0x7BA6D1: call    ebp ; InterlockedDecrement
0x7BA6D3: test    eax, eax
0x7BA6D5: jnz     short loc_7BA6E5
0x7BA6D7: cmp     ebx, edi
0x7BA6D9: jz      short loc_7BA6E5
0x7BA6DB: mov     edx, [ebx]
0x7BA6DD: mov     eax, [edx]
0x7BA6DF: push    1
0x7BA6E1: mov     ecx, ebx
0x7BA6E3: call    eax
0x7BA6E5: mov     [esi+80h], edi
0x7BA6EB: mov     ebx, [esi+84h]
0x7BA6F1: cmp     ebx, edi
0x7BA6F3: jz      short loc_7BA713
0x7BA6F5: lea     ecx, [ebx+4]
0x7BA6F8: push    ecx; lpAddend
0x7BA6F9: call    ebp ; InterlockedDecrement
0x7BA6FB: test    eax, eax
0x7BA6FD: jnz     short loc_7BA70D
0x7BA6FF: cmp     ebx, edi
0x7BA701: jz      short loc_7BA70D
0x7BA703: mov     edx, [ebx]
0x7BA705: mov     eax, [edx]
0x7BA707: push    1
0x7BA709: mov     ecx, ebx
0x7BA70B: call    eax
0x7BA70D: mov     [esi+84h], edi
0x7BA713: mov     ebx, [esi+8Ch]
0x7BA719: cmp     ebx, edi
0x7BA71B: jz      short loc_7BA73B
0x7BA71D: lea     ecx, [ebx+4]
0x7BA720: push    ecx; lpAddend
0x7BA721: call    ebp ; InterlockedDecrement
0x7BA723: test    eax, eax
0x7BA725: jnz     short loc_7BA735
0x7BA727: cmp     ebx, edi
0x7BA729: jz      short loc_7BA735
0x7BA72B: mov     edx, [ebx]
0x7BA72D: mov     eax, [edx]
0x7BA72F: push    1
0x7BA731: mov     ecx, ebx
0x7BA733: call    eax
0x7BA735: mov     [esi+8Ch], edi
0x7BA73B: mov     ebx, [esi+90h]
0x7BA741: cmp     ebx, edi
0x7BA743: jz      short loc_7BA763
0x7BA745: lea     ecx, [ebx+4]
0x7BA748: push    ecx; lpAddend
0x7BA749: call    ebp ; InterlockedDecrement
0x7BA74B: test    eax, eax
0x7BA74D: jnz     short loc_7BA75D
0x7BA74F: cmp     ebx, edi
0x7BA751: jz      short loc_7BA75D
0x7BA753: mov     edx, [ebx]
0x7BA755: mov     eax, [edx]
0x7BA757: push    1
0x7BA759: mov     ecx, ebx
0x7BA75B: call    eax
0x7BA75D: mov     [esi+90h], edi
0x7BA763: mov     ebx, [esi+94h]
0x7BA769: cmp     ebx, edi
0x7BA76B: jz      short loc_7BA78B
0x7BA76D: lea     ecx, [ebx+4]
0x7BA770: push    ecx; lpAddend
0x7BA771: call    ebp ; InterlockedDecrement
0x7BA773: test    eax, eax
0x7BA775: jnz     short loc_7BA785
0x7BA777: cmp     ebx, edi
0x7BA779: jz      short loc_7BA785
0x7BA77B: mov     edx, [ebx]
0x7BA77D: mov     eax, [edx]
0x7BA77F: push    1
0x7BA781: mov     ecx, ebx
0x7BA783: call    eax
0x7BA785: mov     [esi+94h], edi
0x7BA78B: mov     ebx, [esi+88h]
0x7BA791: cmp     ebx, edi
0x7BA793: jz      short loc_7BA7B3
0x7BA795: lea     ecx, [ebx+4]
0x7BA798: push    ecx; lpAddend
0x7BA799: call    ebp ; InterlockedDecrement
0x7BA79B: test    eax, eax
0x7BA79D: jnz     short loc_7BA7AD
0x7BA79F: cmp     ebx, edi
0x7BA7A1: jz      short loc_7BA7AD
0x7BA7A3: mov     edx, [ebx]
0x7BA7A5: mov     eax, [edx]
0x7BA7A7: push    1
0x7BA7A9: mov     ecx, ebx
0x7BA7AB: call    eax
0x7BA7AD: mov     [esi+88h], edi
0x7BA7B3: mov     ebx, [esi+98h]
0x7BA7B9: cmp     ebx, edi
0x7BA7BB: jz      short loc_7BA7DB
0x7BA7BD: lea     ecx, [ebx+4]
0x7BA7C0: push    ecx; lpAddend
0x7BA7C1: call    ebp ; InterlockedDecrement
0x7BA7C3: test    eax, eax
0x7BA7C5: jnz     short loc_7BA7D5
0x7BA7C7: cmp     ebx, edi
0x7BA7C9: jz      short loc_7BA7D5
0x7BA7CB: mov     edx, [ebx]
0x7BA7CD: mov     eax, [edx]
0x7BA7CF: push    1
0x7BA7D1: mov     ecx, ebx
0x7BA7D3: call    eax
0x7BA7D5: mov     [esi+98h], edi
0x7BA7DB: mov     ebx, [esi+9Ch]
0x7BA7E1: cmp     ebx, edi
0x7BA7E3: jz      short loc_7BA803
0x7BA7E5: lea     ecx, [ebx+4]
0x7BA7E8: push    ecx; lpAddend
0x7BA7E9: call    ebp ; InterlockedDecrement
0x7BA7EB: test    eax, eax
0x7BA7ED: jnz     short loc_7BA7FD
0x7BA7EF: cmp     ebx, edi
0x7BA7F1: jz      short loc_7BA7FD
0x7BA7F3: mov     edx, [ebx]
0x7BA7F5: mov     eax, [edx]
0x7BA7F7: push    1
0x7BA7F9: mov     ecx, ebx
0x7BA7FB: call    eax
0x7BA7FD: mov     [esi+9Ch], edi
0x7BA803: mov     ebx, [esi+0A0h]
0x7BA809: cmp     ebx, edi
0x7BA80B: jz      short loc_7BA82B
0x7BA80D: lea     ecx, [ebx+4]
0x7BA810: push    ecx; lpAddend
0x7BA811: call    ebp ; InterlockedDecrement
0x7BA813: test    eax, eax
0x7BA815: jnz     short loc_7BA825
0x7BA817: cmp     ebx, edi
0x7BA819: jz      short loc_7BA825
0x7BA81B: mov     edx, [ebx]
0x7BA81D: mov     eax, [edx]
0x7BA81F: push    1
0x7BA821: mov     ecx, ebx
0x7BA823: call    eax
0x7BA825: mov     [esi+0A0h], edi
0x7BA82B: mov     ebx, [esi+0A4h]
0x7BA831: cmp     ebx, edi
0x7BA833: jz      short loc_7BA853
0x7BA835: lea     ecx, [ebx+4]
0x7BA838: push    ecx; lpAddend
0x7BA839: call    ebp ; InterlockedDecrement
0x7BA83B: test    eax, eax
0x7BA83D: jnz     short loc_7BA84D
0x7BA83F: cmp     ebx, edi
0x7BA841: jz      short loc_7BA84D
0x7BA843: mov     edx, [ebx]
0x7BA845: mov     eax, [edx]
0x7BA847: push    1
0x7BA849: mov     ecx, ebx
0x7BA84B: call    eax
0x7BA84D: mov     [esi+0A4h], edi
0x7BA853: mov     ebx, [esi+0A8h]
0x7BA859: cmp     ebx, edi
0x7BA85B: jz      short loc_7BA87B
0x7BA85D: lea     ecx, [ebx+4]
0x7BA860: push    ecx; lpAddend
0x7BA861: call    ebp ; InterlockedDecrement
0x7BA863: test    eax, eax
0x7BA865: jnz     short loc_7BA875
0x7BA867: cmp     ebx, edi
0x7BA869: jz      short loc_7BA875
0x7BA86B: mov     edx, [ebx]
0x7BA86D: mov     eax, [edx]
0x7BA86F: push    1
0x7BA871: mov     ecx, ebx
0x7BA873: call    eax
0x7BA875: mov     [esi+0A8h], edi
0x7BA87B: mov     eax, ds:0B25AD0h
0x7BA880: mov     ecx, ds:0B25AD4h
0x7BA886: mov     edx, ds:0B25AD8h
0x7BA88C: mov     edi, ds:0B25ADCh
0x7BA892: mov     ds:0B43178h, eax
0x7BA897: mov     ds:0B43188h, eax
0x7BA89C: mov     ds:0B43198h, eax
0x7BA8A1: mov     ds:0B431A8h, eax
0x7BA8A6: mov     ds:0B431B8h, eax
0x7BA8AB: mov     ds:0B431C8h, eax
0x7BA8B0: mov     ds:0B43168h, eax
0x7BA8B5: mov     ds:0B4317Ch, ecx
0x7BA8BB: mov     ds:0B43180h, edx
0x7BA8C1: mov     ds:0B43184h, edi
0x7BA8C7: mov     ds:0B4318Ch, ecx
0x7BA8CD: mov     ds:0B43190h, edx
0x7BA8D3: mov     ds:0B43194h, edi
0x7BA8D9: mov     ds:0B4319Ch, ecx
0x7BA8DF: mov     ds:0B431A0h, edx
0x7BA8E5: mov     ds:0B431A4h, edi
0x7BA8EB: mov     ds:0B431ACh, ecx
0x7BA8F1: mov     ds:0B431B0h, edx
0x7BA8F7: mov     ds:0B431B4h, edi
0x7BA8FD: mov     ds:0B431BCh, ecx
0x7BA903: mov     ds:0B431C0h, edx
0x7BA909: mov     ds:0B431C4h, edi
0x7BA90F: mov     ds:0B431CCh, ecx
0x7BA915: mov     ds:0B431D0h, edx
0x7BA91B: mov     ds:0B431D4h, edi
0x7BA921: mov     ds:0B4316Ch, ecx
0x7BA927: mov     ds:0B43170h, edx
0x7BA92D: mov     ds:0B43174h, edi
0x7BA933: mov     byte ptr [esi+20h], 1
0x7BA937: mov     eax, esi
0x7BA939: mov     ecx, dword ptr [esp+24h+var_C]
0x7BA93D: mov     large fs:0, ecx
0x7BA944: pop     ecx
0x7BA945: pop     edi
0x7BA946: pop     esi
0x7BA947: pop     ebp
0x7BA948: pop     ebx
0x7BA949: add     esp, 10h
0x7BA94C: retn
