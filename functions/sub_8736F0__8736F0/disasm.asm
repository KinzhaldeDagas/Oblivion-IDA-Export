0x8736F0: push    0FFFFFFFFh
0x8736F2: push    offset SEH_880560
0x8736F7: mov     eax, large fs:0
0x8736FD: push    eax
0x8736FE: push    ebx
0x8736FF: push    ebp
0x873700: push    esi
0x873701: push    edi
0x873702: mov     eax, ds:0B30AACh
0x873707: xor     eax, esp
0x873709: push    eax
0x87370A: lea     eax, [esp+20h+var_C]
0x87370E: mov     large fs:0, eax
0x873714: mov     esi, ecx
0x873716: mov     ebx, [esp+20h+arg_8]
0x87371A: mov     eax, [ebx+10h]
0x87371D: mov     edi, ds:0B47620h
0x873723: push    eax
0x873724: call    sub_848C40
0x873729: mov     ebx, [ebx+0Ch]
0x87372C: push    ebx
0x87372D: mov     ecx, esi
0x87372F: call    sub_848E50
0x873734: mov     ecx, [esp+20h+arg_0]
0x873738: mov     eax, [esi]
0x87373A: mov     edx, [eax+0BCh]
0x873740: push    0
0x873742: push    ebx
0x873743: push    ecx
0x873744: mov     ecx, esi
0x873746: call    edx
0x873748: mov     eax, [edi+24h]
0x87374B: mov     ecx, [esp+20h+value]
0x87374F: mov     ebx, [eax]
0x873751: mov     edx, [ecx]
0x873753: mov     eax, [edx+88h]
0x873759: push    0
0x87375B: mov     [esp+24h+arg_8], ebx
0x87375F: call    eax
0x873761: mov     ebx, [ebx+4]
0x873764: mov     ebp, eax
0x873766: cmp     ebx, ebp
0x873768: jz      short loc_87379F
0x87376A: test    ebx, ebx
0x87376C: jz      short loc_87378A
0x87376E: lea     ecx, [ebx+4]
0x873771: push    ecx; lpAddend
0x873772: call    dword ptr ds:0A2807Ch
0x873778: test    eax, eax
0x87377A: jnz     short loc_87378A
0x87377C: test    ebx, ebx
0x87377E: jz      short loc_87378A
0x873780: mov     edx, [ebx]
0x873782: mov     eax, [edx]
0x873784: push    1
0x873786: mov     ecx, ebx
0x873788: call    eax
0x87378A: test    ebp, ebp
0x87378C: mov     ecx, [esp+20h+arg_8]
0x873790: mov     [ecx+4], ebp
0x873793: jz      short loc_87379F
0x873795: add     ebp, 4
0x873798: push    ebp; lpAddend
0x873799: call    dword ptr ds:0A28078h
0x87379F: mov     edx, [edi+24h]
0x8737A2: mov     eax, [esp+20h+value]
0x8737A6: mov     ebx, [edx+4]
0x8737A9: push    0
0x8737AB: push    eax
0x8737AC: mov     ecx, esi
0x8737AE: mov     [esp+28h+arg_8], ebx
0x8737B2: call    sub_848FD0
0x8737B7: mov     ebx, [ebx+4]
0x8737BA: mov     ebp, eax
0x8737BC: cmp     ebx, ebp
0x8737BE: jz      short loc_8737F5
0x8737C0: test    ebx, ebx
0x8737C2: jz      short loc_8737E0
0x8737C4: lea     ecx, [ebx+4]
0x8737C7: push    ecx; lpAddend
0x8737C8: call    dword ptr ds:0A2807Ch
0x8737CE: test    eax, eax
0x8737D0: jnz     short loc_8737E0
0x8737D2: test    ebx, ebx
0x8737D4: jz      short loc_8737E0
0x8737D6: mov     edx, [ebx]
0x8737D8: mov     eax, [edx]
0x8737DA: push    1
0x8737DC: mov     ecx, ebx
0x8737DE: call    eax
0x8737E0: test    ebp, ebp
0x8737E2: mov     ecx, [esp+20h+arg_8]
0x8737E6: mov     [ecx+4], ebp
0x8737E9: jz      short loc_8737F5
0x8737EB: add     ebp, 4
0x8737EE: push    ebp; lpAddend
0x8737EF: call    dword ptr ds:0A28078h
0x8737F5: mov     edx, [edi+24h]
0x8737F8: mov     ebp, [edx+10h]
0x8737FB: mov     eax, ds:0B43110h
0x873800: mov     ebx, [ebp+4]
0x873803: cmp     ebx, eax
0x873805: mov     ecx, eax
0x873807: mov     [esp+20h+value], ecx
0x87380B: jz      short loc_873842
0x87380D: test    ebx, ebx
0x87380F: jz      short loc_873831
0x873811: lea     eax, [ebx+4]
0x873814: push    eax; lpAddend
0x873815: call    dword ptr ds:0A2807Ch
0x87381B: test    eax, eax
0x87381D: jnz     short loc_87382D
0x87381F: test    ebx, ebx
0x873821: jz      short loc_87382D
0x873823: mov     edx, [ebx]
0x873825: mov     eax, [edx]
0x873827: push    1
0x873829: mov     ecx, ebx
0x87382B: call    eax
0x87382D: mov     ecx, [esp+20h+value]
0x873831: test    ecx, ecx
0x873833: mov     [ebp+4], ecx
0x873836: jz      short loc_873842
0x873838: add     ecx, 4
0x87383B: push    ecx; lpAddend
0x87383C: call    dword ptr ds:0A28078h
0x873842: mov     ebx, 1
0x873847: add     [edi+60h], ebx
0x87384A: mov     [esp+20h+value], edi
0x87384E: mov     edx, [esi+38h]; MoonSugarEffect decode: Parallax pass-0 append. edx = shader+0x38 PassCount; ecx later becomes shader+0x40 Passes base; pass pointer is dword_B47620[0].
0x873851: lea     ecx, [esp+20h+value]
0x873855: push    ecx; value
0x873856: push    edx; index
0x873857: lea     ecx, [esi+40h]; this
0x87385A: mov     [esp+28h+var_4], 0
0x873862: call    NiTArray_NiD3DPass_SetAt; MoonSugarEffect decode: sub_76CE40(&shader->Passes, shader->PassCount, &dword_B47620[0]) stores the selected global pass in the shader pass array with refcount ownership.
0x873867: or      eax, 0FFFFFFFFh
0x87386A: add     [edi+60h], eax
0x87386D: mov     [esp+20h+var_4], eax
0x873871: jnz     short loc_87387A
0x873873: mov     ecx, edi
0x873875: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x87387A: add     [esi+38h], ebx; MoonSugarEffect decode: increments shader+0x38 PassCount after appending dword_B47620[0]. vtable +0x48 will later copy Passes.data[0] into CurrentPass.
0x87387D: mov     ecx, [esp+20h+var_C]
0x873881: mov     large fs:0, ecx
0x873888: pop     ecx
0x873889: pop     edi
0x87388A: pop     esi
0x87388B: pop     ebp
0x87388C: pop     ebx
0x87388D: add     esp, 0Ch
0x873890: retn    10h
0x9D3390: lea     ecx, [ebp+10h]; void *
0x9D3393: jmp     sub_4027D0
0x9D3398: mov     edx, [esp+arg_4]
0x9D339C: lea     eax, [edx-10h]
0x9D339F: mov     ecx, [edx-14h]
0x9D33A2: xor     ecx, eax
0x9D33A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D33A9: mov     eax, offset stru_AFB7C0
0x9D33AE: jmp     ___CxxFrameHandler3
