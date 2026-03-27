0x7814C0: sub     esp, 0Ch
0x7814C3: push    ebp
0x7814C4: push    esi
0x7814C5: push    edi
0x7814C6: push    44h ; 'D'; Size
0x7814C8: mov     ebp, ecx
0x7814CA: call    FormHeapAlloc
0x7814CF: mov     esi, eax
0x7814D1: xor     edi, edi
0x7814D3: add     esp, 4
0x7814D6: cmp     esi, edi
0x7814D8: jz      loc_78156A
0x7814DE: mov     eax, ds:0B428C4h
0x7814E3: push    eax
0x7814E4: mov     ecx, esi; this
0x7814E6: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x7814EB: cmp     [esp+18h+arg_8], edi
0x7814EF: mov     byte ptr [esi+28h], 0
0x7814F3: mov     [esi+2Ch], edi
0x7814F6: mov     [esi+30h], edi
0x7814F9: mov     [esi+34h], edi
0x7814FC: mov     dword ptr [esi], offset ??_7NiD3DHLSLVertexShader@@6B@; const NiD3DHLSLVertexShader::`vftable'
0x781502: mov     [esi+38h], edi
0x781505: mov     [esi+3Ch], edi
0x781508: mov     [esi+40h], edi
0x78150B: mov     [esp+18h+var_4], edi
0x78150F: mov     [esp+18h+var_C], edi
0x781513: mov     [esp+18h+var_8], edi
0x781517: jnz     short loc_781521
0x781519: mov     [esp+18h+arg_8], offset aMain; "main"
0x781521: cmp     [esp+18h+arg_C], edi
0x781525: jnz     short loc_781537
0x781527: mov     ecx, ds:0B428C0h
0x78152D: push    ecx
0x78152E: call    D3DXGetVertexShaderProfile_0
0x781533: mov     [esp+18h+arg_C], eax
0x781537: lea     edx, [esp+18h+var_8]
0x78153B: push    edx
0x78153C: mov     edx, [esp+1Ch+arg_C]
0x781540: lea     eax, [esp+1Ch+var_4]
0x781544: push    eax
0x781545: mov     eax, [esp+20h+arg_8]
0x781549: lea     ecx, [esp+20h+var_C]
0x78154D: push    ecx
0x78154E: mov     ecx, [esp+24h+arg_0]
0x781552: push    edx
0x781553: push    eax
0x781554: push    ecx
0x781555: mov     ecx, ebp
0x781557: call    sub_781170
0x78155C: test    al, al
0x78155E: jnz     short loc_781575
0x781560: mov     edx, [esi]
0x781562: mov     eax, [edx]
0x781564: push    1
0x781566: mov     ecx, esi
0x781568: call    eax
0x78156A: pop     edi
0x78156B: pop     esi
0x78156C: xor     eax, eax
0x78156E: pop     ebp
0x78156F: add     esp, 0Ch
0x781572: retn    1Ch
0x781575: mov     ecx, [esp+18h+arg_14]
0x781579: mov     eax, [esp+18h+var_C]
0x78157D: push    ebx
0x78157E: mov     ebx, [esp+1Ch+arg_18]
0x781582: push    ebx
0x781583: push    edi
0x781584: push    edi
0x781585: push    ecx
0x781586: lea     edx, [esp+2Ch+arg_10]
0x78158A: push    edx
0x78158B: push    eax
0x78158C: mov     ecx, ebp
0x78158E: call    sub_783BF0
0x781593: mov     edi, eax
0x781595: test    edi, edi
0x781597: jnz     short loc_7815C4
0x781599: mov     ecx, dword ptr [esp+1Ch+ArgList]
0x78159D: push    ecx; ArgList
0x78159E: push    offset aFailedCreateve; "Failed CreateVertexShader call on %s\n"
0x7815A3: push    eax; int
0x7815A4: push    1; int
0x7815A6: call    sub_738460
0x7815AB: mov     edx, [esi]
0x7815AD: mov     eax, [edx]
0x7815AF: add     esp, 10h
0x7815B2: push    1
0x7815B4: mov     ecx, esi
0x7815B6: call    eax
0x7815B8: pop     ebx
0x7815B9: pop     edi
0x7815BA: pop     esi
0x7815BB: xor     eax, eax
0x7815BD: pop     ebp
0x7815BE: add     esp, 0Ch
0x7815C1: retn    1Ch
0x7815C4: mov     edx, [esi]
0x7815C6: mov     eax, dword ptr [esp+1Ch+ArgList]
0x7815CA: mov     edx, [edx+8]
0x7815CD: push    eax
0x7815CE: mov     ecx, esi
0x7815D0: call    edx
0x7815D2: mov     ecx, [esp+1Ch+arg_0]
0x7815D6: mov     eax, [esi]
0x7815D8: mov     edx, [eax+10h]
0x7815DB: push    ecx
0x7815DC: mov     ecx, esi
0x7815DE: call    edx
0x7815E0: mov     ecx, [esp+1Ch+var_C]
0x7815E4: mov     eax, [esi]
0x7815E6: mov     edx, [esp+1Ch+var_4]
0x7815EA: mov     eax, [eax+1Ch]
0x7815ED: push    ecx
0x7815EE: push    edx
0x7815EF: mov     ecx, esi
0x7815F1: call    eax
0x7815F3: mov     edx, [esi]
0x7815F5: mov     eax, [edx+24h]
0x7815F8: push    ebp
0x7815F9: mov     ecx, esi
0x7815FB: call    eax
0x7815FD: mov     edx, [esi]
0x7815FF: mov     eax, [edx+44h]
0x781602: push    edi
0x781603: mov     ecx, esi
0x781605: call    eax
0x781607: mov     edx, [esi]
0x781609: mov     eax, [esp+1Ch+arg_14]
0x78160D: mov     edx, [edx+3Ch]
0x781610: push    eax
0x781611: mov     ecx, esi
0x781613: call    edx
0x781615: mov     eax, [esi]
0x781617: mov     edx, [eax+54h]
0x78161A: push    ebx
0x78161B: mov     ecx, esi
0x78161D: call    edx
0x78161F: mov     ecx, [esp+1Ch+arg_8]
0x781623: mov     eax, [esi]
0x781625: mov     edx, [eax+64h]
0x781628: push    ecx
0x781629: mov     ecx, esi
0x78162B: call    edx
0x78162D: mov     ecx, [esp+1Ch+arg_C]
0x781631: mov     eax, [esi]
0x781633: mov     edx, [eax+6Ch]
0x781636: push    ecx
0x781637: mov     ecx, esi
0x781639: call    edx
0x78163B: mov     ecx, [esp+1Ch+var_8]
0x78163F: mov     eax, [esi]
0x781641: mov     edx, [eax+74h]
0x781644: push    ecx
0x781645: mov     ecx, esi
0x781647: call    edx
0x781649: mov     eax, [esp+1Ch+var_8]
0x78164D: test    eax, eax
0x78164F: jz      short loc_781659
0x781651: mov     ecx, [eax]
0x781653: mov     edx, [ecx+8]
0x781656: push    eax
0x781657: call    edx
0x781659: pop     ebx
0x78165A: pop     edi
0x78165B: mov     eax, esi
0x78165D: pop     esi
0x78165E: pop     ebp
0x78165F: add     esp, 0Ch
0x781662: retn    1Ch
