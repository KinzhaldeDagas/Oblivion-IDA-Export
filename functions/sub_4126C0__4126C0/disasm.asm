0x4126C0: sub     esp, 1Ch
0x4126C3: push    ebx
0x4126C4: push    ebp
0x4126C5: push    edi
0x4126C6: xor     edi, edi
0x4126C8: xor     ebp, ebp
0x4126CA: cmp     dword_B03178, edi
0x4126D0: mov     ebx, ecx
0x4126D2: jbe     loc_4127BE
0x4126D8: push    esi
0x4126D9: lea     esp, [esp+0]
0x4126E0: mov     esi, edi
0x4126E2: shr     esi, 5
0x4126E5: mov     eax, esi
0x4126E7: shl     eax, 5
0x4126EA: mov     ecx, edi
0x4126EC: sub     ecx, eax
0x4126EE: mov     edx, 1
0x4126F3: shl     edx, cl
0x4126F5: test    [ebx+esi*4+4], edx
0x4126F9: jnz     loc_4127AB
0x4126FF: lea     eax, [esp+2Ch+var_18]
0x412703: push    eax
0x412704: push    edi
0x412705: call    sub_412250
0x41270A: mov     eax, [esp+34h+arg_4]
0x41270E: fld     dword ptr [eax]
0x412710: add     esp, 8
0x412713: fadd    [esp+2Ch+var_18]
0x412717: fstp    [esp+2Ch+var_18]
0x41271B: fld     dword ptr [eax+4]
0x41271E: fadd    [esp+2Ch+var_14]
0x412722: fstp    [esp+2Ch+var_14]
0x412726: fld     dword ptr [eax+8]
0x412729: mov     eax, [esp+2Ch+arg_0]
0x41272D: fadd    [esp+2Ch+var_10]
0x412731: fstp    [esp+2Ch+var_10]
0x412735: fld     [esp+2Ch+var_18]
0x412739: fsub    dword ptr [eax]
0x41273B: fstp    [esp+2Ch+var_C]
0x41273F: fld     [esp+2Ch+var_14]
0x412743: fsub    dword ptr [eax+4]
0x412746: fstp    [esp+2Ch+var_8]
0x41274A: fld     [esp+2Ch+var_10]
0x41274E: fsub    dword ptr [eax+8]
0x412751: fstp    [esp+2Ch+var_4]
0x412755: fld     [esp+2Ch+var_8]
0x412759: fld     [esp+2Ch+var_C]
0x41275D: fld     [esp+2Ch+var_4]
0x412761: fld     st(1)
0x412763: fmulp   st(2), st
0x412765: fld     st(2)
0x412767: fmulp   st(3), st
0x412769: fxch    st(1)
0x41276B: faddp   st(2), st
0x41276D: fmul    st, st
0x41276F: faddp   st(1), st
0x412771: fstp    [esp+2Ch+var_1C]
0x412775: fld     [esp+2Ch+var_1C]
0x412779: call    __CIsqrt
0x41277E: fstp    [esp+2Ch+var_1C]
0x412782: fld     [esp+2Ch+var_1C]
0x412786: fld     fSeenDataUpdateRadius
0x41278C: fcompp
0x41278E: fnstsw  ax
0x412790: test    ah, 41h
0x412793: jnz     short loc_4127AE
0x412795: mov     ecx, esi
0x412797: shl     ecx, 5
0x41279A: mov     edx, ecx
0x41279C: mov     ecx, edi
0x41279E: sub     ecx, edx
0x4127A0: mov     eax, 1
0x4127A5: shl     eax, cl
0x4127A7: or      [ebx+esi*4+4], eax
0x4127AB: add     ebp, 1
0x4127AE: add     edi, 1
0x4127B1: cmp     edi, dword_B03178
0x4127B7: jb      loc_4126E0
0x4127BD: pop     esi
0x4127BE: xor     eax, eax
0x4127C0: cmp     ebp, dword_B0317C
0x4127C6: pop     edi
0x4127C7: pop     ebp
0x4127C8: setnl   al
0x4127CB: pop     ebx
0x4127CC: add     esp, 1Ch
0x4127CF: retn    8
