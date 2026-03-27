0x781670: sub     esp, 0Ch
0x781673: push    ebp
0x781674: push    esi
0x781675: push    edi
0x781676: push    44h ; 'D'; Size
0x781678: mov     ebp, ecx
0x78167A: call    FormHeapAlloc
0x78167F: mov     esi, eax
0x781681: xor     edi, edi
0x781683: add     esp, 4
0x781686: cmp     esi, edi
0x781688: jz      loc_78171F
0x78168E: mov     eax, ds:0B428C4h
0x781693: push    eax
0x781694: mov     ecx, esi; this
0x781696: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x78169B: cmp     [esp+18h+arg_C], edi
0x78169F: mov     byte ptr [esi+28h], 0
0x7816A3: mov     [esi+2Ch], edi
0x7816A6: mov     [esi+30h], edi
0x7816A9: mov     [esi+34h], edi
0x7816AC: mov     dword ptr [esi], offset ??_7NiD3DHLSLVertexShader@@6B@; const NiD3DHLSLVertexShader::`vftable'
0x7816B2: mov     [esi+38h], edi
0x7816B5: mov     [esi+3Ch], edi
0x7816B8: mov     [esi+40h], edi
0x7816BB: mov     [esp+18h+var_4], edi
0x7816BF: mov     [esp+18h+var_C], edi
0x7816C3: mov     [esp+18h+var_8], edi
0x7816C7: jnz     short loc_7816D1
0x7816C9: mov     [esp+18h+arg_C], offset aMain; "main"
0x7816D1: cmp     [esp+18h+arg_10], edi
0x7816D5: jnz     short loc_7816E7
0x7816D7: mov     ecx, ds:0B428C0h
0x7816DD: push    ecx
0x7816DE: call    D3DXGetVertexShaderProfile_0
0x7816E3: mov     [esp+18h+arg_10], eax
0x7816E7: lea     edx, [esp+18h+var_8]
0x7816EB: push    edx
0x7816EC: mov     edx, [esp+1Ch+arg_10]
0x7816F0: lea     eax, [esp+1Ch+var_4]
0x7816F4: push    eax
0x7816F5: mov     eax, [esp+20h+arg_C]
0x7816F9: lea     ecx, [esp+20h+var_C]
0x7816FD: push    ecx
0x7816FE: mov     ecx, [esp+24h+arg_4]
0x781702: push    edx
0x781703: mov     edx, [esp+28h+arg_0]
0x781707: push    eax
0x781708: push    ecx
0x781709: push    edx
0x78170A: mov     ecx, ebp
0x78170C: call    sub_781350
0x781711: test    al, al
0x781713: jnz     short loc_78172A
0x781715: mov     eax, [esi]
0x781717: mov     edx, [eax]
0x781719: push    1
0x78171B: mov     ecx, esi
0x78171D: call    edx
0x78171F: pop     edi
0x781720: pop     esi
0x781721: xor     eax, eax
0x781723: pop     ebp
0x781724: add     esp, 0Ch
0x781727: retn    20h ; ' '
0x78172A: mov     eax, [esp+18h+arg_18]
0x78172E: mov     edx, [esp+18h+var_C]
0x781732: push    ebx
0x781733: mov     ebx, [esp+1Ch+arg_1C]
0x781737: push    ebx
0x781738: push    edi
0x781739: push    edi
0x78173A: push    eax
0x78173B: lea     ecx, [esp+2Ch+arg_14]
0x78173F: push    ecx
0x781740: push    edx
0x781741: mov     ecx, ebp
0x781743: call    sub_783BF0
0x781748: mov     edi, eax
0x78174A: test    edi, edi
0x78174C: mov     eax, dword ptr [esp+1Ch+ArgList]
0x781750: push    eax; ArgList
0x781751: jnz     short loc_781779
0x781753: push    offset aFailedCreateve; "Failed CreateVertexShader call on %s\n"
0x781758: push    edi; int
0x781759: push    1; int
0x78175B: call    sub_738460
0x781760: mov     edx, [esi]
0x781762: mov     eax, [edx]
0x781764: add     esp, 10h
0x781767: push    1
0x781769: mov     ecx, esi
0x78176B: call    eax
0x78176D: pop     ebx
0x78176E: pop     edi
0x78176F: pop     esi
0x781770: xor     eax, eax
0x781772: pop     ebp
0x781773: add     esp, 0Ch
0x781776: retn    20h ; ' '
0x781779: mov     edx, [esi]
0x78177B: mov     edx, [edx+8]
0x78177E: mov     ecx, esi
0x781780: call    edx
0x781782: mov     eax, [esi]
0x781784: mov     edx, [eax+10h]
0x781787: push    0
0x781789: mov     ecx, esi
0x78178B: call    edx
0x78178D: mov     ecx, [esp+1Ch+var_C]
0x781791: mov     eax, [esi]
0x781793: mov     edx, [esp+1Ch+var_4]
0x781797: mov     eax, [eax+1Ch]
0x78179A: push    ecx
0x78179B: push    edx
0x78179C: mov     ecx, esi
0x78179E: call    eax
0x7817A0: mov     edx, [esi]
0x7817A2: mov     eax, [edx+24h]
0x7817A5: push    ebp
0x7817A6: mov     ecx, esi
0x7817A8: call    eax
0x7817AA: mov     edx, [esi]
0x7817AC: mov     eax, [edx+44h]
0x7817AF: push    edi
0x7817B0: mov     ecx, esi
0x7817B2: call    eax
0x7817B4: mov     edx, [esi]
0x7817B6: mov     eax, [esp+1Ch+arg_18]
0x7817BA: mov     edx, [edx+3Ch]
0x7817BD: push    eax
0x7817BE: mov     ecx, esi
0x7817C0: call    edx
0x7817C2: mov     eax, [esi]
0x7817C4: mov     edx, [eax+54h]
0x7817C7: push    ebx
0x7817C8: mov     ecx, esi
0x7817CA: call    edx
0x7817CC: mov     ecx, [esp+1Ch+arg_C]
0x7817D0: mov     eax, [esi]
0x7817D2: mov     edx, [eax+64h]
0x7817D5: push    ecx
0x7817D6: mov     ecx, esi
0x7817D8: call    edx
0x7817DA: mov     ecx, [esp+1Ch+arg_10]
0x7817DE: mov     eax, [esi]
0x7817E0: mov     edx, [eax+6Ch]
0x7817E3: push    ecx
0x7817E4: mov     ecx, esi
0x7817E6: call    edx
0x7817E8: mov     ecx, [esp+1Ch+var_8]
0x7817EC: mov     eax, [esi]
0x7817EE: mov     edx, [eax+74h]
0x7817F1: push    ecx
0x7817F2: mov     ecx, esi
0x7817F4: call    edx
0x7817F6: mov     eax, [esp+1Ch+var_8]
0x7817FA: test    eax, eax
0x7817FC: jz      short loc_781806
0x7817FE: mov     ecx, [eax]
0x781800: mov     edx, [ecx+8]
0x781803: push    eax
0x781804: call    edx
0x781806: pop     ebx
0x781807: pop     edi
0x781808: mov     eax, esi
0x78180A: pop     esi
0x78180B: pop     ebp
0x78180C: add     esp, 0Ch
0x78180F: retn    20h ; ' '
