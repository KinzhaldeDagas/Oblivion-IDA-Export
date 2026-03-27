0x7AB960: sub     esp, 10h
0x7AB963: push    ebx
0x7AB964: push    edi
0x7AB965: mov     ebx, ecx
0x7AB967: xor     edi, edi
0x7AB969: cmp     [ebx+5Ch], edi
0x7AB96C: jnz     loc_7ABA84
0x7AB972: cmp     [ebx+8], edi
0x7AB975: jz      loc_7ABA84
0x7AB97B: push    ebp
0x7AB97C: push    esi
0x7AB97D: push    18h; Size
0x7AB97F: call    FormHeapAlloc
0x7AB984: add     esp, 4
0x7AB987: cmp     eax, edi
0x7AB989: jz      short loc_7AB99E
0x7AB98B: mov     dword ptr [eax], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AB991: mov     [eax+4], edi
0x7AB994: mov     [eax+8], edi
0x7AB997: mov     [eax+0Ch], edi
0x7AB99A: mov     ebp, eax
0x7AB99C: jmp     short loc_7AB9A0
0x7AB99E: xor     ebp, ebp
0x7AB9A0: mov     ecx, ebp
0x7AB9A2: mov     [esp+20h+var_10], ebp
0x7AB9A6: call    sub_7A9C30
0x7AB9AB: mov     eax, [ebp+4]
0x7AB9AE: mov     [ebp+0Ch], eax
0x7AB9B1: mov     [ebp+4], edi
0x7AB9B4: mov     [ebp+8], edi
0x7AB9B7: mov     [ebp+10h], edi
0x7AB9BA: mov     eax, [ebx+8]
0x7AB9BD: fld     dword ptr [eax+64h]
0x7AB9C0: add     eax, 64h ; 'd'
0x7AB9C3: cmp     byte ptr [ebx+35h], 0
0x7AB9C7: fstp    [esp+20h+var_C]
0x7AB9CB: fld     dword ptr [eax+0Ch]
0x7AB9CE: fstp    [esp+20h+var_8]
0x7AB9D2: fld     dword ptr [eax+18h]
0x7AB9D5: mov     eax, [esp+20h+arg_0]
0x7AB9D9: fstp    [esp+20h+var_4]
0x7AB9DD: fld     dword ptr [eax+4]
0x7AB9E0: fmul    [esp+20h+var_8]
0x7AB9E4: fld     dword ptr [eax]
0x7AB9E6: fmul    [esp+20h+var_C]
0x7AB9EA: faddp   st(1), st
0x7AB9EC: fld     dword ptr [eax+8]
0x7AB9EF: fmul    [esp+20h+var_4]
0x7AB9F3: faddp   st(1), st
0x7AB9F5: jz      short loc_7ABA02
0x7AB9F7: fstp    [esp+20h+arg_0]
0x7AB9FB: fld     [esp+20h+arg_0]
0x7AB9FF: fsub    dword ptr [eax+0Ch]
0x7ABA02: fstp    dword ptr [ebp+14h]
0x7ABA05: mov     esi, [ebx+50h]
0x7ABA08: xor     cl, cl
0x7ABA0A: lea     ebx, [ebx+0]
0x7ABA10: cmp     esi, edi
0x7ABA12: jz      short loc_7ABA6E
0x7ABA14: mov     edx, [esi+8]
0x7ABA17: fld     dword ptr [edx+14h]
0x7ABA1A: fld     dword ptr [ebp+14h]
0x7ABA1D: fcompp
0x7ABA1F: fnstsw  ax
0x7ABA21: test    ah, 41h
0x7ABA24: jnz     short loc_7ABA57
0x7ABA26: mov     eax, [ebx+4Ch]
0x7ABA29: mov     edx, [eax+4]
0x7ABA2C: lea     edi, [ebx+4Ch]
0x7ABA2F: mov     ecx, edi
0x7ABA31: call    edx
0x7ABA33: mov     [eax+8], ebp
0x7ABA36: mov     [eax], esi
0x7ABA38: mov     ecx, [esi+4]
0x7ABA3B: mov     [eax+4], ecx
0x7ABA3E: mov     ecx, [esi+4]
0x7ABA41: test    ecx, ecx
0x7ABA43: jz      short loc_7ABA49
0x7ABA45: mov     [ecx], eax
0x7ABA47: jmp     short loc_7ABA4C
0x7ABA49: mov     [edi+4], eax
0x7ABA4C: mov     [esi+4], eax
0x7ABA4F: add     dword ptr [edi+0Ch], 1
0x7ABA53: mov     cl, 1
0x7ABA55: xor     edi, edi
0x7ABA57: test    cl, cl
0x7ABA59: mov     esi, [esi]
0x7ABA5B: jz      short loc_7ABA10
0x7ABA5D: add     dword ptr [ebx+5Ch], 1
0x7ABA61: pop     esi
0x7ABA62: mov     [ebx+60h], ebp
0x7ABA65: pop     ebp
0x7ABA66: pop     edi
0x7ABA67: pop     ebx
0x7ABA68: add     esp, 10h
0x7ABA6B: retn    4
0x7ABA6E: test    cl, cl
0x7ABA70: jnz     short loc_7ABA7F
0x7ABA72: lea     edx, [esp+20h+var_10]
0x7ABA76: push    edx
0x7ABA77: lea     ecx, [ebx+4Ch]
0x7ABA7A: call    sub_5B1E20
0x7ABA7F: pop     esi
0x7ABA80: mov     [ebx+60h], ebp
0x7ABA83: pop     ebp
0x7ABA84: add     dword ptr [ebx+5Ch], 1
0x7ABA88: pop     edi
0x7ABA89: pop     ebx
0x7ABA8A: add     esp, 10h
0x7ABA8D: retn    4
