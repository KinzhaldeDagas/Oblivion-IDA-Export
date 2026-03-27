0x44CD80: mov     eax, [esp+arg_0]
0x44CD84: test    eax, eax
0x44CD86: jz      short locret_44CDDE
0x44CD88: mov     eax, [eax+8]
0x44CD8B: push    eax
0x44CD8C: push    offset dword_B3F95C
0x44CD91: call    NiRTTI_Cast
0x44CD96: add     esp, 8
0x44CD99: test    eax, eax
0x44CD9B: jz      short locret_44CDDE
0x44CD9D: cmp     [esp+arg_10], 0
0x44CDA2: mov     ecx, [eax+24h]
0x44CDA5: mov     edx, [ecx+60h]
0x44CDA8: mov     ecx, offset aShader; "Shader"
0x44CDAD: jnz     short loc_44CDB4
0x44CDAF: mov     ecx, offset aNoShader; "No Shader"
0x44CDB4: push    ecx
0x44CDB5: push    edx
0x44CDB6: mov     edx, [eax+34h]
0x44CDB9: mov     eax, [esp+8+arg_4]
0x44CDBD: mov     ecx, [eax+8]
0x44CDC0: mov     eax, [esp+8+arg_8]
0x44CDC4: push    edx
0x44CDC5: mov     edx, [esp+0Ch+arg_C]
0x44CDC9: push    ecx
0x44CDCA: push    edx
0x44CDCB: push    eax
0x44CDCC: push    offset aSSSSDS; "%s\t%s\t%s\t%s\t%d\t%s\r\n"
0x44CDD1: push    offset aTestmodelsUnus; "TestModels - Unused Textures.xls"
0x44CDD6: call    nullsub_return0_0arg
0x44CDDB: add     esp, 20h
0x44CDDE: retn    14h
