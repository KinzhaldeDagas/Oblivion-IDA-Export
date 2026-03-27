0x4F74B0: push    ebp
0x4F74B1: mov     ebp, esp
0x4F74B3: and     esp, 0FFFFFFC0h
0x4F74B6: fldz
0x4F74B8: sub     esp, 34h
0x4F74BB: push    ebx
0x4F74BC: push    esi
0x4F74BD: mov     esi, [ebp+arg_0]
0x4F74C0: test    esi, esi
0x4F74C2: push    edi
0x4F74C3: mov     edi, [ebp+arg_C]
0x4F74C6: fstp    qword ptr [edi]
0x4F74C8: jz      loc_4F75BA
0x4F74CE: mov     eax, [esi]
0x4F74D0: mov     edx, [eax+188h]
0x4F74D6: mov     ecx, esi
0x4F74D8: call    edx
0x4F74DA: test    al, al
0x4F74DC: jz      loc_4F75BA
0x4F74E2: cmp     [ebp+arg_4], 0
0x4F74E6: jz      loc_4F75BA
0x4F74EC: mov     eax, [esi]
0x4F74EE: mov     edx, [eax+174h]
0x4F74F4: mov     ecx, esi
0x4F74F6: call    edx
0x4F74F8: mov     ecx, [ebp+arg_4]
0x4F74FB: mov     ebx, eax
0x4F74FD: mov     eax, [ecx]
0x4F74FF: mov     edx, [eax+174h]
0x4F7505: call    edx
0x4F7507: fld     dword ptr [eax+4]
0x4F750A: fsub    dword ptr [ebx+4]
0x4F750D: fstp    [esp+40h+var_1C]
0x4F7511: fld     dword ptr [eax+8]
0x4F7514: fsub    dword ptr [ebx+8]
0x4F7517: fstp    dword ptr [esp+40h+var_18]
0x4F751B: fld     dword ptr [eax]
0x4F751D: lea     eax, [esp+40h+var_C]
0x4F7521: fsub    dword ptr [ebx]
0x4F7523: push    eax
0x4F7524: fstp    [esp+44h+var_C]
0x4F7528: fld     [esp+44h+var_1C]
0x4F752C: fstp    [esp+44h+var_8]
0x4F7530: fld     dword ptr [esp+44h+var_18]
0x4F7534: fstp    [esp+44h+var_4]
0x4F7538: call    sub_683CB0
0x4F753D: mov     edx, [esi]
0x4F753F: fstp    dword ptr [esp+44h+var_18]
0x4F7543: fld     dword ptr [esp+44h+var_18]
0x4F7547: mov     eax, [edx+1E0h]
0x4F754D: add     esp, 4
0x4F7550: fstp    [esp+40h+var_18]
0x4F7554: mov     ecx, esi
0x4F7556: call    eax
0x4F7558: fsubr   [esp+40h+var_18]
0x4F755C: fst     qword ptr [edi]
0x4F755E: fld     qword ptr ds:0A491E0h
0x4F7564: fcom    st(1)
0x4F7566: fnstsw  ax
0x4F7568: fstp    st(1)
0x4F756A: test    ah, 41h
0x4F756D: fld     qword ptr ds:0A3D5B0h
0x4F7573: jz      short loc_4F757B
0x4F7575: fstp    st(1)
0x4F7577: jmp     short loc_4F758E
0x4F7579: fxch    st(1)
0x4F757B: fld     qword ptr [edi]
0x4F757D: fadd    st, st(1)
0x4F757F: fstp    qword ptr [edi]
0x4F7581: fxch    st(1)
0x4F7583: fcom    qword ptr [edi]
0x4F7585: fnstsw  ax
0x4F7587: test    ah, 41h
0x4F758A: jz      short loc_4F7579
0x4F758C: fstp    st
0x4F758E: fld     qword ptr ds:0A3D5B8h
0x4F7594: fcom    qword ptr [edi]
0x4F7596: fnstsw  ax
0x4F7598: test    ah, 5
0x4F759B: jp      short loc_4F75AC
0x4F759D: fld     qword ptr [edi]
0x4F759F: fsub    st, st(2)
0x4F75A1: fstp    qword ptr [edi]
0x4F75A3: fcom    qword ptr [edi]
0x4F75A5: fnstsw  ax
0x4F75A7: test    ah, 5
0x4F75AA: jnp     short loc_4F759D
0x4F75AC: fstp    st(1)
0x4F75AE: fstp    st
0x4F75B0: fld     qword ptr [edi]
0x4F75B2: fmul    qword ptr ds:0A30DC8h
0x4F75B8: fstp    qword ptr [edi]
0x4F75BA: cmp     byte ptr ds:0B361ACh, 0
0x4F75C1: jz      short loc_4F75D8
0x4F75C3: fld     qword ptr [edi]
0x4F75C5: sub     esp, 8
0x4F75C8: fstp    [esp+48h+var_48]
0x4F75CB: push    offset aHeadingAngle0_; "Heading Angle: %0.2f"
0x4F75D0: call    Interface_ConsolePrint
0x4F75D5: add     esp, 0Ch
0x4F75D8: pop     edi
0x4F75D9: pop     esi
0x4F75DA: mov     al, 1
0x4F75DC: pop     ebx
0x4F75DD: mov     esp, ebp
0x4F75DF: pop     ebp
0x4F75E0: retn
