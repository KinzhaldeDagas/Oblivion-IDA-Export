0x8B7FA0: push    ebp
0x8B7FA1: mov     ebp, esp
0x8B7FA3: and     esp, 0FFFFFFF0h
0x8B7FA6: sub     esp, 34h
0x8B7FA9: mov     eax, ds:0B30AACh
0x8B7FAE: xor     eax, esp
0x8B7FB0: mov     [esp+34h+var_4], eax
0x8B7FB4: push    ebx
0x8B7FB5: mov     ebx, [ebp+arg_0]
0x8B7FB8: push    esi
0x8B7FB9: push    edi
0x8B7FBA: mov     edi, ecx
0x8B7FBC: test    edi, edi
0x8B7FBE: jz      short loc_8B7FCC
0x8B7FC0: mov     eax, [edi+8]
0x8B7FC3: test    eax, eax
0x8B7FC5: jz      short loc_8B7FCC
0x8B7FC7: add     eax, 10h
0x8B7FCA: jmp     short loc_8B7FD1
0x8B7FCC: mov     eax, offset stru_BA7A40
0x8B7FD1: movaps  xmm0, xmmword ptr [eax]
0x8B7FD4: lea     eax, [esp+40h+var_20]
0x8B7FD8: push    eax
0x8B7FD9: lea     ecx, [esp+44h+var_2C]
0x8B7FDD: push    ecx
0x8B7FDE: movaps  [esp+48h+var_20], xmm0
0x8B7FE3: call    sub_43F3E0
0x8B7FE8: fld     [esp+48h+var_2C]
0x8B7FEC: fld     qword ptr ds:0A3D0C0h
0x8B7FF2: lea     edx, [esp+48h+var_2C]
0x8B7FF6: fmul    st(1), st
0x8B7FF8: push    0
0x8B7FFA: fxch    st(1)
0x8B7FFC: push    edx
0x8B7FFD: fstp    [esp+50h+var_2C]
0x8B8001: fld     [esp+50h+var_28]
0x8B8005: fmul    st, st(1)
0x8B8007: fstp    [esp+50h+var_28]
0x8B800B: fmul    [esp+50h+var_24]
0x8B800F: fstp    [esp+50h+var_24]
0x8B8013: call    sub_6FBC40
0x8B8018: mov     esi, eax
0x8B801A: add     esp, 10h
0x8B801D: test    esi, esi
0x8B801F: jz      short loc_8B8049
0x8B8021: mov     eax, [edi]
0x8B8023: mov     edx, [eax+98h]
0x8B8029: push    esi
0x8B802A: mov     ecx, edi
0x8B802C: call    edx
0x8B802E: push    offset aBhkboxshape; "bhkBoxShape"
0x8B8033: mov     ecx, esi
0x8B8035: call    NiObjectNET_SetName
0x8B803A: mov     eax, [ebx]
0x8B803C: mov     edx, [eax+84h]
0x8B8042: push    0
0x8B8044: push    esi
0x8B8045: mov     ecx, ebx
0x8B8047: call    edx
0x8B8049: mov     ecx, [esp+40h+var_4]
0x8B804D: pop     edi
0x8B804E: pop     esi
0x8B804F: pop     ebx
0x8B8050: xor     ecx, esp
0x8B8052: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B8057: mov     esp, ebp
0x8B8059: pop     ebp
0x8B805A: retn    4
