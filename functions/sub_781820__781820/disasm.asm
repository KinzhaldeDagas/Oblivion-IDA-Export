0x781820: sub     esp, 0Ch
0x781823: push    ebx
0x781824: push    esi
0x781825: push    edi
0x781826: push    38h ; '8'; Size
0x781828: mov     ebx, ecx
0x78182A: call    FormHeapAlloc
0x78182F: mov     esi, eax
0x781831: xor     edi, edi
0x781833: add     esp, 4
0x781836: cmp     esi, edi
0x781838: jz      loc_7818C9
0x78183E: mov     eax, ds:0B428C4h
0x781843: push    eax
0x781844: mov     ecx, esi; this
0x781846: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x78184B: cmp     [esp+18h+arg_8], edi
0x78184F: mov     [esi+28h], edi
0x781852: mov     dword ptr [esi], offset ??_7NiD3DHLSLPixelShader@@6B@; const NiD3DHLSLPixelShader::`vftable'
0x781858: mov     [esi+2Ch], edi
0x78185B: mov     [esi+30h], edi
0x78185E: mov     [esi+34h], edi
0x781861: mov     [esp+18h+var_4], edi
0x781865: mov     [esp+18h+var_C], edi
0x781869: mov     [esp+18h+var_8], edi
0x78186D: jnz     short loc_781877
0x78186F: mov     [esp+18h+arg_8], offset aMain; "main"
0x781877: push    ebp
0x781878: mov     ebp, [esp+1Ch+arg_C]
0x78187C: cmp     ebp, edi
0x78187E: jnz     short loc_78188E
0x781880: mov     ecx, ds:0B428C0h
0x781886: push    ecx
0x781887: call    D3DXGetPixelShaderProfile_0
0x78188C: mov     ebp, eax
0x78188E: lea     edx, [esp+1Ch+var_8]
0x781892: push    edx
0x781893: mov     edx, [esp+20h+arg_8]
0x781897: lea     eax, [esp+20h+var_4]
0x78189B: push    eax
0x78189C: mov     eax, [esp+24h+arg_0]
0x7818A0: lea     ecx, [esp+24h+var_C]
0x7818A4: push    ecx
0x7818A5: push    ebp
0x7818A6: push    edx
0x7818A7: push    eax
0x7818A8: mov     ecx, ebx
0x7818AA: call    sub_781170
0x7818AF: test    al, al
0x7818B1: jnz     short loc_7818D4
0x7818B3: mov     edx, [esi]
0x7818B5: mov     eax, [edx]
0x7818B7: push    1
0x7818B9: mov     ecx, esi
0x7818BB: call    eax
0x7818BD: pop     ebp
0x7818BE: pop     edi
0x7818BF: pop     esi
0x7818C0: xor     eax, eax
0x7818C2: pop     ebx
0x7818C3: add     esp, 0Ch
0x7818C6: retn    10h
0x7818C9: pop     edi
0x7818CA: pop     esi
0x7818CB: xor     eax, eax
0x7818CD: pop     ebx
0x7818CE: add     esp, 0Ch
0x7818D1: retn    10h
0x7818D4: mov     ecx, [esp+1Ch+var_C]
0x7818D8: push    ecx
0x7818D9: mov     ecx, ebx
0x7818DB: call    sub_783C30
0x7818E0: mov     edi, eax
0x7818E2: test    edi, edi
0x7818E4: jnz     short loc_781911
0x7818E6: mov     edx, dword ptr [esp+1Ch+ArgList]
0x7818EA: push    edx; ArgList
0x7818EB: push    offset aFailedCreatepi; "Failed CreatePixelShader call on %s\n"
0x7818F0: push    eax; int
0x7818F1: push    1; int
0x7818F3: call    sub_738460
0x7818F8: mov     eax, [esi]
0x7818FA: mov     edx, [eax]
0x7818FC: add     esp, 10h
0x7818FF: push    1
0x781901: mov     ecx, esi
0x781903: call    edx
0x781905: pop     ebp
0x781906: pop     edi
0x781907: pop     esi
0x781908: xor     eax, eax
0x78190A: pop     ebx
0x78190B: add     esp, 0Ch
0x78190E: retn    10h
0x781911: mov     ecx, dword ptr [esp+1Ch+ArgList]
0x781915: mov     eax, [esi]
0x781917: mov     edx, [eax+8]
0x78191A: push    ecx
0x78191B: mov     ecx, esi
0x78191D: call    edx
0x78191F: mov     ecx, [esp+1Ch+arg_0]
0x781923: mov     eax, [esi]
0x781925: mov     edx, [eax+10h]
0x781928: push    ecx
0x781929: mov     ecx, esi
0x78192B: call    edx
0x78192D: mov     ecx, [esp+1Ch+var_C]
0x781931: mov     eax, [esi]
0x781933: mov     edx, [esp+1Ch+var_4]
0x781937: mov     eax, [eax+1Ch]
0x78193A: push    ecx
0x78193B: push    edx
0x78193C: mov     ecx, esi
0x78193E: call    eax
0x781940: mov     edx, [esi]
0x781942: mov     eax, [edx+24h]
0x781945: push    ebx
0x781946: mov     ecx, esi
0x781948: call    eax
0x78194A: mov     edx, [esi]
0x78194C: mov     eax, [edx+3Ch]
0x78194F: push    edi
0x781950: mov     ecx, esi
0x781952: call    eax
0x781954: mov     edx, [esi]
0x781956: mov     eax, [esp+1Ch+arg_8]
0x78195A: mov     edx, [edx+4Ch]
0x78195D: push    eax
0x78195E: mov     ecx, esi
0x781960: call    edx
0x781962: mov     eax, [esi]
0x781964: mov     edx, [eax+54h]
0x781967: push    ebp
0x781968: mov     ecx, esi
0x78196A: call    edx
0x78196C: mov     ecx, [esp+1Ch+var_8]
0x781970: mov     eax, [esi]
0x781972: mov     edx, [eax+5Ch]
0x781975: push    ecx
0x781976: mov     ecx, esi
0x781978: call    edx
0x78197A: mov     eax, [esp+1Ch+var_8]
0x78197E: test    eax, eax
0x781980: jz      short loc_78198A
0x781982: mov     ecx, [eax]
0x781984: mov     edx, [ecx+8]
0x781987: push    eax
0x781988: call    edx
0x78198A: pop     ebp
0x78198B: pop     edi
0x78198C: mov     eax, esi
0x78198E: pop     esi
0x78198F: pop     ebx
0x781990: add     esp, 0Ch
0x781993: retn    10h
