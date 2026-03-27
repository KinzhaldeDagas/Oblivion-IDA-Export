0x8BE550: push    ebp
0x8BE551: mov     ebp, esp
0x8BE553: and     esp, 0FFFFFFF0h
0x8BE556: push    0FFFFFFFFh
0x8BE558: push    offset SEH_8BE550
0x8BE55D: mov     eax, large fs:0
0x8BE563: push    eax
0x8BE564: sub     esp, 38h
0x8BE567: mov     eax, ds:0B30AACh
0x8BE56C: xor     eax, esp
0x8BE56E: mov     [esp+44h+var_14], eax
0x8BE572: push    ebx
0x8BE573: push    esi
0x8BE574: push    edi
0x8BE575: mov     eax, ds:0B30AACh
0x8BE57A: xor     eax, esp
0x8BE57C: push    eax
0x8BE57D: lea     eax, [esp+54h+var_C]
0x8BE581: mov     large fs:0, eax
0x8BE587: mov     esi, [ebp+arg_0]
0x8BE58A: test    esi, esi
0x8BE58C: mov     ebx, ecx
0x8BE58E: jz      loc_8BE65B
0x8BE594: mov     ecx, ds:0BA7D98h
0x8BE59A: mov     eax, [ecx]
0x8BE59C: mov     edx, [eax+10h]
0x8BE59F: push    26h ; '&'
0x8BE5A1: push    60h ; '`'
0x8BE5A3: call    edx
0x8BE5A5: mov     word ptr [eax+4], 60h ; '`'
0x8BE5AB: mov     dword ptr [esp+54h+var_48+4], eax
0x8BE5AF: mov     ecx, [esi+8]
0x8BE5B2: mov     edx, [esi+4]
0x8BE5B5: push    0
0x8BE5B7: push    ecx
0x8BE5B8: push    edx
0x8BE5B9: mov     ecx, eax
0x8BE5BB: mov     [esp+60h+var_4], 0
0x8BE5C3: call    sub_910040
0x8BE5C8: fld     dword ptr [esi+20h]
0x8BE5CB: fstp    dword ptr [esp+54h+var_38+8]
0x8BE5CF: mov     edi, eax
0x8BE5D1: fld     dword ptr [esi+24h]
0x8BE5D4: push    edi
0x8BE5D5: fstp    dword ptr [esp+58h+var_38+0Ch]
0x8BE5D9: mov     ecx, ebx
0x8BE5DB: fld     dword ptr [esi+28h]
0x8BE5DE: mov     [esp+58h+var_4], 0FFFFFFFFh
0x8BE5E6: fstp    [esp+58h+var_28]
0x8BE5EA: fld     dword ptr [esi+2Ch]
0x8BE5ED: fstp    [esp+58h+var_24]
0x8BE5F1: fld     dword ptr [esi+10h]
0x8BE5F4: fstp    dword ptr [esp+58h+var_48+8]
0x8BE5F8: fld     dword ptr [esi+14h]
0x8BE5FB: fstp    dword ptr [esp+58h+var_48+0Ch]
0x8BE5FF: fld     dword ptr [esi+18h]
0x8BE602: fstp    dword ptr [esp+58h+var_38]
0x8BE606: fld     dword ptr [esi+1Ch]
0x8BE609: fstp    dword ptr [esp+58h+var_38+4]
0x8BE60D: movaps  xmm0, [esp+58h+var_48+8]
0x8BE612: movaps  xmmword ptr [edi+20h], xmm0
0x8BE616: movaps  xmm0, [esp+58h+var_38+8]
0x8BE61B: movaps  xmmword ptr [edi+30h], xmm0
0x8BE61F: fld     dword ptr [esi+30h]
0x8BE622: fstp    dword ptr [edi+40h]
0x8BE625: fld     dword ptr [esi+34h]
0x8BE628: fstp    dword ptr [edi+44h]
0x8BE62B: mov     eax, [ebx]
0x8BE62D: mov     edx, [eax+4Ch]
0x8BE630: call    edx
0x8BE632: cmp     word ptr [edi+4], 0
0x8BE637: jz      short loc_8BE651
0x8BE639: add     word ptr [edi+6], 0FFFFh
0x8BE63E: movzx   eax, word ptr [edi+6]
0x8BE642: test    ax, ax
0x8BE645: jnz     short loc_8BE651
0x8BE647: mov     eax, [edi]
0x8BE649: mov     edx, [eax]
0x8BE64B: push    1
0x8BE64D: mov     ecx, edi
0x8BE64F: call    edx
0x8BE651: mov     eax, [ebx]
0x8BE653: mov     edx, [eax+7Ch]
0x8BE656: push    esi
0x8BE657: mov     ecx, ebx
0x8BE659: call    edx
0x8BE65B: mov     ecx, [esp+54h+var_C]
0x8BE65F: mov     large fs:0, ecx
0x8BE666: pop     ecx
0x8BE667: pop     edi
0x8BE668: pop     esi
0x8BE669: pop     ebx
0x8BE66A: mov     ecx, [esp+44h+var_14]
0x8BE66E: xor     ecx, esp
0x8BE670: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BE675: mov     esp, ebp
0x8BE677: pop     ebp
0x8BE678: retn    4
