0x82D990: push    0FFFFFFFFh
0x82D992: push    offset SEH_82D990
0x82D997: mov     eax, large fs:0
0x82D99D: push    eax
0x82D99E: sub     esp, 0Ch
0x82D9A1: push    ebx
0x82D9A2: push    ebp
0x82D9A3: push    esi
0x82D9A4: push    edi
0x82D9A5: mov     eax, ds:0B30AACh
0x82D9AA: xor     eax, esp
0x82D9AC: push    eax
0x82D9AD: lea     eax, [esp+2Ch+var_C]
0x82D9B1: mov     large fs:0, eax
0x82D9B7: xor     esi, esi
0x82D9B9: xor     edi, edi
0x82D9BB: mov     [esp+2Ch+var_14], esi
0x82D9BF: mov     [esp+2Ch+var_4], edi
0x82D9C3: mov     [esp+2Ch+a3], edi
0x82D9C7: mov     eax, ds:0B456C8h
0x82D9CC: cmp     eax, edi
0x82D9CE: mov     ebp, 1
0x82D9D3: mov     byte ptr [esp+2Ch+var_4], 1
0x82D9D8: jz      short loc_82D9E7
0x82D9DA: mov     esi, eax
0x82D9DC: cmp     esi, edi
0x82D9DE: mov     [esp+2Ch+var_14], esi
0x82D9E2: jz      short loc_82D9E7
0x82D9E4: add     [esi+60h], ebp
0x82D9E7: mov     eax, [esi+18h]
0x82D9EA: or      ebx, 0FFFFFFFFh
0x82D9ED: cmp     eax, 7
0x82D9F0: jnb     loc_82DCF8
0x82D9F6: lea     eax, [esp+2Ch+var_10]
0x82D9FA: push    eax
0x82D9FB: call    sub_772630
0x82DA00: add     esp, 4
0x82DA03: mov     eax, [eax]
0x82DA05: test    eax, eax
0x82DA07: jz      short loc_82DA12
0x82DA09: mov     edi, eax
0x82DA0B: add     [edi+5Ch], ebp
0x82DA0E: mov     [esp+2Ch+a3], edi
0x82DA12: mov     eax, [esp+2Ch+var_10]
0x82DA16: test    eax, eax
0x82DA18: mov     byte ptr [esp+2Ch+var_4], 1
0x82DA1D: jz      short loc_82DA31
0x82DA1F: add     [eax+5Ch], ebx
0x82DA22: mov     ecx, eax
0x82DA24: add     eax, 5Ch ; '\'
0x82DA27: cmp     dword ptr [eax], 0
0x82DA2A: jnz     short loc_82DA31
0x82DA2C: call    sub_772560
0x82DA31: push    2
0x82DA33: push    1
0x82DA35: push    0
0x82DA37: push    edi
0x82DA38: call    sub_801110
0x82DA3D: add     esp, 10h
0x82DA40: push    edi; a3
0x82DA41: push    0; a2
0x82DA43: mov     ecx, esi; this
0x82DA45: call    sub_760010
0x82DA4A: lea     ecx, [esp+2Ch+var_10]
0x82DA4E: push    ecx
0x82DA4F: call    sub_772630
0x82DA54: add     esp, 4
0x82DA57: mov     ebp, eax
0x82DA59: cmp     edi, [ebp+0]
0x82DA5C: mov     byte ptr [esp+2Ch+var_4], 3
0x82DA61: jz      short loc_82DA82
0x82DA63: test    edi, edi
0x82DA65: jz      short loc_82DA73
0x82DA67: add     [edi+5Ch], ebx
0x82DA6A: jnz     short loc_82DA73
0x82DA6C: mov     ecx, edi
0x82DA6E: call    sub_772560
0x82DA73: mov     edi, [ebp+0]
0x82DA76: test    edi, edi
0x82DA78: mov     [esp+2Ch+a3], edi
0x82DA7C: jz      short loc_82DA82
0x82DA7E: add     dword ptr [edi+5Ch], 1
0x82DA82: mov     eax, [esp+2Ch+var_10]
0x82DA86: test    eax, eax
0x82DA88: mov     byte ptr [esp+2Ch+var_4], 1
0x82DA8D: jz      short loc_82DAA1
0x82DA8F: add     [eax+5Ch], ebx
0x82DA92: mov     ecx, eax
0x82DA94: add     eax, 5Ch ; '\'
0x82DA97: cmp     dword ptr [eax], 0
0x82DA9A: jnz     short loc_82DAA1
0x82DA9C: call    sub_772560
0x82DAA1: push    2
0x82DAA3: push    1
0x82DAA5: push    1
0x82DAA7: push    edi
0x82DAA8: call    sub_801110
0x82DAAD: add     esp, 10h
0x82DAB0: push    edi; a3
0x82DAB1: push    1; a2
0x82DAB3: mov     ecx, esi; this
0x82DAB5: call    sub_760010
0x82DABA: lea     edx, [esp+2Ch+var_10]
0x82DABE: push    edx
0x82DABF: call    sub_772630
0x82DAC4: add     esp, 4
0x82DAC7: mov     ebp, eax
0x82DAC9: cmp     edi, [ebp+0]
0x82DACC: mov     byte ptr [esp+2Ch+var_4], 4
0x82DAD1: jz      short loc_82DAF2
0x82DAD3: test    edi, edi
0x82DAD5: jz      short loc_82DAE3
0x82DAD7: add     [edi+5Ch], ebx
0x82DADA: jnz     short loc_82DAE3
0x82DADC: mov     ecx, edi
0x82DADE: call    sub_772560
0x82DAE3: mov     edi, [ebp+0]
0x82DAE6: test    edi, edi
0x82DAE8: mov     [esp+2Ch+a3], edi
0x82DAEC: jz      short loc_82DAF2
0x82DAEE: add     dword ptr [edi+5Ch], 1
0x82DAF2: mov     eax, [esp+2Ch+var_10]
0x82DAF6: test    eax, eax
0x82DAF8: mov     byte ptr [esp+2Ch+var_4], 1
0x82DAFD: jz      short loc_82DB11
0x82DAFF: add     [eax+5Ch], ebx
0x82DB02: mov     ecx, eax
0x82DB04: add     eax, 5Ch ; '\'
0x82DB07: cmp     dword ptr [eax], 0
0x82DB0A: jnz     short loc_82DB11
0x82DB0C: call    sub_772560
0x82DB11: push    2
0x82DB13: push    1
0x82DB15: push    2
0x82DB17: push    edi
0x82DB18: call    sub_801110
0x82DB1D: add     esp, 10h
0x82DB20: push    edi; a3
0x82DB21: push    2; a2
0x82DB23: mov     ecx, esi; this
0x82DB25: call    sub_760010
0x82DB2A: lea     eax, [esp+2Ch+var_10]
0x82DB2E: push    eax
0x82DB2F: call    sub_772630
0x82DB34: add     esp, 4
0x82DB37: mov     ebp, eax
0x82DB39: cmp     edi, [ebp+0]
0x82DB3C: mov     byte ptr [esp+2Ch+var_4], 5
0x82DB41: jz      short loc_82DB62
0x82DB43: test    edi, edi
0x82DB45: jz      short loc_82DB53
0x82DB47: add     [edi+5Ch], ebx
0x82DB4A: jnz     short loc_82DB53
0x82DB4C: mov     ecx, edi
0x82DB4E: call    sub_772560
0x82DB53: mov     edi, [ebp+0]
0x82DB56: test    edi, edi
0x82DB58: mov     [esp+2Ch+a3], edi
0x82DB5C: jz      short loc_82DB62
0x82DB5E: add     dword ptr [edi+5Ch], 1
0x82DB62: mov     eax, [esp+2Ch+var_10]
0x82DB66: test    eax, eax
0x82DB68: mov     byte ptr [esp+2Ch+var_4], 1
0x82DB6D: jz      short loc_82DB81
0x82DB6F: add     [eax+5Ch], ebx
0x82DB72: mov     ecx, eax
0x82DB74: add     eax, 5Ch ; '\'
0x82DB77: cmp     dword ptr [eax], 0
0x82DB7A: jnz     short loc_82DB81
0x82DB7C: call    sub_772560
0x82DB81: push    2
0x82DB83: push    1
0x82DB85: push    3
0x82DB87: push    edi
0x82DB88: call    sub_801110
0x82DB8D: add     esp, 10h
0x82DB90: push    edi; a3
0x82DB91: push    3; a2
0x82DB93: mov     ecx, esi; this
0x82DB95: call    sub_760010
0x82DB9A: lea     ecx, [esp+2Ch+var_10]
0x82DB9E: push    ecx
0x82DB9F: call    sub_772630
0x82DBA4: add     esp, 4
0x82DBA7: mov     ebp, eax
0x82DBA9: cmp     edi, [ebp+0]
0x82DBAC: mov     byte ptr [esp+2Ch+var_4], 6
0x82DBB1: jz      short loc_82DBD2
0x82DBB3: test    edi, edi
0x82DBB5: jz      short loc_82DBC3
0x82DBB7: add     [edi+5Ch], ebx
0x82DBBA: jnz     short loc_82DBC3
0x82DBBC: mov     ecx, edi
0x82DBBE: call    sub_772560
0x82DBC3: mov     edi, [ebp+0]
0x82DBC6: test    edi, edi
0x82DBC8: mov     [esp+2Ch+a3], edi
0x82DBCC: jz      short loc_82DBD2
0x82DBCE: add     dword ptr [edi+5Ch], 1
0x82DBD2: mov     eax, [esp+2Ch+var_10]
0x82DBD6: test    eax, eax
0x82DBD8: mov     byte ptr [esp+2Ch+var_4], 1
0x82DBDD: jz      short loc_82DBF1
0x82DBDF: add     [eax+5Ch], ebx
0x82DBE2: mov     ecx, eax
0x82DBE4: add     eax, 5Ch ; '\'
0x82DBE7: cmp     dword ptr [eax], 0
0x82DBEA: jnz     short loc_82DBF1
0x82DBEC: call    sub_772560
0x82DBF1: push    0
0x82DBF3: push    3
0x82DBF5: push    4
0x82DBF7: push    edi
0x82DBF8: call    sub_801110
0x82DBFD: mov     edx, ds:0B43110h
0x82DC03: add     esp, 10h
0x82DC06: push    edx; a2
0x82DC07: mov     ecx, edi; this
0x82DC09: call    sub_76C910
0x82DC0E: push    edi; a3
0x82DC0F: push    4; a2
0x82DC11: mov     ecx, esi; this
0x82DC13: call    sub_760010
0x82DC18: lea     eax, [esp+2Ch+var_10]
0x82DC1C: push    eax
0x82DC1D: call    sub_772630
0x82DC22: add     esp, 4
0x82DC25: mov     ebp, eax
0x82DC27: cmp     edi, [ebp+0]
0x82DC2A: mov     byte ptr [esp+2Ch+var_4], 7
0x82DC2F: jz      short loc_82DC50
0x82DC31: test    edi, edi
0x82DC33: jz      short loc_82DC41
0x82DC35: add     [edi+5Ch], ebx
0x82DC38: jnz     short loc_82DC41
0x82DC3A: mov     ecx, edi
0x82DC3C: call    sub_772560
0x82DC41: mov     edi, [ebp+0]
0x82DC44: test    edi, edi
0x82DC46: mov     [esp+2Ch+a3], edi
0x82DC4A: jz      short loc_82DC50
0x82DC4C: add     dword ptr [edi+5Ch], 1
0x82DC50: mov     eax, [esp+2Ch+var_10]
0x82DC54: test    eax, eax
0x82DC56: mov     byte ptr [esp+2Ch+var_4], 1
0x82DC5B: jz      short loc_82DC6F
0x82DC5D: add     [eax+5Ch], ebx
0x82DC60: mov     ecx, eax
0x82DC62: add     eax, 5Ch ; '\'
0x82DC65: cmp     dword ptr [eax], 0
0x82DC68: jnz     short loc_82DC6F
0x82DC6A: call    sub_772560
0x82DC6F: push    2
0x82DC71: push    1
0x82DC73: push    5
0x82DC75: push    edi
0x82DC76: call    sub_801110
0x82DC7B: add     esp, 10h
0x82DC7E: push    edi; a3
0x82DC7F: push    5; a2
0x82DC81: mov     ecx, esi; this
0x82DC83: call    sub_760010
0x82DC88: lea     ecx, [esp+2Ch+var_10]
0x82DC8C: push    ecx
0x82DC8D: call    sub_772630
0x82DC92: add     esp, 4
0x82DC95: mov     ebp, eax
0x82DC97: cmp     edi, [ebp+0]
0x82DC9A: mov     byte ptr [esp+2Ch+var_4], 8
0x82DC9F: jz      short loc_82DCC0
0x82DCA1: test    edi, edi
0x82DCA3: jz      short loc_82DCB1
0x82DCA5: add     [edi+5Ch], ebx
0x82DCA8: jnz     short loc_82DCB1
0x82DCAA: mov     ecx, edi
0x82DCAC: call    sub_772560
0x82DCB1: mov     edi, [ebp+0]
0x82DCB4: test    edi, edi
0x82DCB6: mov     [esp+2Ch+a3], edi
0x82DCBA: jz      short loc_82DCC0
0x82DCBC: add     dword ptr [edi+5Ch], 1
0x82DCC0: mov     eax, [esp+2Ch+var_10]
0x82DCC4: test    eax, eax
0x82DCC6: mov     byte ptr [esp+2Ch+var_4], 1
0x82DCCB: jz      short loc_82DCDF
0x82DCCD: add     [eax+5Ch], ebx
0x82DCD0: mov     ecx, eax
0x82DCD2: add     eax, 5Ch ; '\'
0x82DCD5: cmp     dword ptr [eax], 0
0x82DCD8: jnz     short loc_82DCDF
0x82DCDA: call    sub_772560
0x82DCDF: push    0
0x82DCE1: push    3
0x82DCE3: push    6
0x82DCE5: push    edi
0x82DCE6: call    sub_801110
0x82DCEB: add     esp, 10h
0x82DCEE: push    edi; a3
0x82DCEF: push    6; a2
0x82DCF1: mov     ecx, esi; this
0x82DCF3: call    sub_760010
0x82DCF8: mov     eax, ds:0B453B0h
0x82DCFD: mov     ebp, [esi+58h]
0x82DD00: cmp     ebp, eax
0x82DD02: mov     ebx, eax
0x82DD04: jz      short loc_82DD38
0x82DD06: test    ebp, ebp
0x82DD08: jz      short loc_82DD27
0x82DD0A: lea     edx, [ebp+4]
0x82DD0D: push    edx; lpAddend
0x82DD0E: call    dword ptr ds:0A2807Ch
0x82DD14: test    eax, eax
0x82DD16: jnz     short loc_82DD27
0x82DD18: test    ebp, ebp
0x82DD1A: jz      short loc_82DD27
0x82DD1C: mov     eax, [ebp+0]
0x82DD1F: mov     edx, [eax]
0x82DD21: push    1
0x82DD23: mov     ecx, ebp
0x82DD25: call    edx
0x82DD27: test    ebx, ebx
0x82DD29: mov     [esi+58h], ebx
0x82DD2C: jz      short loc_82DD38
0x82DD2E: add     ebx, 4
0x82DD31: push    ebx; lpAddend
0x82DD32: call    dword ptr ds:0A28078h
0x82DD38: mov     eax, ds:0B451B0h
0x82DD3D: mov     ebp, [esi+44h]
0x82DD40: cmp     ebp, eax
0x82DD42: mov     ebx, eax
0x82DD44: jz      short loc_82DD78
0x82DD46: test    ebp, ebp
0x82DD48: jz      short loc_82DD67
0x82DD4A: lea     eax, [ebp+4]
0x82DD4D: push    eax; lpAddend
0x82DD4E: call    dword ptr ds:0A2807Ch
0x82DD54: test    eax, eax
0x82DD56: jnz     short loc_82DD67
0x82DD58: test    ebp, ebp
0x82DD5A: jz      short loc_82DD67
0x82DD5C: mov     edx, [ebp+0]
0x82DD5F: mov     eax, [edx]
0x82DD61: push    1
0x82DD63: mov     ecx, ebp
0x82DD65: call    eax
0x82DD67: test    ebx, ebx
0x82DD69: mov     [esi+44h], ebx
0x82DD6C: jz      short loc_82DD78
0x82DD6E: add     ebx, 4
0x82DD71: push    ebx; lpAddend
0x82DD72: call    dword ptr ds:0A28078h
0x82DD78: cmp     dword ptr [esi+30h], 0
0x82DD7C: jnz     short loc_82DD86
0x82DD7E: call    sub_772DF0
0x82DD83: mov     [esi+30h], eax
0x82DD86: mov     ecx, [esi+30h]
0x82DD89: push    0
0x82DD8B: push    0
0x82DD8D: push    1Bh
0x82DD8F: call    sub_772CD0
0x82DD94: cmp     dword ptr [esi+30h], 0
0x82DD98: jnz     short loc_82DDA2
0x82DD9A: call    sub_772DF0
0x82DD9F: mov     [esi+30h], eax
0x82DDA2: mov     ecx, [esi+30h]
0x82DDA5: push    0
0x82DDA7: push    0
0x82DDA9: push    0Fh
0x82DDAB: call    sub_772CD0
0x82DDB0: cmp     dword ptr [esi+30h], 0
0x82DDB4: jnz     short loc_82DDBE
0x82DDB6: call    sub_772DF0
0x82DDBB: mov     [esi+30h], eax
0x82DDBE: mov     ecx, [esi+30h]
0x82DDC1: push    0
0x82DDC3: push    1
0x82DDC5: push    7
0x82DDC7: call    sub_772CD0
0x82DDCC: cmp     dword ptr [esi+30h], 0
0x82DDD0: jnz     short loc_82DDDA
0x82DDD2: call    sub_772DF0
0x82DDD7: mov     [esi+30h], eax
0x82DDDA: mov     ecx, [esi+30h]
0x82DDDD: push    0
0x82DDDF: push    4
0x82DDE1: push    17h
0x82DDE3: call    sub_772CD0
0x82DDE8: cmp     dword ptr [esi+30h], 0
0x82DDEC: jnz     short loc_82DDF6
0x82DDEE: call    sub_772DF0
0x82DDF3: mov     [esi+30h], eax
0x82DDF6: mov     ecx, [esi+30h]
0x82DDF9: push    0
0x82DDFB: push    1
0x82DDFD: push    0Eh
0x82DDFF: call    sub_772CD0
0x82DE04: cmp     dword ptr [esi+30h], 0
0x82DE08: jnz     short loc_82DE12
0x82DE0A: call    sub_772DF0
0x82DE0F: mov     [esi+30h], eax
0x82DE12: mov     ecx, [esi+30h]
0x82DE15: push    0
0x82DE17: push    0
0x82DE19: push    34h ; '4'
0x82DE1B: call    sub_772CD0
0x82DE20: or      ebx, 0FFFFFFFFh
0x82DE23: cmp     esi, ds:0B456CCh
0x82DE29: mov     dword ptr ds:0B43C48h, 21082h
0x82DE33: mov     dword ptr ds:0B442D8h, 1Ch
0x82DE3D: mov     dword ptr ds:0B44968h, 8
0x82DE47: jz      short loc_82DE67
0x82DE49: add     [esi+60h], ebx
0x82DE4C: jnz     short loc_82DE55
0x82DE4E: mov     ecx, esi
0x82DE50: call    sub_7604D0
0x82DE55: mov     esi, ds:0B456CCh
0x82DE5B: test    esi, esi
0x82DE5D: mov     [esp+2Ch+var_14], esi
0x82DE61: jz      short loc_82DE67
0x82DE63: add     dword ptr [esi+60h], 1
0x82DE67: mov     eax, [esi+18h]
0x82DE6A: cmp     eax, 7
0x82DE6D: jnb     loc_82E190
0x82DE73: lea     ecx, [esp+2Ch+var_10]
0x82DE77: push    ecx
0x82DE78: call    sub_772630
0x82DE7D: add     esp, 4
0x82DE80: mov     ebp, eax
0x82DE82: cmp     edi, [ebp+0]
0x82DE85: mov     byte ptr [esp+2Ch+var_4], 9
0x82DE8A: jz      short loc_82DEAB
0x82DE8C: test    edi, edi
0x82DE8E: jz      short loc_82DE9C
0x82DE90: add     [edi+5Ch], ebx
0x82DE93: jnz     short loc_82DE9C
0x82DE95: mov     ecx, edi
0x82DE97: call    sub_772560
0x82DE9C: mov     edi, [ebp+0]
0x82DE9F: test    edi, edi
0x82DEA1: mov     [esp+2Ch+a3], edi
0x82DEA5: jz      short loc_82DEAB
0x82DEA7: add     dword ptr [edi+5Ch], 1
0x82DEAB: mov     eax, [esp+2Ch+var_10]
0x82DEAF: test    eax, eax
0x82DEB1: mov     byte ptr [esp+2Ch+var_4], 1
0x82DEB6: jz      short loc_82DECA
0x82DEB8: add     [eax+5Ch], ebx
0x82DEBB: mov     ecx, eax
0x82DEBD: add     eax, 5Ch ; '\'
0x82DEC0: cmp     dword ptr [eax], 0
0x82DEC3: jnz     short loc_82DECA
0x82DEC5: call    sub_772560
0x82DECA: push    2
0x82DECC: push    1
0x82DECE: push    0
0x82DED0: push    edi
0x82DED1: call    sub_801110
0x82DED6: add     esp, 10h
0x82DED9: push    edi; a3
0x82DEDA: push    0; a2
0x82DEDC: mov     ecx, esi; this
0x82DEDE: call    sub_760010
0x82DEE3: lea     edx, [esp+2Ch+var_10]
0x82DEE7: push    edx
0x82DEE8: call    sub_772630
0x82DEED: add     esp, 4
0x82DEF0: mov     ebp, eax
0x82DEF2: cmp     edi, [ebp+0]
0x82DEF5: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x82DEFA: jz      short loc_82DF1B
0x82DEFC: test    edi, edi
0x82DEFE: jz      short loc_82DF0C
0x82DF00: add     [edi+5Ch], ebx
0x82DF03: jnz     short loc_82DF0C
0x82DF05: mov     ecx, edi
0x82DF07: call    sub_772560
0x82DF0C: mov     edi, [ebp+0]
0x82DF0F: test    edi, edi
0x82DF11: mov     [esp+2Ch+a3], edi
0x82DF15: jz      short loc_82DF1B
0x82DF17: add     dword ptr [edi+5Ch], 1
0x82DF1B: mov     eax, [esp+2Ch+var_10]
0x82DF1F: test    eax, eax
0x82DF21: mov     byte ptr [esp+2Ch+var_4], 1
0x82DF26: jz      short loc_82DF3A
0x82DF28: add     [eax+5Ch], ebx
0x82DF2B: mov     ecx, eax
0x82DF2D: add     eax, 5Ch ; '\'
0x82DF30: cmp     dword ptr [eax], 0
0x82DF33: jnz     short loc_82DF3A
0x82DF35: call    sub_772560
0x82DF3A: push    2
0x82DF3C: push    1
0x82DF3E: push    1
0x82DF40: push    edi
0x82DF41: call    sub_801110
0x82DF46: add     esp, 10h
0x82DF49: push    edi; a3
0x82DF4A: push    1; a2
0x82DF4C: mov     ecx, esi; this
0x82DF4E: call    sub_760010
0x82DF53: lea     eax, [esp+2Ch+var_10]
0x82DF57: push    eax
0x82DF58: call    sub_772630
0x82DF5D: add     esp, 4
0x82DF60: mov     ebp, eax
0x82DF62: cmp     edi, [ebp+0]
0x82DF65: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x82DF6A: jz      short loc_82DF8B
0x82DF6C: test    edi, edi
0x82DF6E: jz      short loc_82DF7C
0x82DF70: add     [edi+5Ch], ebx
0x82DF73: jnz     short loc_82DF7C
0x82DF75: mov     ecx, edi
0x82DF77: call    sub_772560
0x82DF7C: mov     edi, [ebp+0]
0x82DF7F: test    edi, edi
0x82DF81: mov     [esp+2Ch+a3], edi
0x82DF85: jz      short loc_82DF8B
0x82DF87: add     dword ptr [edi+5Ch], 1
0x82DF8B: mov     eax, [esp+2Ch+var_10]
0x82DF8F: test    eax, eax
0x82DF91: mov     byte ptr [esp+2Ch+var_4], 1
0x82DF96: jz      short loc_82DFAA
0x82DF98: add     [eax+5Ch], ebx
0x82DF9B: mov     ecx, eax
0x82DF9D: add     eax, 5Ch ; '\'
0x82DFA0: cmp     dword ptr [eax], 0
0x82DFA3: jnz     short loc_82DFAA
0x82DFA5: call    sub_772560
0x82DFAA: push    2
0x82DFAC: push    1
0x82DFAE: push    2
0x82DFB0: push    edi
0x82DFB1: call    sub_801110
0x82DFB6: add     esp, 10h
0x82DFB9: push    edi; a3
0x82DFBA: push    2; a2
0x82DFBC: mov     ecx, esi; this
0x82DFBE: call    sub_760010
0x82DFC3: lea     ecx, [esp+2Ch+var_10]
0x82DFC7: push    ecx
0x82DFC8: call    sub_772630
0x82DFCD: add     esp, 4
0x82DFD0: mov     ebp, eax
0x82DFD2: cmp     edi, [ebp+0]
0x82DFD5: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x82DFDA: jz      short loc_82DFFB
0x82DFDC: test    edi, edi
0x82DFDE: jz      short loc_82DFEC
0x82DFE0: add     [edi+5Ch], ebx
0x82DFE3: jnz     short loc_82DFEC
0x82DFE5: mov     ecx, edi
0x82DFE7: call    sub_772560
0x82DFEC: mov     edi, [ebp+0]
0x82DFEF: test    edi, edi
0x82DFF1: mov     [esp+2Ch+a3], edi
0x82DFF5: jz      short loc_82DFFB
0x82DFF7: add     dword ptr [edi+5Ch], 1
0x82DFFB: mov     eax, [esp+2Ch+var_10]
0x82DFFF: test    eax, eax
0x82E001: mov     byte ptr [esp+2Ch+var_4], 1
0x82E006: jz      short loc_82E01A
0x82E008: add     [eax+5Ch], ebx
0x82E00B: mov     ecx, eax
0x82E00D: add     eax, 5Ch ; '\'
0x82E010: cmp     dword ptr [eax], 0
0x82E013: jnz     short loc_82E01A
0x82E015: call    sub_772560
0x82E01A: push    2
0x82E01C: push    1
0x82E01E: push    3
0x82E020: push    edi
0x82E021: call    sub_801110
0x82E026: add     esp, 10h
0x82E029: push    edi; a3
0x82E02A: push    3; a2
0x82E02C: mov     ecx, esi; this
0x82E02E: call    sub_760010
0x82E033: lea     edx, [esp+2Ch+var_10]
0x82E037: push    edx
0x82E038: call    sub_772630
0x82E03D: add     esp, 4
0x82E040: mov     ebp, eax
0x82E042: cmp     edi, [ebp+0]
0x82E045: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x82E04A: jz      short loc_82E06B
0x82E04C: test    edi, edi
0x82E04E: jz      short loc_82E05C
0x82E050: add     [edi+5Ch], ebx
0x82E053: jnz     short loc_82E05C
0x82E055: mov     ecx, edi
0x82E057: call    sub_772560
0x82E05C: mov     edi, [ebp+0]
0x82E05F: test    edi, edi
0x82E061: mov     [esp+2Ch+a3], edi
0x82E065: jz      short loc_82E06B
0x82E067: add     dword ptr [edi+5Ch], 1
0x82E06B: mov     eax, [esp+2Ch+var_10]
0x82E06F: test    eax, eax
0x82E071: mov     byte ptr [esp+2Ch+var_4], 1
0x82E076: jz      short loc_82E08A
0x82E078: add     [eax+5Ch], ebx
0x82E07B: mov     ecx, eax
0x82E07D: add     eax, 5Ch ; '\'
0x82E080: cmp     dword ptr [eax], 0
0x82E083: jnz     short loc_82E08A
0x82E085: call    sub_772560
0x82E08A: push    0
0x82E08C: push    3
0x82E08E: push    4
0x82E090: push    edi
0x82E091: call    sub_801110
0x82E096: mov     eax, ds:0B43110h
0x82E09B: add     esp, 10h
0x82E09E: push    eax; a2
0x82E09F: mov     ecx, edi; this
0x82E0A1: call    sub_76C910
0x82E0A6: push    edi; a3
0x82E0A7: push    4; a2
0x82E0A9: mov     ecx, esi; this
0x82E0AB: call    sub_760010
0x82E0B0: lea     ecx, [esp+2Ch+var_10]
0x82E0B4: push    ecx
0x82E0B5: call    sub_772630
0x82E0BA: add     esp, 4
0x82E0BD: mov     ebp, eax
0x82E0BF: cmp     edi, [ebp+0]
0x82E0C2: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x82E0C7: jz      short loc_82E0E8
0x82E0C9: test    edi, edi
0x82E0CB: jz      short loc_82E0D9
0x82E0CD: add     [edi+5Ch], ebx
0x82E0D0: jnz     short loc_82E0D9
0x82E0D2: mov     ecx, edi
0x82E0D4: call    sub_772560
0x82E0D9: mov     edi, [ebp+0]
0x82E0DC: test    edi, edi
0x82E0DE: mov     [esp+2Ch+a3], edi
0x82E0E2: jz      short loc_82E0E8
0x82E0E4: add     dword ptr [edi+5Ch], 1
0x82E0E8: mov     eax, [esp+2Ch+var_10]
0x82E0EC: test    eax, eax
0x82E0EE: mov     byte ptr [esp+2Ch+var_4], 1
0x82E0F3: jz      short loc_82E107
0x82E0F5: add     [eax+5Ch], ebx
0x82E0F8: mov     ecx, eax
0x82E0FA: add     eax, 5Ch ; '\'
0x82E0FD: cmp     dword ptr [eax], 0
0x82E100: jnz     short loc_82E107
0x82E102: call    sub_772560
0x82E107: push    2
0x82E109: push    1
0x82E10B: push    5
0x82E10D: push    edi
0x82E10E: call    sub_801110
0x82E113: add     esp, 10h
0x82E116: push    edi; a3
0x82E117: push    5; a2
0x82E119: mov     ecx, esi; this
0x82E11B: call    sub_760010
0x82E120: lea     edx, [esp+2Ch+var_10]
0x82E124: push    edx
0x82E125: call    sub_772630
0x82E12A: add     esp, 4
0x82E12D: mov     ebp, eax
0x82E12F: cmp     edi, [ebp+0]
0x82E132: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x82E137: jz      short loc_82E158
0x82E139: test    edi, edi
0x82E13B: jz      short loc_82E149
0x82E13D: add     [edi+5Ch], ebx
0x82E140: jnz     short loc_82E149
0x82E142: mov     ecx, edi
0x82E144: call    sub_772560
0x82E149: mov     edi, [ebp+0]
0x82E14C: test    edi, edi
0x82E14E: mov     [esp+2Ch+a3], edi
0x82E152: jz      short loc_82E158
0x82E154: add     dword ptr [edi+5Ch], 1
0x82E158: mov     eax, [esp+2Ch+var_10]
0x82E15C: test    eax, eax
0x82E15E: mov     byte ptr [esp+2Ch+var_4], 1
0x82E163: jz      short loc_82E177
0x82E165: add     [eax+5Ch], ebx
0x82E168: mov     ecx, eax
0x82E16A: add     eax, 5Ch ; '\'
0x82E16D: cmp     dword ptr [eax], 0
0x82E170: jnz     short loc_82E177
0x82E172: call    sub_772560
0x82E177: push    0
0x82E179: push    3
0x82E17B: push    6
0x82E17D: push    edi
0x82E17E: call    sub_801110
0x82E183: add     esp, 10h
0x82E186: push    edi; a3
0x82E187: push    6; a2
0x82E189: mov     ecx, esi; this
0x82E18B: call    sub_760010
0x82E190: mov     eax, ds:0B453B0h
0x82E195: mov     ebp, [esi+58h]
0x82E198: cmp     ebp, eax
0x82E19A: mov     ebx, eax
0x82E19C: jz      short loc_82E1D0
0x82E19E: test    ebp, ebp
0x82E1A0: jz      short loc_82E1BF
0x82E1A2: lea     eax, [ebp+4]
0x82E1A5: push    eax; lpAddend
0x82E1A6: call    dword ptr ds:0A2807Ch
0x82E1AC: test    eax, eax
0x82E1AE: jnz     short loc_82E1BF
0x82E1B0: test    ebp, ebp
0x82E1B2: jz      short loc_82E1BF
0x82E1B4: mov     edx, [ebp+0]
0x82E1B7: mov     eax, [edx]
0x82E1B9: push    1
0x82E1BB: mov     ecx, ebp
0x82E1BD: call    eax
0x82E1BF: test    ebx, ebx
0x82E1C1: mov     [esi+58h], ebx
0x82E1C4: jz      short loc_82E1D0
0x82E1C6: add     ebx, 4
0x82E1C9: push    ebx; lpAddend
0x82E1CA: call    dword ptr ds:0A28078h
0x82E1D0: mov     eax, ds:0B451B4h
0x82E1D5: mov     ebp, [esi+44h]
0x82E1D8: cmp     ebp, eax
0x82E1DA: mov     ebx, eax
0x82E1DC: jz      short loc_82E210
0x82E1DE: test    ebp, ebp
0x82E1E0: jz      short loc_82E1FF
0x82E1E2: lea     ecx, [ebp+4]
0x82E1E5: push    ecx; lpAddend
0x82E1E6: call    dword ptr ds:0A2807Ch
0x82E1EC: test    eax, eax
0x82E1EE: jnz     short loc_82E1FF
0x82E1F0: test    ebp, ebp
0x82E1F2: jz      short loc_82E1FF
0x82E1F4: mov     edx, [ebp+0]
0x82E1F7: mov     eax, [edx]
0x82E1F9: push    1
0x82E1FB: mov     ecx, ebp
0x82E1FD: call    eax
0x82E1FF: test    ebx, ebx
0x82E201: mov     [esi+44h], ebx
0x82E204: jz      short loc_82E210
0x82E206: add     ebx, 4
0x82E209: push    ebx; lpAddend
0x82E20A: call    dword ptr ds:0A28078h
0x82E210: cmp     dword ptr [esi+30h], 0
0x82E214: jnz     short loc_82E21E
0x82E216: call    sub_772DF0
0x82E21B: mov     [esi+30h], eax
0x82E21E: mov     ecx, [esi+30h]
0x82E221: push    0
0x82E223: push    0
0x82E225: push    1Bh
0x82E227: call    sub_772CD0
0x82E22C: cmp     dword ptr [esi+30h], 0
0x82E230: jnz     short loc_82E23A
0x82E232: call    sub_772DF0
0x82E237: mov     [esi+30h], eax
0x82E23A: mov     ecx, [esi+30h]
0x82E23D: push    0
0x82E23F: push    0
0x82E241: push    0Fh
0x82E243: call    sub_772CD0
0x82E248: cmp     dword ptr [esi+30h], 0
0x82E24C: jnz     short loc_82E256
0x82E24E: call    sub_772DF0
0x82E253: mov     [esi+30h], eax
0x82E256: mov     ecx, [esi+30h]
0x82E259: push    0
0x82E25B: push    1
0x82E25D: push    7
0x82E25F: call    sub_772CD0
0x82E264: cmp     dword ptr [esi+30h], 0
0x82E268: jnz     short loc_82E272
0x82E26A: call    sub_772DF0
0x82E26F: mov     [esi+30h], eax
0x82E272: mov     ecx, [esi+30h]
0x82E275: push    0
0x82E277: push    4
0x82E279: push    17h
0x82E27B: call    sub_772CD0
0x82E280: cmp     dword ptr [esi+30h], 0
0x82E284: jnz     short loc_82E28E
0x82E286: call    sub_772DF0
0x82E28B: mov     [esi+30h], eax
0x82E28E: mov     ecx, [esi+30h]
0x82E291: push    0
0x82E293: push    1
0x82E295: push    0Eh
0x82E297: call    sub_772CD0
0x82E29C: cmp     dword ptr [esi+30h], 0
0x82E2A0: jnz     short loc_82E2AA
0x82E2A2: call    sub_772DF0
0x82E2A7: mov     [esi+30h], eax
0x82E2AA: mov     ecx, [esi+30h]
0x82E2AD: push    0
0x82E2AF: push    0
0x82E2B1: push    34h ; '4'
0x82E2B3: call    sub_772CD0
0x82E2B8: or      ebx, 0FFFFFFFFh
0x82E2BB: cmp     esi, ds:0B456DCh
0x82E2C1: mov     dword ptr ds:0B43C4Ch, 21082h
0x82E2CB: mov     dword ptr ds:0B442DCh, 9Ch ; 'œ'
0x82E2D5: mov     dword ptr ds:0B4496Ch, 0Ch
0x82E2DF: jz      short loc_82E2FF
0x82E2E1: add     [esi+60h], ebx
0x82E2E4: jnz     short loc_82E2ED
0x82E2E6: mov     ecx, esi
0x82E2E8: call    sub_7604D0
0x82E2ED: mov     esi, ds:0B456DCh
0x82E2F3: test    esi, esi
0x82E2F5: mov     [esp+2Ch+var_14], esi
0x82E2F9: jz      short loc_82E2FF
0x82E2FB: add     dword ptr [esi+60h], 1
0x82E2FF: cmp     dword ptr [esi+18h], 7
0x82E303: jnb     loc_82E626
0x82E309: lea     ecx, [esp+2Ch+var_10]
0x82E30D: push    ecx
0x82E30E: call    sub_772630
0x82E313: add     esp, 4
0x82E316: mov     ebp, eax
0x82E318: cmp     edi, [ebp+0]
0x82E31B: mov     byte ptr [esp+2Ch+var_4], 10h
0x82E320: jz      short loc_82E341
0x82E322: test    edi, edi
0x82E324: jz      short loc_82E332
0x82E326: add     [edi+5Ch], ebx
0x82E329: jnz     short loc_82E332
0x82E32B: mov     ecx, edi
0x82E32D: call    sub_772560
0x82E332: mov     edi, [ebp+0]
0x82E335: test    edi, edi
0x82E337: mov     [esp+2Ch+a3], edi
0x82E33B: jz      short loc_82E341
0x82E33D: add     dword ptr [edi+5Ch], 1
0x82E341: mov     eax, [esp+2Ch+var_10]
0x82E345: test    eax, eax
0x82E347: mov     byte ptr [esp+2Ch+var_4], 1
0x82E34C: jz      short loc_82E360
0x82E34E: add     [eax+5Ch], ebx
0x82E351: mov     ecx, eax
0x82E353: add     eax, 5Ch ; '\'
0x82E356: cmp     dword ptr [eax], 0
0x82E359: jnz     short loc_82E360
0x82E35B: call    sub_772560
0x82E360: push    2
0x82E362: push    1
0x82E364: push    0
0x82E366: push    edi
0x82E367: call    sub_801110
0x82E36C: add     esp, 10h
0x82E36F: push    edi; a3
0x82E370: push    0; a2
0x82E372: mov     ecx, esi; this
0x82E374: call    sub_760010
0x82E379: lea     edx, [esp+2Ch+var_10]
0x82E37D: push    edx
0x82E37E: call    sub_772630
0x82E383: add     esp, 4
0x82E386: mov     ebp, eax
0x82E388: cmp     edi, [ebp+0]
0x82E38B: mov     byte ptr [esp+2Ch+var_4], 11h
0x82E390: jz      short loc_82E3B1
0x82E392: test    edi, edi
0x82E394: jz      short loc_82E3A2
0x82E396: add     [edi+5Ch], ebx
0x82E399: jnz     short loc_82E3A2
0x82E39B: mov     ecx, edi
0x82E39D: call    sub_772560
0x82E3A2: mov     edi, [ebp+0]
0x82E3A5: test    edi, edi
0x82E3A7: mov     [esp+2Ch+a3], edi
0x82E3AB: jz      short loc_82E3B1
0x82E3AD: add     dword ptr [edi+5Ch], 1
0x82E3B1: mov     eax, [esp+2Ch+var_10]
0x82E3B5: test    eax, eax
0x82E3B7: mov     byte ptr [esp+2Ch+var_4], 1
0x82E3BC: jz      short loc_82E3D0
0x82E3BE: add     [eax+5Ch], ebx
0x82E3C1: mov     ecx, eax
0x82E3C3: add     eax, 5Ch ; '\'
0x82E3C6: cmp     dword ptr [eax], 0
0x82E3C9: jnz     short loc_82E3D0
0x82E3CB: call    sub_772560
0x82E3D0: push    2
0x82E3D2: push    1
0x82E3D4: push    1
0x82E3D6: push    edi
0x82E3D7: call    sub_801110
0x82E3DC: add     esp, 10h
0x82E3DF: push    edi; a3
0x82E3E0: push    1; a2
0x82E3E2: mov     ecx, esi; this
0x82E3E4: call    sub_760010
0x82E3E9: lea     eax, [esp+2Ch+var_10]
0x82E3ED: push    eax
0x82E3EE: call    sub_772630
0x82E3F3: add     esp, 4
0x82E3F6: mov     ebp, eax
0x82E3F8: cmp     edi, [ebp+0]
0x82E3FB: mov     byte ptr [esp+2Ch+var_4], 12h
0x82E400: jz      short loc_82E421
0x82E402: test    edi, edi
0x82E404: jz      short loc_82E412
0x82E406: add     [edi+5Ch], ebx
0x82E409: jnz     short loc_82E412
0x82E40B: mov     ecx, edi
0x82E40D: call    sub_772560
0x82E412: mov     edi, [ebp+0]
0x82E415: test    edi, edi
0x82E417: mov     [esp+2Ch+a3], edi
0x82E41B: jz      short loc_82E421
0x82E41D: add     dword ptr [edi+5Ch], 1
0x82E421: mov     eax, [esp+2Ch+var_10]
0x82E425: test    eax, eax
0x82E427: mov     byte ptr [esp+2Ch+var_4], 1
0x82E42C: jz      short loc_82E440
0x82E42E: add     [eax+5Ch], ebx
0x82E431: mov     ecx, eax
0x82E433: add     eax, 5Ch ; '\'
0x82E436: cmp     dword ptr [eax], 0
0x82E439: jnz     short loc_82E440
0x82E43B: call    sub_772560
0x82E440: push    2
0x82E442: push    1
0x82E444: push    2
0x82E446: push    edi
0x82E447: call    sub_801110
0x82E44C: add     esp, 10h
0x82E44F: push    edi; a3
0x82E450: push    2; a2
0x82E452: mov     ecx, esi; this
0x82E454: call    sub_760010
0x82E459: lea     ecx, [esp+2Ch+var_10]
0x82E45D: push    ecx
0x82E45E: call    sub_772630
0x82E463: add     esp, 4
0x82E466: mov     ebp, eax
0x82E468: cmp     edi, [ebp+0]
0x82E46B: mov     byte ptr [esp+2Ch+var_4], 13h
0x82E470: jz      short loc_82E491
0x82E472: test    edi, edi
0x82E474: jz      short loc_82E482
0x82E476: add     [edi+5Ch], ebx
0x82E479: jnz     short loc_82E482
0x82E47B: mov     ecx, edi
0x82E47D: call    sub_772560
0x82E482: mov     edi, [ebp+0]
0x82E485: test    edi, edi
0x82E487: mov     [esp+2Ch+a3], edi
0x82E48B: jz      short loc_82E491
0x82E48D: add     dword ptr [edi+5Ch], 1
0x82E491: mov     eax, [esp+2Ch+var_10]
0x82E495: test    eax, eax
0x82E497: mov     byte ptr [esp+2Ch+var_4], 1
0x82E49C: jz      short loc_82E4B0
0x82E49E: add     [eax+5Ch], ebx
0x82E4A1: mov     ecx, eax
0x82E4A3: add     eax, 5Ch ; '\'
0x82E4A6: cmp     dword ptr [eax], 0
0x82E4A9: jnz     short loc_82E4B0
0x82E4AB: call    sub_772560
0x82E4B0: push    2
0x82E4B2: push    1
0x82E4B4: push    3
0x82E4B6: push    edi
0x82E4B7: call    sub_801110
0x82E4BC: add     esp, 10h
0x82E4BF: push    edi; a3
0x82E4C0: push    3; a2
0x82E4C2: mov     ecx, esi; this
0x82E4C4: call    sub_760010
0x82E4C9: lea     edx, [esp+2Ch+var_10]
0x82E4CD: push    edx
0x82E4CE: call    sub_772630
0x82E4D3: add     esp, 4
0x82E4D6: mov     ebp, eax
0x82E4D8: cmp     edi, [ebp+0]
0x82E4DB: mov     byte ptr [esp+2Ch+var_4], 14h
0x82E4E0: jz      short loc_82E501
0x82E4E2: test    edi, edi
0x82E4E4: jz      short loc_82E4F2
0x82E4E6: add     [edi+5Ch], ebx
0x82E4E9: jnz     short loc_82E4F2
0x82E4EB: mov     ecx, edi
0x82E4ED: call    sub_772560
0x82E4F2: mov     edi, [ebp+0]
0x82E4F5: test    edi, edi
0x82E4F7: mov     [esp+2Ch+a3], edi
0x82E4FB: jz      short loc_82E501
0x82E4FD: add     dword ptr [edi+5Ch], 1
0x82E501: mov     eax, [esp+2Ch+var_10]
0x82E505: test    eax, eax
0x82E507: mov     byte ptr [esp+2Ch+var_4], 1
0x82E50C: jz      short loc_82E520
0x82E50E: add     [eax+5Ch], ebx
0x82E511: mov     ecx, eax
0x82E513: add     eax, 5Ch ; '\'
0x82E516: cmp     dword ptr [eax], 0
0x82E519: jnz     short loc_82E520
0x82E51B: call    sub_772560
0x82E520: push    0
0x82E522: push    3
0x82E524: push    4
0x82E526: push    edi
0x82E527: call    sub_801110
0x82E52C: mov     eax, ds:0B43110h
0x82E531: add     esp, 10h
0x82E534: push    eax; a2
0x82E535: mov     ecx, edi; this
0x82E537: call    sub_76C910
0x82E53C: push    edi; a3
0x82E53D: push    4; a2
0x82E53F: mov     ecx, esi; this
0x82E541: call    sub_760010
0x82E546: lea     ecx, [esp+2Ch+var_10]
0x82E54A: push    ecx
0x82E54B: call    sub_772630
0x82E550: add     esp, 4
0x82E553: mov     ebp, eax
0x82E555: cmp     edi, [ebp+0]
0x82E558: mov     byte ptr [esp+2Ch+var_4], 15h
0x82E55D: jz      short loc_82E57E
0x82E55F: test    edi, edi
0x82E561: jz      short loc_82E56F
0x82E563: add     [edi+5Ch], ebx
0x82E566: jnz     short loc_82E56F
0x82E568: mov     ecx, edi
0x82E56A: call    sub_772560
0x82E56F: mov     edi, [ebp+0]
0x82E572: test    edi, edi
0x82E574: mov     [esp+2Ch+a3], edi
0x82E578: jz      short loc_82E57E
0x82E57A: add     dword ptr [edi+5Ch], 1
0x82E57E: mov     eax, [esp+2Ch+var_10]
0x82E582: test    eax, eax
0x82E584: mov     byte ptr [esp+2Ch+var_4], 1
0x82E589: jz      short loc_82E59D
0x82E58B: add     [eax+5Ch], ebx
0x82E58E: mov     ecx, eax
0x82E590: add     eax, 5Ch ; '\'
0x82E593: cmp     dword ptr [eax], 0
0x82E596: jnz     short loc_82E59D
0x82E598: call    sub_772560
0x82E59D: push    2
0x82E59F: push    1
0x82E5A1: push    5
0x82E5A3: push    edi
0x82E5A4: call    sub_801110
0x82E5A9: add     esp, 10h
0x82E5AC: push    edi; a3
0x82E5AD: push    5; a2
0x82E5AF: mov     ecx, esi; this
0x82E5B1: call    sub_760010
0x82E5B6: lea     edx, [esp+2Ch+var_10]
0x82E5BA: push    edx
0x82E5BB: call    sub_772630
0x82E5C0: add     esp, 4
0x82E5C3: mov     ebp, eax
0x82E5C5: cmp     edi, [ebp+0]
0x82E5C8: mov     byte ptr [esp+2Ch+var_4], 16h
0x82E5CD: jz      short loc_82E5EE
0x82E5CF: test    edi, edi
0x82E5D1: jz      short loc_82E5DF
0x82E5D3: add     [edi+5Ch], ebx
0x82E5D6: jnz     short loc_82E5DF
0x82E5D8: mov     ecx, edi
0x82E5DA: call    sub_772560
0x82E5DF: mov     edi, [ebp+0]
0x82E5E2: test    edi, edi
0x82E5E4: mov     [esp+2Ch+a3], edi
0x82E5E8: jz      short loc_82E5EE
0x82E5EA: add     dword ptr [edi+5Ch], 1
0x82E5EE: mov     eax, [esp+2Ch+var_10]
0x82E5F2: test    eax, eax
0x82E5F4: mov     byte ptr [esp+2Ch+var_4], 1
0x82E5F9: jz      short loc_82E60D
0x82E5FB: add     [eax+5Ch], ebx
0x82E5FE: mov     ecx, eax
0x82E600: add     eax, 5Ch ; '\'
0x82E603: cmp     dword ptr [eax], 0
0x82E606: jnz     short loc_82E60D
0x82E608: call    sub_772560
0x82E60D: push    0
0x82E60F: push    3
0x82E611: push    6
0x82E613: push    edi
0x82E614: call    sub_801110
0x82E619: add     esp, 10h
0x82E61C: push    edi; a3
0x82E61D: push    6; a2
0x82E61F: mov     ecx, esi; this
0x82E621: call    sub_760010
0x82E626: mov     eax, ds:0B453B4h
0x82E62B: mov     ebp, [esi+58h]
0x82E62E: cmp     ebp, eax
0x82E630: mov     ebx, eax
0x82E632: jz      short loc_82E666
0x82E634: test    ebp, ebp
0x82E636: jz      short loc_82E655
0x82E638: lea     eax, [ebp+4]
0x82E63B: push    eax; lpAddend
0x82E63C: call    dword ptr ds:0A2807Ch
0x82E642: test    eax, eax
0x82E644: jnz     short loc_82E655
0x82E646: test    ebp, ebp
0x82E648: jz      short loc_82E655
0x82E64A: mov     edx, [ebp+0]
0x82E64D: mov     eax, [edx]
0x82E64F: push    1
0x82E651: mov     ecx, ebp
0x82E653: call    eax
0x82E655: test    ebx, ebx
0x82E657: mov     [esi+58h], ebx
0x82E65A: jz      short loc_82E666
0x82E65C: add     ebx, 4
0x82E65F: push    ebx; lpAddend
0x82E660: call    dword ptr ds:0A28078h
0x82E666: mov     eax, ds:0B451B0h
0x82E66B: mov     ebp, [esi+44h]
0x82E66E: cmp     ebp, eax
0x82E670: mov     ebx, eax
0x82E672: jz      short loc_82E6A6
0x82E674: test    ebp, ebp
0x82E676: jz      short loc_82E695
0x82E678: lea     ecx, [ebp+4]
0x82E67B: push    ecx; lpAddend
0x82E67C: call    dword ptr ds:0A2807Ch
0x82E682: test    eax, eax
0x82E684: jnz     short loc_82E695
0x82E686: test    ebp, ebp
0x82E688: jz      short loc_82E695
0x82E68A: mov     edx, [ebp+0]
0x82E68D: mov     eax, [edx]
0x82E68F: push    1
0x82E691: mov     ecx, ebp
0x82E693: call    eax
0x82E695: test    ebx, ebx
0x82E697: mov     [esi+44h], ebx
0x82E69A: jz      short loc_82E6A6
0x82E69C: add     ebx, 4
0x82E69F: push    ebx; lpAddend
0x82E6A0: call    dword ptr ds:0A28078h
0x82E6A6: cmp     dword ptr [esi+30h], 0
0x82E6AA: jnz     short loc_82E6B4
0x82E6AC: call    sub_772DF0
0x82E6B1: mov     [esi+30h], eax
0x82E6B4: mov     ecx, [esi+30h]
0x82E6B7: push    0
0x82E6B9: push    0
0x82E6BB: push    1Bh
0x82E6BD: call    sub_772CD0
0x82E6C2: cmp     dword ptr [esi+30h], 0
0x82E6C6: jnz     short loc_82E6D0
0x82E6C8: call    sub_772DF0
0x82E6CD: mov     [esi+30h], eax
0x82E6D0: mov     ecx, [esi+30h]
0x82E6D3: push    0
0x82E6D5: push    0
0x82E6D7: push    0Fh
0x82E6D9: call    sub_772CD0
0x82E6DE: cmp     dword ptr [esi+30h], 0
0x82E6E2: jnz     short loc_82E6EC
0x82E6E4: call    sub_772DF0
0x82E6E9: mov     [esi+30h], eax
0x82E6EC: mov     ecx, [esi+30h]
0x82E6EF: push    0
0x82E6F1: push    1
0x82E6F3: push    7
0x82E6F5: call    sub_772CD0
0x82E6FA: cmp     dword ptr [esi+30h], 0
0x82E6FE: jnz     short loc_82E708
0x82E700: call    sub_772DF0
0x82E705: mov     [esi+30h], eax
0x82E708: mov     ecx, [esi+30h]
0x82E70B: push    0
0x82E70D: push    4
0x82E70F: push    17h
0x82E711: call    sub_772CD0
0x82E716: cmp     dword ptr [esi+30h], 0
0x82E71A: jnz     short loc_82E724
0x82E71C: call    sub_772DF0
0x82E721: mov     [esi+30h], eax
0x82E724: mov     ecx, [esi+30h]
0x82E727: push    0
0x82E729: push    1
0x82E72B: push    0Eh
0x82E72D: call    sub_772CD0
0x82E732: cmp     dword ptr [esi+30h], 0
0x82E736: jnz     short loc_82E740
0x82E738: call    sub_772DF0
0x82E73D: mov     [esi+30h], eax
0x82E740: mov     ecx, [esi+30h]
0x82E743: push    0
0x82E745: push    0
0x82E747: push    34h ; '4'
0x82E749: call    sub_772CD0
0x82E74E: or      ebx, 0FFFFFFFFh
0x82E751: cmp     esi, ds:0B456E4h
0x82E757: mov     dword ptr ds:0B43C5Ch, 61088h
0x82E761: mov     dword ptr ds:0B442ECh, 1Ch
0x82E76B: mov     dword ptr ds:0B4497Ch, 8
0x82E775: jz      short loc_82E795
0x82E777: add     [esi+60h], ebx
0x82E77A: jnz     short loc_82E783
0x82E77C: mov     ecx, esi
0x82E77E: call    sub_7604D0
0x82E783: mov     esi, ds:0B456E4h
0x82E789: test    esi, esi
0x82E78B: mov     [esp+2Ch+var_14], esi
0x82E78F: jz      short loc_82E795
0x82E791: add     dword ptr [esi+60h], 1
0x82E795: cmp     dword ptr [esi+18h], 7
0x82E799: jnb     loc_82EABC
0x82E79F: lea     ecx, [esp+2Ch+var_10]
0x82E7A3: push    ecx
0x82E7A4: call    sub_772630
0x82E7A9: add     esp, 4
0x82E7AC: mov     ebp, eax
0x82E7AE: cmp     edi, [ebp+0]
0x82E7B1: mov     byte ptr [esp+2Ch+var_4], 17h
0x82E7B6: jz      short loc_82E7D7
0x82E7B8: test    edi, edi
0x82E7BA: jz      short loc_82E7C8
0x82E7BC: add     [edi+5Ch], ebx
0x82E7BF: jnz     short loc_82E7C8
0x82E7C1: mov     ecx, edi
0x82E7C3: call    sub_772560
0x82E7C8: mov     edi, [ebp+0]
0x82E7CB: test    edi, edi
0x82E7CD: mov     [esp+2Ch+a3], edi
0x82E7D1: jz      short loc_82E7D7
0x82E7D3: add     dword ptr [edi+5Ch], 1
0x82E7D7: mov     eax, [esp+2Ch+var_10]
0x82E7DB: test    eax, eax
0x82E7DD: mov     byte ptr [esp+2Ch+var_4], 1
0x82E7E2: jz      short loc_82E7F6
0x82E7E4: add     [eax+5Ch], ebx
0x82E7E7: mov     ecx, eax
0x82E7E9: add     eax, 5Ch ; '\'
0x82E7EC: cmp     dword ptr [eax], 0
0x82E7EF: jnz     short loc_82E7F6
0x82E7F1: call    sub_772560
0x82E7F6: push    2
0x82E7F8: push    1
0x82E7FA: push    0
0x82E7FC: push    edi
0x82E7FD: call    sub_801110
0x82E802: add     esp, 10h
0x82E805: push    edi; a3
0x82E806: push    0; a2
0x82E808: mov     ecx, esi; this
0x82E80A: call    sub_760010
0x82E80F: lea     edx, [esp+2Ch+var_10]
0x82E813: push    edx
0x82E814: call    sub_772630
0x82E819: add     esp, 4
0x82E81C: mov     ebp, eax
0x82E81E: cmp     edi, [ebp+0]
0x82E821: mov     byte ptr [esp+2Ch+var_4], 18h
0x82E826: jz      short loc_82E847
0x82E828: test    edi, edi
0x82E82A: jz      short loc_82E838
0x82E82C: add     [edi+5Ch], ebx
0x82E82F: jnz     short loc_82E838
0x82E831: mov     ecx, edi
0x82E833: call    sub_772560
0x82E838: mov     edi, [ebp+0]
0x82E83B: test    edi, edi
0x82E83D: mov     [esp+2Ch+a3], edi
0x82E841: jz      short loc_82E847
0x82E843: add     dword ptr [edi+5Ch], 1
0x82E847: mov     eax, [esp+2Ch+var_10]
0x82E84B: test    eax, eax
0x82E84D: mov     byte ptr [esp+2Ch+var_4], 1
0x82E852: jz      short loc_82E866
0x82E854: add     [eax+5Ch], ebx
0x82E857: mov     ecx, eax
0x82E859: add     eax, 5Ch ; '\'
0x82E85C: cmp     dword ptr [eax], 0
0x82E85F: jnz     short loc_82E866
0x82E861: call    sub_772560
0x82E866: push    2
0x82E868: push    1
0x82E86A: push    1
0x82E86C: push    edi
0x82E86D: call    sub_801110
0x82E872: add     esp, 10h
0x82E875: push    edi; a3
0x82E876: push    1; a2
0x82E878: mov     ecx, esi; this
0x82E87A: call    sub_760010
0x82E87F: lea     eax, [esp+2Ch+var_10]
0x82E883: push    eax
0x82E884: call    sub_772630
0x82E889: add     esp, 4
0x82E88C: mov     ebp, eax
0x82E88E: cmp     edi, [ebp+0]
0x82E891: mov     byte ptr [esp+2Ch+var_4], 19h
0x82E896: jz      short loc_82E8B7
0x82E898: test    edi, edi
0x82E89A: jz      short loc_82E8A8
0x82E89C: add     [edi+5Ch], ebx
0x82E89F: jnz     short loc_82E8A8
0x82E8A1: mov     ecx, edi
0x82E8A3: call    sub_772560
0x82E8A8: mov     edi, [ebp+0]
0x82E8AB: test    edi, edi
0x82E8AD: mov     [esp+2Ch+a3], edi
0x82E8B1: jz      short loc_82E8B7
0x82E8B3: add     dword ptr [edi+5Ch], 1
0x82E8B7: mov     eax, [esp+2Ch+var_10]
0x82E8BB: test    eax, eax
0x82E8BD: mov     byte ptr [esp+2Ch+var_4], 1
0x82E8C2: jz      short loc_82E8D6
0x82E8C4: add     [eax+5Ch], ebx
0x82E8C7: mov     ecx, eax
0x82E8C9: add     eax, 5Ch ; '\'
0x82E8CC: cmp     dword ptr [eax], 0
0x82E8CF: jnz     short loc_82E8D6
0x82E8D1: call    sub_772560
0x82E8D6: push    2
0x82E8D8: push    1
0x82E8DA: push    2
0x82E8DC: push    edi
0x82E8DD: call    sub_801110
0x82E8E2: add     esp, 10h
0x82E8E5: push    edi; a3
0x82E8E6: push    2; a2
0x82E8E8: mov     ecx, esi; this
0x82E8EA: call    sub_760010
0x82E8EF: lea     ecx, [esp+2Ch+var_10]
0x82E8F3: push    ecx
0x82E8F4: call    sub_772630
0x82E8F9: add     esp, 4
0x82E8FC: mov     ebp, eax
0x82E8FE: cmp     edi, [ebp+0]
0x82E901: mov     byte ptr [esp+2Ch+var_4], 1Ah
0x82E906: jz      short loc_82E927
0x82E908: test    edi, edi
0x82E90A: jz      short loc_82E918
0x82E90C: add     [edi+5Ch], ebx
0x82E90F: jnz     short loc_82E918
0x82E911: mov     ecx, edi
0x82E913: call    sub_772560
0x82E918: mov     edi, [ebp+0]
0x82E91B: test    edi, edi
0x82E91D: mov     [esp+2Ch+a3], edi
0x82E921: jz      short loc_82E927
0x82E923: add     dword ptr [edi+5Ch], 1
0x82E927: mov     eax, [esp+2Ch+var_10]
0x82E92B: test    eax, eax
0x82E92D: mov     byte ptr [esp+2Ch+var_4], 1
0x82E932: jz      short loc_82E946
0x82E934: add     [eax+5Ch], ebx
0x82E937: mov     ecx, eax
0x82E939: add     eax, 5Ch ; '\'
0x82E93C: cmp     dword ptr [eax], 0
0x82E93F: jnz     short loc_82E946
0x82E941: call    sub_772560
0x82E946: push    2
0x82E948: push    1
0x82E94A: push    3
0x82E94C: push    edi
0x82E94D: call    sub_801110
0x82E952: add     esp, 10h
0x82E955: push    edi; a3
0x82E956: push    3; a2
0x82E958: mov     ecx, esi; this
0x82E95A: call    sub_760010
0x82E95F: lea     edx, [esp+2Ch+var_10]
0x82E963: push    edx
0x82E964: call    sub_772630
0x82E969: add     esp, 4
0x82E96C: mov     ebp, eax
0x82E96E: cmp     edi, [ebp+0]
0x82E971: mov     byte ptr [esp+2Ch+var_4], 1Bh
0x82E976: jz      short loc_82E997
0x82E978: test    edi, edi
0x82E97A: jz      short loc_82E988
0x82E97C: add     [edi+5Ch], ebx
0x82E97F: jnz     short loc_82E988
0x82E981: mov     ecx, edi
0x82E983: call    sub_772560
0x82E988: mov     edi, [ebp+0]
0x82E98B: test    edi, edi
0x82E98D: mov     [esp+2Ch+a3], edi
0x82E991: jz      short loc_82E997
0x82E993: add     dword ptr [edi+5Ch], 1
0x82E997: mov     eax, [esp+2Ch+var_10]
0x82E99B: test    eax, eax
0x82E99D: mov     byte ptr [esp+2Ch+var_4], 1
0x82E9A2: jz      short loc_82E9B6
0x82E9A4: add     [eax+5Ch], ebx
0x82E9A7: mov     ecx, eax
0x82E9A9: add     eax, 5Ch ; '\'
0x82E9AC: cmp     dword ptr [eax], 0
0x82E9AF: jnz     short loc_82E9B6
0x82E9B1: call    sub_772560
0x82E9B6: push    0
0x82E9B8: push    3
0x82E9BA: push    4
0x82E9BC: push    edi
0x82E9BD: call    sub_801110
0x82E9C2: mov     eax, ds:0B43110h
0x82E9C7: add     esp, 10h
0x82E9CA: push    eax; a2
0x82E9CB: mov     ecx, edi; this
0x82E9CD: call    sub_76C910
0x82E9D2: push    edi; a3
0x82E9D3: push    4; a2
0x82E9D5: mov     ecx, esi; this
0x82E9D7: call    sub_760010
0x82E9DC: lea     ecx, [esp+2Ch+var_10]
0x82E9E0: push    ecx
0x82E9E1: call    sub_772630
0x82E9E6: add     esp, 4
0x82E9E9: mov     ebp, eax
0x82E9EB: cmp     edi, [ebp+0]
0x82E9EE: mov     byte ptr [esp+2Ch+var_4], 1Ch
0x82E9F3: jz      short loc_82EA14
0x82E9F5: test    edi, edi
0x82E9F7: jz      short loc_82EA05
0x82E9F9: add     [edi+5Ch], ebx
0x82E9FC: jnz     short loc_82EA05
0x82E9FE: mov     ecx, edi
0x82EA00: call    sub_772560
0x82EA05: mov     edi, [ebp+0]
0x82EA08: test    edi, edi
0x82EA0A: mov     [esp+2Ch+a3], edi
0x82EA0E: jz      short loc_82EA14
0x82EA10: add     dword ptr [edi+5Ch], 1
0x82EA14: mov     eax, [esp+2Ch+var_10]
0x82EA18: test    eax, eax
0x82EA1A: mov     byte ptr [esp+2Ch+var_4], 1
0x82EA1F: jz      short loc_82EA33
0x82EA21: add     [eax+5Ch], ebx
0x82EA24: mov     ecx, eax
0x82EA26: add     eax, 5Ch ; '\'
0x82EA29: cmp     dword ptr [eax], 0
0x82EA2C: jnz     short loc_82EA33
0x82EA2E: call    sub_772560
0x82EA33: push    2
0x82EA35: push    1
0x82EA37: push    5
0x82EA39: push    edi
0x82EA3A: call    sub_801110
0x82EA3F: add     esp, 10h
0x82EA42: push    edi; a3
0x82EA43: push    5; a2
0x82EA45: mov     ecx, esi; this
0x82EA47: call    sub_760010
0x82EA4C: lea     edx, [esp+2Ch+var_10]
0x82EA50: push    edx
0x82EA51: call    sub_772630
0x82EA56: add     esp, 4
0x82EA59: mov     ebp, eax
0x82EA5B: cmp     edi, [ebp+0]
0x82EA5E: mov     byte ptr [esp+2Ch+var_4], 1Dh
0x82EA63: jz      short loc_82EA84
0x82EA65: test    edi, edi
0x82EA67: jz      short loc_82EA75
0x82EA69: add     [edi+5Ch], ebx
0x82EA6C: jnz     short loc_82EA75
0x82EA6E: mov     ecx, edi
0x82EA70: call    sub_772560
0x82EA75: mov     edi, [ebp+0]
0x82EA78: test    edi, edi
0x82EA7A: mov     [esp+2Ch+a3], edi
0x82EA7E: jz      short loc_82EA84
0x82EA80: add     dword ptr [edi+5Ch], 1
0x82EA84: mov     eax, [esp+2Ch+var_10]
0x82EA88: test    eax, eax
0x82EA8A: mov     byte ptr [esp+2Ch+var_4], 1
0x82EA8F: jz      short loc_82EAA3
0x82EA91: add     [eax+5Ch], ebx
0x82EA94: mov     ecx, eax
0x82EA96: add     eax, 5Ch ; '\'
0x82EA99: cmp     dword ptr [eax], 0
0x82EA9C: jnz     short loc_82EAA3
0x82EA9E: call    sub_772560
0x82EAA3: push    0
0x82EAA5: push    3
0x82EAA7: push    6
0x82EAA9: push    edi
0x82EAAA: call    sub_801110
0x82EAAF: add     esp, 10h
0x82EAB2: push    edi; a3
0x82EAB3: push    6; a2
0x82EAB5: mov     ecx, esi; this
0x82EAB7: call    sub_760010
0x82EABC: mov     eax, ds:0B453B4h
0x82EAC1: mov     ebp, [esi+58h]
0x82EAC4: cmp     ebp, eax
0x82EAC6: mov     ebx, eax
0x82EAC8: jz      short loc_82EAFC
0x82EACA: test    ebp, ebp
0x82EACC: jz      short loc_82EAEB
0x82EACE: lea     eax, [ebp+4]
0x82EAD1: push    eax; lpAddend
0x82EAD2: call    dword ptr ds:0A2807Ch
0x82EAD8: test    eax, eax
0x82EADA: jnz     short loc_82EAEB
0x82EADC: test    ebp, ebp
0x82EADE: jz      short loc_82EAEB
0x82EAE0: mov     edx, [ebp+0]
0x82EAE3: mov     eax, [edx]
0x82EAE5: push    1
0x82EAE7: mov     ecx, ebp
0x82EAE9: call    eax
0x82EAEB: test    ebx, ebx
0x82EAED: mov     [esi+58h], ebx
0x82EAF0: jz      short loc_82EAFC
0x82EAF2: add     ebx, 4
0x82EAF5: push    ebx; lpAddend
0x82EAF6: call    dword ptr ds:0A28078h
0x82EAFC: mov     eax, ds:0B451B4h
0x82EB01: mov     ebp, [esi+44h]
0x82EB04: cmp     ebp, eax
0x82EB06: mov     ebx, eax
0x82EB08: jz      short loc_82EB3C
0x82EB0A: test    ebp, ebp
0x82EB0C: jz      short loc_82EB2B
0x82EB0E: lea     ecx, [ebp+4]
0x82EB11: push    ecx; lpAddend
0x82EB12: call    dword ptr ds:0A2807Ch
0x82EB18: test    eax, eax
0x82EB1A: jnz     short loc_82EB2B
0x82EB1C: test    ebp, ebp
0x82EB1E: jz      short loc_82EB2B
0x82EB20: mov     edx, [ebp+0]
0x82EB23: mov     eax, [edx]
0x82EB25: push    1
0x82EB27: mov     ecx, ebp
0x82EB29: call    eax
0x82EB2B: test    ebx, ebx
0x82EB2D: mov     [esi+44h], ebx
0x82EB30: jz      short loc_82EB3C
0x82EB32: add     ebx, 4
0x82EB35: push    ebx; lpAddend
0x82EB36: call    dword ptr ds:0A28078h
0x82EB3C: cmp     dword ptr [esi+30h], 0
0x82EB40: jnz     short loc_82EB4A
0x82EB42: call    sub_772DF0
0x82EB47: mov     [esi+30h], eax
0x82EB4A: mov     ecx, [esi+30h]
0x82EB4D: push    0
0x82EB4F: push    0
0x82EB51: push    1Bh
0x82EB53: call    sub_772CD0
0x82EB58: cmp     dword ptr [esi+30h], 0
0x82EB5C: jnz     short loc_82EB66
0x82EB5E: call    sub_772DF0
0x82EB63: mov     [esi+30h], eax
0x82EB66: mov     ecx, [esi+30h]
0x82EB69: push    0
0x82EB6B: push    0
0x82EB6D: push    0Fh
0x82EB6F: call    sub_772CD0
0x82EB74: cmp     dword ptr [esi+30h], 0
0x82EB78: jnz     short loc_82EB82
0x82EB7A: call    sub_772DF0
0x82EB7F: mov     [esi+30h], eax
0x82EB82: mov     ecx, [esi+30h]
0x82EB85: push    0
0x82EB87: push    1
0x82EB89: push    7
0x82EB8B: call    sub_772CD0
0x82EB90: cmp     dword ptr [esi+30h], 0
0x82EB94: jnz     short loc_82EB9E
0x82EB96: call    sub_772DF0
0x82EB9B: mov     [esi+30h], eax
0x82EB9E: mov     ecx, [esi+30h]
0x82EBA1: push    0
0x82EBA3: push    4
0x82EBA5: push    17h
0x82EBA7: call    sub_772CD0
0x82EBAC: cmp     dword ptr [esi+30h], 0
0x82EBB0: jnz     short loc_82EBBA
0x82EBB2: call    sub_772DF0
0x82EBB7: mov     [esi+30h], eax
0x82EBBA: mov     ecx, [esi+30h]
0x82EBBD: push    0
0x82EBBF: push    1
0x82EBC1: push    0Eh
0x82EBC3: call    sub_772CD0
0x82EBC8: cmp     dword ptr [esi+30h], 0
0x82EBCC: jnz     short loc_82EBD6
0x82EBCE: call    sub_772DF0
0x82EBD3: mov     [esi+30h], eax
0x82EBD6: mov     ecx, [esi+30h]
0x82EBD9: push    0
0x82EBDB: push    0
0x82EBDD: push    34h ; '4'
0x82EBDF: call    sub_772CD0
0x82EBE4: or      ebx, 0FFFFFFFFh
0x82EBE7: cmp     esi, ds:0B456F4h
0x82EBED: mov     dword ptr ds:0B43C64h, 61088h
0x82EBF7: mov     dword ptr ds:0B442F4h, 9Ch ; 'œ'
0x82EC01: mov     dword ptr ds:0B44984h, 0Ch
0x82EC0B: jz      short loc_82EC2B
0x82EC0D: add     [esi+60h], ebx
0x82EC10: jnz     short loc_82EC19
0x82EC12: mov     ecx, esi
0x82EC14: call    sub_7604D0
0x82EC19: mov     esi, ds:0B456F4h
0x82EC1F: test    esi, esi
0x82EC21: mov     [esp+2Ch+var_14], esi
0x82EC25: jz      short loc_82EC2B
0x82EC27: add     dword ptr [esi+60h], 1
0x82EC2B: cmp     dword ptr [esi+18h], 7
0x82EC2F: jnb     loc_82EF52
0x82EC35: lea     ecx, [esp+2Ch+var_10]
0x82EC39: push    ecx
0x82EC3A: call    sub_772630
0x82EC3F: add     esp, 4
0x82EC42: mov     ebp, eax
0x82EC44: cmp     edi, [ebp+0]
0x82EC47: mov     byte ptr [esp+2Ch+var_4], 1Eh
0x82EC4C: jz      short loc_82EC6D
0x82EC4E: test    edi, edi
0x82EC50: jz      short loc_82EC5E
0x82EC52: add     [edi+5Ch], ebx
0x82EC55: jnz     short loc_82EC5E
0x82EC57: mov     ecx, edi
0x82EC59: call    sub_772560
0x82EC5E: mov     edi, [ebp+0]
0x82EC61: test    edi, edi
0x82EC63: mov     [esp+2Ch+a3], edi
0x82EC67: jz      short loc_82EC6D
0x82EC69: add     dword ptr [edi+5Ch], 1
0x82EC6D: mov     eax, [esp+2Ch+var_10]
0x82EC71: test    eax, eax
0x82EC73: mov     byte ptr [esp+2Ch+var_4], 1
0x82EC78: jz      short loc_82EC8C
0x82EC7A: add     [eax+5Ch], ebx
0x82EC7D: mov     ecx, eax
0x82EC7F: add     eax, 5Ch ; '\'
0x82EC82: cmp     dword ptr [eax], 0
0x82EC85: jnz     short loc_82EC8C
0x82EC87: call    sub_772560
0x82EC8C: push    2
0x82EC8E: push    1
0x82EC90: push    0
0x82EC92: push    edi
0x82EC93: call    sub_801110
0x82EC98: add     esp, 10h
0x82EC9B: push    edi; a3
0x82EC9C: push    0; a2
0x82EC9E: mov     ecx, esi; this
0x82ECA0: call    sub_760010
0x82ECA5: lea     edx, [esp+2Ch+var_10]
0x82ECA9: push    edx
0x82ECAA: call    sub_772630
0x82ECAF: add     esp, 4
0x82ECB2: mov     ebp, eax
0x82ECB4: cmp     edi, [ebp+0]
0x82ECB7: mov     byte ptr [esp+2Ch+var_4], 1Fh
0x82ECBC: jz      short loc_82ECDD
0x82ECBE: test    edi, edi
0x82ECC0: jz      short loc_82ECCE
0x82ECC2: add     [edi+5Ch], ebx
0x82ECC5: jnz     short loc_82ECCE
0x82ECC7: mov     ecx, edi
0x82ECC9: call    sub_772560
0x82ECCE: mov     edi, [ebp+0]
0x82ECD1: test    edi, edi
0x82ECD3: mov     [esp+2Ch+a3], edi
0x82ECD7: jz      short loc_82ECDD
0x82ECD9: add     dword ptr [edi+5Ch], 1
0x82ECDD: mov     eax, [esp+2Ch+var_10]
0x82ECE1: test    eax, eax
0x82ECE3: mov     byte ptr [esp+2Ch+var_4], 1
0x82ECE8: jz      short loc_82ECFC
0x82ECEA: add     [eax+5Ch], ebx
0x82ECED: mov     ecx, eax
0x82ECEF: add     eax, 5Ch ; '\'
0x82ECF2: cmp     dword ptr [eax], 0
0x82ECF5: jnz     short loc_82ECFC
0x82ECF7: call    sub_772560
0x82ECFC: push    2
0x82ECFE: push    1
0x82ED00: push    1
0x82ED02: push    edi
0x82ED03: call    sub_801110
0x82ED08: add     esp, 10h
0x82ED0B: push    edi; a3
0x82ED0C: push    1; a2
0x82ED0E: mov     ecx, esi; this
0x82ED10: call    sub_760010
0x82ED15: lea     eax, [esp+2Ch+var_10]
0x82ED19: push    eax
0x82ED1A: call    sub_772630
0x82ED1F: add     esp, 4
0x82ED22: mov     ebp, eax
0x82ED24: cmp     edi, [ebp+0]
0x82ED27: mov     byte ptr [esp+2Ch+var_4], 20h ; ' '
0x82ED2C: jz      short loc_82ED4D
0x82ED2E: test    edi, edi
0x82ED30: jz      short loc_82ED3E
0x82ED32: add     [edi+5Ch], ebx
0x82ED35: jnz     short loc_82ED3E
0x82ED37: mov     ecx, edi
0x82ED39: call    sub_772560
0x82ED3E: mov     edi, [ebp+0]
0x82ED41: test    edi, edi
0x82ED43: mov     [esp+2Ch+a3], edi
0x82ED47: jz      short loc_82ED4D
0x82ED49: add     dword ptr [edi+5Ch], 1
0x82ED4D: mov     eax, [esp+2Ch+var_10]
0x82ED51: test    eax, eax
0x82ED53: mov     byte ptr [esp+2Ch+var_4], 1
0x82ED58: jz      short loc_82ED6C
0x82ED5A: add     [eax+5Ch], ebx
0x82ED5D: mov     ecx, eax
0x82ED5F: add     eax, 5Ch ; '\'
0x82ED62: cmp     dword ptr [eax], 0
0x82ED65: jnz     short loc_82ED6C
0x82ED67: call    sub_772560
0x82ED6C: push    2
0x82ED6E: push    1
0x82ED70: push    2
0x82ED72: push    edi
0x82ED73: call    sub_801110
0x82ED78: add     esp, 10h
0x82ED7B: push    edi; a3
0x82ED7C: push    2; a2
0x82ED7E: mov     ecx, esi; this
0x82ED80: call    sub_760010
0x82ED85: lea     ecx, [esp+2Ch+var_10]
0x82ED89: push    ecx
0x82ED8A: call    sub_772630
0x82ED8F: add     esp, 4
0x82ED92: mov     ebp, eax
0x82ED94: cmp     edi, [ebp+0]
0x82ED97: mov     byte ptr [esp+2Ch+var_4], 21h ; '!'
0x82ED9C: jz      short loc_82EDBD
0x82ED9E: test    edi, edi
0x82EDA0: jz      short loc_82EDAE
0x82EDA2: add     [edi+5Ch], ebx
0x82EDA5: jnz     short loc_82EDAE
0x82EDA7: mov     ecx, edi
0x82EDA9: call    sub_772560
0x82EDAE: mov     edi, [ebp+0]
0x82EDB1: test    edi, edi
0x82EDB3: mov     [esp+2Ch+a3], edi
0x82EDB7: jz      short loc_82EDBD
0x82EDB9: add     dword ptr [edi+5Ch], 1
0x82EDBD: mov     eax, [esp+2Ch+var_10]
0x82EDC1: test    eax, eax
0x82EDC3: mov     byte ptr [esp+2Ch+var_4], 1
0x82EDC8: jz      short loc_82EDDC
0x82EDCA: add     [eax+5Ch], ebx
0x82EDCD: mov     ecx, eax
0x82EDCF: add     eax, 5Ch ; '\'
0x82EDD2: cmp     dword ptr [eax], 0
0x82EDD5: jnz     short loc_82EDDC
0x82EDD7: call    sub_772560
0x82EDDC: push    2
0x82EDDE: push    1
0x82EDE0: push    3
0x82EDE2: push    edi
0x82EDE3: call    sub_801110
0x82EDE8: add     esp, 10h
0x82EDEB: push    edi; a3
0x82EDEC: push    3; a2
0x82EDEE: mov     ecx, esi; this
0x82EDF0: call    sub_760010
0x82EDF5: lea     edx, [esp+2Ch+var_10]
0x82EDF9: push    edx
0x82EDFA: call    sub_772630
0x82EDFF: add     esp, 4
0x82EE02: mov     ebp, eax
0x82EE04: cmp     edi, [ebp+0]
0x82EE07: mov     byte ptr [esp+2Ch+var_4], 22h ; '"'
0x82EE0C: jz      short loc_82EE2D
0x82EE0E: test    edi, edi
0x82EE10: jz      short loc_82EE1E
0x82EE12: add     [edi+5Ch], ebx
0x82EE15: jnz     short loc_82EE1E
0x82EE17: mov     ecx, edi
0x82EE19: call    sub_772560
0x82EE1E: mov     edi, [ebp+0]
0x82EE21: test    edi, edi
0x82EE23: mov     [esp+2Ch+a3], edi
0x82EE27: jz      short loc_82EE2D
0x82EE29: add     dword ptr [edi+5Ch], 1
0x82EE2D: mov     eax, [esp+2Ch+var_10]
0x82EE31: test    eax, eax
0x82EE33: mov     byte ptr [esp+2Ch+var_4], 1
0x82EE38: jz      short loc_82EE4C
0x82EE3A: add     [eax+5Ch], ebx
0x82EE3D: mov     ecx, eax
0x82EE3F: add     eax, 5Ch ; '\'
0x82EE42: cmp     dword ptr [eax], 0
0x82EE45: jnz     short loc_82EE4C
0x82EE47: call    sub_772560
0x82EE4C: push    0
0x82EE4E: push    3
0x82EE50: push    4
0x82EE52: push    edi
0x82EE53: call    sub_801110
0x82EE58: mov     eax, ds:0B43110h
0x82EE5D: add     esp, 10h
0x82EE60: push    eax; a2
0x82EE61: mov     ecx, edi; this
0x82EE63: call    sub_76C910
0x82EE68: push    edi; a3
0x82EE69: push    4; a2
0x82EE6B: mov     ecx, esi; this
0x82EE6D: call    sub_760010
0x82EE72: lea     ecx, [esp+2Ch+var_10]
0x82EE76: push    ecx
0x82EE77: call    sub_772630
0x82EE7C: add     esp, 4
0x82EE7F: mov     ebp, eax
0x82EE81: cmp     edi, [ebp+0]
0x82EE84: mov     byte ptr [esp+2Ch+var_4], 23h ; '#'
0x82EE89: jz      short loc_82EEAA
0x82EE8B: test    edi, edi
0x82EE8D: jz      short loc_82EE9B
0x82EE8F: add     [edi+5Ch], ebx
0x82EE92: jnz     short loc_82EE9B
0x82EE94: mov     ecx, edi
0x82EE96: call    sub_772560
0x82EE9B: mov     edi, [ebp+0]
0x82EE9E: test    edi, edi
0x82EEA0: mov     [esp+2Ch+a3], edi
0x82EEA4: jz      short loc_82EEAA
0x82EEA6: add     dword ptr [edi+5Ch], 1
0x82EEAA: mov     eax, [esp+2Ch+var_10]
0x82EEAE: test    eax, eax
0x82EEB0: mov     byte ptr [esp+2Ch+var_4], 1
0x82EEB5: jz      short loc_82EEC9
0x82EEB7: add     [eax+5Ch], ebx
0x82EEBA: mov     ecx, eax
0x82EEBC: add     eax, 5Ch ; '\'
0x82EEBF: cmp     dword ptr [eax], 0
0x82EEC2: jnz     short loc_82EEC9
0x82EEC4: call    sub_772560
0x82EEC9: push    2
0x82EECB: push    1
0x82EECD: push    5
0x82EECF: push    edi
0x82EED0: call    sub_801110
0x82EED5: add     esp, 10h
0x82EED8: push    edi; a3
0x82EED9: push    5; a2
0x82EEDB: mov     ecx, esi; this
0x82EEDD: call    sub_760010
0x82EEE2: lea     edx, [esp+2Ch+var_10]
0x82EEE6: push    edx
0x82EEE7: call    sub_772630
0x82EEEC: add     esp, 4
0x82EEEF: mov     ebp, eax
0x82EEF1: cmp     edi, [ebp+0]
0x82EEF4: mov     byte ptr [esp+2Ch+var_4], 24h ; '$'
0x82EEF9: jz      short loc_82EF1A
0x82EEFB: test    edi, edi
0x82EEFD: jz      short loc_82EF0B
0x82EEFF: add     [edi+5Ch], ebx
0x82EF02: jnz     short loc_82EF0B
0x82EF04: mov     ecx, edi
0x82EF06: call    sub_772560
0x82EF0B: mov     edi, [ebp+0]
0x82EF0E: test    edi, edi
0x82EF10: mov     [esp+2Ch+a3], edi
0x82EF14: jz      short loc_82EF1A
0x82EF16: add     dword ptr [edi+5Ch], 1
0x82EF1A: mov     eax, [esp+2Ch+var_10]
0x82EF1E: test    eax, eax
0x82EF20: mov     byte ptr [esp+2Ch+var_4], 1
0x82EF25: jz      short loc_82EF39
0x82EF27: add     [eax+5Ch], ebx
0x82EF2A: mov     ecx, eax
0x82EF2C: add     eax, 5Ch ; '\'
0x82EF2F: cmp     dword ptr [eax], 0
0x82EF32: jnz     short loc_82EF39
0x82EF34: call    sub_772560
0x82EF39: push    0
0x82EF3B: push    3
0x82EF3D: push    6
0x82EF3F: push    edi
0x82EF40: call    sub_801110
0x82EF45: add     esp, 10h
0x82EF48: push    edi; a3
0x82EF49: push    6; a2
0x82EF4B: mov     ecx, esi; this
0x82EF4D: call    sub_760010
0x82EF52: mov     eax, ds:0B453B8h
0x82EF57: mov     ebp, [esi+58h]
0x82EF5A: cmp     ebp, eax
0x82EF5C: mov     ebx, eax
0x82EF5E: jz      short loc_82EF92
0x82EF60: test    ebp, ebp
0x82EF62: jz      short loc_82EF81
0x82EF64: lea     eax, [ebp+4]
0x82EF67: push    eax; lpAddend
0x82EF68: call    dword ptr ds:0A2807Ch
0x82EF6E: test    eax, eax
0x82EF70: jnz     short loc_82EF81
0x82EF72: test    ebp, ebp
0x82EF74: jz      short loc_82EF81
0x82EF76: mov     edx, [ebp+0]
0x82EF79: mov     eax, [edx]
0x82EF7B: push    1
0x82EF7D: mov     ecx, ebp
0x82EF7F: call    eax
0x82EF81: test    ebx, ebx
0x82EF83: mov     [esi+58h], ebx
0x82EF86: jz      short loc_82EF92
0x82EF88: add     ebx, 4
0x82EF8B: push    ebx; lpAddend
0x82EF8C: call    dword ptr ds:0A28078h
0x82EF92: mov     eax, ds:0B451B8h
0x82EF97: mov     ebp, [esi+44h]
0x82EF9A: cmp     ebp, eax
0x82EF9C: mov     ebx, eax
0x82EF9E: jz      short loc_82EFD2
0x82EFA0: test    ebp, ebp
0x82EFA2: jz      short loc_82EFC1
0x82EFA4: lea     ecx, [ebp+4]
0x82EFA7: push    ecx; lpAddend
0x82EFA8: call    dword ptr ds:0A2807Ch
0x82EFAE: test    eax, eax
0x82EFB0: jnz     short loc_82EFC1
0x82EFB2: test    ebp, ebp
0x82EFB4: jz      short loc_82EFC1
0x82EFB6: mov     edx, [ebp+0]
0x82EFB9: mov     eax, [edx]
0x82EFBB: push    1
0x82EFBD: mov     ecx, ebp
0x82EFBF: call    eax
0x82EFC1: test    ebx, ebx
0x82EFC3: mov     [esi+44h], ebx
0x82EFC6: jz      short loc_82EFD2
0x82EFC8: add     ebx, 4
0x82EFCB: push    ebx; lpAddend
0x82EFCC: call    dword ptr ds:0A28078h
0x82EFD2: cmp     dword ptr [esi+30h], 0
0x82EFD6: jnz     short loc_82EFE0
0x82EFD8: call    sub_772DF0
0x82EFDD: mov     [esi+30h], eax
0x82EFE0: mov     ecx, [esi+30h]
0x82EFE3: push    0
0x82EFE5: push    0
0x82EFE7: push    1Bh
0x82EFE9: call    sub_772CD0
0x82EFEE: cmp     dword ptr [esi+30h], 0
0x82EFF2: jnz     short loc_82EFFC
0x82EFF4: call    sub_772DF0
0x82EFF9: mov     [esi+30h], eax
0x82EFFC: mov     ecx, [esi+30h]
0x82EFFF: push    0
0x82F001: push    0
0x82F003: push    0Fh
0x82F005: call    sub_772CD0
0x82F00A: cmp     dword ptr [esi+30h], 0
0x82F00E: jnz     short loc_82F018
0x82F010: call    sub_772DF0
0x82F015: mov     [esi+30h], eax
0x82F018: mov     ecx, [esi+30h]
0x82F01B: push    0
0x82F01D: push    1
0x82F01F: push    7
0x82F021: call    sub_772CD0
0x82F026: cmp     dword ptr [esi+30h], 0
0x82F02A: jnz     short loc_82F034
0x82F02C: call    sub_772DF0
0x82F031: mov     [esi+30h], eax
0x82F034: mov     ecx, [esi+30h]
0x82F037: push    0
0x82F039: push    4
0x82F03B: push    17h
0x82F03D: call    sub_772CD0
0x82F042: cmp     dword ptr [esi+30h], 0
0x82F046: jnz     short loc_82F050
0x82F048: call    sub_772DF0
0x82F04D: mov     [esi+30h], eax
0x82F050: mov     ecx, [esi+30h]
0x82F053: push    0
0x82F055: push    1
0x82F057: push    0Eh
0x82F059: call    sub_772CD0
0x82F05E: cmp     dword ptr [esi+30h], 0
0x82F062: jnz     short loc_82F06C
0x82F064: call    sub_772DF0
0x82F069: mov     [esi+30h], eax
0x82F06C: mov     ecx, [esi+30h]
0x82F06F: push    0
0x82F071: push    0
0x82F073: push    34h ; '4'
0x82F075: call    sub_772CD0
0x82F07A: cmp     esi, ds:0B456F8h
0x82F080: mov     ebx, 210F2h
0x82F085: mov     ds:0B43C74h, ebx
0x82F08B: mov     dword ptr ds:0B44304h, 1Ch
0x82F095: mov     dword ptr ds:0B435E4h, 60h ; '`'
0x82F09F: mov     dword ptr ds:0B44994h, 8
0x82F0A9: jz      short loc_82F0CA
0x82F0AB: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82F0AF: jnz     short loc_82F0B8
0x82F0B1: mov     ecx, esi
0x82F0B3: call    sub_7604D0
0x82F0B8: mov     esi, ds:0B456F8h
0x82F0BE: test    esi, esi
0x82F0C0: mov     [esp+2Ch+var_14], esi
0x82F0C4: jz      short loc_82F0CA
0x82F0C6: add     dword ptr [esi+60h], 1
0x82F0CA: cmp     dword ptr [esi+18h], 7
0x82F0CE: jnb     loc_82F3FF
0x82F0D4: lea     ecx, [esp+2Ch+var_10]
0x82F0D8: push    ecx
0x82F0D9: call    sub_772630
0x82F0DE: add     esp, 4
0x82F0E1: mov     ebp, eax
0x82F0E3: cmp     edi, [ebp+0]
0x82F0E6: mov     byte ptr [esp+2Ch+var_4], 25h ; '%'
0x82F0EB: jz      short loc_82F10D
0x82F0ED: test    edi, edi
0x82F0EF: jz      short loc_82F0FE
0x82F0F1: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F0F5: jnz     short loc_82F0FE
0x82F0F7: mov     ecx, edi
0x82F0F9: call    sub_772560
0x82F0FE: mov     edi, [ebp+0]
0x82F101: test    edi, edi
0x82F103: mov     [esp+2Ch+a3], edi
0x82F107: jz      short loc_82F10D
0x82F109: add     dword ptr [edi+5Ch], 1
0x82F10D: mov     eax, [esp+2Ch+var_10]
0x82F111: test    eax, eax
0x82F113: mov     byte ptr [esp+2Ch+var_4], 1
0x82F118: jz      short loc_82F12D
0x82F11A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F11E: mov     ecx, eax
0x82F120: add     eax, 5Ch ; '\'
0x82F123: cmp     dword ptr [eax], 0
0x82F126: jnz     short loc_82F12D
0x82F128: call    sub_772560
0x82F12D: push    2
0x82F12F: push    1
0x82F131: push    0
0x82F133: push    edi
0x82F134: call    sub_801110
0x82F139: add     esp, 10h
0x82F13C: push    edi; a3
0x82F13D: push    0; a2
0x82F13F: mov     ecx, esi; this
0x82F141: call    sub_760010
0x82F146: lea     edx, [esp+2Ch+var_10]
0x82F14A: push    edx
0x82F14B: call    sub_772630
0x82F150: add     esp, 4
0x82F153: mov     ebp, eax
0x82F155: cmp     edi, [ebp+0]
0x82F158: mov     byte ptr [esp+2Ch+var_4], 26h ; '&'
0x82F15D: jz      short loc_82F17F
0x82F15F: test    edi, edi
0x82F161: jz      short loc_82F170
0x82F163: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F167: jnz     short loc_82F170
0x82F169: mov     ecx, edi
0x82F16B: call    sub_772560
0x82F170: mov     edi, [ebp+0]
0x82F173: test    edi, edi
0x82F175: mov     [esp+2Ch+a3], edi
0x82F179: jz      short loc_82F17F
0x82F17B: add     dword ptr [edi+5Ch], 1
0x82F17F: mov     eax, [esp+2Ch+var_10]
0x82F183: test    eax, eax
0x82F185: mov     byte ptr [esp+2Ch+var_4], 1
0x82F18A: jz      short loc_82F19F
0x82F18C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F190: mov     ecx, eax
0x82F192: add     eax, 5Ch ; '\'
0x82F195: cmp     dword ptr [eax], 0
0x82F198: jnz     short loc_82F19F
0x82F19A: call    sub_772560
0x82F19F: push    2
0x82F1A1: push    1
0x82F1A3: push    1
0x82F1A5: push    edi
0x82F1A6: call    sub_801110
0x82F1AB: add     esp, 10h
0x82F1AE: push    edi; a3
0x82F1AF: push    1; a2
0x82F1B1: mov     ecx, esi; this
0x82F1B3: call    sub_760010
0x82F1B8: lea     eax, [esp+2Ch+var_10]
0x82F1BC: push    eax
0x82F1BD: call    sub_772630
0x82F1C2: add     esp, 4
0x82F1C5: mov     ebp, eax
0x82F1C7: cmp     edi, [ebp+0]
0x82F1CA: mov     byte ptr [esp+2Ch+var_4], 27h ; '''
0x82F1CF: jz      short loc_82F1F1
0x82F1D1: test    edi, edi
0x82F1D3: jz      short loc_82F1E2
0x82F1D5: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F1D9: jnz     short loc_82F1E2
0x82F1DB: mov     ecx, edi
0x82F1DD: call    sub_772560
0x82F1E2: mov     edi, [ebp+0]
0x82F1E5: test    edi, edi
0x82F1E7: mov     [esp+2Ch+a3], edi
0x82F1EB: jz      short loc_82F1F1
0x82F1ED: add     dword ptr [edi+5Ch], 1
0x82F1F1: mov     eax, [esp+2Ch+var_10]
0x82F1F5: test    eax, eax
0x82F1F7: mov     byte ptr [esp+2Ch+var_4], 1
0x82F1FC: jz      short loc_82F211
0x82F1FE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F202: mov     ecx, eax
0x82F204: add     eax, 5Ch ; '\'
0x82F207: cmp     dword ptr [eax], 0
0x82F20A: jnz     short loc_82F211
0x82F20C: call    sub_772560
0x82F211: push    2
0x82F213: push    1
0x82F215: push    2
0x82F217: push    edi
0x82F218: call    sub_801110
0x82F21D: add     esp, 10h
0x82F220: push    edi; a3
0x82F221: push    2; a2
0x82F223: mov     ecx, esi; this
0x82F225: call    sub_760010
0x82F22A: lea     ecx, [esp+2Ch+var_10]
0x82F22E: push    ecx
0x82F22F: call    sub_772630
0x82F234: add     esp, 4
0x82F237: mov     ebp, eax
0x82F239: cmp     edi, [ebp+0]
0x82F23C: mov     byte ptr [esp+2Ch+var_4], 28h ; '('
0x82F241: jz      short loc_82F263
0x82F243: test    edi, edi
0x82F245: jz      short loc_82F254
0x82F247: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F24B: jnz     short loc_82F254
0x82F24D: mov     ecx, edi
0x82F24F: call    sub_772560
0x82F254: mov     edi, [ebp+0]
0x82F257: test    edi, edi
0x82F259: mov     [esp+2Ch+a3], edi
0x82F25D: jz      short loc_82F263
0x82F25F: add     dword ptr [edi+5Ch], 1
0x82F263: mov     eax, [esp+2Ch+var_10]
0x82F267: test    eax, eax
0x82F269: mov     byte ptr [esp+2Ch+var_4], 1
0x82F26E: jz      short loc_82F283
0x82F270: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F274: mov     ecx, eax
0x82F276: add     eax, 5Ch ; '\'
0x82F279: cmp     dword ptr [eax], 0
0x82F27C: jnz     short loc_82F283
0x82F27E: call    sub_772560
0x82F283: push    2
0x82F285: push    1
0x82F287: push    3
0x82F289: push    edi
0x82F28A: call    sub_801110
0x82F28F: add     esp, 10h
0x82F292: push    edi; a3
0x82F293: push    3; a2
0x82F295: mov     ecx, esi; this
0x82F297: call    sub_760010
0x82F29C: lea     edx, [esp+2Ch+var_10]
0x82F2A0: push    edx
0x82F2A1: call    sub_772630
0x82F2A6: add     esp, 4
0x82F2A9: mov     ebp, eax
0x82F2AB: cmp     edi, [ebp+0]
0x82F2AE: mov     byte ptr [esp+2Ch+var_4], 29h ; ')'
0x82F2B3: jz      short loc_82F2D5
0x82F2B5: test    edi, edi
0x82F2B7: jz      short loc_82F2C6
0x82F2B9: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F2BD: jnz     short loc_82F2C6
0x82F2BF: mov     ecx, edi
0x82F2C1: call    sub_772560
0x82F2C6: mov     edi, [ebp+0]
0x82F2C9: test    edi, edi
0x82F2CB: mov     [esp+2Ch+a3], edi
0x82F2CF: jz      short loc_82F2D5
0x82F2D1: add     dword ptr [edi+5Ch], 1
0x82F2D5: mov     eax, [esp+2Ch+var_10]
0x82F2D9: test    eax, eax
0x82F2DB: mov     byte ptr [esp+2Ch+var_4], 1
0x82F2E0: jz      short loc_82F2F5
0x82F2E2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F2E6: mov     ecx, eax
0x82F2E8: add     eax, 5Ch ; '\'
0x82F2EB: cmp     dword ptr [eax], 0
0x82F2EE: jnz     short loc_82F2F5
0x82F2F0: call    sub_772560
0x82F2F5: push    0
0x82F2F7: push    3
0x82F2F9: push    4
0x82F2FB: push    edi
0x82F2FC: call    sub_801110
0x82F301: mov     eax, ds:0B43110h
0x82F306: add     esp, 10h
0x82F309: push    eax; a2
0x82F30A: mov     ecx, edi; this
0x82F30C: call    sub_76C910
0x82F311: push    edi; a3
0x82F312: push    4; a2
0x82F314: mov     ecx, esi; this
0x82F316: call    sub_760010
0x82F31B: lea     ecx, [esp+2Ch+var_10]
0x82F31F: push    ecx
0x82F320: call    sub_772630
0x82F325: add     esp, 4
0x82F328: mov     ebp, eax
0x82F32A: cmp     edi, [ebp+0]
0x82F32D: mov     byte ptr [esp+2Ch+var_4], 2Ah ; '*'
0x82F332: jz      short loc_82F354
0x82F334: test    edi, edi
0x82F336: jz      short loc_82F345
0x82F338: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F33C: jnz     short loc_82F345
0x82F33E: mov     ecx, edi
0x82F340: call    sub_772560
0x82F345: mov     edi, [ebp+0]
0x82F348: test    edi, edi
0x82F34A: mov     [esp+2Ch+a3], edi
0x82F34E: jz      short loc_82F354
0x82F350: add     dword ptr [edi+5Ch], 1
0x82F354: mov     eax, [esp+2Ch+var_10]
0x82F358: test    eax, eax
0x82F35A: mov     byte ptr [esp+2Ch+var_4], 1
0x82F35F: jz      short loc_82F374
0x82F361: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F365: mov     ecx, eax
0x82F367: add     eax, 5Ch ; '\'
0x82F36A: cmp     dword ptr [eax], 0
0x82F36D: jnz     short loc_82F374
0x82F36F: call    sub_772560
0x82F374: push    2
0x82F376: push    1
0x82F378: push    5
0x82F37A: push    edi
0x82F37B: call    sub_801110
0x82F380: add     esp, 10h
0x82F383: push    edi; a3
0x82F384: push    5; a2
0x82F386: mov     ecx, esi; this
0x82F388: call    sub_760010
0x82F38D: lea     edx, [esp+2Ch+var_10]
0x82F391: push    edx
0x82F392: call    sub_772630
0x82F397: add     esp, 4
0x82F39A: mov     ebp, eax
0x82F39C: cmp     edi, [ebp+0]
0x82F39F: mov     byte ptr [esp+2Ch+var_4], 2Bh ; '+'
0x82F3A4: jz      short loc_82F3C6
0x82F3A6: test    edi, edi
0x82F3A8: jz      short loc_82F3B7
0x82F3AA: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F3AE: jnz     short loc_82F3B7
0x82F3B0: mov     ecx, edi
0x82F3B2: call    sub_772560
0x82F3B7: mov     edi, [ebp+0]
0x82F3BA: test    edi, edi
0x82F3BC: mov     [esp+2Ch+a3], edi
0x82F3C0: jz      short loc_82F3C6
0x82F3C2: add     dword ptr [edi+5Ch], 1
0x82F3C6: mov     eax, [esp+2Ch+var_10]
0x82F3CA: test    eax, eax
0x82F3CC: mov     byte ptr [esp+2Ch+var_4], 1
0x82F3D1: jz      short loc_82F3E6
0x82F3D3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F3D7: mov     ecx, eax
0x82F3D9: add     eax, 5Ch ; '\'
0x82F3DC: cmp     dword ptr [eax], 0
0x82F3DF: jnz     short loc_82F3E6
0x82F3E1: call    sub_772560
0x82F3E6: push    0
0x82F3E8: push    3
0x82F3EA: push    6
0x82F3EC: push    edi
0x82F3ED: call    sub_801110
0x82F3F2: add     esp, 10h
0x82F3F5: push    edi; a3
0x82F3F6: push    6; a2
0x82F3F8: mov     ecx, esi; this
0x82F3FA: call    sub_760010
0x82F3FF: mov     eax, ds:0B453B8h
0x82F404: push    eax; a2
0x82F405: mov     ecx, esi; this
0x82F407: call    sub_7AECB0
0x82F40C: mov     ecx, ds:0B451BCh
0x82F412: push    ecx; a2
0x82F413: mov     ecx, esi; this
0x82F415: call    sub_7AEC60
0x82F41A: cmp     dword ptr [esi+30h], 0
0x82F41E: jnz     short loc_82F428
0x82F420: call    sub_772DF0
0x82F425: mov     [esi+30h], eax
0x82F428: mov     ecx, [esi+30h]
0x82F42B: push    0
0x82F42D: push    0
0x82F42F: push    1Bh
0x82F431: call    sub_772CD0
0x82F436: cmp     dword ptr [esi+30h], 0
0x82F43A: jnz     short loc_82F444
0x82F43C: call    sub_772DF0
0x82F441: mov     [esi+30h], eax
0x82F444: mov     ecx, [esi+30h]
0x82F447: push    0
0x82F449: push    0
0x82F44B: push    0Fh
0x82F44D: call    sub_772CD0
0x82F452: cmp     dword ptr [esi+30h], 0
0x82F456: jnz     short loc_82F460
0x82F458: call    sub_772DF0
0x82F45D: mov     [esi+30h], eax
0x82F460: mov     ecx, [esi+30h]
0x82F463: push    0
0x82F465: push    1
0x82F467: push    7
0x82F469: call    sub_772CD0
0x82F46E: cmp     dword ptr [esi+30h], 0
0x82F472: jnz     short loc_82F47C
0x82F474: call    sub_772DF0
0x82F479: mov     [esi+30h], eax
0x82F47C: mov     ecx, [esi+30h]
0x82F47F: push    0
0x82F481: push    4
0x82F483: push    17h
0x82F485: call    sub_772CD0
0x82F48A: cmp     dword ptr [esi+30h], 0
0x82F48E: jnz     short loc_82F498
0x82F490: call    sub_772DF0
0x82F495: mov     [esi+30h], eax
0x82F498: mov     ecx, [esi+30h]
0x82F49B: push    0
0x82F49D: push    1
0x82F49F: push    0Eh
0x82F4A1: call    sub_772CD0
0x82F4A6: cmp     dword ptr [esi+30h], 0
0x82F4AA: jnz     short loc_82F4B4
0x82F4AC: call    sub_772DF0
0x82F4B1: mov     [esi+30h], eax
0x82F4B4: mov     ecx, [esi+30h]
0x82F4B7: push    0
0x82F4B9: push    0
0x82F4BB: push    34h ; '4'
0x82F4BD: call    sub_772CD0
0x82F4C2: cmp     esi, ds:0B45708h
0x82F4C8: mov     ds:0B43C78h, ebx
0x82F4CE: mov     ebx, 9Ch ; 'œ'
0x82F4D3: mov     ds:0B44308h, ebx
0x82F4D9: mov     dword ptr ds:0B435E8h, 60h ; '`'
0x82F4E3: mov     dword ptr ds:0B44998h, 0Ch
0x82F4ED: jz      short loc_82F50E
0x82F4EF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82F4F3: jnz     short loc_82F4FC
0x82F4F5: mov     ecx, esi
0x82F4F7: call    sub_7604D0
0x82F4FC: mov     esi, ds:0B45708h
0x82F502: test    esi, esi
0x82F504: mov     [esp+2Ch+var_14], esi
0x82F508: jz      short loc_82F50E
0x82F50A: add     dword ptr [esi+60h], 1
0x82F50E: cmp     dword ptr [esi+18h], 7
0x82F512: jnb     loc_82F7C7
0x82F518: lea     edx, [esp+2Ch+var_10]
0x82F51C: push    edx
0x82F51D: call    sub_772630
0x82F522: add     esp, 4
0x82F525: mov     ebp, eax
0x82F527: cmp     edi, [ebp+0]
0x82F52A: mov     byte ptr [esp+2Ch+var_4], 2Ch ; ','
0x82F52F: jz      short loc_82F551
0x82F531: test    edi, edi
0x82F533: jz      short loc_82F542
0x82F535: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F539: jnz     short loc_82F542
0x82F53B: mov     ecx, edi
0x82F53D: call    sub_772560
0x82F542: mov     edi, [ebp+0]
0x82F545: test    edi, edi
0x82F547: mov     [esp+2Ch+a3], edi
0x82F54B: jz      short loc_82F551
0x82F54D: add     dword ptr [edi+5Ch], 1
0x82F551: mov     eax, [esp+2Ch+var_10]
0x82F555: test    eax, eax
0x82F557: mov     byte ptr [esp+2Ch+var_4], 1
0x82F55C: jz      short loc_82F571
0x82F55E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F562: mov     ecx, eax
0x82F564: add     eax, 5Ch ; '\'
0x82F567: cmp     dword ptr [eax], 0
0x82F56A: jnz     short loc_82F571
0x82F56C: call    sub_772560
0x82F571: push    2
0x82F573: push    1
0x82F575: push    0
0x82F577: push    edi
0x82F578: call    sub_801110
0x82F57D: add     esp, 10h
0x82F580: push    edi; a3
0x82F581: push    0; a2
0x82F583: mov     ecx, esi; this
0x82F585: call    sub_760010
0x82F58A: lea     eax, [esp+2Ch+var_10]
0x82F58E: push    eax
0x82F58F: call    sub_772630
0x82F594: add     esp, 4
0x82F597: mov     ebp, eax
0x82F599: cmp     edi, [ebp+0]
0x82F59C: mov     byte ptr [esp+2Ch+var_4], 2Dh ; '-'
0x82F5A1: jz      short loc_82F5C3
0x82F5A3: test    edi, edi
0x82F5A5: jz      short loc_82F5B4
0x82F5A7: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x82F5AB: jnz     short loc_82F5B4
0x82F5AD: mov     ecx, edi
0x82F5AF: call    sub_772560
0x82F5B4: mov     edi, [ebp+0]
0x82F5B7: test    edi, edi
0x82F5B9: mov     [esp+2Ch+a3], edi
0x82F5BD: jz      short loc_82F5C3
0x82F5BF: add     dword ptr [edi+5Ch], 1
0x82F5C3: mov     eax, [esp+2Ch+var_10]
0x82F5C7: test    eax, eax
0x82F5C9: mov     byte ptr [esp+2Ch+var_4], 1
0x82F5CE: jz      short loc_82F5E3
0x82F5D0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F5D4: mov     ecx, eax
0x82F5D6: add     eax, 5Ch ; '\'
0x82F5D9: cmp     dword ptr [eax], 0
0x82F5DC: jnz     short loc_82F5E3
0x82F5DE: call    sub_772560
0x82F5E3: push    2
0x82F5E5: push    1
0x82F5E7: push    1
0x82F5E9: push    edi
0x82F5EA: call    sub_801110
0x82F5EF: add     esp, 10h
0x82F5F2: push    edi; a3
0x82F5F3: push    1; a2
0x82F5F5: mov     ecx, esi; this
0x82F5F7: call    sub_760010
0x82F5FC: lea     ecx, [esp+2Ch+var_10]
0x82F600: push    ecx
0x82F601: call    sub_772630
0x82F606: add     esp, 4
0x82F609: push    eax
0x82F60A: lea     ecx, [esp+30h+a3]
0x82F60E: mov     byte ptr [esp+30h+var_4], 2Eh ; '.'
0x82F613: call    sub_75FAE0
0x82F618: mov     eax, [esp+2Ch+var_10]
0x82F61C: test    eax, eax
0x82F61E: mov     byte ptr [esp+2Ch+var_4], 1
0x82F623: jz      short loc_82F638
0x82F625: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F629: mov     ecx, eax
0x82F62B: add     eax, 5Ch ; '\'
0x82F62E: cmp     dword ptr [eax], 0
0x82F631: jnz     short loc_82F638
0x82F633: call    sub_772560
0x82F638: mov     edi, [esp+2Ch+a3]
0x82F63C: push    2
0x82F63E: push    1
0x82F640: push    2
0x82F642: push    edi
0x82F643: call    sub_801110
0x82F648: add     esp, 10h
0x82F64B: push    edi; a3
0x82F64C: push    2; a2
0x82F64E: mov     ecx, esi; this
0x82F650: call    sub_760010
0x82F655: lea     edx, [esp+2Ch+var_10]
0x82F659: push    edx
0x82F65A: call    sub_772630
0x82F65F: add     esp, 4
0x82F662: push    eax
0x82F663: lea     ecx, [esp+30h+a3]
0x82F667: mov     byte ptr [esp+30h+var_4], 2Fh ; '/'
0x82F66C: call    sub_75FAE0
0x82F671: mov     eax, [esp+2Ch+var_10]
0x82F675: test    eax, eax
0x82F677: mov     byte ptr [esp+2Ch+var_4], 1
0x82F67C: jz      short loc_82F691
0x82F67E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F682: mov     ecx, eax
0x82F684: add     eax, 5Ch ; '\'
0x82F687: cmp     dword ptr [eax], 0
0x82F68A: jnz     short loc_82F691
0x82F68C: call    sub_772560
0x82F691: mov     edi, [esp+2Ch+a3]
0x82F695: push    2
0x82F697: push    1
0x82F699: push    3
0x82F69B: push    edi
0x82F69C: call    sub_801110
0x82F6A1: add     esp, 10h
0x82F6A4: push    edi; a3
0x82F6A5: push    3; a2
0x82F6A7: mov     ecx, esi; this
0x82F6A9: call    sub_760010
0x82F6AE: lea     eax, [esp+2Ch+var_10]
0x82F6B2: push    eax
0x82F6B3: call    sub_772630
0x82F6B8: add     esp, 4
0x82F6BB: push    eax
0x82F6BC: lea     ecx, [esp+30h+a3]
0x82F6C0: mov     byte ptr [esp+30h+var_4], 30h ; '0'
0x82F6C5: call    sub_75FAE0
0x82F6CA: mov     eax, [esp+2Ch+var_10]
0x82F6CE: test    eax, eax
0x82F6D0: mov     byte ptr [esp+2Ch+var_4], 1
0x82F6D5: jz      short loc_82F6EA
0x82F6D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F6DB: mov     ecx, eax
0x82F6DD: add     eax, 5Ch ; '\'
0x82F6E0: cmp     dword ptr [eax], 0
0x82F6E3: jnz     short loc_82F6EA
0x82F6E5: call    sub_772560
0x82F6EA: mov     edi, [esp+2Ch+a3]
0x82F6EE: push    0
0x82F6F0: push    3
0x82F6F2: push    4
0x82F6F4: push    edi
0x82F6F5: call    sub_801110
0x82F6FA: mov     ecx, ds:0B43110h
0x82F700: add     esp, 10h
0x82F703: push    ecx; a2
0x82F704: mov     ecx, edi; this
0x82F706: call    sub_76C910
0x82F70B: push    edi; a3
0x82F70C: push    4; a2
0x82F70E: mov     ecx, esi; this
0x82F710: call    sub_760010
0x82F715: lea     edx, [esp+2Ch+var_10]
0x82F719: push    edx
0x82F71A: call    sub_772630
0x82F71F: add     esp, 4
0x82F722: push    eax
0x82F723: lea     ecx, [esp+30h+a3]
0x82F727: mov     byte ptr [esp+30h+var_4], 31h ; '1'
0x82F72C: call    sub_75FAE0
0x82F731: mov     eax, [esp+2Ch+var_10]
0x82F735: test    eax, eax
0x82F737: mov     byte ptr [esp+2Ch+var_4], 1
0x82F73C: jz      short loc_82F751
0x82F73E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F742: mov     ecx, eax
0x82F744: add     eax, 5Ch ; '\'
0x82F747: cmp     dword ptr [eax], 0
0x82F74A: jnz     short loc_82F751
0x82F74C: call    sub_772560
0x82F751: mov     edi, [esp+2Ch+a3]
0x82F755: push    2
0x82F757: push    1
0x82F759: push    5
0x82F75B: push    edi
0x82F75C: call    sub_801110
0x82F761: add     esp, 10h
0x82F764: push    edi; a3
0x82F765: push    5; a2
0x82F767: mov     ecx, esi; this
0x82F769: call    sub_760010
0x82F76E: lea     eax, [esp+2Ch+var_10]
0x82F772: push    eax
0x82F773: call    sub_772630
0x82F778: add     esp, 4
0x82F77B: push    eax
0x82F77C: lea     ecx, [esp+30h+a3]
0x82F780: mov     byte ptr [esp+30h+var_4], 32h ; '2'
0x82F785: call    sub_75FAE0
0x82F78A: mov     eax, [esp+2Ch+var_10]
0x82F78E: test    eax, eax
0x82F790: mov     byte ptr [esp+2Ch+var_4], 1
0x82F795: jz      short loc_82F7AA
0x82F797: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F79B: mov     ecx, eax
0x82F79D: add     eax, 5Ch ; '\'
0x82F7A0: cmp     dword ptr [eax], 0
0x82F7A3: jnz     short loc_82F7AA
0x82F7A5: call    sub_772560
0x82F7AA: mov     edi, [esp+2Ch+a3]
0x82F7AE: push    0
0x82F7B0: push    3
0x82F7B2: push    6
0x82F7B4: push    edi
0x82F7B5: call    sub_801110
0x82F7BA: add     esp, 10h
0x82F7BD: push    edi; a3
0x82F7BE: push    6; a2
0x82F7C0: mov     ecx, esi; this
0x82F7C2: call    sub_760010
0x82F7C7: mov     ecx, ds:0B453BCh
0x82F7CD: push    ecx; a2
0x82F7CE: mov     ecx, esi; this
0x82F7D0: call    sub_7AECB0
0x82F7D5: mov     edx, ds:0B451B8h
0x82F7DB: push    edx; a2
0x82F7DC: mov     ecx, esi; this
0x82F7DE: call    sub_7AEC60
0x82F7E3: cmp     dword ptr [esi+30h], 0
0x82F7E7: jnz     short loc_82F7F1
0x82F7E9: call    sub_772DF0
0x82F7EE: mov     [esi+30h], eax
0x82F7F1: mov     ecx, [esi+30h]
0x82F7F4: push    0
0x82F7F6: push    0
0x82F7F8: push    1Bh
0x82F7FA: call    sub_772CD0
0x82F7FF: cmp     dword ptr [esi+30h], 0
0x82F803: jnz     short loc_82F80D
0x82F805: call    sub_772DF0
0x82F80A: mov     [esi+30h], eax
0x82F80D: mov     ecx, [esi+30h]
0x82F810: push    0
0x82F812: push    0
0x82F814: push    0Fh
0x82F816: call    sub_772CD0
0x82F81B: cmp     dword ptr [esi+30h], 0
0x82F81F: jnz     short loc_82F829
0x82F821: call    sub_772DF0
0x82F826: mov     [esi+30h], eax
0x82F829: mov     ecx, [esi+30h]
0x82F82C: push    0
0x82F82E: push    1
0x82F830: push    7
0x82F832: call    sub_772CD0
0x82F837: cmp     dword ptr [esi+30h], 0
0x82F83B: jnz     short loc_82F845
0x82F83D: call    sub_772DF0
0x82F842: mov     [esi+30h], eax
0x82F845: mov     ecx, [esi+30h]
0x82F848: push    0
0x82F84A: push    4
0x82F84C: push    17h
0x82F84E: call    sub_772CD0
0x82F853: cmp     dword ptr [esi+30h], 0
0x82F857: jnz     short loc_82F861
0x82F859: call    sub_772DF0
0x82F85E: mov     [esi+30h], eax
0x82F861: mov     ecx, [esi+30h]
0x82F864: push    0
0x82F866: push    1
0x82F868: push    0Eh
0x82F86A: call    sub_772CD0
0x82F86F: cmp     dword ptr [esi+30h], 0
0x82F873: jnz     short loc_82F87D
0x82F875: call    sub_772DF0
0x82F87A: mov     [esi+30h], eax
0x82F87D: mov     ecx, [esi+30h]
0x82F880: push    0
0x82F882: push    0
0x82F884: push    34h ; '4'
0x82F886: call    sub_772CD0
0x82F88B: cmp     esi, ds:0B45710h
0x82F891: mov     ebp, 610F8h
0x82F896: mov     ds:0B43C88h, ebp
0x82F89C: mov     dword ptr ds:0B44308h, 1Ch
0x82F8A6: mov     dword ptr ds:0B435E8h, 60h ; '`'
0x82F8B0: mov     dword ptr ds:0B44998h, 8
0x82F8BA: jz      short loc_82F8DB
0x82F8BC: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82F8C0: jnz     short loc_82F8C9
0x82F8C2: mov     ecx, esi
0x82F8C4: call    sub_7604D0
0x82F8C9: mov     esi, ds:0B45710h
0x82F8CF: test    esi, esi
0x82F8D1: mov     [esp+2Ch+var_14], esi
0x82F8D5: jz      short loc_82F8DB
0x82F8D7: add     dword ptr [esi+60h], 1
0x82F8DB: cmp     dword ptr [esi+18h], 7
0x82F8DF: jnb     loc_82FB62
0x82F8E5: lea     eax, [esp+2Ch+var_10]
0x82F8E9: push    eax
0x82F8EA: call    sub_772630
0x82F8EF: add     esp, 4
0x82F8F2: push    eax
0x82F8F3: lea     ecx, [esp+30h+a3]
0x82F8F7: mov     byte ptr [esp+30h+var_4], 33h ; '3'
0x82F8FC: call    sub_75FAE0
0x82F901: mov     eax, [esp+2Ch+var_10]
0x82F905: test    eax, eax
0x82F907: mov     byte ptr [esp+2Ch+var_4], 1
0x82F90C: jz      short loc_82F921
0x82F90E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F912: mov     ecx, eax
0x82F914: add     eax, 5Ch ; '\'
0x82F917: cmp     dword ptr [eax], 0
0x82F91A: jnz     short loc_82F921
0x82F91C: call    sub_772560
0x82F921: mov     edi, [esp+2Ch+a3]
0x82F925: push    2
0x82F927: push    1
0x82F929: push    0
0x82F92B: push    edi
0x82F92C: call    sub_801110
0x82F931: add     esp, 10h
0x82F934: push    edi; a3
0x82F935: push    0; a2
0x82F937: mov     ecx, esi; this
0x82F939: call    sub_760010
0x82F93E: lea     ecx, [esp+2Ch+var_10]
0x82F942: push    ecx
0x82F943: call    sub_772630
0x82F948: add     esp, 4
0x82F94B: push    eax
0x82F94C: lea     ecx, [esp+30h+a3]
0x82F950: mov     byte ptr [esp+30h+var_4], 34h ; '4'
0x82F955: call    sub_75FAE0
0x82F95A: mov     eax, [esp+2Ch+var_10]
0x82F95E: test    eax, eax
0x82F960: mov     byte ptr [esp+2Ch+var_4], 1
0x82F965: jz      short loc_82F97A
0x82F967: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F96B: mov     ecx, eax
0x82F96D: add     eax, 5Ch ; '\'
0x82F970: cmp     dword ptr [eax], 0
0x82F973: jnz     short loc_82F97A
0x82F975: call    sub_772560
0x82F97A: mov     edi, [esp+2Ch+a3]
0x82F97E: push    2
0x82F980: push    1
0x82F982: push    1
0x82F984: push    edi
0x82F985: call    sub_801110
0x82F98A: add     esp, 10h
0x82F98D: push    edi; a3
0x82F98E: push    1; a2
0x82F990: mov     ecx, esi; this
0x82F992: call    sub_760010
0x82F997: lea     edx, [esp+2Ch+var_10]
0x82F99B: push    edx
0x82F99C: call    sub_772630
0x82F9A1: add     esp, 4
0x82F9A4: push    eax
0x82F9A5: lea     ecx, [esp+30h+a3]
0x82F9A9: mov     byte ptr [esp+30h+var_4], 35h ; '5'
0x82F9AE: call    sub_75FAE0
0x82F9B3: mov     eax, [esp+2Ch+var_10]
0x82F9B7: test    eax, eax
0x82F9B9: mov     byte ptr [esp+2Ch+var_4], 1
0x82F9BE: jz      short loc_82F9D3
0x82F9C0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82F9C4: mov     ecx, eax
0x82F9C6: add     eax, 5Ch ; '\'
0x82F9C9: cmp     dword ptr [eax], 0
0x82F9CC: jnz     short loc_82F9D3
0x82F9CE: call    sub_772560
0x82F9D3: mov     edi, [esp+2Ch+a3]
0x82F9D7: push    2
0x82F9D9: push    1
0x82F9DB: push    2
0x82F9DD: push    edi
0x82F9DE: call    sub_801110
0x82F9E3: add     esp, 10h
0x82F9E6: push    edi; a3
0x82F9E7: push    2; a2
0x82F9E9: mov     ecx, esi; this
0x82F9EB: call    sub_760010
0x82F9F0: lea     eax, [esp+2Ch+var_10]
0x82F9F4: push    eax
0x82F9F5: call    sub_772630
0x82F9FA: add     esp, 4
0x82F9FD: push    eax
0x82F9FE: lea     ecx, [esp+30h+a3]
0x82FA02: mov     byte ptr [esp+30h+var_4], 36h ; '6'
0x82FA07: call    sub_75FAE0
0x82FA0C: mov     eax, [esp+2Ch+var_10]
0x82FA10: test    eax, eax
0x82FA12: mov     byte ptr [esp+2Ch+var_4], 1
0x82FA17: jz      short loc_82FA2C
0x82FA19: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FA1D: mov     ecx, eax
0x82FA1F: add     eax, 5Ch ; '\'
0x82FA22: cmp     dword ptr [eax], 0
0x82FA25: jnz     short loc_82FA2C
0x82FA27: call    sub_772560
0x82FA2C: mov     edi, [esp+2Ch+a3]
0x82FA30: push    2
0x82FA32: push    1
0x82FA34: push    3
0x82FA36: push    edi
0x82FA37: call    sub_801110
0x82FA3C: add     esp, 10h
0x82FA3F: push    edi; a3
0x82FA40: push    3; a2
0x82FA42: mov     ecx, esi; this
0x82FA44: call    sub_760010
0x82FA49: lea     ecx, [esp+2Ch+var_10]
0x82FA4D: push    ecx
0x82FA4E: call    sub_772630
0x82FA53: add     esp, 4
0x82FA56: push    eax
0x82FA57: lea     ecx, [esp+30h+a3]
0x82FA5B: mov     byte ptr [esp+30h+var_4], 37h ; '7'
0x82FA60: call    sub_75FAE0
0x82FA65: mov     eax, [esp+2Ch+var_10]
0x82FA69: test    eax, eax
0x82FA6B: mov     byte ptr [esp+2Ch+var_4], 1
0x82FA70: jz      short loc_82FA85
0x82FA72: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FA76: mov     ecx, eax
0x82FA78: add     eax, 5Ch ; '\'
0x82FA7B: cmp     dword ptr [eax], 0
0x82FA7E: jnz     short loc_82FA85
0x82FA80: call    sub_772560
0x82FA85: mov     edi, [esp+2Ch+a3]
0x82FA89: push    0
0x82FA8B: push    3
0x82FA8D: push    4
0x82FA8F: push    edi
0x82FA90: call    sub_801110
0x82FA95: mov     edx, ds:0B43110h
0x82FA9B: add     esp, 10h
0x82FA9E: push    edx; a2
0x82FA9F: mov     ecx, edi; this
0x82FAA1: call    sub_76C910
0x82FAA6: push    edi; a3
0x82FAA7: push    4; a2
0x82FAA9: mov     ecx, esi; this
0x82FAAB: call    sub_760010
0x82FAB0: lea     eax, [esp+2Ch+var_10]
0x82FAB4: push    eax
0x82FAB5: call    sub_772630
0x82FABA: add     esp, 4
0x82FABD: push    eax
0x82FABE: lea     ecx, [esp+30h+a3]
0x82FAC2: mov     byte ptr [esp+30h+var_4], 38h ; '8'
0x82FAC7: call    sub_75FAE0
0x82FACC: mov     eax, [esp+2Ch+var_10]
0x82FAD0: test    eax, eax
0x82FAD2: mov     byte ptr [esp+2Ch+var_4], 1
0x82FAD7: jz      short loc_82FAEC
0x82FAD9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FADD: mov     ecx, eax
0x82FADF: add     eax, 5Ch ; '\'
0x82FAE2: cmp     dword ptr [eax], 0
0x82FAE5: jnz     short loc_82FAEC
0x82FAE7: call    sub_772560
0x82FAEC: mov     edi, [esp+2Ch+a3]
0x82FAF0: push    2
0x82FAF2: push    1
0x82FAF4: push    5
0x82FAF6: push    edi
0x82FAF7: call    sub_801110
0x82FAFC: add     esp, 10h
0x82FAFF: push    edi; a3
0x82FB00: push    5; a2
0x82FB02: mov     ecx, esi; this
0x82FB04: call    sub_760010
0x82FB09: lea     ecx, [esp+2Ch+var_10]
0x82FB0D: push    ecx
0x82FB0E: call    sub_772630
0x82FB13: add     esp, 4
0x82FB16: push    eax
0x82FB17: lea     ecx, [esp+30h+a3]
0x82FB1B: mov     byte ptr [esp+30h+var_4], 39h ; '9'
0x82FB20: call    sub_75FAE0
0x82FB25: mov     eax, [esp+2Ch+var_10]
0x82FB29: test    eax, eax
0x82FB2B: mov     byte ptr [esp+2Ch+var_4], 1
0x82FB30: jz      short loc_82FB45
0x82FB32: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FB36: mov     ecx, eax
0x82FB38: add     eax, 5Ch ; '\'
0x82FB3B: cmp     dword ptr [eax], 0
0x82FB3E: jnz     short loc_82FB45
0x82FB40: call    sub_772560
0x82FB45: mov     edi, [esp+2Ch+a3]
0x82FB49: push    0
0x82FB4B: push    3
0x82FB4D: push    6
0x82FB4F: push    edi
0x82FB50: call    sub_801110
0x82FB55: add     esp, 10h
0x82FB58: push    edi; a3
0x82FB59: push    6; a2
0x82FB5B: mov     ecx, esi; this
0x82FB5D: call    sub_760010
0x82FB62: mov     edx, ds:0B453BCh
0x82FB68: push    edx; a2
0x82FB69: mov     ecx, esi; this
0x82FB6B: call    sub_7AECB0
0x82FB70: mov     eax, ds:0B451BCh
0x82FB75: push    eax; a2
0x82FB76: mov     ecx, esi; this
0x82FB78: call    sub_7AEC60
0x82FB7D: cmp     dword ptr [esi+30h], 0
0x82FB81: jnz     short loc_82FB8B
0x82FB83: call    sub_772DF0
0x82FB88: mov     [esi+30h], eax
0x82FB8B: mov     ecx, [esi+30h]
0x82FB8E: push    0
0x82FB90: push    0
0x82FB92: push    1Bh
0x82FB94: call    sub_772CD0
0x82FB99: cmp     dword ptr [esi+30h], 0
0x82FB9D: jnz     short loc_82FBA7
0x82FB9F: call    sub_772DF0
0x82FBA4: mov     [esi+30h], eax
0x82FBA7: mov     ecx, [esi+30h]
0x82FBAA: push    0
0x82FBAC: push    0
0x82FBAE: push    0Fh
0x82FBB0: call    sub_772CD0
0x82FBB5: cmp     dword ptr [esi+30h], 0
0x82FBB9: jnz     short loc_82FBC3
0x82FBBB: call    sub_772DF0
0x82FBC0: mov     [esi+30h], eax
0x82FBC3: mov     ecx, [esi+30h]
0x82FBC6: push    0
0x82FBC8: push    1
0x82FBCA: push    7
0x82FBCC: call    sub_772CD0
0x82FBD1: cmp     dword ptr [esi+30h], 0
0x82FBD5: jnz     short loc_82FBDF
0x82FBD7: call    sub_772DF0
0x82FBDC: mov     [esi+30h], eax
0x82FBDF: mov     ecx, [esi+30h]
0x82FBE2: push    0
0x82FBE4: push    4
0x82FBE6: push    17h
0x82FBE8: call    sub_772CD0
0x82FBED: cmp     dword ptr [esi+30h], 0
0x82FBF1: jnz     short loc_82FBFB
0x82FBF3: call    sub_772DF0
0x82FBF8: mov     [esi+30h], eax
0x82FBFB: mov     ecx, [esi+30h]
0x82FBFE: push    0
0x82FC00: push    1
0x82FC02: push    0Eh
0x82FC04: call    sub_772CD0
0x82FC09: cmp     dword ptr [esi+30h], 0
0x82FC0D: jnz     short loc_82FC17
0x82FC0F: call    sub_772DF0
0x82FC14: mov     [esi+30h], eax
0x82FC17: mov     ecx, [esi+30h]
0x82FC1A: push    0
0x82FC1C: push    0
0x82FC1E: push    34h ; '4'
0x82FC20: call    sub_772CD0
0x82FC25: cmp     esi, ds:0B45720h
0x82FC2B: mov     ds:0B43C90h, ebp
0x82FC31: mov     ds:0B44320h, ebx
0x82FC37: mov     dword ptr ds:0B43600h, 60h ; '`'
0x82FC41: mov     dword ptr ds:0B449B0h, 0Ch
0x82FC4B: jz      short loc_82FC6C
0x82FC4D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82FC51: jnz     short loc_82FC5A
0x82FC53: mov     ecx, esi
0x82FC55: call    sub_7604D0
0x82FC5A: mov     esi, ds:0B45720h
0x82FC60: test    esi, esi
0x82FC62: mov     [esp+2Ch+var_14], esi
0x82FC66: jz      short loc_82FC6C
0x82FC68: add     dword ptr [esi+60h], 1
0x82FC6C: mov     eax, [esi+18h]
0x82FC6F: cmp     eax, 7
0x82FC72: jnb     loc_82FEF4
0x82FC78: lea     ecx, [esp+2Ch+var_10]
0x82FC7C: push    ecx
0x82FC7D: call    sub_772630
0x82FC82: add     esp, 4
0x82FC85: push    eax
0x82FC86: lea     ecx, [esp+30h+a3]
0x82FC8A: mov     byte ptr [esp+30h+var_4], 3Ah ; ':'
0x82FC8F: call    sub_75FAE0
0x82FC94: mov     eax, [esp+2Ch+var_10]
0x82FC98: test    eax, eax
0x82FC9A: mov     byte ptr [esp+2Ch+var_4], 1
0x82FC9F: jz      short loc_82FCB4
0x82FCA1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FCA5: mov     ecx, eax
0x82FCA7: add     eax, 5Ch ; '\'
0x82FCAA: cmp     dword ptr [eax], 0
0x82FCAD: jnz     short loc_82FCB4
0x82FCAF: call    sub_772560
0x82FCB4: mov     edi, [esp+2Ch+a3]
0x82FCB8: push    2
0x82FCBA: push    1
0x82FCBC: push    0
0x82FCBE: push    edi
0x82FCBF: call    sub_801110
0x82FCC4: add     esp, 10h
0x82FCC7: push    edi; a3
0x82FCC8: push    0; a2
0x82FCCA: mov     ecx, esi; this
0x82FCCC: call    sub_760010
0x82FCD1: lea     edx, [esp+2Ch+var_10]
0x82FCD5: push    edx
0x82FCD6: call    sub_772630
0x82FCDB: add     esp, 4
0x82FCDE: push    eax
0x82FCDF: lea     ecx, [esp+30h+a3]
0x82FCE3: mov     byte ptr [esp+30h+var_4], 3Bh ; ';'
0x82FCE8: call    sub_75FAE0
0x82FCED: mov     eax, [esp+2Ch+var_10]
0x82FCF1: test    eax, eax
0x82FCF3: mov     byte ptr [esp+2Ch+var_4], 1
0x82FCF8: jz      short loc_82FD0D
0x82FCFA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FCFE: mov     ecx, eax
0x82FD00: add     eax, 5Ch ; '\'
0x82FD03: cmp     dword ptr [eax], 0
0x82FD06: jnz     short loc_82FD0D
0x82FD08: call    sub_772560
0x82FD0D: mov     edi, [esp+2Ch+a3]
0x82FD11: push    2
0x82FD13: push    1
0x82FD15: push    1
0x82FD17: push    edi
0x82FD18: call    sub_801110
0x82FD1D: add     esp, 10h
0x82FD20: push    edi; a3
0x82FD21: push    1; a2
0x82FD23: mov     ecx, esi; this
0x82FD25: call    sub_760010
0x82FD2A: lea     eax, [esp+2Ch+var_10]
0x82FD2E: push    eax
0x82FD2F: call    sub_772630
0x82FD34: add     esp, 4
0x82FD37: push    eax
0x82FD38: lea     ecx, [esp+30h+a3]
0x82FD3C: mov     byte ptr [esp+30h+var_4], 3Ch ; '<'
0x82FD41: call    sub_75FAE0
0x82FD46: mov     eax, [esp+2Ch+var_10]
0x82FD4A: test    eax, eax
0x82FD4C: mov     byte ptr [esp+2Ch+var_4], 1
0x82FD51: jz      short loc_82FD66
0x82FD53: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FD57: mov     ecx, eax
0x82FD59: add     eax, 5Ch ; '\'
0x82FD5C: cmp     dword ptr [eax], 0
0x82FD5F: jnz     short loc_82FD66
0x82FD61: call    sub_772560
0x82FD66: mov     edi, [esp+2Ch+a3]
0x82FD6A: push    2
0x82FD6C: push    1
0x82FD6E: push    2
0x82FD70: push    edi
0x82FD71: call    sub_801110
0x82FD76: add     esp, 10h
0x82FD79: push    edi; a3
0x82FD7A: push    2; a2
0x82FD7C: mov     ecx, esi; this
0x82FD7E: call    sub_760010
0x82FD83: lea     ecx, [esp+2Ch+var_10]
0x82FD87: push    ecx
0x82FD88: call    sub_772630
0x82FD8D: add     esp, 4
0x82FD90: push    eax
0x82FD91: lea     ecx, [esp+30h+a3]
0x82FD95: mov     byte ptr [esp+30h+var_4], 3Dh ; '='
0x82FD9A: call    sub_75FAE0
0x82FD9F: mov     eax, [esp+2Ch+var_10]
0x82FDA3: test    eax, eax
0x82FDA5: mov     byte ptr [esp+2Ch+var_4], 1
0x82FDAA: jz      short loc_82FDBF
0x82FDAC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FDB0: mov     ecx, eax
0x82FDB2: add     eax, 5Ch ; '\'
0x82FDB5: cmp     dword ptr [eax], 0
0x82FDB8: jnz     short loc_82FDBF
0x82FDBA: call    sub_772560
0x82FDBF: mov     edi, [esp+2Ch+a3]
0x82FDC3: push    2
0x82FDC5: push    1
0x82FDC7: push    3
0x82FDC9: push    edi
0x82FDCA: call    sub_801110
0x82FDCF: add     esp, 10h
0x82FDD2: push    edi; a3
0x82FDD3: push    3; a2
0x82FDD5: mov     ecx, esi; this
0x82FDD7: call    sub_760010
0x82FDDC: lea     edx, [esp+2Ch+var_10]
0x82FDE0: push    edx
0x82FDE1: call    sub_772630
0x82FDE6: add     esp, 4
0x82FDE9: push    eax
0x82FDEA: lea     ecx, [esp+30h+a3]
0x82FDEE: mov     byte ptr [esp+30h+var_4], 3Eh ; '>'
0x82FDF3: call    sub_75FAE0
0x82FDF8: mov     eax, [esp+2Ch+var_10]
0x82FDFC: test    eax, eax
0x82FDFE: mov     byte ptr [esp+2Ch+var_4], 1
0x82FE03: jz      short loc_82FE18
0x82FE05: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FE09: mov     ecx, eax
0x82FE0B: add     eax, 5Ch ; '\'
0x82FE0E: cmp     dword ptr [eax], 0
0x82FE11: jnz     short loc_82FE18
0x82FE13: call    sub_772560
0x82FE18: mov     edi, [esp+2Ch+a3]
0x82FE1C: push    0
0x82FE1E: push    3
0x82FE20: push    4
0x82FE22: push    edi
0x82FE23: call    sub_801110
0x82FE28: mov     eax, ds:0B43110h
0x82FE2D: add     esp, 10h
0x82FE30: push    eax; a2
0x82FE31: mov     ecx, edi; this
0x82FE33: call    sub_76C910
0x82FE38: push    edi; a3
0x82FE39: push    4; a2
0x82FE3B: mov     ecx, esi; this
0x82FE3D: call    sub_760010
0x82FE42: lea     ecx, [esp+2Ch+var_10]
0x82FE46: push    ecx
0x82FE47: call    sub_772630
0x82FE4C: add     esp, 4
0x82FE4F: push    eax
0x82FE50: lea     ecx, [esp+30h+a3]
0x82FE54: mov     byte ptr [esp+30h+var_4], 3Fh ; '?'
0x82FE59: call    sub_75FAE0
0x82FE5E: mov     eax, [esp+2Ch+var_10]
0x82FE62: test    eax, eax
0x82FE64: mov     byte ptr [esp+2Ch+var_4], 1
0x82FE69: jz      short loc_82FE7E
0x82FE6B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FE6F: mov     ecx, eax
0x82FE71: add     eax, 5Ch ; '\'
0x82FE74: cmp     dword ptr [eax], 0
0x82FE77: jnz     short loc_82FE7E
0x82FE79: call    sub_772560
0x82FE7E: mov     edi, [esp+2Ch+a3]
0x82FE82: push    2
0x82FE84: push    1
0x82FE86: push    5
0x82FE88: push    edi
0x82FE89: call    sub_801110
0x82FE8E: add     esp, 10h
0x82FE91: push    edi; a3
0x82FE92: push    5; a2
0x82FE94: mov     ecx, esi; this
0x82FE96: call    sub_760010
0x82FE9B: lea     edx, [esp+2Ch+var_10]
0x82FE9F: push    edx
0x82FEA0: call    sub_772630
0x82FEA5: add     esp, 4
0x82FEA8: push    eax
0x82FEA9: lea     ecx, [esp+30h+a3]
0x82FEAD: mov     byte ptr [esp+30h+var_4], 40h ; '@'
0x82FEB2: call    sub_75FAE0
0x82FEB7: mov     eax, [esp+2Ch+var_10]
0x82FEBB: test    eax, eax
0x82FEBD: mov     byte ptr [esp+2Ch+var_4], 1
0x82FEC2: jz      short loc_82FED7
0x82FEC4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82FEC8: mov     ecx, eax
0x82FECA: add     eax, 5Ch ; '\'
0x82FECD: cmp     dword ptr [eax], 0
0x82FED0: jnz     short loc_82FED7
0x82FED2: call    sub_772560
0x82FED7: mov     edi, [esp+2Ch+a3]
0x82FEDB: push    0
0x82FEDD: push    3
0x82FEDF: push    6
0x82FEE1: push    edi
0x82FEE2: call    sub_801110
0x82FEE7: add     esp, 10h
0x82FEEA: push    edi; a3
0x82FEEB: push    6; a2
0x82FEED: mov     ecx, esi; this
0x82FEEF: call    sub_760010
0x82FEF4: mov     eax, ds:0B453C0h
0x82FEF9: push    eax; a2
0x82FEFA: mov     ecx, esi; this
0x82FEFC: call    sub_7AECB0
0x82FF01: mov     ecx, ds:0B451C0h
0x82FF07: push    ecx; a2
0x82FF08: mov     ecx, esi; this
0x82FF0A: call    sub_7AEC60
0x82FF0F: cmp     dword ptr [esi+30h], 0
0x82FF13: jnz     short loc_82FF1D
0x82FF15: call    sub_772DF0
0x82FF1A: mov     [esi+30h], eax
0x82FF1D: mov     ecx, [esi+30h]
0x82FF20: push    0
0x82FF22: push    0
0x82FF24: push    1Bh
0x82FF26: call    sub_772CD0
0x82FF2B: cmp     dword ptr [esi+30h], 0
0x82FF2F: jnz     short loc_82FF39
0x82FF31: call    sub_772DF0
0x82FF36: mov     [esi+30h], eax
0x82FF39: mov     ecx, [esi+30h]
0x82FF3C: push    0
0x82FF3E: push    0
0x82FF40: push    0Fh
0x82FF42: call    sub_772CD0
0x82FF47: cmp     dword ptr [esi+30h], 0
0x82FF4B: jnz     short loc_82FF55
0x82FF4D: call    sub_772DF0
0x82FF52: mov     [esi+30h], eax
0x82FF55: mov     ecx, [esi+30h]
0x82FF58: push    0
0x82FF5A: push    1
0x82FF5C: push    7
0x82FF5E: call    sub_772CD0
0x82FF63: cmp     dword ptr [esi+30h], 0
0x82FF67: jnz     short loc_82FF71
0x82FF69: call    sub_772DF0
0x82FF6E: mov     [esi+30h], eax
0x82FF71: mov     ecx, [esi+30h]
0x82FF74: push    0
0x82FF76: push    4
0x82FF78: push    17h
0x82FF7A: call    sub_772CD0
0x82FF7F: cmp     dword ptr [esi+30h], 0
0x82FF83: jnz     short loc_82FF8D
0x82FF85: call    sub_772DF0
0x82FF8A: mov     [esi+30h], eax
0x82FF8D: mov     ecx, [esi+30h]
0x82FF90: push    0
0x82FF92: push    1
0x82FF94: push    0Eh
0x82FF96: call    sub_772CD0
0x82FF9B: cmp     dword ptr [esi+30h], 0
0x82FF9F: jnz     short loc_82FFA9
0x82FFA1: call    sub_772DF0
0x82FFA6: mov     [esi+30h], eax
0x82FFA9: mov     ecx, [esi+30h]
0x82FFAC: push    0
0x82FFAE: push    0
0x82FFB0: push    34h ; '4'
0x82FFB2: call    sub_772CD0
0x82FFB7: cmp     esi, ds:0B45724h
0x82FFBD: mov     ebp, 23082h
0x82FFC2: mov     ebx, 8
0x82FFC7: mov     ds:0B43CA0h, ebp
0x82FFCD: mov     dword ptr ds:0B44330h, 3Ch ; '<'
0x82FFD7: mov     ds:0B449C0h, ebx
0x82FFDD: jz      short loc_82FFFE
0x82FFDF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82FFE3: jnz     short loc_82FFEC
0x82FFE5: mov     ecx, esi
0x82FFE7: call    sub_7604D0
0x82FFEC: mov     esi, ds:0B45724h
0x82FFF2: test    esi, esi
0x82FFF4: mov     [esp+2Ch+var_14], esi
0x82FFF8: jz      short loc_82FFFE
0x82FFFA: add     dword ptr [esi+60h], 1
0x82FFFE: cmp     dword ptr [esi+18h], 7
0x830002: jnb     loc_830285
0x830008: lea     edx, [esp+2Ch+var_10]
0x83000C: push    edx
0x83000D: call    sub_772630
0x830012: add     esp, 4
0x830015: push    eax
0x830016: lea     ecx, [esp+30h+a3]
0x83001A: mov     byte ptr [esp+30h+var_4], 41h ; 'A'
0x83001F: call    sub_75FAE0
0x830024: mov     eax, [esp+2Ch+var_10]
0x830028: test    eax, eax
0x83002A: mov     byte ptr [esp+2Ch+var_4], 1
0x83002F: jz      short loc_830044
0x830031: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830035: mov     ecx, eax
0x830037: add     eax, 5Ch ; '\'
0x83003A: cmp     dword ptr [eax], 0
0x83003D: jnz     short loc_830044
0x83003F: call    sub_772560
0x830044: mov     edi, [esp+2Ch+a3]
0x830048: push    2
0x83004A: push    1
0x83004C: push    0
0x83004E: push    edi
0x83004F: call    sub_801110
0x830054: add     esp, 10h
0x830057: push    edi; a3
0x830058: push    0; a2
0x83005A: mov     ecx, esi; this
0x83005C: call    sub_760010
0x830061: lea     eax, [esp+2Ch+var_10]
0x830065: push    eax
0x830066: call    sub_772630
0x83006B: add     esp, 4
0x83006E: push    eax
0x83006F: lea     ecx, [esp+30h+a3]
0x830073: mov     byte ptr [esp+30h+var_4], 42h ; 'B'
0x830078: call    sub_75FAE0
0x83007D: mov     eax, [esp+2Ch+var_10]
0x830081: test    eax, eax
0x830083: mov     byte ptr [esp+2Ch+var_4], 1
0x830088: jz      short loc_83009D
0x83008A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83008E: mov     ecx, eax
0x830090: add     eax, 5Ch ; '\'
0x830093: cmp     dword ptr [eax], 0
0x830096: jnz     short loc_83009D
0x830098: call    sub_772560
0x83009D: mov     edi, [esp+2Ch+a3]
0x8300A1: push    2
0x8300A3: push    1
0x8300A5: push    1
0x8300A7: push    edi
0x8300A8: call    sub_801110
0x8300AD: add     esp, 10h
0x8300B0: push    edi; a3
0x8300B1: push    1; a2
0x8300B3: mov     ecx, esi; this
0x8300B5: call    sub_760010
0x8300BA: lea     ecx, [esp+2Ch+var_10]
0x8300BE: push    ecx
0x8300BF: call    sub_772630
0x8300C4: add     esp, 4
0x8300C7: push    eax
0x8300C8: lea     ecx, [esp+30h+a3]
0x8300CC: mov     byte ptr [esp+30h+var_4], 43h ; 'C'
0x8300D1: call    sub_75FAE0
0x8300D6: mov     eax, [esp+2Ch+var_10]
0x8300DA: test    eax, eax
0x8300DC: mov     byte ptr [esp+2Ch+var_4], 1
0x8300E1: jz      short loc_8300F6
0x8300E3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8300E7: mov     ecx, eax
0x8300E9: add     eax, 5Ch ; '\'
0x8300EC: cmp     dword ptr [eax], 0
0x8300EF: jnz     short loc_8300F6
0x8300F1: call    sub_772560
0x8300F6: mov     edi, [esp+2Ch+a3]
0x8300FA: push    2
0x8300FC: push    1
0x8300FE: push    2
0x830100: push    edi
0x830101: call    sub_801110
0x830106: add     esp, 10h
0x830109: push    edi; a3
0x83010A: push    2; a2
0x83010C: mov     ecx, esi; this
0x83010E: call    sub_760010
0x830113: lea     edx, [esp+2Ch+var_10]
0x830117: push    edx
0x830118: call    sub_772630
0x83011D: add     esp, 4
0x830120: push    eax
0x830121: lea     ecx, [esp+30h+a3]
0x830125: mov     byte ptr [esp+30h+var_4], 44h ; 'D'
0x83012A: call    sub_75FAE0
0x83012F: mov     eax, [esp+2Ch+var_10]
0x830133: test    eax, eax
0x830135: mov     byte ptr [esp+2Ch+var_4], 1
0x83013A: jz      short loc_83014F
0x83013C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830140: mov     ecx, eax
0x830142: add     eax, 5Ch ; '\'
0x830145: cmp     dword ptr [eax], 0
0x830148: jnz     short loc_83014F
0x83014A: call    sub_772560
0x83014F: mov     edi, [esp+2Ch+a3]
0x830153: push    2
0x830155: push    1
0x830157: push    3
0x830159: push    edi
0x83015A: call    sub_801110
0x83015F: add     esp, 10h
0x830162: push    edi; a3
0x830163: push    3; a2
0x830165: mov     ecx, esi; this
0x830167: call    sub_760010
0x83016C: lea     eax, [esp+2Ch+var_10]
0x830170: push    eax
0x830171: call    sub_772630
0x830176: add     esp, 4
0x830179: push    eax
0x83017A: lea     ecx, [esp+30h+a3]
0x83017E: mov     byte ptr [esp+30h+var_4], 45h ; 'E'
0x830183: call    sub_75FAE0
0x830188: mov     eax, [esp+2Ch+var_10]
0x83018C: test    eax, eax
0x83018E: mov     byte ptr [esp+2Ch+var_4], 1
0x830193: jz      short loc_8301A8
0x830195: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830199: mov     ecx, eax
0x83019B: add     eax, 5Ch ; '\'
0x83019E: cmp     dword ptr [eax], 0
0x8301A1: jnz     short loc_8301A8
0x8301A3: call    sub_772560
0x8301A8: mov     edi, [esp+2Ch+a3]
0x8301AC: push    0
0x8301AE: push    3
0x8301B0: push    4
0x8301B2: push    edi
0x8301B3: call    sub_801110
0x8301B8: mov     ecx, ds:0B43110h
0x8301BE: add     esp, 10h
0x8301C1: push    ecx; a2
0x8301C2: mov     ecx, edi; this
0x8301C4: call    sub_76C910
0x8301C9: push    edi; a3
0x8301CA: push    4; a2
0x8301CC: mov     ecx, esi; this
0x8301CE: call    sub_760010
0x8301D3: lea     edx, [esp+2Ch+var_10]
0x8301D7: push    edx
0x8301D8: call    sub_772630
0x8301DD: add     esp, 4
0x8301E0: push    eax
0x8301E1: lea     ecx, [esp+30h+a3]
0x8301E5: mov     byte ptr [esp+30h+var_4], 46h ; 'F'
0x8301EA: call    sub_75FAE0
0x8301EF: mov     eax, [esp+2Ch+var_10]
0x8301F3: test    eax, eax
0x8301F5: mov     byte ptr [esp+2Ch+var_4], 1
0x8301FA: jz      short loc_83020F
0x8301FC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830200: mov     ecx, eax
0x830202: add     eax, 5Ch ; '\'
0x830205: cmp     dword ptr [eax], 0
0x830208: jnz     short loc_83020F
0x83020A: call    sub_772560
0x83020F: mov     edi, [esp+2Ch+a3]
0x830213: push    2
0x830215: push    1
0x830217: push    5
0x830219: push    edi
0x83021A: call    sub_801110
0x83021F: add     esp, 10h
0x830222: push    edi; a3
0x830223: push    5; a2
0x830225: mov     ecx, esi; this
0x830227: call    sub_760010
0x83022C: lea     eax, [esp+2Ch+var_10]
0x830230: push    eax
0x830231: call    sub_772630
0x830236: add     esp, 4
0x830239: push    eax
0x83023A: lea     ecx, [esp+30h+a3]
0x83023E: mov     byte ptr [esp+30h+var_4], 47h ; 'G'
0x830243: call    sub_75FAE0
0x830248: mov     eax, [esp+2Ch+var_10]
0x83024C: test    eax, eax
0x83024E: mov     byte ptr [esp+2Ch+var_4], 1
0x830253: jz      short loc_830268
0x830255: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830259: mov     ecx, eax
0x83025B: add     eax, 5Ch ; '\'
0x83025E: cmp     dword ptr [eax], 0
0x830261: jnz     short loc_830268
0x830263: call    sub_772560
0x830268: mov     edi, [esp+2Ch+a3]
0x83026C: push    0
0x83026E: push    3
0x830270: push    6
0x830272: push    edi
0x830273: call    sub_801110
0x830278: add     esp, 10h
0x83027B: push    edi; a3
0x83027C: push    6; a2
0x83027E: mov     ecx, esi; this
0x830280: call    sub_760010
0x830285: mov     ecx, ds:0B453C0h
0x83028B: push    ecx; a2
0x83028C: mov     ecx, esi; this
0x83028E: call    sub_7AECB0
0x830293: mov     edx, ds:0B451C4h
0x830299: push    edx; a2
0x83029A: mov     ecx, esi; this
0x83029C: call    sub_7AEC60
0x8302A1: cmp     dword ptr [esi+30h], 0
0x8302A5: jnz     short loc_8302AF
0x8302A7: call    sub_772DF0
0x8302AC: mov     [esi+30h], eax
0x8302AF: mov     ecx, [esi+30h]
0x8302B2: push    0
0x8302B4: push    0
0x8302B6: push    1Bh
0x8302B8: call    sub_772CD0
0x8302BD: cmp     dword ptr [esi+30h], 0
0x8302C1: jnz     short loc_8302CB
0x8302C3: call    sub_772DF0
0x8302C8: mov     [esi+30h], eax
0x8302CB: mov     ecx, [esi+30h]
0x8302CE: push    0
0x8302D0: push    0
0x8302D2: push    0Fh
0x8302D4: call    sub_772CD0
0x8302D9: cmp     dword ptr [esi+30h], 0
0x8302DD: jnz     short loc_8302E7
0x8302DF: call    sub_772DF0
0x8302E4: mov     [esi+30h], eax
0x8302E7: mov     ecx, [esi+30h]
0x8302EA: push    0
0x8302EC: push    1
0x8302EE: push    7
0x8302F0: call    sub_772CD0
0x8302F5: cmp     dword ptr [esi+30h], 0
0x8302F9: jnz     short loc_830303
0x8302FB: call    sub_772DF0
0x830300: mov     [esi+30h], eax
0x830303: mov     ecx, [esi+30h]
0x830306: push    0
0x830308: push    4
0x83030A: push    17h
0x83030C: call    sub_772CD0
0x830311: cmp     dword ptr [esi+30h], 0
0x830315: jnz     short loc_83031F
0x830317: call    sub_772DF0
0x83031C: mov     [esi+30h], eax
0x83031F: mov     ecx, [esi+30h]
0x830322: push    0
0x830324: push    1
0x830326: push    0Eh
0x830328: call    sub_772CD0
0x83032D: cmp     dword ptr [esi+30h], 0
0x830331: jnz     short loc_83033B
0x830333: call    sub_772DF0
0x830338: mov     [esi+30h], eax
0x83033B: mov     ecx, [esi+30h]
0x83033E: push    0
0x830340: push    0
0x830342: push    34h ; '4'
0x830344: call    sub_772CD0
0x830349: cmp     esi, ds:0B45734h
0x83034F: mov     ds:0B43CA4h, ebp
0x830355: mov     dword ptr ds:0B44334h, 0BCh ; '¼'
0x83035F: mov     dword ptr ds:0B449C4h, 0Ch
0x830369: jz      short loc_83038A
0x83036B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83036F: jnz     short loc_830378
0x830371: mov     ecx, esi
0x830373: call    sub_7604D0
0x830378: mov     esi, ds:0B45734h
0x83037E: test    esi, esi
0x830380: mov     [esp+2Ch+var_14], esi
0x830384: jz      short loc_83038A
0x830386: add     dword ptr [esi+60h], 1
0x83038A: cmp     dword ptr [esi+18h], 7
0x83038E: jnb     loc_830611
0x830394: lea     eax, [esp+2Ch+var_10]
0x830398: push    eax
0x830399: call    sub_772630
0x83039E: add     esp, 4
0x8303A1: push    eax
0x8303A2: lea     ecx, [esp+30h+a3]
0x8303A6: mov     byte ptr [esp+30h+var_4], 48h ; 'H'
0x8303AB: call    sub_75FAE0
0x8303B0: mov     eax, [esp+2Ch+var_10]
0x8303B4: test    eax, eax
0x8303B6: mov     byte ptr [esp+2Ch+var_4], 1
0x8303BB: jz      short loc_8303D0
0x8303BD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8303C1: mov     ecx, eax
0x8303C3: add     eax, 5Ch ; '\'
0x8303C6: cmp     dword ptr [eax], 0
0x8303C9: jnz     short loc_8303D0
0x8303CB: call    sub_772560
0x8303D0: mov     edi, [esp+2Ch+a3]
0x8303D4: push    2
0x8303D6: push    1
0x8303D8: push    0
0x8303DA: push    edi
0x8303DB: call    sub_801110
0x8303E0: add     esp, 10h
0x8303E3: push    edi; a3
0x8303E4: push    0; a2
0x8303E6: mov     ecx, esi; this
0x8303E8: call    sub_760010
0x8303ED: lea     ecx, [esp+2Ch+var_10]
0x8303F1: push    ecx
0x8303F2: call    sub_772630
0x8303F7: add     esp, 4
0x8303FA: push    eax
0x8303FB: lea     ecx, [esp+30h+a3]
0x8303FF: mov     byte ptr [esp+30h+var_4], 49h ; 'I'
0x830404: call    sub_75FAE0
0x830409: mov     eax, [esp+2Ch+var_10]
0x83040D: test    eax, eax
0x83040F: mov     byte ptr [esp+2Ch+var_4], 1
0x830414: jz      short loc_830429
0x830416: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83041A: mov     ecx, eax
0x83041C: add     eax, 5Ch ; '\'
0x83041F: cmp     dword ptr [eax], 0
0x830422: jnz     short loc_830429
0x830424: call    sub_772560
0x830429: mov     edi, [esp+2Ch+a3]
0x83042D: push    2
0x83042F: push    1
0x830431: push    1
0x830433: push    edi
0x830434: call    sub_801110
0x830439: add     esp, 10h
0x83043C: push    edi; a3
0x83043D: push    1; a2
0x83043F: mov     ecx, esi; this
0x830441: call    sub_760010
0x830446: lea     edx, [esp+2Ch+var_10]
0x83044A: push    edx
0x83044B: call    sub_772630
0x830450: add     esp, 4
0x830453: push    eax
0x830454: lea     ecx, [esp+30h+a3]
0x830458: mov     byte ptr [esp+30h+var_4], 4Ah ; 'J'
0x83045D: call    sub_75FAE0
0x830462: mov     eax, [esp+2Ch+var_10]
0x830466: test    eax, eax
0x830468: mov     byte ptr [esp+2Ch+var_4], 1
0x83046D: jz      short loc_830482
0x83046F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830473: mov     ecx, eax
0x830475: add     eax, 5Ch ; '\'
0x830478: cmp     dword ptr [eax], 0
0x83047B: jnz     short loc_830482
0x83047D: call    sub_772560
0x830482: mov     edi, [esp+2Ch+a3]
0x830486: push    2
0x830488: push    1
0x83048A: push    2
0x83048C: push    edi
0x83048D: call    sub_801110
0x830492: add     esp, 10h
0x830495: push    edi; a3
0x830496: push    2; a2
0x830498: mov     ecx, esi; this
0x83049A: call    sub_760010
0x83049F: lea     eax, [esp+2Ch+var_10]
0x8304A3: push    eax
0x8304A4: call    sub_772630
0x8304A9: add     esp, 4
0x8304AC: push    eax
0x8304AD: lea     ecx, [esp+30h+a3]
0x8304B1: mov     byte ptr [esp+30h+var_4], 4Bh ; 'K'
0x8304B6: call    sub_75FAE0
0x8304BB: mov     eax, [esp+2Ch+var_10]
0x8304BF: test    eax, eax
0x8304C1: mov     byte ptr [esp+2Ch+var_4], 1
0x8304C6: jz      short loc_8304DB
0x8304C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8304CC: mov     ecx, eax
0x8304CE: add     eax, 5Ch ; '\'
0x8304D1: cmp     dword ptr [eax], 0
0x8304D4: jnz     short loc_8304DB
0x8304D6: call    sub_772560
0x8304DB: mov     edi, [esp+2Ch+a3]
0x8304DF: push    2
0x8304E1: push    1
0x8304E3: push    3
0x8304E5: push    edi
0x8304E6: call    sub_801110
0x8304EB: add     esp, 10h
0x8304EE: push    edi; a3
0x8304EF: push    3; a2
0x8304F1: mov     ecx, esi; this
0x8304F3: call    sub_760010
0x8304F8: lea     ecx, [esp+2Ch+var_10]
0x8304FC: push    ecx
0x8304FD: call    sub_772630
0x830502: add     esp, 4
0x830505: push    eax
0x830506: lea     ecx, [esp+30h+a3]
0x83050A: mov     byte ptr [esp+30h+var_4], 4Ch ; 'L'
0x83050F: call    sub_75FAE0
0x830514: mov     eax, [esp+2Ch+var_10]
0x830518: test    eax, eax
0x83051A: mov     byte ptr [esp+2Ch+var_4], 1
0x83051F: jz      short loc_830534
0x830521: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830525: mov     ecx, eax
0x830527: add     eax, 5Ch ; '\'
0x83052A: cmp     dword ptr [eax], 0
0x83052D: jnz     short loc_830534
0x83052F: call    sub_772560
0x830534: mov     edi, [esp+2Ch+a3]
0x830538: push    0
0x83053A: push    3
0x83053C: push    4
0x83053E: push    edi
0x83053F: call    sub_801110
0x830544: mov     edx, ds:0B43110h
0x83054A: add     esp, 10h
0x83054D: push    edx; a2
0x83054E: mov     ecx, edi; this
0x830550: call    sub_76C910
0x830555: push    edi; a3
0x830556: push    4; a2
0x830558: mov     ecx, esi; this
0x83055A: call    sub_760010
0x83055F: lea     eax, [esp+2Ch+var_10]
0x830563: push    eax
0x830564: call    sub_772630
0x830569: add     esp, 4
0x83056C: push    eax
0x83056D: lea     ecx, [esp+30h+a3]
0x830571: mov     byte ptr [esp+30h+var_4], 4Dh ; 'M'
0x830576: call    sub_75FAE0
0x83057B: mov     eax, [esp+2Ch+var_10]
0x83057F: test    eax, eax
0x830581: mov     byte ptr [esp+2Ch+var_4], 1
0x830586: jz      short loc_83059B
0x830588: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83058C: mov     ecx, eax
0x83058E: add     eax, 5Ch ; '\'
0x830591: cmp     dword ptr [eax], 0
0x830594: jnz     short loc_83059B
0x830596: call    sub_772560
0x83059B: mov     edi, [esp+2Ch+a3]
0x83059F: push    2
0x8305A1: push    1
0x8305A3: push    5
0x8305A5: push    edi
0x8305A6: call    sub_801110
0x8305AB: add     esp, 10h
0x8305AE: push    edi; a3
0x8305AF: push    5; a2
0x8305B1: mov     ecx, esi; this
0x8305B3: call    sub_760010
0x8305B8: lea     ecx, [esp+2Ch+var_10]
0x8305BC: push    ecx
0x8305BD: call    sub_772630
0x8305C2: add     esp, 4
0x8305C5: push    eax
0x8305C6: lea     ecx, [esp+30h+a3]
0x8305CA: mov     byte ptr [esp+30h+var_4], 4Eh ; 'N'
0x8305CF: call    sub_75FAE0
0x8305D4: mov     eax, [esp+2Ch+var_10]
0x8305D8: test    eax, eax
0x8305DA: mov     byte ptr [esp+2Ch+var_4], 1
0x8305DF: jz      short loc_8305F4
0x8305E1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8305E5: mov     ecx, eax
0x8305E7: add     eax, 5Ch ; '\'
0x8305EA: cmp     dword ptr [eax], 0
0x8305ED: jnz     short loc_8305F4
0x8305EF: call    sub_772560
0x8305F4: mov     edi, [esp+2Ch+a3]
0x8305F8: push    0
0x8305FA: push    3
0x8305FC: push    6
0x8305FE: push    edi
0x8305FF: call    sub_801110
0x830604: add     esp, 10h
0x830607: push    edi; a3
0x830608: push    6; a2
0x83060A: mov     ecx, esi; this
0x83060C: call    sub_760010
0x830611: mov     edx, ds:0B453C4h
0x830617: push    edx; a2
0x830618: mov     ecx, esi; this
0x83061A: call    sub_7AECB0
0x83061F: mov     eax, ds:0B451C0h
0x830624: push    eax; a2
0x830625: mov     ecx, esi; this
0x830627: call    sub_7AEC60
0x83062C: cmp     dword ptr [esi+30h], 0
0x830630: jnz     short loc_83063A
0x830632: call    sub_772DF0
0x830637: mov     [esi+30h], eax
0x83063A: mov     ecx, [esi+30h]
0x83063D: push    0
0x83063F: push    0
0x830641: push    1Bh
0x830643: call    sub_772CD0
0x830648: cmp     dword ptr [esi+30h], 0
0x83064C: jnz     short loc_830656
0x83064E: call    sub_772DF0
0x830653: mov     [esi+30h], eax
0x830656: mov     ecx, [esi+30h]
0x830659: push    0
0x83065B: push    0
0x83065D: push    0Fh
0x83065F: call    sub_772CD0
0x830664: cmp     dword ptr [esi+30h], 0
0x830668: jnz     short loc_830672
0x83066A: call    sub_772DF0
0x83066F: mov     [esi+30h], eax
0x830672: mov     ecx, [esi+30h]
0x830675: push    0
0x830677: push    1
0x830679: push    7
0x83067B: call    sub_772CD0
0x830680: cmp     dword ptr [esi+30h], 0
0x830684: jnz     short loc_83068E
0x830686: call    sub_772DF0
0x83068B: mov     [esi+30h], eax
0x83068E: mov     ecx, [esi+30h]
0x830691: push    0
0x830693: push    4
0x830695: push    17h
0x830697: call    sub_772CD0
0x83069C: cmp     dword ptr [esi+30h], 0
0x8306A0: jnz     short loc_8306AA
0x8306A2: call    sub_772DF0
0x8306A7: mov     [esi+30h], eax
0x8306AA: mov     ecx, [esi+30h]
0x8306AD: push    0
0x8306AF: push    1
0x8306B1: push    0Eh
0x8306B3: call    sub_772CD0
0x8306B8: cmp     dword ptr [esi+30h], 0
0x8306BC: jnz     short loc_8306C6
0x8306BE: call    sub_772DF0
0x8306C3: mov     [esi+30h], eax
0x8306C6: mov     ecx, [esi+30h]
0x8306C9: push    0
0x8306CB: push    0
0x8306CD: push    34h ; '4'
0x8306CF: call    sub_772CD0
0x8306D4: cmp     esi, ds:0B4573Ch
0x8306DA: mov     ebp, 63088h
0x8306DF: mov     ds:0B43CB4h, ebp
0x8306E5: mov     dword ptr ds:0B44344h, 3Ch ; '<'
0x8306EF: mov     ds:0B449D4h, ebx
0x8306F5: jz      short loc_830716
0x8306F7: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8306FB: jnz     short loc_830704
0x8306FD: mov     ecx, esi
0x8306FF: call    sub_7604D0
0x830704: mov     esi, ds:0B4573Ch
0x83070A: test    esi, esi
0x83070C: mov     [esp+2Ch+var_14], esi
0x830710: jz      short loc_830716
0x830712: add     dword ptr [esi+60h], 1
0x830716: mov     ebx, 7
0x83071B: cmp     [esi+18h], ebx
0x83071E: jnb     loc_8309A0
0x830724: lea     ecx, [esp+2Ch+var_10]
0x830728: push    ecx
0x830729: call    sub_772630
0x83072E: add     esp, 4
0x830731: push    eax
0x830732: lea     ecx, [esp+30h+a3]
0x830736: mov     byte ptr [esp+30h+var_4], 4Fh ; 'O'
0x83073B: call    sub_75FAE0
0x830740: mov     eax, [esp+2Ch+var_10]
0x830744: test    eax, eax
0x830746: mov     byte ptr [esp+2Ch+var_4], 1
0x83074B: jz      short loc_830760
0x83074D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830751: mov     ecx, eax
0x830753: add     eax, 5Ch ; '\'
0x830756: cmp     dword ptr [eax], 0
0x830759: jnz     short loc_830760
0x83075B: call    sub_772560
0x830760: mov     edi, [esp+2Ch+a3]
0x830764: push    2
0x830766: push    1
0x830768: push    0
0x83076A: push    edi
0x83076B: call    sub_801110
0x830770: add     esp, 10h
0x830773: push    edi; a3
0x830774: push    0; a2
0x830776: mov     ecx, esi; this
0x830778: call    sub_760010
0x83077D: lea     edx, [esp+2Ch+var_10]
0x830781: push    edx
0x830782: call    sub_772630
0x830787: add     esp, 4
0x83078A: push    eax
0x83078B: lea     ecx, [esp+30h+a3]
0x83078F: mov     byte ptr [esp+30h+var_4], 50h ; 'P'
0x830794: call    sub_75FAE0
0x830799: mov     eax, [esp+2Ch+var_10]
0x83079D: test    eax, eax
0x83079F: mov     byte ptr [esp+2Ch+var_4], 1
0x8307A4: jz      short loc_8307B9
0x8307A6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8307AA: mov     ecx, eax
0x8307AC: add     eax, 5Ch ; '\'
0x8307AF: cmp     dword ptr [eax], 0
0x8307B2: jnz     short loc_8307B9
0x8307B4: call    sub_772560
0x8307B9: mov     edi, [esp+2Ch+a3]
0x8307BD: push    2
0x8307BF: push    1
0x8307C1: push    1
0x8307C3: push    edi
0x8307C4: call    sub_801110
0x8307C9: add     esp, 10h
0x8307CC: push    edi; a3
0x8307CD: push    1; a2
0x8307CF: mov     ecx, esi; this
0x8307D1: call    sub_760010
0x8307D6: lea     eax, [esp+2Ch+var_10]
0x8307DA: push    eax
0x8307DB: call    sub_772630
0x8307E0: add     esp, 4
0x8307E3: push    eax
0x8307E4: lea     ecx, [esp+30h+a3]
0x8307E8: mov     byte ptr [esp+30h+var_4], 51h ; 'Q'
0x8307ED: call    sub_75FAE0
0x8307F2: mov     eax, [esp+2Ch+var_10]
0x8307F6: test    eax, eax
0x8307F8: mov     byte ptr [esp+2Ch+var_4], 1
0x8307FD: jz      short loc_830812
0x8307FF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830803: mov     ecx, eax
0x830805: add     eax, 5Ch ; '\'
0x830808: cmp     dword ptr [eax], 0
0x83080B: jnz     short loc_830812
0x83080D: call    sub_772560
0x830812: mov     edi, [esp+2Ch+a3]
0x830816: push    2
0x830818: push    1
0x83081A: push    2
0x83081C: push    edi
0x83081D: call    sub_801110
0x830822: add     esp, 10h
0x830825: push    edi; a3
0x830826: push    2; a2
0x830828: mov     ecx, esi; this
0x83082A: call    sub_760010
0x83082F: lea     ecx, [esp+2Ch+var_10]
0x830833: push    ecx
0x830834: call    sub_772630
0x830839: add     esp, 4
0x83083C: push    eax
0x83083D: lea     ecx, [esp+30h+a3]
0x830841: mov     byte ptr [esp+30h+var_4], 52h ; 'R'
0x830846: call    sub_75FAE0
0x83084B: mov     eax, [esp+2Ch+var_10]
0x83084F: test    eax, eax
0x830851: mov     byte ptr [esp+2Ch+var_4], 1
0x830856: jz      short loc_83086B
0x830858: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83085C: mov     ecx, eax
0x83085E: add     eax, 5Ch ; '\'
0x830861: cmp     dword ptr [eax], 0
0x830864: jnz     short loc_83086B
0x830866: call    sub_772560
0x83086B: mov     edi, [esp+2Ch+a3]
0x83086F: push    2
0x830871: push    1
0x830873: push    3
0x830875: push    edi
0x830876: call    sub_801110
0x83087B: add     esp, 10h
0x83087E: push    edi; a3
0x83087F: push    3; a2
0x830881: mov     ecx, esi; this
0x830883: call    sub_760010
0x830888: lea     edx, [esp+2Ch+var_10]
0x83088C: push    edx
0x83088D: call    sub_772630
0x830892: add     esp, 4
0x830895: push    eax
0x830896: lea     ecx, [esp+30h+a3]
0x83089A: mov     byte ptr [esp+30h+var_4], 53h ; 'S'
0x83089F: call    sub_75FAE0
0x8308A4: mov     eax, [esp+2Ch+var_10]
0x8308A8: test    eax, eax
0x8308AA: mov     byte ptr [esp+2Ch+var_4], 1
0x8308AF: jz      short loc_8308C4
0x8308B1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8308B5: mov     ecx, eax
0x8308B7: add     eax, 5Ch ; '\'
0x8308BA: cmp     dword ptr [eax], 0
0x8308BD: jnz     short loc_8308C4
0x8308BF: call    sub_772560
0x8308C4: mov     edi, [esp+2Ch+a3]
0x8308C8: push    0
0x8308CA: push    3
0x8308CC: push    4
0x8308CE: push    edi
0x8308CF: call    sub_801110
0x8308D4: mov     eax, ds:0B43110h
0x8308D9: add     esp, 10h
0x8308DC: push    eax; a2
0x8308DD: mov     ecx, edi; this
0x8308DF: call    sub_76C910
0x8308E4: push    edi; a3
0x8308E5: push    4; a2
0x8308E7: mov     ecx, esi; this
0x8308E9: call    sub_760010
0x8308EE: lea     ecx, [esp+2Ch+var_10]
0x8308F2: push    ecx
0x8308F3: call    sub_772630
0x8308F8: add     esp, 4
0x8308FB: push    eax
0x8308FC: lea     ecx, [esp+30h+a3]
0x830900: mov     byte ptr [esp+30h+var_4], 54h ; 'T'
0x830905: call    sub_75FAE0
0x83090A: mov     eax, [esp+2Ch+var_10]
0x83090E: test    eax, eax
0x830910: mov     byte ptr [esp+2Ch+var_4], 1
0x830915: jz      short loc_83092A
0x830917: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83091B: mov     ecx, eax
0x83091D: add     eax, 5Ch ; '\'
0x830920: cmp     dword ptr [eax], 0
0x830923: jnz     short loc_83092A
0x830925: call    sub_772560
0x83092A: mov     edi, [esp+2Ch+a3]
0x83092E: push    2
0x830930: push    1
0x830932: push    5
0x830934: push    edi
0x830935: call    sub_801110
0x83093A: add     esp, 10h
0x83093D: push    edi; a3
0x83093E: push    5; a2
0x830940: mov     ecx, esi; this
0x830942: call    sub_760010
0x830947: lea     edx, [esp+2Ch+var_10]
0x83094B: push    edx
0x83094C: call    sub_772630
0x830951: add     esp, 4
0x830954: push    eax
0x830955: lea     ecx, [esp+30h+a3]
0x830959: mov     byte ptr [esp+30h+var_4], 55h ; 'U'
0x83095E: call    sub_75FAE0
0x830963: mov     eax, [esp+2Ch+var_10]
0x830967: test    eax, eax
0x830969: mov     byte ptr [esp+2Ch+var_4], 1
0x83096E: jz      short loc_830983
0x830970: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830974: mov     ecx, eax
0x830976: add     eax, 5Ch ; '\'
0x830979: cmp     dword ptr [eax], 0
0x83097C: jnz     short loc_830983
0x83097E: call    sub_772560
0x830983: mov     edi, [esp+2Ch+a3]
0x830987: push    0
0x830989: push    3
0x83098B: push    6
0x83098D: push    edi
0x83098E: call    sub_801110
0x830993: add     esp, 10h
0x830996: push    edi; a3
0x830997: push    6; a2
0x830999: mov     ecx, esi; this
0x83099B: call    sub_760010
0x8309A0: mov     eax, ds:0B453C4h
0x8309A5: push    eax; a2
0x8309A6: mov     ecx, esi; this
0x8309A8: call    sub_7AECB0
0x8309AD: mov     ecx, ds:0B451C4h
0x8309B3: push    ecx; a2
0x8309B4: mov     ecx, esi; this
0x8309B6: call    sub_7AEC60
0x8309BB: cmp     dword ptr [esi+30h], 0
0x8309BF: jnz     short loc_8309C9
0x8309C1: call    sub_772DF0
0x8309C6: mov     [esi+30h], eax
0x8309C9: mov     ecx, [esi+30h]
0x8309CC: push    0
0x8309CE: push    0
0x8309D0: push    1Bh
0x8309D2: call    sub_772CD0
0x8309D7: cmp     dword ptr [esi+30h], 0
0x8309DB: jnz     short loc_8309E5
0x8309DD: call    sub_772DF0
0x8309E2: mov     [esi+30h], eax
0x8309E5: mov     ecx, [esi+30h]
0x8309E8: push    0
0x8309EA: push    0
0x8309EC: push    0Fh
0x8309EE: call    sub_772CD0
0x8309F3: cmp     dword ptr [esi+30h], 0
0x8309F7: jnz     short loc_830A01
0x8309F9: call    sub_772DF0
0x8309FE: mov     [esi+30h], eax
0x830A01: mov     ecx, [esi+30h]
0x830A04: push    0
0x830A06: push    1
0x830A08: push    ebx
0x830A09: call    sub_772CD0
0x830A0E: cmp     dword ptr [esi+30h], 0
0x830A12: jnz     short loc_830A1C
0x830A14: call    sub_772DF0
0x830A19: mov     [esi+30h], eax
0x830A1C: mov     ecx, [esi+30h]
0x830A1F: push    0
0x830A21: push    4
0x830A23: push    17h
0x830A25: call    sub_772CD0
0x830A2A: cmp     dword ptr [esi+30h], 0
0x830A2E: jnz     short loc_830A38
0x830A30: call    sub_772DF0
0x830A35: mov     [esi+30h], eax
0x830A38: mov     ecx, [esi+30h]
0x830A3B: push    0
0x830A3D: push    1
0x830A3F: push    0Eh
0x830A41: call    sub_772CD0
0x830A46: cmp     dword ptr [esi+30h], 0
0x830A4A: jnz     short loc_830A54
0x830A4C: call    sub_772DF0
0x830A51: mov     [esi+30h], eax
0x830A54: mov     ecx, [esi+30h]
0x830A57: push    0
0x830A59: push    0
0x830A5B: push    34h ; '4'
0x830A5D: call    sub_772CD0
0x830A62: cmp     esi, ds:0B4574Ch
0x830A68: mov     ds:0B43CBCh, ebp
0x830A6E: mov     dword ptr ds:0B4434Ch, 0BCh ; '¼'
0x830A78: mov     dword ptr ds:0B449DCh, 0Ch
0x830A82: jz      short loc_830AA3
0x830A84: add     dword ptr [esi+60h], 0FFFFFFFFh
0x830A88: jnz     short loc_830A91
0x830A8A: mov     ecx, esi
0x830A8C: call    sub_7604D0
0x830A91: mov     esi, ds:0B4574Ch
0x830A97: test    esi, esi
0x830A99: mov     [esp+2Ch+var_14], esi
0x830A9D: jz      short loc_830AA3
0x830A9F: add     dword ptr [esi+60h], 1
0x830AA3: cmp     [esi+18h], ebx
0x830AA6: jnb     loc_830D29
0x830AAC: lea     edx, [esp+2Ch+var_10]
0x830AB0: push    edx
0x830AB1: call    sub_772630
0x830AB6: add     esp, 4
0x830AB9: push    eax
0x830ABA: lea     ecx, [esp+30h+a3]
0x830ABE: mov     byte ptr [esp+30h+var_4], 56h ; 'V'
0x830AC3: call    sub_75FAE0
0x830AC8: mov     eax, [esp+2Ch+var_10]
0x830ACC: test    eax, eax
0x830ACE: mov     byte ptr [esp+2Ch+var_4], 1
0x830AD3: jz      short loc_830AE8
0x830AD5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830AD9: mov     ecx, eax
0x830ADB: add     eax, 5Ch ; '\'
0x830ADE: cmp     dword ptr [eax], 0
0x830AE1: jnz     short loc_830AE8
0x830AE3: call    sub_772560
0x830AE8: mov     edi, [esp+2Ch+a3]
0x830AEC: push    2
0x830AEE: push    1
0x830AF0: push    0
0x830AF2: push    edi
0x830AF3: call    sub_801110
0x830AF8: add     esp, 10h
0x830AFB: push    edi; a3
0x830AFC: push    0; a2
0x830AFE: mov     ecx, esi; this
0x830B00: call    sub_760010
0x830B05: lea     eax, [esp+2Ch+var_10]
0x830B09: push    eax
0x830B0A: call    sub_772630
0x830B0F: add     esp, 4
0x830B12: push    eax
0x830B13: lea     ecx, [esp+30h+a3]
0x830B17: mov     byte ptr [esp+30h+var_4], 57h ; 'W'
0x830B1C: call    sub_75FAE0
0x830B21: mov     eax, [esp+2Ch+var_10]
0x830B25: test    eax, eax
0x830B27: mov     byte ptr [esp+2Ch+var_4], 1
0x830B2C: jz      short loc_830B41
0x830B2E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830B32: mov     ecx, eax
0x830B34: add     eax, 5Ch ; '\'
0x830B37: cmp     dword ptr [eax], 0
0x830B3A: jnz     short loc_830B41
0x830B3C: call    sub_772560
0x830B41: mov     edi, [esp+2Ch+a3]
0x830B45: push    2
0x830B47: push    1
0x830B49: push    1
0x830B4B: push    edi
0x830B4C: call    sub_801110
0x830B51: add     esp, 10h
0x830B54: push    edi; a3
0x830B55: push    1; a2
0x830B57: mov     ecx, esi; this
0x830B59: call    sub_760010
0x830B5E: lea     ecx, [esp+2Ch+var_10]
0x830B62: push    ecx
0x830B63: call    sub_772630
0x830B68: add     esp, 4
0x830B6B: push    eax
0x830B6C: lea     ecx, [esp+30h+a3]
0x830B70: mov     byte ptr [esp+30h+var_4], 58h ; 'X'
0x830B75: call    sub_75FAE0
0x830B7A: mov     eax, [esp+2Ch+var_10]
0x830B7E: test    eax, eax
0x830B80: mov     byte ptr [esp+2Ch+var_4], 1
0x830B85: jz      short loc_830B9A
0x830B87: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830B8B: mov     ecx, eax
0x830B8D: add     eax, 5Ch ; '\'
0x830B90: cmp     dword ptr [eax], 0
0x830B93: jnz     short loc_830B9A
0x830B95: call    sub_772560
0x830B9A: mov     edi, [esp+2Ch+a3]
0x830B9E: push    2
0x830BA0: push    1
0x830BA2: push    2
0x830BA4: push    edi
0x830BA5: call    sub_801110
0x830BAA: add     esp, 10h
0x830BAD: push    edi; a3
0x830BAE: push    2; a2
0x830BB0: mov     ecx, esi; this
0x830BB2: call    sub_760010
0x830BB7: lea     edx, [esp+2Ch+var_10]
0x830BBB: push    edx
0x830BBC: call    sub_772630
0x830BC1: add     esp, 4
0x830BC4: push    eax
0x830BC5: lea     ecx, [esp+30h+a3]
0x830BC9: mov     byte ptr [esp+30h+var_4], 59h ; 'Y'
0x830BCE: call    sub_75FAE0
0x830BD3: mov     eax, [esp+2Ch+var_10]
0x830BD7: test    eax, eax
0x830BD9: mov     byte ptr [esp+2Ch+var_4], 1
0x830BDE: jz      short loc_830BF3
0x830BE0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830BE4: mov     ecx, eax
0x830BE6: add     eax, 5Ch ; '\'
0x830BE9: cmp     dword ptr [eax], 0
0x830BEC: jnz     short loc_830BF3
0x830BEE: call    sub_772560
0x830BF3: mov     edi, [esp+2Ch+a3]
0x830BF7: push    2
0x830BF9: push    1
0x830BFB: push    3
0x830BFD: push    edi
0x830BFE: call    sub_801110
0x830C03: add     esp, 10h
0x830C06: push    edi; a3
0x830C07: push    3; a2
0x830C09: mov     ecx, esi; this
0x830C0B: call    sub_760010
0x830C10: lea     eax, [esp+2Ch+var_10]
0x830C14: push    eax
0x830C15: call    sub_772630
0x830C1A: add     esp, 4
0x830C1D: push    eax
0x830C1E: lea     ecx, [esp+30h+a3]
0x830C22: mov     byte ptr [esp+30h+var_4], 5Ah ; 'Z'
0x830C27: call    sub_75FAE0
0x830C2C: mov     eax, [esp+2Ch+var_10]
0x830C30: test    eax, eax
0x830C32: mov     byte ptr [esp+2Ch+var_4], 1
0x830C37: jz      short loc_830C4C
0x830C39: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830C3D: mov     ecx, eax
0x830C3F: add     eax, 5Ch ; '\'
0x830C42: cmp     dword ptr [eax], 0
0x830C45: jnz     short loc_830C4C
0x830C47: call    sub_772560
0x830C4C: mov     edi, [esp+2Ch+a3]
0x830C50: push    0
0x830C52: push    3
0x830C54: push    4
0x830C56: push    edi
0x830C57: call    sub_801110
0x830C5C: mov     ecx, ds:0B43110h
0x830C62: add     esp, 10h
0x830C65: push    ecx; a2
0x830C66: mov     ecx, edi; this
0x830C68: call    sub_76C910
0x830C6D: push    edi; a3
0x830C6E: push    4; a2
0x830C70: mov     ecx, esi; this
0x830C72: call    sub_760010
0x830C77: lea     edx, [esp+2Ch+var_10]
0x830C7B: push    edx
0x830C7C: call    sub_772630
0x830C81: add     esp, 4
0x830C84: push    eax
0x830C85: lea     ecx, [esp+30h+a3]
0x830C89: mov     byte ptr [esp+30h+var_4], 5Bh ; '['
0x830C8E: call    sub_75FAE0
0x830C93: mov     eax, [esp+2Ch+var_10]
0x830C97: test    eax, eax
0x830C99: mov     byte ptr [esp+2Ch+var_4], 1
0x830C9E: jz      short loc_830CB3
0x830CA0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830CA4: mov     ecx, eax
0x830CA6: add     eax, 5Ch ; '\'
0x830CA9: cmp     dword ptr [eax], 0
0x830CAC: jnz     short loc_830CB3
0x830CAE: call    sub_772560
0x830CB3: mov     edi, [esp+2Ch+a3]
0x830CB7: push    2
0x830CB9: push    1
0x830CBB: push    5
0x830CBD: push    edi
0x830CBE: call    sub_801110
0x830CC3: add     esp, 10h
0x830CC6: push    edi; a3
0x830CC7: push    5; a2
0x830CC9: mov     ecx, esi; this
0x830CCB: call    sub_760010
0x830CD0: lea     eax, [esp+2Ch+var_10]
0x830CD4: push    eax
0x830CD5: call    sub_772630
0x830CDA: add     esp, 4
0x830CDD: push    eax
0x830CDE: lea     ecx, [esp+30h+a3]
0x830CE2: mov     byte ptr [esp+30h+var_4], 5Ch ; '\'
0x830CE7: call    sub_75FAE0
0x830CEC: mov     eax, [esp+2Ch+var_10]
0x830CF0: test    eax, eax
0x830CF2: mov     byte ptr [esp+2Ch+var_4], 1
0x830CF7: jz      short loc_830D0C
0x830CF9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830CFD: mov     ecx, eax
0x830CFF: add     eax, 5Ch ; '\'
0x830D02: cmp     dword ptr [eax], 0
0x830D05: jnz     short loc_830D0C
0x830D07: call    sub_772560
0x830D0C: mov     edi, [esp+2Ch+a3]
0x830D10: push    0
0x830D12: push    3
0x830D14: push    6
0x830D16: push    edi
0x830D17: call    sub_801110
0x830D1C: add     esp, 10h
0x830D1F: push    edi; a3
0x830D20: push    6; a2
0x830D22: mov     ecx, esi; this
0x830D24: call    sub_760010
0x830D29: mov     ecx, ds:0B453C8h
0x830D2F: push    ecx; a2
0x830D30: mov     ecx, esi; this
0x830D32: call    sub_7AECB0
0x830D37: mov     edx, ds:0B451C8h
0x830D3D: push    edx; a2
0x830D3E: mov     ecx, esi; this
0x830D40: call    sub_7AEC60
0x830D45: cmp     dword ptr [esi+30h], 0
0x830D49: jnz     short loc_830D53
0x830D4B: call    sub_772DF0
0x830D50: mov     [esi+30h], eax
0x830D53: mov     ecx, [esi+30h]
0x830D56: push    0
0x830D58: push    0
0x830D5A: push    1Bh
0x830D5C: call    sub_772CD0
0x830D61: cmp     dword ptr [esi+30h], 0
0x830D65: jnz     short loc_830D6F
0x830D67: call    sub_772DF0
0x830D6C: mov     [esi+30h], eax
0x830D6F: mov     ecx, [esi+30h]
0x830D72: push    0
0x830D74: push    0
0x830D76: push    0Fh
0x830D78: call    sub_772CD0
0x830D7D: cmp     dword ptr [esi+30h], 0
0x830D81: jnz     short loc_830D8B
0x830D83: call    sub_772DF0
0x830D88: mov     [esi+30h], eax
0x830D8B: mov     ecx, [esi+30h]
0x830D8E: push    0
0x830D90: push    1
0x830D92: push    ebx
0x830D93: call    sub_772CD0
0x830D98: cmp     dword ptr [esi+30h], 0
0x830D9C: jnz     short loc_830DA6
0x830D9E: call    sub_772DF0
0x830DA3: mov     [esi+30h], eax
0x830DA6: mov     ecx, [esi+30h]
0x830DA9: push    0
0x830DAB: push    4
0x830DAD: push    17h
0x830DAF: call    sub_772CD0
0x830DB4: cmp     dword ptr [esi+30h], 0
0x830DB8: jnz     short loc_830DC2
0x830DBA: call    sub_772DF0
0x830DBF: mov     [esi+30h], eax
0x830DC2: mov     ecx, [esi+30h]
0x830DC5: push    0
0x830DC7: push    1
0x830DC9: push    0Eh
0x830DCB: call    sub_772CD0
0x830DD0: cmp     dword ptr [esi+30h], 0
0x830DD4: jnz     short loc_830DDE
0x830DD6: call    sub_772DF0
0x830DDB: mov     [esi+30h], eax
0x830DDE: mov     ecx, [esi+30h]
0x830DE1: push    0
0x830DE3: push    0
0x830DE5: push    34h ; '4'
0x830DE7: call    sub_772CD0
0x830DEC: cmp     esi, ds:0B45750h
0x830DF2: mov     ebp, 230F2h
0x830DF7: mov     ebx, 60h ; '`'
0x830DFC: mov     ds:0B43CCCh, ebp
0x830E02: mov     dword ptr ds:0B4435Ch, 3Ch ; '<'
0x830E0C: mov     ds:0B4363Ch, ebx
0x830E12: mov     dword ptr ds:0B449ECh, 8
0x830E1C: jz      short loc_830E3D
0x830E1E: add     dword ptr [esi+60h], 0FFFFFFFFh
0x830E22: jnz     short loc_830E2B
0x830E24: mov     ecx, esi
0x830E26: call    sub_7604D0
0x830E2B: mov     esi, ds:0B45750h
0x830E31: test    esi, esi
0x830E33: mov     [esp+2Ch+var_14], esi
0x830E37: jz      short loc_830E3D
0x830E39: add     dword ptr [esi+60h], 1
0x830E3D: cmp     dword ptr [esi+18h], 7
0x830E41: jnb     loc_8310C4
0x830E47: lea     eax, [esp+2Ch+var_10]
0x830E4B: push    eax
0x830E4C: call    sub_772630
0x830E51: add     esp, 4
0x830E54: push    eax
0x830E55: lea     ecx, [esp+30h+a3]
0x830E59: mov     byte ptr [esp+30h+var_4], 5Dh ; ']'
0x830E5E: call    sub_75FAE0
0x830E63: mov     eax, [esp+2Ch+var_10]
0x830E67: test    eax, eax
0x830E69: mov     byte ptr [esp+2Ch+var_4], 1
0x830E6E: jz      short loc_830E83
0x830E70: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830E74: mov     ecx, eax
0x830E76: add     eax, 5Ch ; '\'
0x830E79: cmp     dword ptr [eax], 0
0x830E7C: jnz     short loc_830E83
0x830E7E: call    sub_772560
0x830E83: mov     edi, [esp+2Ch+a3]
0x830E87: push    2
0x830E89: push    1
0x830E8B: push    0
0x830E8D: push    edi
0x830E8E: call    sub_801110
0x830E93: add     esp, 10h
0x830E96: push    edi; a3
0x830E97: push    0; a2
0x830E99: mov     ecx, esi; this
0x830E9B: call    sub_760010
0x830EA0: lea     ecx, [esp+2Ch+var_10]
0x830EA4: push    ecx
0x830EA5: call    sub_772630
0x830EAA: add     esp, 4
0x830EAD: push    eax
0x830EAE: lea     ecx, [esp+30h+a3]
0x830EB2: mov     byte ptr [esp+30h+var_4], 5Eh ; '^'
0x830EB7: call    sub_75FAE0
0x830EBC: mov     eax, [esp+2Ch+var_10]
0x830EC0: test    eax, eax
0x830EC2: mov     byte ptr [esp+2Ch+var_4], 1
0x830EC7: jz      short loc_830EDC
0x830EC9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830ECD: mov     ecx, eax
0x830ECF: add     eax, 5Ch ; '\'
0x830ED2: cmp     dword ptr [eax], 0
0x830ED5: jnz     short loc_830EDC
0x830ED7: call    sub_772560
0x830EDC: mov     edi, [esp+2Ch+a3]
0x830EE0: push    2
0x830EE2: push    1
0x830EE4: push    1
0x830EE6: push    edi
0x830EE7: call    sub_801110
0x830EEC: add     esp, 10h
0x830EEF: push    edi; a3
0x830EF0: push    1; a2
0x830EF2: mov     ecx, esi; this
0x830EF4: call    sub_760010
0x830EF9: lea     edx, [esp+2Ch+var_10]
0x830EFD: push    edx
0x830EFE: call    sub_772630
0x830F03: add     esp, 4
0x830F06: push    eax
0x830F07: lea     ecx, [esp+30h+a3]
0x830F0B: mov     byte ptr [esp+30h+var_4], 5Fh ; '_'
0x830F10: call    sub_75FAE0
0x830F15: mov     eax, [esp+2Ch+var_10]
0x830F19: test    eax, eax
0x830F1B: mov     byte ptr [esp+2Ch+var_4], 1
0x830F20: jz      short loc_830F35
0x830F22: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830F26: mov     ecx, eax
0x830F28: add     eax, 5Ch ; '\'
0x830F2B: cmp     dword ptr [eax], 0
0x830F2E: jnz     short loc_830F35
0x830F30: call    sub_772560
0x830F35: mov     edi, [esp+2Ch+a3]
0x830F39: push    2
0x830F3B: push    1
0x830F3D: push    2
0x830F3F: push    edi
0x830F40: call    sub_801110
0x830F45: add     esp, 10h
0x830F48: push    edi; a3
0x830F49: push    2; a2
0x830F4B: mov     ecx, esi; this
0x830F4D: call    sub_760010
0x830F52: lea     eax, [esp+2Ch+var_10]
0x830F56: push    eax
0x830F57: call    sub_772630
0x830F5C: add     esp, 4
0x830F5F: push    eax
0x830F60: lea     ecx, [esp+30h+a3]
0x830F64: mov     byte ptr [esp+30h+var_4], 60h ; '`'
0x830F69: call    sub_75FAE0
0x830F6E: mov     eax, [esp+2Ch+var_10]
0x830F72: test    eax, eax
0x830F74: mov     byte ptr [esp+2Ch+var_4], 1
0x830F79: jz      short loc_830F8E
0x830F7B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830F7F: mov     ecx, eax
0x830F81: add     eax, 5Ch ; '\'
0x830F84: cmp     dword ptr [eax], 0
0x830F87: jnz     short loc_830F8E
0x830F89: call    sub_772560
0x830F8E: mov     edi, [esp+2Ch+a3]
0x830F92: push    2
0x830F94: push    1
0x830F96: push    3
0x830F98: push    edi
0x830F99: call    sub_801110
0x830F9E: add     esp, 10h
0x830FA1: push    edi; a3
0x830FA2: push    3; a2
0x830FA4: mov     ecx, esi; this
0x830FA6: call    sub_760010
0x830FAB: lea     ecx, [esp+2Ch+var_10]
0x830FAF: push    ecx
0x830FB0: call    sub_772630
0x830FB5: add     esp, 4
0x830FB8: push    eax
0x830FB9: lea     ecx, [esp+30h+a3]
0x830FBD: mov     byte ptr [esp+30h+var_4], 61h ; 'a'
0x830FC2: call    sub_75FAE0
0x830FC7: mov     eax, [esp+2Ch+var_10]
0x830FCB: test    eax, eax
0x830FCD: mov     byte ptr [esp+2Ch+var_4], 1
0x830FD2: jz      short loc_830FE7
0x830FD4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x830FD8: mov     ecx, eax
0x830FDA: add     eax, 5Ch ; '\'
0x830FDD: cmp     dword ptr [eax], 0
0x830FE0: jnz     short loc_830FE7
0x830FE2: call    sub_772560
0x830FE7: mov     edi, [esp+2Ch+a3]
0x830FEB: push    0
0x830FED: push    3
0x830FEF: push    4
0x830FF1: push    edi
0x830FF2: call    sub_801110
0x830FF7: mov     edx, ds:0B43110h
0x830FFD: add     esp, 10h
0x831000: push    edx; a2
0x831001: mov     ecx, edi; this
0x831003: call    sub_76C910
0x831008: push    edi; a3
0x831009: push    4; a2
0x83100B: mov     ecx, esi; this
0x83100D: call    sub_760010
0x831012: lea     eax, [esp+2Ch+var_10]
0x831016: push    eax
0x831017: call    sub_772630
0x83101C: add     esp, 4
0x83101F: push    eax
0x831020: lea     ecx, [esp+30h+a3]
0x831024: mov     byte ptr [esp+30h+var_4], 62h ; 'b'
0x831029: call    sub_75FAE0
0x83102E: mov     eax, [esp+2Ch+var_10]
0x831032: test    eax, eax
0x831034: mov     byte ptr [esp+2Ch+var_4], 1
0x831039: jz      short loc_83104E
0x83103B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83103F: mov     ecx, eax
0x831041: add     eax, 5Ch ; '\'
0x831044: cmp     dword ptr [eax], 0
0x831047: jnz     short loc_83104E
0x831049: call    sub_772560
0x83104E: mov     edi, [esp+2Ch+a3]
0x831052: push    2
0x831054: push    1
0x831056: push    5
0x831058: push    edi
0x831059: call    sub_801110
0x83105E: add     esp, 10h
0x831061: push    edi; a3
0x831062: push    5; a2
0x831064: mov     ecx, esi; this
0x831066: call    sub_760010
0x83106B: lea     ecx, [esp+2Ch+var_10]
0x83106F: push    ecx
0x831070: call    sub_772630
0x831075: add     esp, 4
0x831078: push    eax
0x831079: lea     ecx, [esp+30h+a3]
0x83107D: mov     byte ptr [esp+30h+var_4], 63h ; 'c'
0x831082: call    sub_75FAE0
0x831087: mov     eax, [esp+2Ch+var_10]
0x83108B: test    eax, eax
0x83108D: mov     byte ptr [esp+2Ch+var_4], 1
0x831092: jz      short loc_8310A7
0x831094: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831098: mov     ecx, eax
0x83109A: add     eax, 5Ch ; '\'
0x83109D: cmp     dword ptr [eax], 0
0x8310A0: jnz     short loc_8310A7
0x8310A2: call    sub_772560
0x8310A7: mov     edi, [esp+2Ch+a3]
0x8310AB: push    0
0x8310AD: push    3
0x8310AF: push    6
0x8310B1: push    edi
0x8310B2: call    sub_801110
0x8310B7: add     esp, 10h
0x8310BA: push    edi; a3
0x8310BB: push    6; a2
0x8310BD: mov     ecx, esi; this
0x8310BF: call    sub_760010
0x8310C4: mov     edx, ds:0B453C8h
0x8310CA: push    edx; a2
0x8310CB: mov     ecx, esi; this
0x8310CD: call    sub_7AECB0
0x8310D2: mov     eax, ds:0B451CCh
0x8310D7: push    eax; a2
0x8310D8: mov     ecx, esi; this
0x8310DA: call    sub_7AEC60
0x8310DF: cmp     dword ptr [esi+30h], 0
0x8310E3: jnz     short loc_8310ED
0x8310E5: call    sub_772DF0
0x8310EA: mov     [esi+30h], eax
0x8310ED: mov     ecx, [esi+30h]
0x8310F0: push    0
0x8310F2: push    0
0x8310F4: push    1Bh
0x8310F6: call    sub_772CD0
0x8310FB: cmp     dword ptr [esi+30h], 0
0x8310FF: jnz     short loc_831109
0x831101: call    sub_772DF0
0x831106: mov     [esi+30h], eax
0x831109: mov     ecx, [esi+30h]
0x83110C: push    0
0x83110E: push    0
0x831110: push    0Fh
0x831112: call    sub_772CD0
0x831117: cmp     dword ptr [esi+30h], 0
0x83111B: jnz     short loc_831125
0x83111D: call    sub_772DF0
0x831122: mov     [esi+30h], eax
0x831125: mov     ecx, [esi+30h]
0x831128: push    0
0x83112A: push    1
0x83112C: push    7
0x83112E: call    sub_772CD0
0x831133: cmp     dword ptr [esi+30h], 0
0x831137: jnz     short loc_831141
0x831139: call    sub_772DF0
0x83113E: mov     [esi+30h], eax
0x831141: mov     ecx, [esi+30h]
0x831144: push    0
0x831146: push    4
0x831148: push    17h
0x83114A: call    sub_772CD0
0x83114F: cmp     dword ptr [esi+30h], 0
0x831153: jnz     short loc_83115D
0x831155: call    sub_772DF0
0x83115A: mov     [esi+30h], eax
0x83115D: mov     ecx, [esi+30h]
0x831160: push    0
0x831162: push    1
0x831164: push    0Eh
0x831166: call    sub_772CD0
0x83116B: cmp     dword ptr [esi+30h], 0
0x83116F: jnz     short loc_831179
0x831171: call    sub_772DF0
0x831176: mov     [esi+30h], eax
0x831179: mov     ecx, [esi+30h]
0x83117C: push    0
0x83117E: push    0
0x831180: push    34h ; '4'
0x831182: call    sub_772CD0
0x831187: cmp     esi, ds:0B45760h
0x83118D: mov     ds:0B43CD0h, ebp
0x831193: mov     dword ptr ds:0B44360h, 0BCh ; '¼'
0x83119D: mov     ds:0B43640h, ebx
0x8311A3: mov     dword ptr ds:0B449F0h, 0Ch
0x8311AD: jz      short loc_8311CE
0x8311AF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8311B3: jnz     short loc_8311BC
0x8311B5: mov     ecx, esi
0x8311B7: call    sub_7604D0
0x8311BC: mov     esi, ds:0B45760h
0x8311C2: test    esi, esi
0x8311C4: mov     [esp+2Ch+var_14], esi
0x8311C8: jz      short loc_8311CE
0x8311CA: add     dword ptr [esi+60h], 1
0x8311CE: cmp     dword ptr [esi+18h], 7
0x8311D2: jnb     loc_831454
0x8311D8: lea     ecx, [esp+2Ch+var_10]
0x8311DC: push    ecx
0x8311DD: call    sub_772630
0x8311E2: add     esp, 4
0x8311E5: push    eax
0x8311E6: lea     ecx, [esp+30h+a3]
0x8311EA: mov     byte ptr [esp+30h+var_4], 64h ; 'd'
0x8311EF: call    sub_75FAE0
0x8311F4: mov     eax, [esp+2Ch+var_10]
0x8311F8: test    eax, eax
0x8311FA: mov     byte ptr [esp+2Ch+var_4], 1
0x8311FF: jz      short loc_831214
0x831201: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831205: mov     ecx, eax
0x831207: add     eax, 5Ch ; '\'
0x83120A: cmp     dword ptr [eax], 0
0x83120D: jnz     short loc_831214
0x83120F: call    sub_772560
0x831214: mov     edi, [esp+2Ch+a3]
0x831218: push    2
0x83121A: push    1
0x83121C: push    0
0x83121E: push    edi
0x83121F: call    sub_801110
0x831224: add     esp, 10h
0x831227: push    edi; a3
0x831228: push    0; a2
0x83122A: mov     ecx, esi; this
0x83122C: call    sub_760010
0x831231: lea     edx, [esp+2Ch+var_10]
0x831235: push    edx
0x831236: call    sub_772630
0x83123B: add     esp, 4
0x83123E: push    eax
0x83123F: lea     ecx, [esp+30h+a3]
0x831243: mov     byte ptr [esp+30h+var_4], 65h ; 'e'
0x831248: call    sub_75FAE0
0x83124D: mov     eax, [esp+2Ch+var_10]
0x831251: test    eax, eax
0x831253: mov     byte ptr [esp+2Ch+var_4], 1
0x831258: jz      short loc_83126D
0x83125A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83125E: mov     ecx, eax
0x831260: add     eax, 5Ch ; '\'
0x831263: cmp     dword ptr [eax], 0
0x831266: jnz     short loc_83126D
0x831268: call    sub_772560
0x83126D: mov     edi, [esp+2Ch+a3]
0x831271: push    2
0x831273: push    1
0x831275: push    1
0x831277: push    edi
0x831278: call    sub_801110
0x83127D: add     esp, 10h
0x831280: push    edi; a3
0x831281: push    1; a2
0x831283: mov     ecx, esi; this
0x831285: call    sub_760010
0x83128A: lea     eax, [esp+2Ch+var_10]
0x83128E: push    eax
0x83128F: call    sub_772630
0x831294: add     esp, 4
0x831297: push    eax
0x831298: lea     ecx, [esp+30h+a3]
0x83129C: mov     byte ptr [esp+30h+var_4], 66h ; 'f'
0x8312A1: call    sub_75FAE0
0x8312A6: mov     eax, [esp+2Ch+var_10]
0x8312AA: test    eax, eax
0x8312AC: mov     byte ptr [esp+2Ch+var_4], 1
0x8312B1: jz      short loc_8312C6
0x8312B3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8312B7: mov     ecx, eax
0x8312B9: add     eax, 5Ch ; '\'
0x8312BC: cmp     dword ptr [eax], 0
0x8312BF: jnz     short loc_8312C6
0x8312C1: call    sub_772560
0x8312C6: mov     edi, [esp+2Ch+a3]
0x8312CA: push    2
0x8312CC: push    1
0x8312CE: push    2
0x8312D0: push    edi
0x8312D1: call    sub_801110
0x8312D6: add     esp, 10h
0x8312D9: push    edi; a3
0x8312DA: push    2; a2
0x8312DC: mov     ecx, esi; this
0x8312DE: call    sub_760010
0x8312E3: lea     ecx, [esp+2Ch+var_10]
0x8312E7: push    ecx
0x8312E8: call    sub_772630
0x8312ED: add     esp, 4
0x8312F0: push    eax
0x8312F1: lea     ecx, [esp+30h+a3]
0x8312F5: mov     byte ptr [esp+30h+var_4], 67h ; 'g'
0x8312FA: call    sub_75FAE0
0x8312FF: mov     eax, [esp+2Ch+var_10]
0x831303: test    eax, eax
0x831305: mov     byte ptr [esp+2Ch+var_4], 1
0x83130A: jz      short loc_83131F
0x83130C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831310: mov     ecx, eax
0x831312: add     eax, 5Ch ; '\'
0x831315: cmp     dword ptr [eax], 0
0x831318: jnz     short loc_83131F
0x83131A: call    sub_772560
0x83131F: mov     edi, [esp+2Ch+a3]
0x831323: push    2
0x831325: push    1
0x831327: push    3
0x831329: push    edi
0x83132A: call    sub_801110
0x83132F: add     esp, 10h
0x831332: push    edi; a3
0x831333: push    3; a2
0x831335: mov     ecx, esi; this
0x831337: call    sub_760010
0x83133C: lea     edx, [esp+2Ch+var_10]
0x831340: push    edx
0x831341: call    sub_772630
0x831346: add     esp, 4
0x831349: push    eax
0x83134A: lea     ecx, [esp+30h+a3]
0x83134E: mov     byte ptr [esp+30h+var_4], 68h ; 'h'
0x831353: call    sub_75FAE0
0x831358: mov     eax, [esp+2Ch+var_10]
0x83135C: test    eax, eax
0x83135E: mov     byte ptr [esp+2Ch+var_4], 1
0x831363: jz      short loc_831378
0x831365: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831369: mov     ecx, eax
0x83136B: add     eax, 5Ch ; '\'
0x83136E: cmp     dword ptr [eax], 0
0x831371: jnz     short loc_831378
0x831373: call    sub_772560
0x831378: mov     edi, [esp+2Ch+a3]
0x83137C: push    0
0x83137E: push    3
0x831380: push    4
0x831382: push    edi
0x831383: call    sub_801110
0x831388: mov     eax, ds:0B43110h
0x83138D: add     esp, 10h
0x831390: push    eax; a2
0x831391: mov     ecx, edi; this
0x831393: call    sub_76C910
0x831398: push    edi; a3
0x831399: push    4; a2
0x83139B: mov     ecx, esi; this
0x83139D: call    sub_760010
0x8313A2: lea     ecx, [esp+2Ch+var_10]
0x8313A6: push    ecx
0x8313A7: call    sub_772630
0x8313AC: add     esp, 4
0x8313AF: push    eax
0x8313B0: lea     ecx, [esp+30h+a3]
0x8313B4: mov     byte ptr [esp+30h+var_4], 69h ; 'i'
0x8313B9: call    sub_75FAE0
0x8313BE: mov     eax, [esp+2Ch+var_10]
0x8313C2: test    eax, eax
0x8313C4: mov     byte ptr [esp+2Ch+var_4], 1
0x8313C9: jz      short loc_8313DE
0x8313CB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8313CF: mov     ecx, eax
0x8313D1: add     eax, 5Ch ; '\'
0x8313D4: cmp     dword ptr [eax], 0
0x8313D7: jnz     short loc_8313DE
0x8313D9: call    sub_772560
0x8313DE: mov     edi, [esp+2Ch+a3]
0x8313E2: push    2
0x8313E4: push    1
0x8313E6: push    5
0x8313E8: push    edi
0x8313E9: call    sub_801110
0x8313EE: add     esp, 10h
0x8313F1: push    edi; a3
0x8313F2: push    5; a2
0x8313F4: mov     ecx, esi; this
0x8313F6: call    sub_760010
0x8313FB: lea     edx, [esp+2Ch+var_10]
0x8313FF: push    edx
0x831400: call    sub_772630
0x831405: add     esp, 4
0x831408: push    eax
0x831409: lea     ecx, [esp+30h+a3]
0x83140D: mov     byte ptr [esp+30h+var_4], 6Ah ; 'j'
0x831412: call    sub_75FAE0
0x831417: mov     eax, [esp+2Ch+var_10]
0x83141B: test    eax, eax
0x83141D: mov     byte ptr [esp+2Ch+var_4], 1
0x831422: jz      short loc_831437
0x831424: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831428: mov     ecx, eax
0x83142A: add     eax, 5Ch ; '\'
0x83142D: cmp     dword ptr [eax], 0
0x831430: jnz     short loc_831437
0x831432: call    sub_772560
0x831437: mov     edi, [esp+2Ch+a3]
0x83143B: push    0
0x83143D: push    3
0x83143F: push    6
0x831441: push    edi
0x831442: call    sub_801110
0x831447: add     esp, 10h
0x83144A: push    edi; a3
0x83144B: push    6; a2
0x83144D: mov     ecx, esi; this
0x83144F: call    sub_760010
0x831454: mov     eax, ds:0B453CCh
0x831459: push    eax; a2
0x83145A: mov     ecx, esi; this
0x83145C: call    sub_7AECB0
0x831461: mov     ecx, ds:0B451C8h
0x831467: push    ecx; a2
0x831468: mov     ecx, esi; this
0x83146A: call    sub_7AEC60
0x83146F: cmp     dword ptr [esi+30h], 0
0x831473: jnz     short loc_83147D
0x831475: call    sub_772DF0
0x83147A: mov     [esi+30h], eax
0x83147D: mov     ecx, [esi+30h]
0x831480: push    0
0x831482: push    0
0x831484: push    1Bh
0x831486: call    sub_772CD0
0x83148B: cmp     dword ptr [esi+30h], 0
0x83148F: jnz     short loc_831499
0x831491: call    sub_772DF0
0x831496: mov     [esi+30h], eax
0x831499: mov     ecx, [esi+30h]
0x83149C: push    0
0x83149E: push    0
0x8314A0: push    0Fh
0x8314A2: call    sub_772CD0
0x8314A7: cmp     dword ptr [esi+30h], 0
0x8314AB: jnz     short loc_8314B5
0x8314AD: call    sub_772DF0
0x8314B2: mov     [esi+30h], eax
0x8314B5: mov     ecx, [esi+30h]
0x8314B8: push    0
0x8314BA: push    1
0x8314BC: push    7
0x8314BE: call    sub_772CD0
0x8314C3: cmp     dword ptr [esi+30h], 0
0x8314C7: jnz     short loc_8314D1
0x8314C9: call    sub_772DF0
0x8314CE: mov     [esi+30h], eax
0x8314D1: mov     ecx, [esi+30h]
0x8314D4: push    0
0x8314D6: push    4
0x8314D8: push    17h
0x8314DA: call    sub_772CD0
0x8314DF: cmp     dword ptr [esi+30h], 0
0x8314E3: jnz     short loc_8314ED
0x8314E5: call    sub_772DF0
0x8314EA: mov     [esi+30h], eax
0x8314ED: mov     ecx, [esi+30h]
0x8314F0: push    0
0x8314F2: push    1
0x8314F4: push    0Eh
0x8314F6: call    sub_772CD0
0x8314FB: cmp     dword ptr [esi+30h], 0
0x8314FF: jnz     short loc_831509
0x831501: call    sub_772DF0
0x831506: mov     [esi+30h], eax
0x831509: mov     ecx, [esi+30h]
0x83150C: push    0
0x83150E: push    0
0x831510: push    34h ; '4'
0x831512: call    sub_772CD0
0x831517: cmp     esi, ds:0B45768h
0x83151D: mov     ebp, 630F8h
0x831522: mov     ds:0B43CE0h, ebp
0x831528: mov     dword ptr ds:0B44370h, 3Ch ; '<'
0x831532: mov     ds:0B43650h, ebx
0x831538: mov     dword ptr ds:0B44A00h, 8
0x831542: jz      short loc_831563
0x831544: add     dword ptr [esi+60h], 0FFFFFFFFh
0x831548: jnz     short loc_831551
0x83154A: mov     ecx, esi
0x83154C: call    sub_7604D0
0x831551: mov     esi, ds:0B45768h
0x831557: test    esi, esi
0x831559: mov     [esp+2Ch+var_14], esi
0x83155D: jz      short loc_831563
0x83155F: add     dword ptr [esi+60h], 1
0x831563: cmp     dword ptr [esi+18h], 7
0x831567: jnb     loc_8317EA
0x83156D: lea     edx, [esp+2Ch+var_10]
0x831571: push    edx
0x831572: call    sub_772630
0x831577: add     esp, 4
0x83157A: push    eax
0x83157B: lea     ecx, [esp+30h+a3]
0x83157F: mov     byte ptr [esp+30h+var_4], 6Bh ; 'k'
0x831584: call    sub_75FAE0
0x831589: mov     eax, [esp+2Ch+var_10]
0x83158D: test    eax, eax
0x83158F: mov     byte ptr [esp+2Ch+var_4], 1
0x831594: jz      short loc_8315A9
0x831596: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83159A: mov     ecx, eax
0x83159C: add     eax, 5Ch ; '\'
0x83159F: cmp     dword ptr [eax], 0
0x8315A2: jnz     short loc_8315A9
0x8315A4: call    sub_772560
0x8315A9: mov     edi, [esp+2Ch+a3]
0x8315AD: push    2
0x8315AF: push    1
0x8315B1: push    0
0x8315B3: push    edi
0x8315B4: call    sub_801110
0x8315B9: add     esp, 10h
0x8315BC: push    edi; a3
0x8315BD: push    0; a2
0x8315BF: mov     ecx, esi; this
0x8315C1: call    sub_760010
0x8315C6: lea     eax, [esp+2Ch+var_10]
0x8315CA: push    eax
0x8315CB: call    sub_772630
0x8315D0: add     esp, 4
0x8315D3: push    eax
0x8315D4: lea     ecx, [esp+30h+a3]
0x8315D8: mov     byte ptr [esp+30h+var_4], 6Ch ; 'l'
0x8315DD: call    sub_75FAE0
0x8315E2: mov     eax, [esp+2Ch+var_10]
0x8315E6: test    eax, eax
0x8315E8: mov     byte ptr [esp+2Ch+var_4], 1
0x8315ED: jz      short loc_831602
0x8315EF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8315F3: mov     ecx, eax
0x8315F5: add     eax, 5Ch ; '\'
0x8315F8: cmp     dword ptr [eax], 0
0x8315FB: jnz     short loc_831602
0x8315FD: call    sub_772560
0x831602: mov     edi, [esp+2Ch+a3]
0x831606: push    2
0x831608: push    1
0x83160A: push    1
0x83160C: push    edi
0x83160D: call    sub_801110
0x831612: add     esp, 10h
0x831615: push    edi; a3
0x831616: push    1; a2
0x831618: mov     ecx, esi; this
0x83161A: call    sub_760010
0x83161F: lea     ecx, [esp+2Ch+var_10]
0x831623: push    ecx
0x831624: call    sub_772630
0x831629: add     esp, 4
0x83162C: push    eax
0x83162D: lea     ecx, [esp+30h+a3]
0x831631: mov     byte ptr [esp+30h+var_4], 6Dh ; 'm'
0x831636: call    sub_75FAE0
0x83163B: mov     eax, [esp+2Ch+var_10]
0x83163F: test    eax, eax
0x831641: mov     byte ptr [esp+2Ch+var_4], 1
0x831646: jz      short loc_83165B
0x831648: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83164C: mov     ecx, eax
0x83164E: add     eax, 5Ch ; '\'
0x831651: cmp     dword ptr [eax], 0
0x831654: jnz     short loc_83165B
0x831656: call    sub_772560
0x83165B: mov     edi, [esp+2Ch+a3]
0x83165F: push    2
0x831661: push    1
0x831663: push    2
0x831665: push    edi
0x831666: call    sub_801110
0x83166B: add     esp, 10h
0x83166E: push    edi; a3
0x83166F: push    2; a2
0x831671: mov     ecx, esi; this
0x831673: call    sub_760010
0x831678: lea     edx, [esp+2Ch+var_10]
0x83167C: push    edx
0x83167D: call    sub_772630
0x831682: add     esp, 4
0x831685: push    eax
0x831686: lea     ecx, [esp+30h+a3]
0x83168A: mov     byte ptr [esp+30h+var_4], 6Eh ; 'n'
0x83168F: call    sub_75FAE0
0x831694: mov     eax, [esp+2Ch+var_10]
0x831698: test    eax, eax
0x83169A: mov     byte ptr [esp+2Ch+var_4], 1
0x83169F: jz      short loc_8316B4
0x8316A1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8316A5: mov     ecx, eax
0x8316A7: add     eax, 5Ch ; '\'
0x8316AA: cmp     dword ptr [eax], 0
0x8316AD: jnz     short loc_8316B4
0x8316AF: call    sub_772560
0x8316B4: mov     edi, [esp+2Ch+a3]
0x8316B8: push    2
0x8316BA: push    1
0x8316BC: push    3
0x8316BE: push    edi
0x8316BF: call    sub_801110
0x8316C4: add     esp, 10h
0x8316C7: push    edi; a3
0x8316C8: push    3; a2
0x8316CA: mov     ecx, esi; this
0x8316CC: call    sub_760010
0x8316D1: lea     eax, [esp+2Ch+var_10]
0x8316D5: push    eax
0x8316D6: call    sub_772630
0x8316DB: add     esp, 4
0x8316DE: push    eax
0x8316DF: lea     ecx, [esp+30h+a3]
0x8316E3: mov     byte ptr [esp+30h+var_4], 6Fh ; 'o'
0x8316E8: call    sub_75FAE0
0x8316ED: mov     eax, [esp+2Ch+var_10]
0x8316F1: test    eax, eax
0x8316F3: mov     byte ptr [esp+2Ch+var_4], 1
0x8316F8: jz      short loc_83170D
0x8316FA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8316FE: mov     ecx, eax
0x831700: add     eax, 5Ch ; '\'
0x831703: cmp     dword ptr [eax], 0
0x831706: jnz     short loc_83170D
0x831708: call    sub_772560
0x83170D: mov     edi, [esp+2Ch+a3]
0x831711: push    0
0x831713: push    3
0x831715: push    4
0x831717: push    edi
0x831718: call    sub_801110
0x83171D: mov     ecx, ds:0B43110h
0x831723: add     esp, 10h
0x831726: push    ecx; a2
0x831727: mov     ecx, edi; this
0x831729: call    sub_76C910
0x83172E: push    edi; a3
0x83172F: push    4; a2
0x831731: mov     ecx, esi; this
0x831733: call    sub_760010
0x831738: lea     edx, [esp+2Ch+var_10]
0x83173C: push    edx
0x83173D: call    sub_772630
0x831742: add     esp, 4
0x831745: push    eax
0x831746: lea     ecx, [esp+30h+a3]
0x83174A: mov     byte ptr [esp+30h+var_4], 70h ; 'p'
0x83174F: call    sub_75FAE0
0x831754: mov     eax, [esp+2Ch+var_10]
0x831758: test    eax, eax
0x83175A: mov     byte ptr [esp+2Ch+var_4], 1
0x83175F: jz      short loc_831774
0x831761: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831765: mov     ecx, eax
0x831767: add     eax, 5Ch ; '\'
0x83176A: cmp     dword ptr [eax], 0
0x83176D: jnz     short loc_831774
0x83176F: call    sub_772560
0x831774: mov     edi, [esp+2Ch+a3]
0x831778: push    2
0x83177A: push    1
0x83177C: push    5
0x83177E: push    edi
0x83177F: call    sub_801110
0x831784: add     esp, 10h
0x831787: push    edi; a3
0x831788: push    5; a2
0x83178A: mov     ecx, esi; this
0x83178C: call    sub_760010
0x831791: lea     eax, [esp+2Ch+var_10]
0x831795: push    eax
0x831796: call    sub_772630
0x83179B: add     esp, 4
0x83179E: push    eax
0x83179F: lea     ecx, [esp+30h+a3]
0x8317A3: mov     byte ptr [esp+30h+var_4], 71h ; 'q'
0x8317A8: call    sub_75FAE0
0x8317AD: mov     eax, [esp+2Ch+var_10]
0x8317B1: test    eax, eax
0x8317B3: mov     byte ptr [esp+2Ch+var_4], 1
0x8317B8: jz      short loc_8317CD
0x8317BA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8317BE: mov     ecx, eax
0x8317C0: add     eax, 5Ch ; '\'
0x8317C3: cmp     dword ptr [eax], 0
0x8317C6: jnz     short loc_8317CD
0x8317C8: call    sub_772560
0x8317CD: mov     edi, [esp+2Ch+a3]
0x8317D1: push    0
0x8317D3: push    3
0x8317D5: push    6
0x8317D7: push    edi
0x8317D8: call    sub_801110
0x8317DD: add     esp, 10h
0x8317E0: push    edi; a3
0x8317E1: push    6; a2
0x8317E3: mov     ecx, esi; this
0x8317E5: call    sub_760010
0x8317EA: mov     ecx, ds:0B453CCh
0x8317F0: push    ecx; a2
0x8317F1: mov     ecx, esi; this
0x8317F3: call    sub_7AECB0
0x8317F8: mov     edx, ds:0B451CCh
0x8317FE: push    edx; a2
0x8317FF: mov     ecx, esi; this
0x831801: call    sub_7AEC60
0x831806: cmp     dword ptr [esi+30h], 0
0x83180A: jnz     short loc_831814
0x83180C: call    sub_772DF0
0x831811: mov     [esi+30h], eax
0x831814: mov     ecx, [esi+30h]
0x831817: push    0
0x831819: push    0
0x83181B: push    1Bh
0x83181D: call    sub_772CD0
0x831822: cmp     dword ptr [esi+30h], 0
0x831826: jnz     short loc_831830
0x831828: call    sub_772DF0
0x83182D: mov     [esi+30h], eax
0x831830: mov     ecx, [esi+30h]
0x831833: push    0
0x831835: push    0
0x831837: push    0Fh
0x831839: call    sub_772CD0
0x83183E: cmp     dword ptr [esi+30h], 0
0x831842: jnz     short loc_83184C
0x831844: call    sub_772DF0
0x831849: mov     [esi+30h], eax
0x83184C: mov     ecx, [esi+30h]
0x83184F: push    0
0x831851: push    1
0x831853: push    7
0x831855: call    sub_772CD0
0x83185A: cmp     dword ptr [esi+30h], 0
0x83185E: jnz     short loc_831868
0x831860: call    sub_772DF0
0x831865: mov     [esi+30h], eax
0x831868: mov     ecx, [esi+30h]
0x83186B: push    0
0x83186D: push    4
0x83186F: push    17h
0x831871: call    sub_772CD0
0x831876: cmp     dword ptr [esi+30h], 0
0x83187A: jnz     short loc_831884
0x83187C: call    sub_772DF0
0x831881: mov     [esi+30h], eax
0x831884: mov     ecx, [esi+30h]
0x831887: push    0
0x831889: push    1
0x83188B: push    0Eh
0x83188D: call    sub_772CD0
0x831892: cmp     dword ptr [esi+30h], 0
0x831896: jnz     short loc_8318A0
0x831898: call    sub_772DF0
0x83189D: mov     [esi+30h], eax
0x8318A0: mov     ecx, [esi+30h]
0x8318A3: push    0
0x8318A5: push    0
0x8318A7: push    34h ; '4'
0x8318A9: call    sub_772CD0
0x8318AE: mov     ds:0B43658h, ebx
0x8318B4: or      ebx, 0FFFFFFFFh
0x8318B7: test    edi, edi
0x8318B9: mov     ds:0B43CE8h, ebp
0x8318BF: mov     dword ptr ds:0B44378h, 0BCh ; '¼'
0x8318C9: mov     dword ptr ds:0B44A08h, 0Ch
0x8318D3: mov     byte ptr [esp+2Ch+var_4], 0
0x8318D8: jz      short loc_8318E6
0x8318DA: add     [edi+5Ch], ebx
0x8318DD: jnz     short loc_8318E6
0x8318DF: mov     ecx, edi
0x8318E1: call    sub_772560
0x8318E6: add     [esi+60h], ebx
0x8318E9: mov     [esp+2Ch+var_4], ebx
0x8318ED: jnz     short loc_8318F6
0x8318EF: mov     ecx, esi
0x8318F1: call    sub_7604D0
0x8318F6: mov     ecx, dword ptr [esp+2Ch+var_C]
0x8318FA: mov     large fs:0, ecx
0x831901: pop     ecx
0x831902: pop     edi
0x831903: pop     esi
0x831904: pop     ebp
0x831905: pop     ebx
0x831906: add     esp, 18h
0x831909: retn
