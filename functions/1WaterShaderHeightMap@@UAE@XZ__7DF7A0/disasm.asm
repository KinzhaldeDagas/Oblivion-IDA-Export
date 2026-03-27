0x7DF7A0: push    0FFFFFFFFh
0x7DF7A2: push    offset ??0WaterShaderHeightMap@@QAE@XZ_SEH
0x7DF7A7: mov     eax, large fs:0
0x7DF7AD: push    eax
0x7DF7AE: push    ecx
0x7DF7AF: push    ebx
0x7DF7B0: push    ebp
0x7DF7B1: push    esi
0x7DF7B2: push    edi
0x7DF7B3: mov     eax, ds:0B30AACh
0x7DF7B8: xor     eax, esp
0x7DF7BA: push    eax
0x7DF7BB: lea     eax, [esp+24h+var_C]
0x7DF7BF: mov     large fs:0, eax
0x7DF7C5: mov     ebp, ecx
0x7DF7C7: mov     [esp+24h+var_10], ebp
0x7DF7CB: mov     dword ptr [ebp+0], offset ??_7WaterShaderHeightMap@@6B@; const WaterShaderHeightMap::`vftable'
0x7DF7D2: mov     [esp+24h+var_4], 0Bh
0x7DF7DA: lea     edi, [ebp+0B4h]
0x7DF7E0: mov     ebx, 7
0x7DF7E5: mov     esi, [edi]
0x7DF7E7: test    esi, esi
0x7DF7E9: jz      short loc_7DF80D
0x7DF7EB: lea     eax, [esi+4]
0x7DF7EE: push    eax; lpAddend
0x7DF7EF: call    dword ptr ds:0A2807Ch
0x7DF7F5: test    eax, eax
0x7DF7F7: jnz     short loc_7DF807
0x7DF7F9: test    esi, esi
0x7DF7FB: jz      short loc_7DF807
0x7DF7FD: mov     edx, [esi]
0x7DF7FF: mov     eax, [edx]
0x7DF801: push    1
0x7DF803: mov     ecx, esi
0x7DF805: call    eax
0x7DF807: mov     dword ptr [edi], 0
0x7DF80D: add     edi, 4
0x7DF810: sub     ebx, 1
0x7DF813: jnz     short loc_7DF7E5
0x7DF815: mov     esi, [ebp+0B0h]
0x7DF81B: test    esi, esi
0x7DF81D: mov     edi, ds:0A2807Ch
0x7DF823: jz      short loc_7DF847
0x7DF825: lea     ecx, [esi+4]
0x7DF828: push    ecx; lpAddend
0x7DF829: call    edi ; InterlockedDecrement
0x7DF82B: test    eax, eax
0x7DF82D: jnz     short loc_7DF83D
0x7DF82F: test    esi, esi
0x7DF831: jz      short loc_7DF83D
0x7DF833: mov     edx, [esi]
0x7DF835: mov     eax, [edx]
0x7DF837: push    1
0x7DF839: mov     ecx, esi
0x7DF83B: call    eax
0x7DF83D: mov     dword ptr [ebp+0B0h], 0
0x7DF847: mov     ecx, [ebp+0D4h]
0x7DF84D: or      ebx, 0FFFFFFFFh
0x7DF850: test    ecx, ecx
0x7DF852: jz      short loc_7DF868
0x7DF854: add     [ecx+60h], ebx
0x7DF857: jnz     short loc_7DF85E
0x7DF859: call    sub_7604D0
0x7DF85E: mov     dword ptr [ebp+0D4h], 0
0x7DF868: mov     esi, [ebp+0F4h]
0x7DF86E: test    esi, esi
0x7DF870: mov     byte ptr [esp+24h+var_4], 0Ah
0x7DF875: jz      short loc_7DF88F
0x7DF877: lea     ecx, [esi+4]
0x7DF87A: push    ecx; lpAddend
0x7DF87B: call    edi ; InterlockedDecrement
0x7DF87D: test    eax, eax
0x7DF87F: jnz     short loc_7DF88F
0x7DF881: test    esi, esi
0x7DF883: jz      short loc_7DF88F
0x7DF885: mov     edx, [esi]
0x7DF887: mov     eax, [edx]
0x7DF889: push    1
0x7DF88B: mov     ecx, esi
0x7DF88D: call    eax
0x7DF88F: mov     esi, [ebp+0F0h]
0x7DF895: test    esi, esi
0x7DF897: mov     byte ptr [esp+24h+var_4], 9
0x7DF89C: jz      short loc_7DF8B6
0x7DF89E: lea     ecx, [esi+4]
0x7DF8A1: push    ecx; lpAddend
0x7DF8A2: call    edi ; InterlockedDecrement
0x7DF8A4: test    eax, eax
0x7DF8A6: jnz     short loc_7DF8B6
0x7DF8A8: test    esi, esi
0x7DF8AA: jz      short loc_7DF8B6
0x7DF8AC: mov     edx, [esi]
0x7DF8AE: mov     eax, [edx]
0x7DF8B0: push    1
0x7DF8B2: mov     ecx, esi
0x7DF8B4: call    eax
0x7DF8B6: mov     esi, [ebp+0ECh]
0x7DF8BC: test    esi, esi
0x7DF8BE: mov     byte ptr [esp+24h+var_4], 8
0x7DF8C3: jz      short loc_7DF8DD
0x7DF8C5: lea     ecx, [esi+4]
0x7DF8C8: push    ecx; lpAddend
0x7DF8C9: call    edi ; InterlockedDecrement
0x7DF8CB: test    eax, eax
0x7DF8CD: jnz     short loc_7DF8DD
0x7DF8CF: test    esi, esi
0x7DF8D1: jz      short loc_7DF8DD
0x7DF8D3: mov     edx, [esi]
0x7DF8D5: mov     eax, [edx]
0x7DF8D7: push    1
0x7DF8D9: mov     ecx, esi
0x7DF8DB: call    eax
0x7DF8DD: mov     esi, [ebp+0E8h]
0x7DF8E3: test    esi, esi
0x7DF8E5: mov     byte ptr [esp+24h+var_4], 7
0x7DF8EA: jz      short loc_7DF904
0x7DF8EC: lea     ecx, [esi+4]
0x7DF8EF: push    ecx; lpAddend
0x7DF8F0: call    edi ; InterlockedDecrement
0x7DF8F2: test    eax, eax
0x7DF8F4: jnz     short loc_7DF904
0x7DF8F6: test    esi, esi
0x7DF8F8: jz      short loc_7DF904
0x7DF8FA: mov     edx, [esi]
0x7DF8FC: mov     eax, [edx]
0x7DF8FE: push    1
0x7DF900: mov     ecx, esi
0x7DF902: call    eax
0x7DF904: mov     esi, [ebp+0E4h]
0x7DF90A: test    esi, esi
0x7DF90C: mov     byte ptr [esp+24h+var_4], 6
0x7DF911: jz      short loc_7DF92B
0x7DF913: lea     ecx, [esi+4]
0x7DF916: push    ecx; lpAddend
0x7DF917: call    edi ; InterlockedDecrement
0x7DF919: test    eax, eax
0x7DF91B: jnz     short loc_7DF92B
0x7DF91D: test    esi, esi
0x7DF91F: jz      short loc_7DF92B
0x7DF921: mov     edx, [esi]
0x7DF923: mov     eax, [edx]
0x7DF925: push    1
0x7DF927: mov     ecx, esi
0x7DF929: call    eax
0x7DF92B: mov     esi, [ebp+0E0h]
0x7DF931: test    esi, esi
0x7DF933: mov     byte ptr [esp+24h+var_4], 5
0x7DF938: jz      short loc_7DF952
0x7DF93A: lea     ecx, [esi+4]
0x7DF93D: push    ecx; lpAddend
0x7DF93E: call    edi ; InterlockedDecrement
0x7DF940: test    eax, eax
0x7DF942: jnz     short loc_7DF952
0x7DF944: test    esi, esi
0x7DF946: jz      short loc_7DF952
0x7DF948: mov     edx, [esi]
0x7DF94A: mov     eax, [edx]
0x7DF94C: push    1
0x7DF94E: mov     ecx, esi
0x7DF950: call    eax
0x7DF952: mov     esi, [ebp+0DCh]
0x7DF958: test    esi, esi
0x7DF95A: mov     byte ptr [esp+24h+var_4], 4
0x7DF95F: jz      short loc_7DF979
0x7DF961: lea     ecx, [esi+4]
0x7DF964: push    ecx; lpAddend
0x7DF965: call    edi ; InterlockedDecrement
0x7DF967: test    eax, eax
0x7DF969: jnz     short loc_7DF979
0x7DF96B: test    esi, esi
0x7DF96D: jz      short loc_7DF979
0x7DF96F: mov     edx, [esi]
0x7DF971: mov     eax, [edx]
0x7DF973: push    1
0x7DF975: mov     ecx, esi
0x7DF977: call    eax
0x7DF979: mov     esi, [ebp+0D8h]
0x7DF97F: test    esi, esi
0x7DF981: mov     byte ptr [esp+24h+var_4], 3
0x7DF986: jz      short loc_7DF9A0
0x7DF988: lea     ecx, [esi+4]
0x7DF98B: push    ecx; lpAddend
0x7DF98C: call    edi ; InterlockedDecrement
0x7DF98E: test    eax, eax
0x7DF990: jnz     short loc_7DF9A0
0x7DF992: test    esi, esi
0x7DF994: jz      short loc_7DF9A0
0x7DF996: mov     edx, [esi]
0x7DF998: mov     eax, [edx]
0x7DF99A: push    1
0x7DF99C: mov     ecx, esi
0x7DF99E: call    eax
0x7DF9A0: mov     ecx, [ebp+0D4h]
0x7DF9A6: test    ecx, ecx
0x7DF9A8: mov     byte ptr [esp+24h+var_4], 2
0x7DF9AD: jz      short loc_7DF9B9
0x7DF9AF: add     [ecx+60h], ebx
0x7DF9B2: jnz     short loc_7DF9B9
0x7DF9B4: call    sub_7604D0
0x7DF9B9: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7DF9BE: push    7; int
0x7DF9C0: push    4; unsigned int
0x7DF9C2: lea     eax, [ebp+0B4h]
0x7DF9C8: push    eax; void *
0x7DF9C9: mov     byte ptr [esp+34h+var_4], 1
0x7DF9CE: call    $LN21
0x7DF9D3: mov     esi, [ebp+0B0h]
0x7DF9D9: test    esi, esi
0x7DF9DB: mov     byte ptr [esp+24h+var_4], 0
0x7DF9E0: jz      short loc_7DF9FA
0x7DF9E2: lea     ecx, [esi+4]
0x7DF9E5: push    ecx; lpAddend
0x7DF9E6: call    edi ; InterlockedDecrement
0x7DF9E8: test    eax, eax
0x7DF9EA: jnz     short loc_7DF9FA
0x7DF9EC: test    esi, esi
0x7DF9EE: jz      short loc_7DF9FA
0x7DF9F0: mov     edx, [esi]
0x7DF9F2: mov     eax, [edx]
0x7DF9F4: push    1
0x7DF9F6: mov     ecx, esi
0x7DF9F8: call    eax
0x7DF9FA: mov     ecx, ebp; this
0x7DF9FC: mov     [esp+24h+var_4], ebx
0x7DFA00: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7DFA05: mov     ecx, dword ptr [esp+24h+var_C]
0x7DFA09: mov     large fs:0, ecx
0x7DFA10: pop     ecx
0x7DFA11: pop     edi
0x7DFA12: pop     esi
0x7DFA13: pop     ebp
0x7DFA14: pop     ebx
0x7DFA15: add     esp, 10h
0x7DFA18: retn
