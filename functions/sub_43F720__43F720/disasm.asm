0x43F720: sub     esp, 8
0x43F723: push    ebx
0x43F724: push    ebp
0x43F725: mov     ebp, [ecx+24h]
0x43F728: mov     ecx, [ecx+20h]
0x43F72B: push    esi
0x43F72C: mov     esi, ds:0B06A2Ch
0x43F732: shr     esi, 1
0x43F734: mov     [esp+14h+var_4], ecx
0x43F738: sub     ecx, esi
0x43F73A: shl     ecx, 0Ch
0x43F73D: mov     [esp+14h+var_8], ecx
0x43F741: fild    [esp+14h+var_8]
0x43F745: push    edi
0x43F746: fld     [esp+18h+arg_4]
0x43F74A: mov     edi, ebp
0x43F74C: fld     st
0x43F74E: sub     edi, esi
0x43F750: faddp   st(2), st
0x43F752: fxch    st(1)
0x43F754: call    Double_To_SInt32
0x43F759: mov     ebx, [esp+18h+arg_0]
0x43F75D: shl     edi, 0Ch
0x43F760: mov     [esp+18h+arg_4], edi
0x43F764: fild    [esp+18h+arg_4]
0x43F768: mov     [ebx], eax
0x43F76A: fadd    st, st(1)
0x43F76C: call    Double_To_SInt32
0x43F771: mov     [ebx+0Ch], eax
0x43F774: mov     eax, [esp+18h+var_4]
0x43F778: lea     ecx, [eax+esi+1]
0x43F77C: shl     ecx, 0Ch
0x43F77F: mov     [esp+18h+arg_4], ecx
0x43F783: fild    [esp+18h+arg_4]
0x43F787: fsub    st, st(1)
0x43F789: call    Double_To_SInt32
0x43F78E: lea     edx, [esi+ebp+1]
0x43F792: shl     edx, 0Ch
0x43F795: mov     [esp+18h+arg_4], edx
0x43F799: fisubr  [esp+18h+arg_4]
0x43F79D: mov     [ebx+8], eax
0x43F7A0: call    Double_To_SInt32
0x43F7A5: pop     edi
0x43F7A6: pop     esi
0x43F7A7: pop     ebp
0x43F7A8: mov     [ebx+4], eax
0x43F7AB: pop     ebx
0x43F7AC: add     esp, 8
0x43F7AF: retn    8
