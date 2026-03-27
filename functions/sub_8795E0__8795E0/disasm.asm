0x8795E0: push    0FFFFFFFFh
0x8795E2: push    offset SEH_880560
0x8795E7: mov     eax, large fs:0
0x8795ED: push    eax
0x8795EE: push    ebx
0x8795EF: push    ebp
0x8795F0: push    esi
0x8795F1: push    edi
0x8795F2: mov     eax, ds:0B30AACh
0x8795F7: xor     eax, esp
0x8795F9: push    eax
0x8795FA: lea     eax, [esp+20h+var_C]
0x8795FE: mov     large fs:0, eax
0x879604: mov     esi, ecx
0x879606: mov     ebx, [esp+20h+arg_8]
0x87960A: mov     eax, [ebx+10h]
0x87960D: mov     edi, ds:0B476D8h
0x879613: push    eax
0x879614: call    sub_848C40
0x879619: mov     ebp, [ebx+0Ch]
0x87961C: push    ebp
0x87961D: mov     ecx, esi
0x87961F: call    sub_848E50
0x879624: mov     ebx, [ebx+10h]
0x879627: mov     ecx, [esp+20h+arg_0]
0x87962B: mov     eax, [esi]
0x87962D: mov     edx, [eax+0BCh]
0x879633: push    ebx
0x879634: push    ebp
0x879635: push    ecx
0x879636: mov     ecx, esi
0x879638: call    edx
0x87963A: mov     eax, [edi+24h]
0x87963D: mov     ecx, [esp+20h+arg_C]
0x879641: mov     ebx, [eax]
0x879643: mov     edx, [ecx]
0x879645: mov     eax, [edx+88h]
0x87964B: push    0
0x87964D: mov     [esp+24h+arg_8], ebx
0x879651: call    eax
0x879653: mov     ebx, [ebx+4]
0x879656: mov     ebp, eax
0x879658: cmp     ebx, ebp
0x87965A: jz      short loc_879691
0x87965C: test    ebx, ebx
0x87965E: jz      short loc_87967C
0x879660: lea     ecx, [ebx+4]
0x879663: push    ecx; lpAddend
0x879664: call    dword ptr ds:0A2807Ch
0x87966A: test    eax, eax
0x87966C: jnz     short loc_87967C
0x87966E: test    ebx, ebx
0x879670: jz      short loc_87967C
0x879672: mov     edx, [ebx]
0x879674: mov     eax, [edx]
0x879676: push    1
0x879678: mov     ecx, ebx
0x87967A: call    eax
0x87967C: test    ebp, ebp
0x87967E: mov     ecx, [esp+20h+arg_8]
0x879682: mov     [ecx+4], ebp
0x879685: jz      short loc_879691
0x879687: add     ebp, 4
0x87968A: push    ebp; lpAddend
0x87968B: call    dword ptr ds:0A28078h
0x879691: mov     edx, [edi+24h]
0x879694: mov     eax, [esp+20h+arg_C]
0x879698: mov     ebx, [edx+4]
0x87969B: push    0
0x87969D: push    eax
0x87969E: mov     ecx, esi
0x8796A0: mov     [esp+28h+arg_8], ebx
0x8796A4: call    sub_848FD0
0x8796A9: mov     ebx, [ebx+4]
0x8796AC: mov     ebp, eax
0x8796AE: cmp     ebx, ebp
0x8796B0: jz      short loc_8796E7
0x8796B2: test    ebx, ebx
0x8796B4: jz      short loc_8796D2
0x8796B6: lea     ecx, [ebx+4]
0x8796B9: push    ecx; lpAddend
0x8796BA: call    dword ptr ds:0A2807Ch
0x8796C0: test    eax, eax
0x8796C2: jnz     short loc_8796D2
0x8796C4: test    ebx, ebx
0x8796C6: jz      short loc_8796D2
0x8796C8: mov     edx, [ebx]
0x8796CA: mov     eax, [edx]
0x8796CC: push    1
0x8796CE: mov     ecx, ebx
0x8796D0: call    eax
0x8796D2: test    ebp, ebp
0x8796D4: mov     ecx, [esp+20h+arg_8]
0x8796D8: mov     [ecx+4], ebp
0x8796DB: jz      short loc_8796E7
0x8796DD: add     ebp, 4
0x8796E0: push    ebp; lpAddend
0x8796E1: call    dword ptr ds:0A28078h
0x8796E7: mov     edx, [edi+24h]
0x8796EA: mov     ebx, [edx+14h]
0x8796ED: mov     eax, ds:0B43110h
0x8796F2: mov     ebp, [ebx+4]
0x8796F5: add     ebx, 4
0x8796F8: cmp     ebp, eax
0x8796FA: mov     [esp+20h+arg_C], eax
0x8796FE: jz      short loc_879735
0x879700: test    ebp, ebp
0x879702: jz      short loc_879725
0x879704: lea     eax, [ebp+4]
0x879707: push    eax; lpAddend
0x879708: call    dword ptr ds:0A2807Ch
0x87970E: test    eax, eax
0x879710: jnz     short loc_879721
0x879712: test    ebp, ebp
0x879714: jz      short loc_879721
0x879716: mov     edx, [ebp+0]
0x879719: mov     eax, [edx]
0x87971B: push    1
0x87971D: mov     ecx, ebp
0x87971F: call    eax
0x879721: mov     eax, [esp+20h+arg_C]
0x879725: test    eax, eax
0x879727: mov     [ebx], eax
0x879729: jz      short loc_879735
0x87972B: add     eax, 4
0x87972E: push    eax; lpAddend
0x87972F: call    dword ptr ds:0A28078h
0x879735: mov     ecx, [edi+24h]
0x879738: mov     ebx, [ecx+18h]
0x87973B: mov     eax, ds:0B43108h
0x879740: mov     ebp, [ebx+4]
0x879743: add     ebx, 4
0x879746: cmp     ebp, eax
0x879748: mov     [esp+20h+arg_C], eax
0x87974C: jz      short loc_879783
0x87974E: test    ebp, ebp
0x879750: jz      short loc_879773
0x879752: lea     edx, [ebp+4]
0x879755: push    edx; lpAddend
0x879756: call    dword ptr ds:0A2807Ch
0x87975C: test    eax, eax
0x87975E: jnz     short loc_87976F
0x879760: test    ebp, ebp
0x879762: jz      short loc_87976F
0x879764: mov     eax, [ebp+0]
0x879767: mov     edx, [eax]
0x879769: push    1
0x87976B: mov     ecx, ebp
0x87976D: call    edx
0x87976F: mov     eax, [esp+20h+arg_C]
0x879773: test    eax, eax
0x879775: mov     [ebx], eax
0x879777: jz      short loc_879783
0x879779: add     eax, 4
0x87977C: push    eax; lpAddend
0x87977D: call    dword ptr ds:0A28078h
0x879783: mov     eax, [edi+24h]
0x879786: mov     ebp, [eax+1Ch]
0x879789: mov     eax, ds:0B4310Ch
0x87978E: mov     ebx, [ebp+4]
0x879791: cmp     ebx, eax
0x879793: mov     ecx, eax
0x879795: mov     [esp+20h+arg_C], ecx
0x879799: jz      short loc_8797D0
0x87979B: test    ebx, ebx
0x87979D: jz      short loc_8797BF
0x87979F: lea     ecx, [ebx+4]
0x8797A2: push    ecx; lpAddend
0x8797A3: call    dword ptr ds:0A2807Ch
0x8797A9: test    eax, eax
0x8797AB: jnz     short loc_8797BB
0x8797AD: test    ebx, ebx
0x8797AF: jz      short loc_8797BB
0x8797B1: mov     edx, [ebx]
0x8797B3: mov     eax, [edx]
0x8797B5: push    1
0x8797B7: mov     ecx, ebx
0x8797B9: call    eax
0x8797BB: mov     ecx, [esp+20h+arg_C]
0x8797BF: test    ecx, ecx
0x8797C1: mov     [ebp+4], ecx
0x8797C4: jz      short loc_8797D0
0x8797C6: add     ecx, 4
0x8797C9: push    ecx; lpAddend
0x8797CA: call    dword ptr ds:0A28078h
0x8797D0: mov     ebx, 1
0x8797D5: add     [edi+60h], ebx
0x8797D8: mov     [esp+20h+arg_C], edi
0x8797DC: mov     edx, [esi+38h]
0x8797DF: lea     ecx, [esp+20h+arg_C]
0x8797E3: push    ecx
0x8797E4: push    edx
0x8797E5: lea     ecx, [esi+40h]
0x8797E8: mov     [esp+28h+var_4], 0
0x8797F0: call    sub_76CE40
0x8797F5: or      eax, 0FFFFFFFFh
0x8797F8: add     [edi+60h], eax
0x8797FB: mov     [esp+20h+var_4], eax
0x8797FF: jnz     short loc_879808
0x879801: mov     ecx, edi
0x879803: call    sub_7604D0
0x879808: add     [esi+38h], ebx
0x87980B: mov     ecx, [esp+20h+var_C]
0x87980F: mov     large fs:0, ecx
0x879816: pop     ecx
0x879817: pop     edi
0x879818: pop     esi
0x879819: pop     ebp
0x87981A: pop     ebx
0x87981B: add     esp, 0Ch
0x87981E: retn    10h
