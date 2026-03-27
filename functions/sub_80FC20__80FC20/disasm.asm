0x80FC20: push    ebx
0x80FC21: push    ebp
0x80FC22: push    esi
0x80FC23: push    edi
0x80FC24: push    1; a1
0x80FC26: mov     esi, ecx
0x80FC28: call    GetShaderDefinition
0x80FC2D: mov     edx, [esi+34h]
0x80FC30: mov     ebx, [esp+14h+arg_1C]
0x80FC34: mov     ebp, [esp+14h+arg_18]
0x80FC38: add     esp, 4
0x80FC3B: mov     edi, [eax+4]
0x80FC3E: push    1
0x80FC40: push    edx
0x80FC41: mov     edx, [esp+18h+arg_14]
0x80FC45: mov     ecx, [edi+2Ch]
0x80FC48: push    ebx
0x80FC49: push    ebp
0x80FC4A: push    edx
0x80FC4B: mov     edx, [esp+24h+arg_10]
0x80FC4F: push    edx
0x80FC50: mov     edx, [esp+28h+arg_C]
0x80FC54: push    edx
0x80FC55: mov     edx, [esp+2Ch+arg_8]
0x80FC59: push    edx
0x80FC5A: mov     edx, [esp+30h+arg_4]
0x80FC5E: push    edx
0x80FC5F: mov     edx, [esp+34h+arg_0]
0x80FC63: add     eax, 4
0x80FC66: mov     eax, [ecx]
0x80FC68: mov     eax, [eax+40h]
0x80FC6B: push    edx
0x80FC6C: mov     edx, [esi+3Ch]
0x80FC6F: mov     edx, [edx+44h]
0x80FC72: push    edx
0x80FC73: call    eax
0x80FC75: mov     eax, [esi+34h]
0x80FC78: mov     ecx, [edi+30h]
0x80FC7B: mov     edi, [esp+10h+arg_14]
0x80FC7F: push    1
0x80FC81: push    eax
0x80FC82: mov     eax, [esp+18h+arg_10]
0x80FC86: mov     edx, [ecx]
0x80FC88: mov     edx, [edx+40h]
0x80FC8B: push    ebx
0x80FC8C: push    ebp
0x80FC8D: push    edi
0x80FC8E: push    eax
0x80FC8F: mov     eax, [esp+28h+arg_C]
0x80FC93: push    eax
0x80FC94: mov     eax, [esp+2Ch+arg_8]
0x80FC98: push    eax
0x80FC99: mov     eax, [esp+30h+arg_4]
0x80FC9D: push    eax
0x80FC9E: mov     eax, [esp+34h+arg_0]
0x80FCA2: push    eax
0x80FCA3: mov     eax, [esi+3Ch]
0x80FCA6: mov     eax, [eax+58h]
0x80FCA9: push    eax
0x80FCAA: call    edx
0x80FCAC: mov     eax, [esp+10h+arg_10]
0x80FCB0: mov     ecx, [esp+10h+arg_C]
0x80FCB4: mov     edx, [esp+10h+arg_8]
0x80FCB8: push    ebx
0x80FCB9: push    ebp
0x80FCBA: push    edi
0x80FCBB: push    eax
0x80FCBC: mov     eax, [esp+20h+arg_4]
0x80FCC0: push    ecx
0x80FCC1: mov     ecx, [esp+24h+arg_0]
0x80FCC5: push    edx
0x80FCC6: push    eax
0x80FCC7: push    ecx
0x80FCC8: mov     ecx, esi
0x80FCCA: call    SetupShaderPrograms
0x80FCCF: pop     edi
0x80FCD0: pop     esi
0x80FCD1: pop     ebp
0x80FCD2: pop     ebx
0x80FCD3: retn    20h ; ' '
