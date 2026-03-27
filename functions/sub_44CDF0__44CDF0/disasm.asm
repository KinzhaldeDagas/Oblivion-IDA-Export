0x44CDF0: push    ecx
0x44CDF1: push    ebp
0x44CDF2: push    edi
0x44CDF3: mov     edi, [esp+0Ch+arg_0]
0x44CDF7: test    edi, edi
0x44CDF9: mov     ebp, ecx
0x44CDFB: mov     [esp+0Ch+var_4], ebp
0x44CDFF: jz      loc_44CF6E
0x44CE05: mov     eax, [edi]
0x44CE07: mov     edx, [eax+10h]
0x44CE0A: push    ebx
0x44CE0B: push    esi
0x44CE0C: mov     ecx, edi
0x44CE0E: call    edx
0x44CE10: test    eax, eax
0x44CE12: mov     ecx, edi
0x44CE14: jz      loc_44CF26
0x44CE1A: push    4
0x44CE1C: call    NiNode_GetNiPropertyByID
0x44CE21: push    6
0x44CE23: mov     ecx, edi
0x44CE25: mov     ebx, eax
0x44CE27: call    NiNode_GetNiPropertyByID
0x44CE2C: push    eax
0x44CE2D: push    offset dword_B3F96C
0x44CE32: call    NiRTTI_Cast
0x44CE37: mov     esi, eax
0x44CE39: add     esp, 8
0x44CE3C: test    esi, esi
0x44CE3E: jz      loc_44CF6C
0x44CE44: mov     ebp, [esp+14h+arg_4]
0x44CE48: mov     eax, [esi+20h]
0x44CE4B: mov     ecx, [eax+8]
0x44CE4E: test    ebx, ebx
0x44CE50: setnz   bl
0x44CE53: push    ebx
0x44CE54: push    ebp
0x44CE55: push    offset aDetailMap; "Detail Map"
0x44CE5A: push    edi
0x44CE5B: push    ecx
0x44CE5C: mov     ecx, [esp+28h+var_4]
0x44CE60: call    sub_44CD80
0x44CE65: mov     edx, [esi+20h]
0x44CE68: mov     eax, [edx+14h]
0x44CE6B: mov     ecx, [esp+14h+var_4]
0x44CE6F: push    ebx
0x44CE70: push    ebp
0x44CE71: push    offset aBumpMap; "Bump Map"
0x44CE76: push    edi
0x44CE77: push    eax
0x44CE78: call    sub_44CD80
0x44CE7D: mov     ecx, [esi+20h]
0x44CE80: mov     edx, [ecx+10h]
0x44CE83: mov     ecx, [esp+14h+var_4]
0x44CE87: push    ebx
0x44CE88: push    ebp
0x44CE89: push    offset aGlowMap; "Glow Map"
0x44CE8E: push    edi
0x44CE8F: push    edx
0x44CE90: call    sub_44CD80
0x44CE95: mov     eax, [esi+20h]
0x44CE98: mov     ecx, [eax+0Ch]
0x44CE9B: push    ebx
0x44CE9C: push    ebp
0x44CE9D: push    offset aGlossMap; "Gloss Map"
0x44CEA2: push    edi
0x44CEA3: push    ecx
0x44CEA4: mov     ecx, [esp+28h+var_4]
0x44CEA8: call    sub_44CD80
0x44CEAD: mov     edx, [esi+20h]
0x44CEB0: mov     eax, [edx+4]
0x44CEB3: mov     ecx, [esp+14h+var_4]
0x44CEB7: push    ebx
0x44CEB8: push    ebp
0x44CEB9: push    offset aDarkMap; "Dark Map"
0x44CEBE: push    edi
0x44CEBF: push    eax
0x44CEC0: call    sub_44CD80
0x44CEC5: test    word ptr [esi+18h], 0FF0h
0x44CECB: mov     [esp+14h+arg_0], 0
0x44CED3: jbe     loc_44CF6C
0x44CED9: mov     [esp+14h+arg_4], 18h
0x44CEE1: mov     ecx, [esi+20h]
0x44CEE4: mov     edx, [esp+14h+arg_4]
0x44CEE8: mov     eax, [edx+ecx]
0x44CEEB: mov     ecx, [esp+14h+var_4]
0x44CEEF: push    ebx
0x44CEF0: push    ebp
0x44CEF1: push    offset aDecalMap; "Decal Map"
0x44CEF6: push    edi
0x44CEF7: push    eax
0x44CEF8: call    sub_44CD80
0x44CEFD: movzx   ecx, word ptr [esi+18h]
0x44CF01: mov     eax, [esp+14h+arg_0]
0x44CF05: add     [esp+14h+arg_4], 4
0x44CF0A: shr     ecx, 4
0x44CF0D: add     eax, 1
0x44CF10: and     ecx, 0FFh
0x44CF16: cmp     eax, ecx
0x44CF18: mov     [esp+14h+arg_0], eax
0x44CF1C: jb      short loc_44CEE1
0x44CF1E: pop     esi
0x44CF1F: pop     ebx
0x44CF20: pop     edi
0x44CF21: pop     ebp
0x44CF22: pop     ecx
0x44CF23: retn    8
0x44CF26: mov     edx, [edi]
0x44CF28: mov     eax, [edx+8]
0x44CF2B: call    eax
0x44CF2D: test    eax, eax
0x44CF2F: jz      short loc_44CF6C
0x44CF31: movzx   ebx, word ptr [edi+0B6h]
0x44CF38: xor     esi, esi
0x44CF3A: test    ebx, ebx
0x44CF3C: jbe     short loc_44CF6C
0x44CF3E: mov     edi, edi
0x44CF40: movzx   ecx, word ptr [edi+0B6h]
0x44CF47: cmp     ecx, esi
0x44CF49: jbe     short loc_44CF65
0x44CF4B: mov     edx, [edi+0B0h]
0x44CF51: mov     eax, [edx+esi*4]
0x44CF54: test    eax, eax
0x44CF56: jz      short loc_44CF65
0x44CF58: mov     ecx, [esp+14h+arg_4]
0x44CF5C: push    ecx
0x44CF5D: push    eax
0x44CF5E: mov     ecx, ebp
0x44CF60: call    sub_44CDF0
0x44CF65: add     esi, 1
0x44CF68: cmp     esi, ebx
0x44CF6A: jb      short loc_44CF40
0x44CF6C: pop     esi
0x44CF6D: pop     ebx
0x44CF6E: pop     edi
0x44CF6F: pop     ebp
0x44CF70: pop     ecx
0x44CF71: retn    8
