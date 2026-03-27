0x68CB40: sub     esp, 8
0x68CB43: push    esi
0x68CB44: mov     esi, ecx
0x68CB46: mov     al, [esi]
0x68CB48: movzx   ecx, al
0x68CB4B: shr     ecx, 5
0x68CB4E: test    cl, 1
0x68CB51: jnz     loc_68CC3C
0x68CB57: and     al, 0FEh
0x68CB59: mov     [esi], al
0x68CB5B: mov     ecx, ds:0B333A0h
0x68CB61: push    edi
0x68CB62: mov     edi, [ecx+34h]
0x68CB65: test    edi, edi
0x68CB67: jnz     short loc_68CBA8
0x68CB69: call    TES__GetCurrentWorldspace
0x68CB6E: test    eax, eax
0x68CB70: jz      loc_68CC38
0x68CB76: mov     ecx, ds:0B333A0h
0x68CB7C: push    edi; int
0x68CB7D: call    TES__GetCurrentWorldspace
0x68CB82: fld     dword ptr [esi+8]
0x68CB85: mov     ecx, ds:0B33A98h
0x68CB8B: push    eax; int
0x68CB8C: sub     esp, 8
0x68CB8F: fstp    [esp+20h+var_1C]; float
0x68CB93: fld     dword ptr [esi+4]
0x68CB96: fstp    [esp+20h+var_20]; float
0x68CB99: call    sub_44A270
0x68CB9E: mov     edi, eax
0x68CBA0: test    edi, edi
0x68CBA2: jz      loc_68CC38
0x68CBA8: fld     dword ptr [esi+0Ch]
0x68CBAB: mov     ecx, edi
0x68CBAD: fstp    [esp+10h+var_8]
0x68CBB1: call    TESObjectCELL_GetWaterHeight
0x68CBB6: fcomp   [esp+10h+var_8]
0x68CBBA: fnstsw  ax
0x68CBBC: test    ah, 41h
0x68CBBF: jnz     short loc_68CC35
0x68CBC1: or      byte ptr [esi], 4
0x68CBC4: push    ebx
0x68CBC5: mov     ecx, edi; this
0x68CBC7: call    TESObjectCELL__GetWaterForm
0x68CBCC: test    eax, eax
0x68CBCE: mov     ebx, [esp+14h+arg_0]
0x68CBD2: jz      short loc_68CBFB
0x68CBD4: mov     edx, [eax]
0x68CBD6: mov     ecx, eax
0x68CBD8: mov     eax, [edx+88h]
0x68CBDE: call    eax
0x68CBE0: test    al, al
0x68CBE2: jz      short loc_68CBFB
0x68CBE4: mov     edx, [ebx]
0x68CBE6: mov     eax, [edx+284h]
0x68CBEC: push    47h ; 'G'
0x68CBEE: mov     ecx, ebx
0x68CBF0: call    eax
0x68CBF2: test    eax, eax
0x68CBF4: jg      short loc_68CBFB
0x68CBF6: or      byte ptr [esi], 10h
0x68CBF9: jmp     short loc_68CBFE
0x68CBFB: and     byte ptr [esi], 0EFh
0x68CBFE: fld     dword ptr ds:0A6E688h
0x68CC04: push    ecx
0x68CC05: fstp    [esp+18h+var_18]; float
0x68CC08: push    edi; int
0x68CC09: lea     ecx, [esi+4]
0x68CC0C: push    ecx; int
0x68CC0D: mov     ecx, ebx
0x68CC0F: call    Actor_IsUnderwater??
0x68CC14: test    al, al
0x68CC16: pop     ebx
0x68CC17: jz      short loc_68CC27
0x68CC19: or      byte ptr [esi], 8
0x68CC1C: or      byte ptr [esi], 20h
0x68CC1F: pop     edi
0x68CC20: pop     esi
0x68CC21: add     esp, 8
0x68CC24: retn    4
0x68CC27: and     byte ptr [esi], 0F7h
0x68CC2A: or      byte ptr [esi], 20h
0x68CC2D: pop     edi
0x68CC2E: pop     esi
0x68CC2F: add     esp, 8
0x68CC32: retn    4
0x68CC35: and     byte ptr [esi], 0E3h
0x68CC38: or      byte ptr [esi], 20h
0x68CC3B: pop     edi
0x68CC3C: pop     esi
0x68CC3D: add     esp, 8
0x68CC40: retn    4
