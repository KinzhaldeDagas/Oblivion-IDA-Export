0x8A4260: push    ebp
0x8A4261: mov     ebp, esp
0x8A4263: and     esp, 0FFFFFFF0h
0x8A4266: push    0FFFFFFFFh
0x8A4268: push    offset SEH_8A4260
0x8A426D: mov     eax, large fs:0
0x8A4273: push    eax
0x8A4274: sub     esp, 58h
0x8A4277: mov     eax, ds:0B30AACh
0x8A427C: xor     eax, esp
0x8A427E: mov     [esp+64h+var_14], eax
0x8A4282: push    ebx
0x8A4283: push    esi
0x8A4284: push    edi
0x8A4285: mov     eax, ds:0B30AACh
0x8A428A: xor     eax, esp
0x8A428C: push    eax
0x8A428D: lea     eax, [esp+74h+var_C]
0x8A4291: mov     large fs:0, eax
0x8A4297: mov     esi, [ebp+arg_0]
0x8A429A: test    esi, esi
0x8A429C: mov     dword ptr [esp+74h+var_5C+4], ecx
0x8A42A0: jz      loc_8A44CD
0x8A42A6: fld     dword ptr ds:0A97404h
0x8A42AC: mov     ebx, 8
0x8A42B1: fcomp   dword ptr [esi+0CCh]
0x8A42B7: fnstsw  ax
0x8A42B9: test    ah, 1
0x8A42BC: jz      short loc_8A42D1
0x8A42BE: fld     dword ptr [esi+0CCh]
0x8A42C4: fcomp   qword ptr ds:0A38538h
0x8A42CA: fnstsw  ax
0x8A42CC: test    ah, 41h
0x8A42CF: jnz     short loc_8A42DD
0x8A42D1: fld     dword ptr ds:0A57F50h
0x8A42D7: fstp    dword ptr [esi+0CCh]
0x8A42DD: fld     dword ptr [esi+0C4h]
0x8A42E3: fcomp   qword ptr ds:0A529C0h
0x8A42E9: fnstsw  ax
0x8A42EB: test    ah, 5
0x8A42EE: jp      short loc_8A42FC
0x8A42F0: fld     dword ptr ds:0A2FE78h
0x8A42F6: fstp    dword ptr [esi+0C4h]
0x8A42FC: fld     dword ptr [esi+0C0h]
0x8A4302: fcomp   qword ptr ds:0A464C8h
0x8A4308: fnstsw  ax
0x8A430A: test    ah, 1
0x8A430D: jnz     short loc_8A431B
0x8A430F: fld     dword ptr ds:0A97454h
0x8A4315: fstp    dword ptr [esi+0C0h]
0x8A431B: fldz
0x8A431D: fcomp   dword ptr [esi+0B0h]
0x8A4323: fnstsw  ax
0x8A4325: test    ah, 44h
0x8A4328: jnp     short loc_8A4359
0x8A432A: mov     al, [esi+0D0h]
0x8A4330: cmp     al, 6
0x8A4332: jl      short loc_8A4347
0x8A4334: movsx   ebx, al
0x8A4337: mov     byte ptr [esi+0D0h], 1
0x8A433E: mov     byte ptr [esi+0D3h], 4
0x8A4345: jmp     short loc_8A4369
0x8A4347: cmp     byte ptr [esi+0D3h], 0
0x8A434E: jnz     short loc_8A4369
0x8A4350: mov     byte ptr [esi+0D3h], 4
0x8A4357: jmp     short loc_8A4369
0x8A4359: cmp     byte ptr [esi+0D0h], 7
0x8A4360: jnz     short loc_8A4369
0x8A4362: mov     byte ptr [esi+0D3h], 1
0x8A4369: mov     eax, [esi]
0x8A436B: mov     ecx, [esi+4]
0x8A436E: mov     [esi+20h], eax
0x8A4371: lea     edi, [esi+20h]
0x8A4374: mov     [esi+24h], ecx
0x8A4377: mov     ecx, ds:0BA7D98h
0x8A437D: mov     edx, [ecx]
0x8A437F: mov     eax, [edx+10h]
0x8A4382: push    2Ah ; '*'
0x8A4384: push    0C4h ; 'Ä'
0x8A4389: call    eax
0x8A438B: mov     word ptr [eax+4], 0C4h ; 'Ä'
0x8A4391: mov     dword ptr [esp+74h+var_5C+8], eax
0x8A4395: push    edi
0x8A4396: mov     ecx, eax
0x8A4398: mov     [esp+78h+var_4], 0
0x8A43A0: call    sub_8A9F50
0x8A43A5: cmp     ebx, 8
0x8A43A8: mov     edi, eax
0x8A43AA: mov     [esp+74h+var_4], 0FFFFFFFFh
0x8A43B2: jz      short loc_8A43C6
0x8A43B4: push    0
0x8A43B6: push    1
0x8A43B8: push    ebx
0x8A43B9: mov     ecx, edi
0x8A43BB: mov     [esi+0D0h], bl
0x8A43C1: call    sub_8A9AB0
0x8A43C6: mov     ebx, dword ptr [esp+74h+var_5C+4]
0x8A43CA: mov     edx, [ebx]
0x8A43CC: mov     eax, [edx+4Ch]
0x8A43CF: push    edi
0x8A43D0: mov     ecx, ebx
0x8A43D2: call    eax
0x8A43D4: mov     ecx, edi
0x8A43D6: call    sub_8BC730
0x8A43DB: mov     al, [esi+0D0h]
0x8A43E1: cmp     al, 6
0x8A43E3: jge     loc_8A44C3
0x8A43E9: test    al, al
0x8A43EB: jle     loc_8A44C3
0x8A43F1: mov     eax, [ebx+8]
0x8A43F4: test    eax, eax
0x8A43F6: jz      loc_8A44C3
0x8A43FC: lea     edi, [eax+14h]
0x8A43FF: test    edi, edi
0x8A4401: jz      loc_8A44C3
0x8A4407: lea     ecx, [esp+74h+var_4C+0Ch]
0x8A440B: push    ecx
0x8A440C: mov     ecx, ebx
0x8A440E: call    sub_8A3E00
0x8A4413: movaps  xmm0, xmmword ptr [esp+74h+var_3C+0Ch]
0x8A4418: movaps  xmm1, [esp+74h+var_4C+0Ch]
0x8A441D: subps   xmm0, xmm1
0x8A4420: movaps  [esp+74h+var_5C+0Ch], xmm0
0x8A4425: fld     dword ptr [esp+74h+var_5C+0Ch]
0x8A4429: fld     dword ptr [esp+74h+var_4C]
0x8A442D: fcom    st(1)
0x8A442F: fnstsw  ax
0x8A4431: test    ah, 5
0x8A4434: jp      short loc_8A4453
0x8A4436: fstp    st(1)
0x8A4438: fld     dword ptr [esp+74h+var_4C+4]
0x8A443C: fcompp
0x8A443E: fnstsw  ax
0x8A4440: test    ah, 5
0x8A4443: jp      short loc_8A444C
0x8A4445: mov     eax, 2
0x8A444A: jmp     short loc_8A446B
0x8A444C: mov     eax, 1
0x8A4451: jmp     short loc_8A446B
0x8A4453: fstp    st
0x8A4455: fld     dword ptr [esp+74h+var_4C+4]
0x8A4459: fcompp
0x8A445B: fnstsw  ax
0x8A445D: test    ah, 5
0x8A4460: jp      short loc_8A4469
0x8A4462: mov     eax, 2
0x8A4467: jmp     short loc_8A446B
0x8A4469: xor     eax, eax
0x8A446B: fld     dword ptr [esp+eax*4+74h+var_5C+0Ch]
0x8A446F: fld     dword ptr ds:0BA791Ch
0x8A4475: fcompp
0x8A4477: fnstsw  ax
0x8A4479: test    ah, 5
0x8A447C: jnp     short loc_8A44B4
0x8A447E: fld     dword ptr ds:0BA7920h
0x8A4484: mov     ecx, ebx
0x8A4486: fstp    dword ptr [esp+74h+var_5C+4]
0x8A448A: call    sub_8A31B0
0x8A448F: fld     dword ptr [esp+74h+var_5C+4]
0x8A4493: fcompp
0x8A4495: fnstsw  ax
0x8A4497: test    ah, 41h
0x8A449A: jz      short loc_8A44B4
0x8A449C: cmp     byte ptr [esi+0D3h], 3
0x8A44A3: jnz     short loc_8A44C3
0x8A44A5: mov     word ptr [edi+1Ah], 4
0x8A44AB: mov     byte ptr [esi+0D3h], 4
0x8A44B2: jmp     short loc_8A44C3
0x8A44B4: mov     eax, 3
0x8A44B9: mov     [edi+1Ah], ax
0x8A44BD: mov     [esi+0D3h], al
0x8A44C3: mov     edx, [ebx]
0x8A44C5: mov     eax, [edx+7Ch]
0x8A44C8: push    esi
0x8A44C9: mov     ecx, ebx
0x8A44CB: call    eax
0x8A44CD: mov     ecx, [esp+74h+var_C]
0x8A44D1: mov     large fs:0, ecx
0x8A44D8: pop     ecx
0x8A44D9: pop     edi
0x8A44DA: pop     esi
0x8A44DB: pop     ebx
0x8A44DC: mov     ecx, [esp+64h+var_14]
0x8A44E0: xor     ecx, esp
0x8A44E2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A44E7: mov     esp, ebp
0x8A44E9: pop     ebp
0x8A44EA: retn    4
