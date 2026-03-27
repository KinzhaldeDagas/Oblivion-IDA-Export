0x9161D0: push    ebp
0x9161D1: mov     ebp, esp
0x9161D3: and     esp, 0FFFFFFF0h
0x9161D6: push    0FFFFFFFFh
0x9161D8: push    offset ??0hkNiTriStripsShape@@QAE@XZ_SEH
0x9161DD: mov     eax, large fs:0
0x9161E3: push    eax
0x9161E4: sub     esp, 38h
0x9161E7: mov     eax, ds:0B30AACh
0x9161EC: xor     eax, esp
0x9161EE: mov     [esp+44h+var_14], eax
0x9161F2: push    ebx
0x9161F3: push    esi
0x9161F4: push    edi
0x9161F5: mov     eax, ds:0B30AACh
0x9161FA: xor     eax, esp
0x9161FC: push    eax
0x9161FD: lea     eax, [esp+54h+var_C]
0x916201: mov     large fs:0, eax
0x916207: mov     edi, [ebp+arg_0]
0x91620A: mov     ebx, ecx
0x91620C: mov     [esp+54h+var_3C], ebx
0x916210: call    sub_9156C0
0x916215: lea     esi, [ebx+24h]
0x916218: xor     eax, eax
0x91621A: mov     dword ptr [ebx], offset ??_7hkNiTriStripsShape@@6B@; const hkNiTriStripsShape::`vftable'
0x916220: mov     [esp+54h+var_4], eax
0x916224: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@VhkNiTriStripsData@@@@6B@; const NiTLargeArray<hkNiTriStripsData>::`vftable'
0x91622A: mov     [esi+8], eax
0x91622D: mov     dword ptr [esi+14h], 1
0x916234: mov     [esi+0Ch], eax
0x916237: mov     [esi+10h], eax
0x91623A: mov     [esi+4], eax
0x91623D: fld     dword ptr [edi+4]
0x916240: fstp    dword ptr [ebx+20h]
0x916243: mov     byte ptr [esp+54h+var_4], 2
0x916248: fld     dword ptr [edi+20h]
0x91624B: fstp    dword ptr [esp+54h+var_30]
0x91624F: fld     dword ptr [edi+24h]
0x916252: fstp    dword ptr [esp+54h+var_30+4]
0x916256: fld     dword ptr [edi+28h]
0x916259: fstp    dword ptr [esp+54h+var_30+8]
0x91625D: fld     dword ptr [edi+2Ch]
0x916260: fstp    dword ptr [esp+54h+var_30+0Ch]
0x916264: movaps  xmm0, [esp+54h+var_30]
0x916269: movaps  xmmword ptr [ebx+10h], xmm0
0x91626D: xor     ebx, ebx
0x91626F: cmp     [edi+14h], eax
0x916272: jle     short loc_9162B0
0x916274: mov     eax, [edi+0Ch]
0x916277: lea     ecx, [eax+ebx*8]
0x91627A: mov     eax, [esi+0Ch]
0x91627D: cmp     eax, [esi+8]
0x916280: mov     [esp+54h+var_34], ecx
0x916284: mov     [esp+54h+var_38], eax
0x916288: jb      short loc_91629B
0x91628A: mov     edx, [esi+14h]
0x91628D: add     edx, eax
0x91628F: push    edx
0x916290: mov     ecx, esi
0x916292: call    sub_8C69C0
0x916297: mov     eax, [esp+54h+var_38]
0x91629B: mov     ecx, [esp+54h+var_34]
0x91629F: push    ecx
0x9162A0: push    eax
0x9162A1: mov     ecx, esi
0x9162A3: call    sub_8C68D0
0x9162A8: add     ebx, 1
0x9162AB: cmp     ebx, [edi+14h]
0x9162AE: jl      short loc_916274
0x9162B0: mov     eax, [esp+54h+var_3C]
0x9162B4: mov     ecx, [esp+54h+var_C]
0x9162B8: mov     large fs:0, ecx
0x9162BF: pop     ecx
0x9162C0: pop     edi
0x9162C1: pop     esi
0x9162C2: pop     ebx
0x9162C3: mov     ecx, [esp+44h+var_14]
0x9162C7: xor     ecx, esp
0x9162C9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9162CE: mov     esp, ebp
0x9162D0: pop     ebp
0x9162D1: retn    4
