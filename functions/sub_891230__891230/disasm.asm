0x891230: push    ebp
0x891231: mov     ebp, esp
0x891233: and     esp, 0FFFFFFF0h
0x891236: sub     esp, 6Ch
0x891239: mov     eax, ds:0B30AACh
0x89123E: xor     eax, esp
0x891240: mov     [esp+6Ch+var_4], eax
0x891244: push    esi
0x891245: mov     esi, ecx
0x891247: cmp     dword ptr [esi+368h], 0
0x89124E: jz      short loc_891285
0x891250: mov     ecx, [esi+364h]
0x891256: lea     eax, [esp+70h+var_50]
0x89125A: push    eax
0x89125B: call    sub_6848D0
0x891260: fld     [ebp+arg_4]
0x891263: mov     ecx, [ebp+arg_0]
0x891266: movaps  xmm0, [esp+70h+var_20]
0x89126B: push    ecx
0x89126C: mov     ecx, [esi+368h]
0x891272: lea     edx, [esp+74h+var_60]
0x891276: movaps  [esp+74h+var_60], xmm0
0x89127B: fstp    dword ptr [esp+74h+var_60+0Ch]
0x89127F: push    edx
0x891280: call    sub_88D900
0x891285: mov     ecx, [esp+70h+var_4]
0x891289: pop     esi
0x89128A: xor     ecx, esp
0x89128C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x891291: mov     esp, ebp
0x891293: pop     ebp
0x891294: retn    8
