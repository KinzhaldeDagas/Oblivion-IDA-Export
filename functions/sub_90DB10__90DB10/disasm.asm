0x90DB10: push    ecx
0x90DB11: push    ebx
0x90DB12: mov     ebx, large fs:2Ch
0x90DB19: push    ebp
0x90DB1A: push    esi
0x90DB1B: mov     esi, ecx
0x90DB1D: mov     eax, [esi+40h]
0x90DB20: test    eax, eax
0x90DB22: push    edi
0x90DB23: mov     edi, ds:0BA9DE4h
0x90DB29: jle     short loc_90DB68
0x90DB2B: xor     ebp, ebp
0x90DB2D: mov     [esp+14h+var_4], eax
0x90DB31: mov     ecx, [esi+3Ch]
0x90DB34: mov     eax, [ecx+ebp+8]
0x90DB38: add     ecx, ebp
0x90DB3A: test    eax, eax
0x90DB3C: js      short loc_90DB5A
0x90DB3E: and     eax, 3FFFFFFFh
0x90DB43: push    14h
0x90DB45: shl     eax, 3
0x90DB48: push    eax
0x90DB49: mov     eax, [ecx]
0x90DB4B: mov     ecx, [ebx+edi*4]
0x90DB4E: mov     ecx, [ecx+19Ch]
0x90DB54: push    eax
0x90DB55: call    sub_8A75D0
0x90DB5A: mov     eax, [esp+14h+var_4]
0x90DB5E: add     ebp, 0Ch
0x90DB61: dec     eax
0x90DB62: mov     [esp+14h+var_4], eax
0x90DB66: jnz     short loc_90DB31
0x90DB68: mov     eax, [esi+44h]
0x90DB6B: test    eax, eax
0x90DB6D: js      short loc_90DB8F
0x90DB6F: mov     ecx, [ebx+edi*4]
0x90DB72: mov     ecx, [ecx+19Ch]
0x90DB78: and     eax, 3FFFFFFFh
0x90DB7D: lea     edx, [eax+eax*2]
0x90DB80: mov     eax, [esi+3Ch]
0x90DB83: push    14h
0x90DB85: shl     edx, 2
0x90DB88: push    edx
0x90DB89: push    eax
0x90DB8A: call    sub_8A75D0
0x90DB8F: mov     eax, [esi+34h]
0x90DB92: test    eax, eax
0x90DB94: jle     short loc_90DBDA
0x90DB96: xor     ebp, ebp
0x90DB98: mov     [esp+14h+var_4], eax
0x90DB9C: lea     esp, [esp+0]
0x90DBA0: mov     ecx, [esi+30h]
0x90DBA3: mov     eax, [ecx+ebp+8]
0x90DBA7: add     ecx, ebp
0x90DBA9: test    eax, eax
0x90DBAB: js      short loc_90DBCC
0x90DBAD: and     eax, 3FFFFFFFh
0x90DBB2: lea     edx, [eax+eax*2]
0x90DBB5: mov     eax, [ecx]
0x90DBB7: mov     ecx, [ebx+edi*4]
0x90DBBA: mov     ecx, [ecx+19Ch]
0x90DBC0: push    14h
0x90DBC2: shl     edx, 2
0x90DBC5: push    edx
0x90DBC6: push    eax
0x90DBC7: call    sub_8A75D0
0x90DBCC: mov     eax, [esp+14h+var_4]
0x90DBD0: add     ebp, 0Ch
0x90DBD3: dec     eax
0x90DBD4: mov     [esp+14h+var_4], eax
0x90DBD8: jnz     short loc_90DBA0
0x90DBDA: mov     eax, [esi+38h]
0x90DBDD: test    eax, eax
0x90DBDF: js      short loc_90DC01
0x90DBE1: mov     ecx, [ebx+edi*4]
0x90DBE4: mov     ecx, [ecx+19Ch]
0x90DBEA: and     eax, 3FFFFFFFh
0x90DBEF: lea     edx, [eax+eax*2]
0x90DBF2: mov     eax, [esi+30h]
0x90DBF5: push    14h
0x90DBF7: shl     edx, 2
0x90DBFA: push    edx
0x90DBFB: push    eax
0x90DBFC: call    sub_8A75D0
0x90DC01: lea     ecx, [esi+20h]
0x90DC04: call    sub_942E10
0x90DC09: mov     eax, [esi+18h]
0x90DC0C: test    eax, eax
0x90DC0E: js      short loc_90DC2D
0x90DC10: mov     edx, [esi+10h]
0x90DC13: and     eax, 3FFFFFFFh
0x90DC18: push    14h
0x90DC1A: shl     eax, 3
0x90DC1D: push    eax
0x90DC1E: mov     eax, [ebx+edi*4]
0x90DC21: mov     ecx, [eax+19Ch]
0x90DC27: push    edx
0x90DC28: call    sub_8A75D0
0x90DC2D: mov     eax, [esi+0Ch]
0x90DC30: test    eax, eax
0x90DC32: js      short loc_90DC54
0x90DC34: mov     edx, [esi+4]
0x90DC37: and     eax, 3FFFFFFFh
0x90DC3C: lea     ecx, [eax+eax*2]
0x90DC3F: mov     eax, [ebx+edi*4]
0x90DC42: push    14h
0x90DC44: shl     ecx, 4
0x90DC47: push    ecx
0x90DC48: mov     ecx, [eax+19Ch]
0x90DC4E: push    edx
0x90DC4F: call    sub_8A75D0
0x90DC54: pop     edi
0x90DC55: pop     esi
0x90DC56: pop     ebp
0x90DC57: pop     ebx
0x90DC58: pop     ecx
0x90DC59: retn
