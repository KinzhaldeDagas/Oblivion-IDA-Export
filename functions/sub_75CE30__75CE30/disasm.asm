0x75CE30: push    ecx
0x75CE31: push    ebx
0x75CE32: push    esi
0x75CE33: push    edi
0x75CE34: mov     edi, [esp+10h+arg_0]
0x75CE38: push    edi
0x75CE39: mov     esi, ecx
0x75CE3B: call    sub_75E920
0x75CE40: lea     ebx, [esi+40h]
0x75CE43: push    edi
0x75CE44: mov     ecx, ebx
0x75CE46: call    sub_709430
0x75CE4B: push    ebx
0x75CE4C: mov     ecx, esi
0x75CE4E: call    sub_75C1C0
0x75CE53: mov     eax, [edi+21Ch]
0x75CE59: mov     ebx, 1
0x75CE5E: push    ebx
0x75CE5F: lea     ecx, [esp+14h+var_4]
0x75CE63: push    ecx
0x75CE64: push    4
0x75CE66: lea     edx, [esi+58h]
0x75CE69: push    edx
0x75CE6A: push    eax
0x75CE6B: mov     eax, [eax+4]
0x75CE6E: mov     [esp+24h+var_4], 4
0x75CE76: call    eax
0x75CE78: mov     eax, [edi+21Ch]
0x75CE7E: push    ebx
0x75CE7F: lea     ecx, [esp+28h+var_4]
0x75CE83: push    ecx
0x75CE84: push    4
0x75CE86: lea     edx, [esi+5Ch]
0x75CE89: push    edx
0x75CE8A: push    eax
0x75CE8B: mov     eax, [eax+4]
0x75CE8E: mov     [esp+38h+var_4], 4
0x75CE96: call    eax
0x75CE98: mov     eax, [edi+21Ch]
0x75CE9E: push    ebx
0x75CE9F: lea     ecx, [esp+3Ch+var_4]
0x75CEA3: push    ecx
0x75CEA4: push    ebx
0x75CEA5: lea     edx, [esp+44h+arg_0]
0x75CEA9: push    edx
0x75CEAA: push    eax
0x75CEAB: mov     eax, [eax+4]
0x75CEAE: mov     [esp+4Ch+var_4], ebx
0x75CEB2: call    eax
0x75CEB4: cmp     byte ptr [esp+4Ch+arg_0], 0
0x75CEB9: push    ebx
0x75CEBA: setnz   cl
0x75CEBD: lea     edx, [esp+50h+var_4]
0x75CEC1: push    edx
0x75CEC2: mov     [esi+60h], cl
0x75CEC5: mov     eax, [edi+21Ch]
0x75CECB: mov     edx, [eax+4]
0x75CECE: push    ebx
0x75CECF: lea     ecx, [esp+58h+arg_0]
0x75CED3: push    ecx
0x75CED4: push    eax
0x75CED5: mov     [esp+60h+var_4], ebx
0x75CED9: call    edx
0x75CEDB: add     esp, 50h
0x75CEDE: cmp     byte ptr [esp+10h+arg_0], 0
0x75CEE3: push    ebx
0x75CEE4: lea     ecx, [esp+14h+var_4]
0x75CEE8: push    ecx
0x75CEE9: setnz   al
0x75CEEC: mov     [esi+61h], al
0x75CEEF: mov     eax, [edi+21Ch]
0x75CEF5: push    ebx
0x75CEF6: lea     edx, [esp+1Ch+arg_0]
0x75CEFA: push    edx
0x75CEFB: push    eax
0x75CEFC: mov     eax, [eax+4]
0x75CEFF: mov     [esp+24h+var_4], ebx
0x75CF03: call    eax
0x75CF05: cmp     byte ptr [esp+24h+arg_0], 0
0x75CF0A: setnz   cl
0x75CF0D: mov     [esi+62h], cl
0x75CF10: mov     edi, [edi+21Ch]
0x75CF16: mov     eax, [edi+4]
0x75CF19: push    ebx
0x75CF1A: lea     edx, [esp+28h+var_4]
0x75CF1E: push    edx
0x75CF1F: push    4
0x75CF21: add     esi, 64h ; 'd'
0x75CF24: push    esi
0x75CF25: push    edi
0x75CF26: mov     [esp+38h+var_4], 4
0x75CF2E: call    eax
0x75CF30: add     esp, 28h
0x75CF33: pop     edi
0x75CF34: pop     esi
0x75CF35: pop     ebx
0x75CF36: pop     ecx
0x75CF37: retn    4
