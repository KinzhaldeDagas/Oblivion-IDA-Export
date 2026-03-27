0x70C340: sub     esp, 7Ch
0x70C343: mov     eax, [esp+7Ch+arg_0]
0x70C34A: push    ebx
0x70C34B: mov     ebx, ecx
0x70C34D: fld     dword ptr [ebx+88h]
0x70C353: fsub    dword ptr [eax]
0x70C355: fstp    [esp+80h+var_78]
0x70C359: fld     dword ptr [ebx+8Ch]
0x70C35F: fsub    dword ptr [eax+4]
0x70C362: fstp    [esp+80h+var_74]
0x70C366: fld     dword ptr [ebx+90h]
0x70C36C: fsub    dword ptr [eax+8]
0x70C36F: fstp    [esp+80h+var_70]
0x70C373: fld     [esp+80h+var_78]
0x70C377: fld     [esp+80h+var_74]
0x70C37B: fld     [esp+80h+var_70]
0x70C37F: fld     st(1)
0x70C381: fmulp   st(2), st
0x70C383: fld     st(2)
0x70C385: fmulp   st(3), st
0x70C387: fxch    st(1)
0x70C389: faddp   st(2), st
0x70C38B: fmul    st, st
0x70C38D: faddp   st(1), st
0x70C38F: fstp    [esp+80h+var_7C]
0x70C393: fld     [esp+80h+var_7C]
0x70C397: fcomp   qword ptr ds:0A7E548h
0x70C39D: fnstsw  ax
0x70C39F: test    ah, 5
0x70C3A2: jp      short loc_70C3AD
0x70C3A4: xor     al, al
0x70C3A6: pop     ebx
0x70C3A7: add     esp, 7Ch
0x70C3AA: retn    8
0x70C3AD: lea     ecx, [esp+80h+var_78]
0x70C3B1: call    sub_43F350
0x70C3B6: fstp    st
0x70C3B8: lea     eax, [esp+80h+var_78]
0x70C3BC: push    eax
0x70C3BD: lea     ecx, [esp+84h+var_6C]
0x70C3C1: push    ecx
0x70C3C2: mov     ecx, [esp+88h+arg_4]
0x70C3C9: call    sub_4BF9E0
0x70C3CE: fld     [esp+80h+var_68]
0x70C3D2: fld     [esp+80h+var_6C]
0x70C3D6: fld     [esp+80h+var_64]
0x70C3DA: fld     st(1)
0x70C3DC: fmulp   st(2), st
0x70C3DE: fld     st(2)
0x70C3E0: fmulp   st(3), st
0x70C3E2: fxch    st(1)
0x70C3E4: faddp   st(2), st
0x70C3E6: fmul    st, st
0x70C3E8: faddp   st(1), st
0x70C3EA: fstp    [esp+80h+var_7C]
0x70C3EE: fld     [esp+80h+var_7C]
0x70C3F2: fcomp   dword ptr ds:0A3D65Ch
0x70C3F8: fnstsw  ax
0x70C3FA: test    ah, 5
0x70C3FD: jnp     short loc_70C3A4
0x70C3FF: lea     edx, [esp+80h+var_6C]
0x70C403: push    edx
0x70C404: lea     eax, [esp+84h+var_60]
0x70C408: push    eax
0x70C409: lea     ecx, [esp+88h+var_78]
0x70C40D: call    sub_4BF9E0
0x70C412: fld     [esp+80h+var_5C]
0x70C416: fld     [esp+80h+var_60]
0x70C41A: fld     [esp+80h+var_58]
0x70C41E: fld     st(1)
0x70C420: fmulp   st(2), st
0x70C422: fld     st(2)
0x70C424: fmulp   st(3), st
0x70C426: fxch    st(1)
0x70C428: faddp   st(2), st
0x70C42A: fmul    st, st
0x70C42C: faddp   st(1), st
0x70C42E: fstp    [esp+80h+var_7C]
0x70C432: fld     [esp+80h+var_7C]
0x70C436: fcomp   dword ptr ds:0A3D65Ch
0x70C43C: fnstsw  ax
0x70C43E: test    ah, 5
0x70C441: jnp     loc_70C3A4
0x70C447: fld     [esp+80h+var_78]
0x70C44B: push    esi
0x70C44C: fchs
0x70C44E: push    edi
0x70C44F: fstp    [esp+88h+var_54]
0x70C453: lea     ecx, [esp+88h+var_6C]
0x70C457: fld     [esp+88h+var_74]
0x70C45B: push    ecx
0x70C45C: fchs
0x70C45E: lea     edx, [esp+8Ch+var_60]
0x70C462: fstp    [esp+8Ch+var_50]
0x70C466: push    edx
0x70C467: fld     [esp+90h+var_70]
0x70C46B: lea     eax, [esp+90h+var_54]
0x70C46F: fchs
0x70C471: push    eax
0x70C472: lea     ecx, [esp+94h+var_48]
0x70C476: fstp    [esp+94h+var_4C]
0x70C47A: call    sub_70FCC0
0x70C47F: mov     eax, [ebx+1Ch]
0x70C482: test    eax, eax
0x70C484: jz      short loc_70C4A5
0x70C486: lea     ecx, [esp+88h+var_48]
0x70C48A: push    ecx
0x70C48B: lea     edx, [esp+8Ch+var_24]
0x70C48F: push    edx
0x70C490: lea     ecx, [eax+64h]
0x70C493: call    sub_710490
0x70C498: mov     ecx, 9
0x70C49D: mov     esi, eax
0x70C49F: lea     edi, [esp+88h+var_48]
0x70C4A3: rep movsd
0x70C4A5: mov     eax, [ebx]
0x70C4A7: mov     edx, [eax+74h]
0x70C4AA: lea     edi, [ebx+30h]
0x70C4AD: mov     ecx, 9
0x70C4B2: lea     esi, [esp+88h+var_48]
0x70C4B6: rep movsd
0x70C4B8: mov     ecx, ebx
0x70C4BA: call    edx
0x70C4BC: mov     eax, [ebx]
0x70C4BE: mov     edx, [eax+78h]
0x70C4C1: mov     ecx, ebx
0x70C4C3: call    edx
0x70C4C5: pop     edi
0x70C4C6: pop     esi
0x70C4C7: mov     al, 1
0x70C4C9: pop     ebx
0x70C4CA: add     esp, 7Ch
0x70C4CD: retn    8
