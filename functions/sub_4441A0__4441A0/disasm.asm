0x4441A0: sub     esp, 118h
0x4441A6: mov     eax, ds:0B30AACh
0x4441AB: xor     eax, esp
0x4441AD: mov     [esp+118h+var_4], eax
0x4441B4: push    edi
0x4441B5: mov     edi, ecx
0x4441B7: mov     ecx, [edi+74h]
0x4441BA: test    ecx, ecx
0x4441BC: jz      loc_444324
0x4441C2: push    ebx
0x4441C3: mov     ebx, [esp+120h+arg_C]
0x4441CA: push    ebp
0x4441CB: mov     ebp, dword ptr [esp+124h+ArgList]
0x4441D2: push    esi
0x4441D3: push    ebx; int
0x4441D4: push    ebp; ArgList
0x4441D5: call    sub_4F1630
0x4441DA: mov     esi, eax
0x4441DC: test    esi, esi
0x4441DE: jnz     short loc_4441FE
0x4441E0: mov     eax, [edi+74h]
0x4441E3: mov     ecx, ds:0B33A98h
0x4441E9: push    1
0x4441EB: push    eax
0x4441EC: push    ebx
0x4441ED: push    ebp
0x4441EE: call    sub_447740
0x4441F3: mov     esi, eax
0x4441F5: push    1
0x4441F7: mov     ecx, esi
0x4441F9: call    sub_4C9F90
0x4441FE: mov     ebp, [esp+128h+arg_4]
0x444205: mov     ebx, [esp+128h+arg_0]
0x44420C: mov     ecx, [edi+8]
0x44420F: push    ebp
0x444210: push    ebx
0x444211: call    sub_4821B0
0x444216: test    al, al
0x444218: jz      short loc_444244
0x44421A: test    esi, esi
0x44421C: jz      loc_444321
0x444222: mov     ecx, esi; this
0x444224: call    TESObjectCELL_IsInterior
0x444229: test    al, al
0x44422B: push    esi; a2
0x44422C: mov     ecx, edi; this
0x44422E: jz      short loc_44423A
0x444230: call    sub_43FD70
0x444235: jmp     loc_444321
0x44423A: call    sub_43FED0
0x44423F: jmp     loc_444321
0x444244: mov     eax, [esi+0Ch]
0x444247: push    eax
0x444248: mov     ecx, esi; this
0x44424A: call    TESObjectCELL_GetYCoordinate
0x44424F: push    eax
0x444250: mov     ecx, esi; this
0x444252: call    TESObjectCELL_GetXCoordinate
0x444257: push    eax
0x444258: push    offset EmptyString
0x44425D: lea     eax, [esp+138h+var_108]
0x444261: push    offset aLoadingCell___; "Loading cell...%s (%i, %i) (%08X)"
0x444266: push    eax
0x444267: call    __sprintf
0x44426C: mov     ecx, [edi+8]
0x44426F: add     esp, 18h
0x444272: push    esi
0x444273: push    ebp
0x444274: push    ebx
0x444275: call    sub_482170
0x44427A: mov     ecx, [edi+0Ch]
0x44427D: push    ebp
0x44427E: push    ebx
0x44427F: push    ecx
0x444280: mov     ecx, [edi+8]
0x444283: call    sub_482390
0x444288: mov     ecx, esi; this
0x44428A: call    sub_4CE3C0
0x44428F: mov     ebx, eax
0x444291: push    1; char
0x444293: mov     ecx, ebx; int
0x444295: call    sub_4C79A0
0x44429A: test    al, al
0x44429C: jnz     short loc_4442A9
0x44429E: push    0; int
0x4442A0: push    0; char
0x4442A2: mov     ecx, ebx; int
0x4442A4: call    sub_4C6730
0x4442A9: lea     edx, [esp+128h+var_110]
0x4442AD: push    edx
0x4442AE: mov     ecx, esi; this
0x4442B0: call    sub_4CE3C0
0x4442B5: mov     ecx, eax
0x4442B7: call    sub_4C46B0
0x4442BC: fld     [esp+128h+var_110]
0x4442C0: mov     ecx, esi
0x4442C2: fstp    [esp+128h+var_118]
0x4442C6: call    TESObjectCELL_GetWaterHeight
0x4442CB: fcomp   [esp+128h+var_118]
0x4442CF: fnstsw  ax
0x4442D1: test    ah, 41h
0x4442D4: jnz     short loc_4442DC
0x4442D6: or      byte ptr [esi+24h], 2
0x4442DA: jmp     short loc_4442E0
0x4442DC: and     byte ptr [esi+24h], 0FDh
0x4442E0: movzx   eax, byte ptr [esi+24h]
0x4442E4: shr     eax, 1
0x4442E6: test    al, 1
0x4442E8: jnz     short loc_444303
0x4442EA: mov     ecx, [esp+128h+arg_0]
0x4442F1: push    ebp
0x4442F2: push    ecx
0x4442F3: mov     ecx, [edi+8]
0x4442F6: call    GetGridEntry
0x4442FB: mov     ecx, [eax+4]
0x4442FE: call    sub_499FF0
0x444303: movzx   edx, byte ptr [edi+53h]
0x444307: push    edx
0x444308: mov     ecx, ebx
0x44430A: call    sub_4C5BA0
0x44430F: mov     ecx, esi
0x444311: call    sub_4AF170
0x444316: test    eax, eax
0x444318: jz      short loc_444321
0x44431A: mov     ecx, eax
0x44431C: call    sub_4E7610
0x444321: pop     esi
0x444322: pop     ebp
0x444323: pop     ebx
0x444324: mov     ecx, [esp+11Ch+var_4]
0x44432B: pop     edi
0x44432C: xor     ecx, esp
0x44432E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x444333: add     esp, 118h
0x444339: retn    10h
