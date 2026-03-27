0x4D1A90: push    ebx
0x4D1A91: mov     ebx, ecx
0x4D1A93: push    ebp
0x4D1A94: push    ebx; a2
0x4D1A95: mov     ecx, offset stru_B35C80; this
0x4D1A9A: call    sub_496EA0
0x4D1A9F: lea     ebp, [ebx+48h]
0x4D1AA2: test    ebp, ebp
0x4D1AA4: jz      loc_4D1B87
0x4D1AAA: push    esi
0x4D1AAB: push    edi
0x4D1AAC: lea     esp, [esp+0]
0x4D1AB0: mov     edi, [ebp+0]
0x4D1AB3: test    edi, edi
0x4D1AB5: jz      loc_4D1B7A
0x4D1ABB: mov     eax, [edi]
0x4D1ABD: mov     edx, [eax+170h]
0x4D1AC3: mov     ecx, edi
0x4D1AC5: call    edx
0x4D1AC7: test    eax, eax
0x4D1AC9: jz      loc_4D1B7A
0x4D1ACF: mov     eax, [edi]
0x4D1AD1: mov     edx, [eax+170h]
0x4D1AD7: mov     ecx, edi
0x4D1AD9: call    edx
0x4D1ADB: cmp     byte ptr [eax+4], 1Eh
0x4D1ADF: jnz     loc_4D1B7A
0x4D1AE5: mov     eax, [edi]
0x4D1AE7: mov     edx, [eax+154h]
0x4D1AED: mov     ecx, edi
0x4D1AEF: call    edx
0x4D1AF1: test    eax, eax
0x4D1AF3: jz      short loc_4D1B63
0x4D1AF5: push    eax
0x4D1AF6: push    offset BSTreeNode
0x4D1AFB: call    NiRTTI_Cast
0x4D1B00: mov     esi, eax
0x4D1B02: add     esp, 8
0x4D1B05: test    esi, esi
0x4D1B07: jz      short loc_4D1B63
0x4D1B09: mov     eax, [esi]
0x4D1B0B: mov     edx, [eax+9Ch]
0x4D1B11: mov     ecx, esi
0x4D1B13: call    edx
0x4D1B15: test    eax, eax
0x4D1B17: jz      short loc_4D1B63
0x4D1B19: mov     eax, [esi]
0x4D1B1B: mov     edx, [eax+9Ch]
0x4D1B21: mov     ecx, esi
0x4D1B23: call    edx
0x4D1B25: cmp     dword ptr [eax+0Ch], 0
0x4D1B29: jz      short loc_4D1B63
0x4D1B2B: mov     eax, [esi]
0x4D1B2D: mov     edx, [eax+9Ch]
0x4D1B33: mov     ecx, esi
0x4D1B35: call    edx
0x4D1B37: fld     dword ptr [eax+50h]
0x4D1B3A: fld     [esp+10h+arg_0]
0x4D1B3E: fcompp
0x4D1B40: fnstsw  ax
0x4D1B42: test    ah, 41h
0x4D1B45: jz      short loc_4D1B7A
0x4D1B47: mov     eax, [esi]
0x4D1B49: mov     edx, [eax+9Ch]
0x4D1B4F: mov     ecx, esi
0x4D1B51: call    edx
0x4D1B53: fld     dword ptr [eax+50h]
0x4D1B56: fld     [esp+10h+arg_4]
0x4D1B5A: fcompp
0x4D1B5C: fnstsw  ax
0x4D1B5E: test    ah, 41h
0x4D1B61: jnp     short loc_4D1B7A
0x4D1B63: mov     eax, [edi]
0x4D1B65: mov     edx, [eax+150h]
0x4D1B6B: push    0
0x4D1B6D: mov     ecx, edi
0x4D1B6F: call    edx
0x4D1B71: push    0
0x4D1B73: mov     ecx, edi
0x4D1B75: call    sub_4D7010
0x4D1B7A: mov     ebp, [ebp+4]
0x4D1B7D: test    ebp, ebp
0x4D1B7F: jnz     loc_4D1AB0
0x4D1B85: pop     edi
0x4D1B86: pop     esi
0x4D1B87: push    ebx; a2
0x4D1B88: mov     ecx, offset stru_B35C80; this
0x4D1B8D: call    sub_496F50
0x4D1B92: pop     ebp
0x4D1B93: pop     ebx
0x4D1B94: retn    8
