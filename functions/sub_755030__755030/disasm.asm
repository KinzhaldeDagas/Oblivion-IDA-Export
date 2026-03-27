0x755030: sub     esp, 0ECh
0x755036: push    ebx
0x755037: push    esi
0x755038: mov     ebx, ecx
0x75503A: mov     esi, [ebx+18h]
0x75503D: push    edi
0x75503E: add     esi, 64h ; 'd'
0x755041: mov     ecx, 0Dh
0x755046: lea     edi, [esp+0F8h+var_9C]
0x75504A: rep movsd
0x75504C: mov     esi, [ebx+10h]
0x75504F: add     esi, 64h ; 'd'
0x755052: mov     ecx, 0Dh
0x755057: lea     edi, [esp+0F8h+var_68]
0x75505E: lea     eax, [esp+0F8h+var_34]
0x755065: rep movsd
0x755067: push    eax
0x755068: lea     ecx, [esp+0FCh+var_68]
0x75506F: call    sub_718A80
0x755074: lea     ecx, [esp+0F8h+var_9C]
0x755078: push    ecx
0x755079: lea     edx, [esp+0FCh+var_D0]
0x75507D: push    edx
0x75507E: lea     ecx, [esp+100h+var_34]
0x755085: call    sub_53D7A0
0x75508A: mov     edx, [esp+0F8h+arg_4]
0x755091: fld     dword ptr [ebx+1Ch]
0x755094: mov     edi, [edx+1Ch]
0x755097: fstp    [esp+0F8h+var_EC]
0x75509B: xor     esi, esi
0x75509D: cmp     [edx+48h], si
0x7550A1: jbe     loc_75516A
0x7550A7: fld     [esp+0F8h+arg_0]
0x7550AE: fld     [esp+0F8h+var_A4]
0x7550B2: fld     [esp+0F8h+var_A8]
0x7550B6: fld     [esp+0F8h+var_AC]
0x7550BA: fld     [esp+0F8h+var_EC]
0x7550BE: movzx   eax, si
0x7550C1: fld     st(4)
0x7550C3: lea     ecx, ds:0[eax*8]
0x7550CA: sub     ecx, eax
0x7550CC: mov     eax, [edx+5Ch]
0x7550CF: lea     ecx, [eax+ecx*4]
0x7550D2: fsub    dword ptr [ecx+14h]
0x7550D5: fstp    [esp+0F8h+var_EC]
0x7550D9: fldz
0x7550DB: fld     [esp+0F8h+var_EC]
0x7550DF: fucom   st(1)
0x7550E1: fnstsw  ax
0x7550E3: fstp    st(1)
0x7550E5: test    ah, 44h
0x7550E8: jnp     short loc_755151
0x7550EA: mov     eax, edi
0x7550EC: fld     dword ptr [eax]
0x7550EE: add     edi, 0Ch
0x7550F1: fsub    st, st(3)
0x7550F3: fstp    [esp+0F8h+var_E8]
0x7550F7: fld     dword ptr [eax+4]
0x7550FA: fsub    st, st(4)
0x7550FC: fstp    [esp+0F8h+var_E4]
0x755100: fld     dword ptr [eax+8]
0x755103: fsub    st, st(5)
0x755105: fstp    [esp+0F8h+var_E0]
0x755109: fmul    st, st(1)
0x75510B: fstp    [esp+0F8h+var_EC]
0x75510F: fld     [esp+0F8h+var_E8]
0x755113: fld     [esp+0F8h+var_EC]
0x755117: fld     st
0x755119: fmulp   st(2), st
0x75511B: fxch    st(1)
0x75511D: fstp    [esp+0F8h+var_DC]
0x755121: fld     [esp+0F8h+var_E4]
0x755125: fmul    st, st(1)
0x755127: fstp    [esp+0F8h+var_D8]
0x75512B: fmul    [esp+0F8h+var_E0]
0x75512F: fstp    [esp+0F8h+var_D4]
0x755133: fld     dword ptr [ecx]
0x755135: fadd    [esp+0F8h+var_DC]
0x755139: fstp    dword ptr [ecx]
0x75513B: fld     dword ptr [ecx+4]
0x75513E: fadd    [esp+0F8h+var_D8]
0x755142: fstp    dword ptr [ecx+4]
0x755145: fld     [esp+0F8h+var_D4]
0x755149: fadd    dword ptr [ecx+8]
0x75514C: fstp    dword ptr [ecx+8]
0x75514F: jmp     short loc_755153
0x755151: fstp    st
0x755153: add     esi, 1
0x755156: cmp     si, [edx+48h]
0x75515A: jb      loc_7550BE
0x755160: fstp    st(3)
0x755162: fstp    st(1)
0x755164: fstp    st
0x755166: fstp    st
0x755168: fstp    st
0x75516A: pop     edi
0x75516B: pop     esi
0x75516C: pop     ebx
0x75516D: add     esp, 0ECh
0x755173: retn    8
