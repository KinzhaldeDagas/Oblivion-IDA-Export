0x99867E: push    ebp
0x99867F: mov     ebp, esp
0x998681: push    ecx
0x998682: push    ecx
0x998683: push    ebx
0x998684: push    esi
0x998685: mov     esi, 0FFFFh
0x99868A: push    esi
0x99868B: push    dword_B31D30
0x998691: call    __ctrlfp
0x998696: fld     [ebp+arg_0]
0x998699: pop     ecx
0x99869A: pop     ecx
0x99869B: mov     ebx, eax
0x99869D: mov     eax, dword ptr [ebp+arg_0+6]
0x9986A0: push    ecx
0x9986A1: and     ax, 7FF0h
0x9986A5: cmp     ax, 7FF0h
0x9986A9: push    ecx
0x9986AA: fstp    [esp+18h+var_18]; int
0x9986AD: jnz     short loc_998704
0x9986AF: call    __sptype
0x9986B4: test    eax, eax
0x9986B6: pop     ecx
0x9986B7: pop     ecx
0x9986B8: jle     short loc_9986E7
0x9986BA: cmp     eax, 2
0x9986BD: jle     short loc_9986D9
0x9986BF: cmp     eax, 3
0x9986C2: jnz     short loc_9986E7
0x9986C4: fld     [ebp+arg_0]
0x9986C7: push    ebx; int
0x9986C8: push    ecx
0x9986C9: push    ecx
0x9986CA: fstp    qword ptr [esp]; double
0x9986CD: push    0Ch; int
0x9986CF: call    __handle_qnan1
0x9986D4: add     esp, 10h
0x9986D7: jmp     short loc_99874B
0x9986D9: push    esi
0x9986DA: push    ebx
0x9986DB: call    __ctrlfp
0x9986E0: fld     [ebp+arg_0]
0x9986E3: pop     ecx
0x9986E4: pop     ecx
0x9986E5: jmp     short loc_99874B
0x9986E7: fld     [ebp+arg_0]
0x9986EA: push    ebx
0x9986EB: fadd    ds:dbl_A2F928
0x9986F1: sub     esp, 10h
0x9986F4: fstp    qword ptr [esp+8]
0x9986F8: fld     [ebp+arg_0]
0x9986FB: fstp    [esp+24h+var_24]
0x9986FE: push    0Ch
0x998700: push    8
0x998702: jmp     short loc_998743
0x998704: call    __frnd
0x998709: fstp    [ebp+var_8]
0x99870C: fld     [ebp+arg_0]
0x99870F: pop     ecx
0x998710: fcomp   [ebp+var_8]
0x998713: pop     ecx
0x998714: fnstsw  ax
0x998716: test    ah, 44h
0x998719: jp      short loc_998729
0x99871B: push    esi
0x99871C: push    ebx
0x99871D: call    __ctrlfp
0x998722: fld     [ebp+var_8]
0x998725: pop     ecx
0x998726: pop     ecx
0x998727: jmp     short loc_99874B
0x998729: test    bl, 20h
0x99872C: jnz     short loc_99871B
0x99872E: fld     [ebp+var_8]
0x998731: push    ebx; int
0x998732: sub     esp, 10h
0x998735: fstp    qword ptr [esp+8]; int
0x998739: fld     [ebp+arg_0]
0x99873C: fstp    [esp+24h+var_24]; int
0x99873F: push    0Ch; int
0x998741: push    10h; dwExceptionCode
0x998743: call    __except1
0x998748: add     esp, 1Ch
0x99874B: pop     esi
0x99874C: pop     ebx
0x99874D: leave
0x99874E: retn
