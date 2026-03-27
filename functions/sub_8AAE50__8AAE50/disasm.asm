0x8AAE50: push    ebp
0x8AAE51: mov     ebp, esp
0x8AAE53: and     esp, 0FFFFFFC0h
0x8AAE56: sub     esp, 74h
0x8AAE59: mov     eax, ds:0B30AACh
0x8AAE5E: xor     eax, esp
0x8AAE60: mov     [esp+74h+var_4], eax
0x8AAE64: push    ebx
0x8AAE65: push    esi
0x8AAE66: mov     esi, [ebp+arg_0]
0x8AAE69: push    edi
0x8AAE6A: mov     edi, ecx
0x8AAE6C: push    esi
0x8AAE6D: mov     [esp+84h+var_4C], edi
0x8AAE71: call    sub_716140
0x8AAE76: mov     eax, ds:0BA7F3Ch
0x8AAE7B: push    eax; ArgList
0x8AAE7C: call    TESOutput_PrintString
0x8AAE81: movzx   ebx, word ptr [esi+0Ah]
0x8AAE85: movzx   ecx, word ptr [esi+8]
0x8AAE89: add     esp, 4
0x8AAE8C: cmp     ebx, ecx
0x8AAE8E: mov     [esp+80h+var_54], eax
0x8AAE92: jb      short loc_8AAEA2
0x8AAE94: movzx   edx, word ptr [esi+0Eh]
0x8AAE98: add     edx, ebx
0x8AAE9A: push    edx
0x8AAE9B: mov     ecx, esi
0x8AAE9D: call    NiTArray_SetSize
0x8AAEA2: lea     eax, [esp+80h+var_54]
0x8AAEA6: push    eax
0x8AAEA7: push    ebx
0x8AAEA8: mov     ecx, esi
0x8AAEAA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AAEAF: mov     eax, [edi+50h]
0x8AAEB2: push    eax; int
0x8AAEB3: push    offset aIkeys; "iKeys"
0x8AAEB8: call    TESOutput_PrintLabeledUnsignedInt
0x8AAEBD: movzx   ebx, word ptr [esi+0Ah]
0x8AAEC1: movzx   ecx, word ptr [esi+8]
0x8AAEC5: add     esp, 8
0x8AAEC8: cmp     ebx, ecx
0x8AAECA: mov     [esp+80h+var_54], eax
0x8AAECE: jb      short loc_8AAEDE
0x8AAED0: movzx   edx, word ptr [esi+0Eh]
0x8AAED4: add     edx, ebx
0x8AAED6: push    edx
0x8AAED7: mov     ecx, esi
0x8AAED9: call    NiTArray_SetSize
0x8AAEDE: lea     eax, [esp+80h+var_54]
0x8AAEE2: push    eax
0x8AAEE3: push    ebx
0x8AAEE4: mov     ecx, esi
0x8AAEE6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AAEEB: xor     eax, eax
0x8AAEED: cmp     [edi+50h], eax
0x8AAEF0: mov     [esp+80h+var_50], eax
0x8AAEF4: jbe     loc_8AAFE9
0x8AAEFA: mov     [esp+80h+var_54], eax
0x8AAEFE: jmp     short loc_8AAF02
0x8AAF00: mov     edi, ecx
0x8AAF02: mov     eax, [edi+44h]
0x8AAF05: add     eax, [esp+80h+var_54]
0x8AAF09: mov     ecx, [esp+80h+var_50]
0x8AAF0D: fld     dword ptr [eax+8]
0x8AAF10: sub     esp, 18h
0x8AAF13: fstp    [esp+98h+var_88]
0x8AAF17: lea     edx, [esp+98h+var_48]
0x8AAF1B: fld     dword ptr [eax+4]
0x8AAF1E: fstp    [esp+98h+var_90]
0x8AAF22: fld     dword ptr [eax]
0x8AAF24: fstp    [esp+98h+var_98]
0x8AAF27: push    ecx
0x8AAF28: push    offset aKeyD_4f_4f_4f; "Key%d: %.4f, %.4f, %.4f"
0x8AAF2D: push    edx
0x8AAF2E: call    __sprintf
0x8AAF33: lea     eax, [esp+0A4h+var_48]
0x8AAF37: add     esp, 24h
0x8AAF3A: lea     edx, [eax+1]
0x8AAF3D: lea     ecx, [ecx+0]
0x8AAF40: mov     cl, [eax]
0x8AAF42: add     eax, 1
0x8AAF45: test    cl, cl
0x8AAF47: jnz     short loc_8AAF40
0x8AAF49: sub     eax, edx
0x8AAF4B: add     eax, 1
0x8AAF4E: push    eax; Size
0x8AAF4F: call    FormHeapAlloc
0x8AAF54: mov     ebx, eax
0x8AAF56: lea     eax, [esp+84h+var_48]
0x8AAF5A: mov     edx, ebx
0x8AAF5C: mov     ecx, eax
0x8AAF5E: add     esp, 4
0x8AAF61: sub     edx, ecx
0x8AAF63: mov     cl, [eax]
0x8AAF65: mov     [edx+eax], cl
0x8AAF68: add     eax, 1
0x8AAF6B: test    cl, cl
0x8AAF6D: jnz     short loc_8AAF63
0x8AAF6F: movzx   edi, word ptr [esi+0Ah]
0x8AAF73: movzx   edx, word ptr [esi+8]
0x8AAF77: cmp     edi, edx
0x8AAF79: jb      short loc_8AAF89
0x8AAF7B: movzx   eax, word ptr [esi+0Eh]
0x8AAF7F: add     eax, edi
0x8AAF81: push    eax
0x8AAF82: mov     ecx, esi
0x8AAF84: call    NiTArray_SetSize
0x8AAF89: movzx   ecx, word ptr [esi+0Ah]
0x8AAF8D: cmp     edi, ecx
0x8AAF8F: jb      short loc_8AAFA3
0x8AAF91: test    ebx, ebx
0x8AAF93: lea     edx, [edi+1]
0x8AAF96: mov     [esi+0Ah], dx
0x8AAF9A: jz      short loc_8AAFC6
0x8AAF9C: add     word ptr [esi+0Ch], 1
0x8AAFA1: jmp     short loc_8AAFC6
0x8AAFA3: test    ebx, ebx
0x8AAFA5: jz      short loc_8AAFB7
0x8AAFA7: mov     eax, [esi+4]
0x8AAFAA: cmp     dword ptr [eax+edi*4], 0
0x8AAFAE: jnz     short loc_8AAFC6
0x8AAFB0: add     word ptr [esi+0Ch], 1
0x8AAFB5: jmp     short loc_8AAFC6
0x8AAFB7: mov     ecx, [esi+4]
0x8AAFBA: cmp     dword ptr [ecx+edi*4], 0
0x8AAFBE: jz      short loc_8AAFC6
0x8AAFC0: add     word ptr [esi+0Ch], 0FFFFh
0x8AAFC6: mov     eax, [esp+80h+var_50]
0x8AAFCA: mov     edx, [esi+4]
0x8AAFCD: mov     ecx, [esp+80h+var_4C]
0x8AAFD1: add     [esp+80h+var_54], 0Ch
0x8AAFD6: add     eax, 1
0x8AAFD9: mov     [edx+edi*4], ebx
0x8AAFDC: cmp     eax, [ecx+50h]
0x8AAFDF: mov     [esp+80h+var_50], eax
0x8AAFE3: jb      loc_8AAF00
0x8AAFE9: mov     ecx, [esp+80h+var_4]
0x8AAFED: pop     edi
0x8AAFEE: pop     esi
0x8AAFEF: pop     ebx
0x8AAFF0: xor     ecx, esp
0x8AAFF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AAFF7: mov     esp, ebp
0x8AAFF9: pop     ebp
0x8AAFFA: retn    4
